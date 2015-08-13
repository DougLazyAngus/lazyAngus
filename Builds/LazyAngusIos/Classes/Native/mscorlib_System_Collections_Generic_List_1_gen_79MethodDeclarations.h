#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int64>
struct List_1_t6647;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int64>
struct IEnumerable_1_t6344;
// System.Int64[]
struct Int64U5BU5D_t4872;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6345;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9072;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int64>
struct ReadOnlyCollection_1_t6649;
// System.Predicate`1<System.Int64>
struct Predicate_1_t6651;
// System.Collections.Generic.IComparer`1<System.Int64>
struct IComparer_1_t5367;
// System.Comparison`1<System.Int64>
struct Comparison_1_t6655;
// System.Collections.Generic.List`1/Enumerator<System.Int64>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_62.h"

// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor()
extern "C" void List_1__ctor_m39191_gshared (List_1_t6647 * __this, const MethodInfo* method);
#define List_1__ctor_m39191(__this, method) (( void (*) (List_1_t6647 *, const MethodInfo*))List_1__ctor_m39191_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m39192_gshared (List_1_t6647 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m39192(__this, ___collection, method) (( void (*) (List_1_t6647 *, Object_t*, const MethodInfo*))List_1__ctor_m39192_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(System.Int32)
extern "C" void List_1__ctor_m39193_gshared (List_1_t6647 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m39193(__this, ___capacity, method) (( void (*) (List_1_t6647 *, int32_t, const MethodInfo*))List_1__ctor_m39193_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m39194_gshared (List_1_t6647 * __this, Int64U5BU5D_t4872* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m39194(__this, ___data, ___size, method) (( void (*) (List_1_t6647 *, Int64U5BU5D_t4872*, int32_t, const MethodInfo*))List_1__ctor_m39194_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.cctor()
extern "C" void List_1__cctor_m39195_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m39195(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m39195_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39196_gshared (List_1_t6647 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39196(__this, method) (( Object_t* (*) (List_1_t6647 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39196_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m39197_gshared (List_1_t6647 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m39197(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6647 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m39197_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m39198_gshared (List_1_t6647 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39198(__this, method) (( Object_t * (*) (List_1_t6647 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m39198_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m39199_gshared (List_1_t6647 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m39199(__this, ___item, method) (( int32_t (*) (List_1_t6647 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m39199_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m39200_gshared (List_1_t6647 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m39200(__this, ___item, method) (( bool (*) (List_1_t6647 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m39200_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m39201_gshared (List_1_t6647 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m39201(__this, ___item, method) (( int32_t (*) (List_1_t6647 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m39201_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m39202_gshared (List_1_t6647 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m39202(__this, ___index, ___item, method) (( void (*) (List_1_t6647 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m39202_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m39203_gshared (List_1_t6647 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m39203(__this, ___item, method) (( void (*) (List_1_t6647 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m39203_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39204_gshared (List_1_t6647 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39204(__this, method) (( bool (*) (List_1_t6647 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39204_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m39205_gshared (List_1_t6647 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39205(__this, method) (( bool (*) (List_1_t6647 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m39205_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m39206_gshared (List_1_t6647 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m39206(__this, method) (( Object_t * (*) (List_1_t6647 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m39206_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m39207_gshared (List_1_t6647 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m39207(__this, method) (( bool (*) (List_1_t6647 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m39207_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m39208_gshared (List_1_t6647 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m39208(__this, method) (( bool (*) (List_1_t6647 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m39208_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m39209_gshared (List_1_t6647 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m39209(__this, ___index, method) (( Object_t * (*) (List_1_t6647 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m39209_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m39210_gshared (List_1_t6647 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m39210(__this, ___index, ___value, method) (( void (*) (List_1_t6647 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m39210_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Add(T)
extern "C" void List_1_Add_m39211_gshared (List_1_t6647 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Add_m39211(__this, ___item, method) (( void (*) (List_1_t6647 *, int64_t, const MethodInfo*))List_1_Add_m39211_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m39212_gshared (List_1_t6647 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m39212(__this, ___newCount, method) (( void (*) (List_1_t6647 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m39212_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m39213_gshared (List_1_t6647 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m39213(__this, ___idx, ___count, method) (( void (*) (List_1_t6647 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m39213_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m39214_gshared (List_1_t6647 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m39214(__this, ___collection, method) (( void (*) (List_1_t6647 *, Object_t*, const MethodInfo*))List_1_AddCollection_m39214_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m39215_gshared (List_1_t6647 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m39215(__this, ___enumerable, method) (( void (*) (List_1_t6647 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m39215_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m39216_gshared (List_1_t6647 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m39216(__this, ___collection, method) (( void (*) (List_1_t6647 *, Object_t*, const MethodInfo*))List_1_AddRange_m39216_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int64>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6649 * List_1_AsReadOnly_m39217_gshared (List_1_t6647 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m39217(__this, method) (( ReadOnlyCollection_1_t6649 * (*) (List_1_t6647 *, const MethodInfo*))List_1_AsReadOnly_m39217_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Clear()
extern "C" void List_1_Clear_m39218_gshared (List_1_t6647 * __this, const MethodInfo* method);
#define List_1_Clear_m39218(__this, method) (( void (*) (List_1_t6647 *, const MethodInfo*))List_1_Clear_m39218_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Contains(T)
extern "C" bool List_1_Contains_m39219_gshared (List_1_t6647 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Contains_m39219(__this, ___item, method) (( bool (*) (List_1_t6647 *, int64_t, const MethodInfo*))List_1_Contains_m39219_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m39220_gshared (List_1_t6647 * __this, Int64U5BU5D_t4872* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m39220(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6647 *, Int64U5BU5D_t4872*, int32_t, const MethodInfo*))List_1_CopyTo_m39220_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int64>::Find(System.Predicate`1<T>)
extern "C" int64_t List_1_Find_m39221_gshared (List_1_t6647 * __this, Predicate_1_t6651 * ___match, const MethodInfo* method);
#define List_1_Find_m39221(__this, ___match, method) (( int64_t (*) (List_1_t6647 *, Predicate_1_t6651 *, const MethodInfo*))List_1_Find_m39221_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m39222_gshared (Object_t * __this /* static, unused */, Predicate_1_t6651 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m39222(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6651 *, const MethodInfo*))List_1_CheckMatch_m39222_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m39223_gshared (List_1_t6647 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6651 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m39223(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6647 *, int32_t, int32_t, Predicate_1_t6651 *, const MethodInfo*))List_1_GetIndex_m39223_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int64>::GetEnumerator()
extern "C" Enumerator_t6648  List_1_GetEnumerator_m39224_gshared (List_1_t6647 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m39224(__this, method) (( Enumerator_t6648  (*) (List_1_t6647 *, const MethodInfo*))List_1_GetEnumerator_m39224_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int64>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6647 * List_1_GetRange_m39225_gshared (List_1_t6647 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m39225(__this, ___index, ___count, method) (( List_1_t6647 * (*) (List_1_t6647 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m39225_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m39226_gshared (List_1_t6647 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m39226(__this, ___item, method) (( int32_t (*) (List_1_t6647 *, int64_t, const MethodInfo*))List_1_IndexOf_m39226_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m39227_gshared (List_1_t6647 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m39227(__this, ___start, ___delta, method) (( void (*) (List_1_t6647 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m39227_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m39228_gshared (List_1_t6647 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m39228(__this, ___index, method) (( void (*) (List_1_t6647 *, int32_t, const MethodInfo*))List_1_CheckIndex_m39228_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m39229_gshared (List_1_t6647 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define List_1_Insert_m39229(__this, ___index, ___item, method) (( void (*) (List_1_t6647 *, int32_t, int64_t, const MethodInfo*))List_1_Insert_m39229_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m39230_gshared (List_1_t6647 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m39230(__this, ___collection, method) (( void (*) (List_1_t6647 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m39230_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m39231_gshared (List_1_t6647 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m39231(__this, ___index, ___collection, method) (( void (*) (List_1_t6647 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m39231_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m39232_gshared (List_1_t6647 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m39232(__this, ___index, ___collection, method) (( void (*) (List_1_t6647 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m39232_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m39233_gshared (List_1_t6647 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m39233(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6647 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m39233_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Remove(T)
extern "C" bool List_1_Remove_m39234_gshared (List_1_t6647 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Remove_m39234(__this, ___item, method) (( bool (*) (List_1_t6647 *, int64_t, const MethodInfo*))List_1_Remove_m39234_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m39235_gshared (List_1_t6647 * __this, Predicate_1_t6651 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m39235(__this, ___match, method) (( int32_t (*) (List_1_t6647 *, Predicate_1_t6651 *, const MethodInfo*))List_1_RemoveAll_m39235_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m39236_gshared (List_1_t6647 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m39236(__this, ___index, method) (( void (*) (List_1_t6647 *, int32_t, const MethodInfo*))List_1_RemoveAt_m39236_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m39237_gshared (List_1_t6647 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m39237(__this, ___index, ___count, method) (( void (*) (List_1_t6647 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m39237_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Reverse()
extern "C" void List_1_Reverse_m39238_gshared (List_1_t6647 * __this, const MethodInfo* method);
#define List_1_Reverse_m39238(__this, method) (( void (*) (List_1_t6647 *, const MethodInfo*))List_1_Reverse_m39238_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort()
extern "C" void List_1_Sort_m39239_gshared (List_1_t6647 * __this, const MethodInfo* method);
#define List_1_Sort_m39239(__this, method) (( void (*) (List_1_t6647 *, const MethodInfo*))List_1_Sort_m39239_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m39240_gshared (List_1_t6647 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m39240(__this, ___comparer, method) (( void (*) (List_1_t6647 *, Object_t*, const MethodInfo*))List_1_Sort_m39240_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m39241_gshared (List_1_t6647 * __this, Comparison_1_t6655 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m39241(__this, ___comparison, method) (( void (*) (List_1_t6647 *, Comparison_1_t6655 *, const MethodInfo*))List_1_Sort_m39241_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int64>::ToArray()
extern "C" Int64U5BU5D_t4872* List_1_ToArray_m39242_gshared (List_1_t6647 * __this, const MethodInfo* method);
#define List_1_ToArray_m39242(__this, method) (( Int64U5BU5D_t4872* (*) (List_1_t6647 *, const MethodInfo*))List_1_ToArray_m39242_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::TrimExcess()
extern "C" void List_1_TrimExcess_m39243_gshared (List_1_t6647 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m39243(__this, method) (( void (*) (List_1_t6647 *, const MethodInfo*))List_1_TrimExcess_m39243_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m39244_gshared (List_1_t6647 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m39244(__this, method) (( int32_t (*) (List_1_t6647 *, const MethodInfo*))List_1_get_Capacity_m39244_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m39245_gshared (List_1_t6647 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m39245(__this, ___value, method) (( void (*) (List_1_t6647 *, int32_t, const MethodInfo*))List_1_set_Capacity_m39245_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Count()
extern "C" int32_t List_1_get_Count_m39246_gshared (List_1_t6647 * __this, const MethodInfo* method);
#define List_1_get_Count_m39246(__this, method) (( int32_t (*) (List_1_t6647 *, const MethodInfo*))List_1_get_Count_m39246_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int64>::get_Item(System.Int32)
extern "C" int64_t List_1_get_Item_m39247_gshared (List_1_t6647 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m39247(__this, ___index, method) (( int64_t (*) (List_1_t6647 *, int32_t, const MethodInfo*))List_1_get_Item_m39247_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m39248_gshared (List_1_t6647 * __this, int32_t ___index, int64_t ___value, const MethodInfo* method);
#define List_1_set_Item_m39248(__this, ___index, ___value, method) (( void (*) (List_1_t6647 *, int32_t, int64_t, const MethodInfo*))List_1_set_Item_m39248_gshared)(__this, ___index, ___value, method)
