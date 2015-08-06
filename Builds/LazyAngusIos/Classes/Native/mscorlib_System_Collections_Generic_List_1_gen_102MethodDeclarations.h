#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct List_1_t7758;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerable_1_t7196;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t7757;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t7197;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ICollection_1_t9305;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ReadOnlyCollection_1_t7761;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Predicate_1_t7765;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IComparer_1_t9306;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Comparison_1_t7768;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_85.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor()
extern "C" void List_1__ctor_m53086_gshared (List_1_t7758 * __this, const MethodInfo* method);
#define List_1__ctor_m53086(__this, method) (( void (*) (List_1_t7758 *, const MethodInfo*))List_1__ctor_m53086_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m53087_gshared (List_1_t7758 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m53087(__this, ___collection, method) (( void (*) (List_1_t7758 *, Object_t*, const MethodInfo*))List_1__ctor_m53087_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m53088_gshared (List_1_t7758 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m53088(__this, ___capacity, method) (( void (*) (List_1_t7758 *, int32_t, const MethodInfo*))List_1__ctor_m53088_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m53089_gshared (List_1_t7758 * __this, KeyValuePair_2U5BU5D_t7757* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m53089(__this, ___data, ___size, method) (( void (*) (List_1_t7758 *, KeyValuePair_2U5BU5D_t7757*, int32_t, const MethodInfo*))List_1__ctor_m53089_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.cctor()
extern "C" void List_1__cctor_m53090_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m53090(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m53090_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53091_gshared (List_1_t7758 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53091(__this, method) (( Object_t* (*) (List_1_t7758 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53091_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m53092_gshared (List_1_t7758 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m53092(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7758 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m53092_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m53093_gshared (List_1_t7758 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m53093(__this, method) (( Object_t * (*) (List_1_t7758 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m53093_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m53094_gshared (List_1_t7758 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m53094(__this, ___item, method) (( int32_t (*) (List_1_t7758 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m53094_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m53095_gshared (List_1_t7758 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m53095(__this, ___item, method) (( bool (*) (List_1_t7758 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m53095_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m53096_gshared (List_1_t7758 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m53096(__this, ___item, method) (( int32_t (*) (List_1_t7758 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m53096_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m53097_gshared (List_1_t7758 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m53097(__this, ___index, ___item, method) (( void (*) (List_1_t7758 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m53097_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m53098_gshared (List_1_t7758 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m53098(__this, ___item, method) (( void (*) (List_1_t7758 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m53098_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53099_gshared (List_1_t7758 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53099(__this, method) (( bool (*) (List_1_t7758 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53099_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m53100_gshared (List_1_t7758 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m53100(__this, method) (( bool (*) (List_1_t7758 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m53100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m53101_gshared (List_1_t7758 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m53101(__this, method) (( Object_t * (*) (List_1_t7758 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m53101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m53102_gshared (List_1_t7758 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m53102(__this, method) (( bool (*) (List_1_t7758 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m53102_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m53103_gshared (List_1_t7758 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m53103(__this, method) (( bool (*) (List_1_t7758 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m53103_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m53104_gshared (List_1_t7758 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m53104(__this, ___index, method) (( Object_t * (*) (List_1_t7758 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m53104_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m53105_gshared (List_1_t7758 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m53105(__this, ___index, ___value, method) (( void (*) (List_1_t7758 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m53105_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Add(T)
extern "C" void List_1_Add_m53106_gshared (List_1_t7758 * __this, KeyValuePair_2_t6934  ___item, const MethodInfo* method);
#define List_1_Add_m53106(__this, ___item, method) (( void (*) (List_1_t7758 *, KeyValuePair_2_t6934 , const MethodInfo*))List_1_Add_m53106_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m53107_gshared (List_1_t7758 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m53107(__this, ___newCount, method) (( void (*) (List_1_t7758 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m53107_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m53108_gshared (List_1_t7758 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m53108(__this, ___idx, ___count, method) (( void (*) (List_1_t7758 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m53108_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m53109_gshared (List_1_t7758 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m53109(__this, ___collection, method) (( void (*) (List_1_t7758 *, Object_t*, const MethodInfo*))List_1_AddCollection_m53109_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m53110_gshared (List_1_t7758 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m53110(__this, ___enumerable, method) (( void (*) (List_1_t7758 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m53110_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m53111_gshared (List_1_t7758 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m53111(__this, ___collection, method) (( void (*) (List_1_t7758 *, Object_t*, const MethodInfo*))List_1_AddRange_m53111_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7761 * List_1_AsReadOnly_m53112_gshared (List_1_t7758 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m53112(__this, method) (( ReadOnlyCollection_1_t7761 * (*) (List_1_t7758 *, const MethodInfo*))List_1_AsReadOnly_m53112_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Clear()
extern "C" void List_1_Clear_m53113_gshared (List_1_t7758 * __this, const MethodInfo* method);
#define List_1_Clear_m53113(__this, method) (( void (*) (List_1_t7758 *, const MethodInfo*))List_1_Clear_m53113_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Contains(T)
extern "C" bool List_1_Contains_m53114_gshared (List_1_t7758 * __this, KeyValuePair_2_t6934  ___item, const MethodInfo* method);
#define List_1_Contains_m53114(__this, ___item, method) (( bool (*) (List_1_t7758 *, KeyValuePair_2_t6934 , const MethodInfo*))List_1_Contains_m53114_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m53115_gshared (List_1_t7758 * __this, KeyValuePair_2U5BU5D_t7757* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m53115(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7758 *, KeyValuePair_2U5BU5D_t7757*, int32_t, const MethodInfo*))List_1_CopyTo_m53115_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6934  List_1_Find_m53116_gshared (List_1_t7758 * __this, Predicate_1_t7765 * ___match, const MethodInfo* method);
#define List_1_Find_m53116(__this, ___match, method) (( KeyValuePair_2_t6934  (*) (List_1_t7758 *, Predicate_1_t7765 *, const MethodInfo*))List_1_Find_m53116_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m53117_gshared (Object_t * __this /* static, unused */, Predicate_1_t7765 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m53117(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7765 *, const MethodInfo*))List_1_CheckMatch_m53117_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m53118_gshared (List_1_t7758 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7765 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m53118(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7758 *, int32_t, int32_t, Predicate_1_t7765 *, const MethodInfo*))List_1_GetIndex_m53118_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetEnumerator()
extern "C" Enumerator_t7759  List_1_GetEnumerator_m53119_gshared (List_1_t7758 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m53119(__this, method) (( Enumerator_t7759  (*) (List_1_t7758 *, const MethodInfo*))List_1_GetEnumerator_m53119_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7758 * List_1_GetRange_m53120_gshared (List_1_t7758 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m53120(__this, ___index, ___count, method) (( List_1_t7758 * (*) (List_1_t7758 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m53120_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m53121_gshared (List_1_t7758 * __this, KeyValuePair_2_t6934  ___item, const MethodInfo* method);
#define List_1_IndexOf_m53121(__this, ___item, method) (( int32_t (*) (List_1_t7758 *, KeyValuePair_2_t6934 , const MethodInfo*))List_1_IndexOf_m53121_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m53122_gshared (List_1_t7758 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m53122(__this, ___start, ___delta, method) (( void (*) (List_1_t7758 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m53122_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m53123_gshared (List_1_t7758 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m53123(__this, ___index, method) (( void (*) (List_1_t7758 *, int32_t, const MethodInfo*))List_1_CheckIndex_m53123_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m53124_gshared (List_1_t7758 * __this, int32_t ___index, KeyValuePair_2_t6934  ___item, const MethodInfo* method);
#define List_1_Insert_m53124(__this, ___index, ___item, method) (( void (*) (List_1_t7758 *, int32_t, KeyValuePair_2_t6934 , const MethodInfo*))List_1_Insert_m53124_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m53125_gshared (List_1_t7758 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m53125(__this, ___collection, method) (( void (*) (List_1_t7758 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m53125_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m53126_gshared (List_1_t7758 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m53126(__this, ___index, ___collection, method) (( void (*) (List_1_t7758 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m53126_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m53127_gshared (List_1_t7758 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m53127(__this, ___index, ___collection, method) (( void (*) (List_1_t7758 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m53127_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m53128_gshared (List_1_t7758 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m53128(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7758 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m53128_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Remove(T)
extern "C" bool List_1_Remove_m53129_gshared (List_1_t7758 * __this, KeyValuePair_2_t6934  ___item, const MethodInfo* method);
#define List_1_Remove_m53129(__this, ___item, method) (( bool (*) (List_1_t7758 *, KeyValuePair_2_t6934 , const MethodInfo*))List_1_Remove_m53129_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m53130_gshared (List_1_t7758 * __this, Predicate_1_t7765 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m53130(__this, ___match, method) (( int32_t (*) (List_1_t7758 *, Predicate_1_t7765 *, const MethodInfo*))List_1_RemoveAll_m53130_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m53131_gshared (List_1_t7758 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m53131(__this, ___index, method) (( void (*) (List_1_t7758 *, int32_t, const MethodInfo*))List_1_RemoveAt_m53131_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m53132_gshared (List_1_t7758 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m53132(__this, ___index, ___count, method) (( void (*) (List_1_t7758 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m53132_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Reverse()
extern "C" void List_1_Reverse_m53133_gshared (List_1_t7758 * __this, const MethodInfo* method);
#define List_1_Reverse_m53133(__this, method) (( void (*) (List_1_t7758 *, const MethodInfo*))List_1_Reverse_m53133_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort()
extern "C" void List_1_Sort_m53134_gshared (List_1_t7758 * __this, const MethodInfo* method);
#define List_1_Sort_m53134(__this, method) (( void (*) (List_1_t7758 *, const MethodInfo*))List_1_Sort_m53134_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m53135_gshared (List_1_t7758 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m53135(__this, ___comparer, method) (( void (*) (List_1_t7758 *, Object_t*, const MethodInfo*))List_1_Sort_m53135_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m53136_gshared (List_1_t7758 * __this, Comparison_1_t7768 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m53136(__this, ___comparison, method) (( void (*) (List_1_t7758 *, Comparison_1_t7768 *, const MethodInfo*))List_1_Sort_m53136_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7757* List_1_ToArray_m53137_gshared (List_1_t7758 * __this, const MethodInfo* method);
#define List_1_ToArray_m53137(__this, method) (( KeyValuePair_2U5BU5D_t7757* (*) (List_1_t7758 *, const MethodInfo*))List_1_ToArray_m53137_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::TrimExcess()
extern "C" void List_1_TrimExcess_m53138_gshared (List_1_t7758 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m53138(__this, method) (( void (*) (List_1_t7758 *, const MethodInfo*))List_1_TrimExcess_m53138_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m53139_gshared (List_1_t7758 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m53139(__this, method) (( int32_t (*) (List_1_t7758 *, const MethodInfo*))List_1_get_Capacity_m53139_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m53140_gshared (List_1_t7758 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m53140(__this, ___value, method) (( void (*) (List_1_t7758 *, int32_t, const MethodInfo*))List_1_set_Capacity_m53140_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Count()
extern "C" int32_t List_1_get_Count_m53141_gshared (List_1_t7758 * __this, const MethodInfo* method);
#define List_1_get_Count_m53141(__this, method) (( int32_t (*) (List_1_t7758 *, const MethodInfo*))List_1_get_Count_m53141_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6934  List_1_get_Item_m53142_gshared (List_1_t7758 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m53142(__this, ___index, method) (( KeyValuePair_2_t6934  (*) (List_1_t7758 *, int32_t, const MethodInfo*))List_1_get_Item_m53142_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m53143_gshared (List_1_t7758 * __this, int32_t ___index, KeyValuePair_2_t6934  ___value, const MethodInfo* method);
#define List_1_set_Item_m53143(__this, ___index, ___value, method) (( void (*) (List_1_t7758 *, int32_t, KeyValuePair_2_t6934 , const MethodInfo*))List_1_set_Item_m53143_gshared)(__this, ___index, ___value, method)
