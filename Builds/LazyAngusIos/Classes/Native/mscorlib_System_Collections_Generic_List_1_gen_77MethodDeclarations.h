#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t6621;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt64>
struct IEnumerable_1_t6281;
// System.UInt64[]
struct UInt64U5BU5D_t4666;
// System.Collections.Generic.IEnumerator`1<System.UInt64>
struct IEnumerator_1_t6282;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9114;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt64>
struct ReadOnlyCollection_1_t6623;
// System.Predicate`1<System.UInt64>
struct Predicate_1_t6628;
// System.Collections.Generic.IComparer`1<System.UInt64>
struct IComparer_1_t9115;
// System.Comparison`1<System.UInt64>
struct Comparison_1_t6632;
// System.Collections.Generic.List`1/Enumerator<System.UInt64>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_60.h"

// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor()
extern "C" void List_1__ctor_m39091_gshared (List_1_t6621 * __this, const MethodInfo* method);
#define List_1__ctor_m39091(__this, method) (( void (*) (List_1_t6621 *, const MethodInfo*))List_1__ctor_m39091_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m39092_gshared (List_1_t6621 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m39092(__this, ___collection, method) (( void (*) (List_1_t6621 *, Object_t*, const MethodInfo*))List_1__ctor_m39092_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(System.Int32)
extern "C" void List_1__ctor_m39093_gshared (List_1_t6621 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m39093(__this, ___capacity, method) (( void (*) (List_1_t6621 *, int32_t, const MethodInfo*))List_1__ctor_m39093_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m39094_gshared (List_1_t6621 * __this, UInt64U5BU5D_t4666* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m39094(__this, ___data, ___size, method) (( void (*) (List_1_t6621 *, UInt64U5BU5D_t4666*, int32_t, const MethodInfo*))List_1__ctor_m39094_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.cctor()
extern "C" void List_1__cctor_m39095_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m39095(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m39095_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt64>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39096_gshared (List_1_t6621 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39096(__this, method) (( Object_t* (*) (List_1_t6621 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39096_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m39097_gshared (List_1_t6621 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m39097(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6621 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m39097_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m39098_gshared (List_1_t6621 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39098(__this, method) (( Object_t * (*) (List_1_t6621 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m39098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m39099_gshared (List_1_t6621 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m39099(__this, ___item, method) (( int32_t (*) (List_1_t6621 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m39099_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m39100_gshared (List_1_t6621 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m39100(__this, ___item, method) (( bool (*) (List_1_t6621 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m39100_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m39101_gshared (List_1_t6621 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m39101(__this, ___item, method) (( int32_t (*) (List_1_t6621 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m39101_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m39102_gshared (List_1_t6621 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m39102(__this, ___index, ___item, method) (( void (*) (List_1_t6621 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m39102_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m39103_gshared (List_1_t6621 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m39103(__this, ___item, method) (( void (*) (List_1_t6621 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m39103_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39104_gshared (List_1_t6621 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39104(__this, method) (( bool (*) (List_1_t6621 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39104_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m39105_gshared (List_1_t6621 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39105(__this, method) (( bool (*) (List_1_t6621 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m39105_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m39106_gshared (List_1_t6621 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m39106(__this, method) (( Object_t * (*) (List_1_t6621 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m39106_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m39107_gshared (List_1_t6621 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m39107(__this, method) (( bool (*) (List_1_t6621 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m39107_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m39108_gshared (List_1_t6621 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m39108(__this, method) (( bool (*) (List_1_t6621 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m39108_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m39109_gshared (List_1_t6621 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m39109(__this, ___index, method) (( Object_t * (*) (List_1_t6621 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m39109_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m39110_gshared (List_1_t6621 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m39110(__this, ___index, ___value, method) (( void (*) (List_1_t6621 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m39110_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Add(T)
extern "C" void List_1_Add_m39111_gshared (List_1_t6621 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Add_m39111(__this, ___item, method) (( void (*) (List_1_t6621 *, uint64_t, const MethodInfo*))List_1_Add_m39111_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m39112_gshared (List_1_t6621 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m39112(__this, ___newCount, method) (( void (*) (List_1_t6621 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m39112_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m39113_gshared (List_1_t6621 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m39113(__this, ___idx, ___count, method) (( void (*) (List_1_t6621 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m39113_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m39114_gshared (List_1_t6621 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m39114(__this, ___collection, method) (( void (*) (List_1_t6621 *, Object_t*, const MethodInfo*))List_1_AddCollection_m39114_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m39115_gshared (List_1_t6621 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m39115(__this, ___enumerable, method) (( void (*) (List_1_t6621 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m39115_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m39116_gshared (List_1_t6621 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m39116(__this, ___collection, method) (( void (*) (List_1_t6621 *, Object_t*, const MethodInfo*))List_1_AddRange_m39116_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt64>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6623 * List_1_AsReadOnly_m39117_gshared (List_1_t6621 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m39117(__this, method) (( ReadOnlyCollection_1_t6623 * (*) (List_1_t6621 *, const MethodInfo*))List_1_AsReadOnly_m39117_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Clear()
extern "C" void List_1_Clear_m39118_gshared (List_1_t6621 * __this, const MethodInfo* method);
#define List_1_Clear_m39118(__this, method) (( void (*) (List_1_t6621 *, const MethodInfo*))List_1_Clear_m39118_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::Contains(T)
extern "C" bool List_1_Contains_m39119_gshared (List_1_t6621 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Contains_m39119(__this, ___item, method) (( bool (*) (List_1_t6621 *, uint64_t, const MethodInfo*))List_1_Contains_m39119_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m39120_gshared (List_1_t6621 * __this, UInt64U5BU5D_t4666* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m39120(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6621 *, UInt64U5BU5D_t4666*, int32_t, const MethodInfo*))List_1_CopyTo_m39120_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt64>::Find(System.Predicate`1<T>)
extern "C" uint64_t List_1_Find_m39121_gshared (List_1_t6621 * __this, Predicate_1_t6628 * ___match, const MethodInfo* method);
#define List_1_Find_m39121(__this, ___match, method) (( uint64_t (*) (List_1_t6621 *, Predicate_1_t6628 *, const MethodInfo*))List_1_Find_m39121_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m39122_gshared (Object_t * __this /* static, unused */, Predicate_1_t6628 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m39122(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6628 *, const MethodInfo*))List_1_CheckMatch_m39122_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m39123_gshared (List_1_t6621 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6628 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m39123(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6621 *, int32_t, int32_t, Predicate_1_t6628 *, const MethodInfo*))List_1_GetIndex_m39123_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt64>::GetEnumerator()
extern "C" Enumerator_t6622  List_1_GetEnumerator_m39124_gshared (List_1_t6621 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m39124(__this, method) (( Enumerator_t6622  (*) (List_1_t6621 *, const MethodInfo*))List_1_GetEnumerator_m39124_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt64>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6621 * List_1_GetRange_m39125_gshared (List_1_t6621 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m39125(__this, ___index, ___count, method) (( List_1_t6621 * (*) (List_1_t6621 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m39125_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m39126_gshared (List_1_t6621 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m39126(__this, ___item, method) (( int32_t (*) (List_1_t6621 *, uint64_t, const MethodInfo*))List_1_IndexOf_m39126_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m39127_gshared (List_1_t6621 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m39127(__this, ___start, ___delta, method) (( void (*) (List_1_t6621 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m39127_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m39128_gshared (List_1_t6621 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m39128(__this, ___index, method) (( void (*) (List_1_t6621 *, int32_t, const MethodInfo*))List_1_CheckIndex_m39128_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m39129_gshared (List_1_t6621 * __this, int32_t ___index, uint64_t ___item, const MethodInfo* method);
#define List_1_Insert_m39129(__this, ___index, ___item, method) (( void (*) (List_1_t6621 *, int32_t, uint64_t, const MethodInfo*))List_1_Insert_m39129_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m39130_gshared (List_1_t6621 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m39130(__this, ___collection, method) (( void (*) (List_1_t6621 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m39130_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m39131_gshared (List_1_t6621 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m39131(__this, ___index, ___collection, method) (( void (*) (List_1_t6621 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m39131_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m39132_gshared (List_1_t6621 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m39132(__this, ___index, ___collection, method) (( void (*) (List_1_t6621 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m39132_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m39133_gshared (List_1_t6621 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m39133(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6621 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m39133_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::Remove(T)
extern "C" bool List_1_Remove_m39134_gshared (List_1_t6621 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Remove_m39134(__this, ___item, method) (( bool (*) (List_1_t6621 *, uint64_t, const MethodInfo*))List_1_Remove_m39134_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m39135_gshared (List_1_t6621 * __this, Predicate_1_t6628 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m39135(__this, ___match, method) (( int32_t (*) (List_1_t6621 *, Predicate_1_t6628 *, const MethodInfo*))List_1_RemoveAll_m39135_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m39136_gshared (List_1_t6621 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m39136(__this, ___index, method) (( void (*) (List_1_t6621 *, int32_t, const MethodInfo*))List_1_RemoveAt_m39136_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m39137_gshared (List_1_t6621 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m39137(__this, ___index, ___count, method) (( void (*) (List_1_t6621 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m39137_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Reverse()
extern "C" void List_1_Reverse_m39138_gshared (List_1_t6621 * __this, const MethodInfo* method);
#define List_1_Reverse_m39138(__this, method) (( void (*) (List_1_t6621 *, const MethodInfo*))List_1_Reverse_m39138_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort()
extern "C" void List_1_Sort_m39139_gshared (List_1_t6621 * __this, const MethodInfo* method);
#define List_1_Sort_m39139(__this, method) (( void (*) (List_1_t6621 *, const MethodInfo*))List_1_Sort_m39139_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m39140_gshared (List_1_t6621 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m39140(__this, ___comparer, method) (( void (*) (List_1_t6621 *, Object_t*, const MethodInfo*))List_1_Sort_m39140_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m39141_gshared (List_1_t6621 * __this, Comparison_1_t6632 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m39141(__this, ___comparison, method) (( void (*) (List_1_t6621 *, Comparison_1_t6632 *, const MethodInfo*))List_1_Sort_m39141_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt64>::ToArray()
extern "C" UInt64U5BU5D_t4666* List_1_ToArray_m39142_gshared (List_1_t6621 * __this, const MethodInfo* method);
#define List_1_ToArray_m39142(__this, method) (( UInt64U5BU5D_t4666* (*) (List_1_t6621 *, const MethodInfo*))List_1_ToArray_m39142_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::TrimExcess()
extern "C" void List_1_TrimExcess_m39143_gshared (List_1_t6621 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m39143(__this, method) (( void (*) (List_1_t6621 *, const MethodInfo*))List_1_TrimExcess_m39143_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m39144_gshared (List_1_t6621 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m39144(__this, method) (( int32_t (*) (List_1_t6621 *, const MethodInfo*))List_1_get_Capacity_m39144_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m39145_gshared (List_1_t6621 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m39145(__this, ___value, method) (( void (*) (List_1_t6621 *, int32_t, const MethodInfo*))List_1_set_Capacity_m39145_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::get_Count()
extern "C" int32_t List_1_get_Count_m39146_gshared (List_1_t6621 * __this, const MethodInfo* method);
#define List_1_get_Count_m39146(__this, method) (( int32_t (*) (List_1_t6621 *, const MethodInfo*))List_1_get_Count_m39146_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt64>::get_Item(System.Int32)
extern "C" uint64_t List_1_get_Item_m39147_gshared (List_1_t6621 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m39147(__this, ___index, method) (( uint64_t (*) (List_1_t6621 *, int32_t, const MethodInfo*))List_1_get_Item_m39147_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m39148_gshared (List_1_t6621 * __this, int32_t ___index, uint64_t ___value, const MethodInfo* method);
#define List_1_set_Item_m39148(__this, ___index, ___value, method) (( void (*) (List_1_t6621 *, int32_t, uint64_t, const MethodInfo*))List_1_set_Item_m39148_gshared)(__this, ___index, ___value, method)
