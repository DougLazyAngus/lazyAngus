#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct List_1_t7528;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerable_1_t7254;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7527;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t7255;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct ICollection_1_t9416;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct ReadOnlyCollection_1_t7531;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Predicate_1_t7535;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IComparer_1_t9417;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Comparison_1_t7538;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_81.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor()
extern "C" void List_1__ctor_m50026_gshared (List_1_t7528 * __this, const MethodInfo* method);
#define List_1__ctor_m50026(__this, method) (( void (*) (List_1_t7528 *, const MethodInfo*))List_1__ctor_m50026_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m50027_gshared (List_1_t7528 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m50027(__this, ___collection, method) (( void (*) (List_1_t7528 *, Object_t*, const MethodInfo*))List_1__ctor_m50027_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m50028_gshared (List_1_t7528 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m50028(__this, ___capacity, method) (( void (*) (List_1_t7528 *, int32_t, const MethodInfo*))List_1__ctor_m50028_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m50029_gshared (List_1_t7528 * __this, KeyValuePair_2U5BU5D_t7527* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m50029(__this, ___data, ___size, method) (( void (*) (List_1_t7528 *, KeyValuePair_2U5BU5D_t7527*, int32_t, const MethodInfo*))List_1__ctor_m50029_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.cctor()
extern "C" void List_1__cctor_m50030_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m50030(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m50030_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50031_gshared (List_1_t7528 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50031(__this, method) (( Object_t* (*) (List_1_t7528 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50031_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m50032_gshared (List_1_t7528 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m50032(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7528 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m50032_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m50033_gshared (List_1_t7528 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m50033(__this, method) (( Object_t * (*) (List_1_t7528 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m50033_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m50034_gshared (List_1_t7528 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m50034(__this, ___item, method) (( int32_t (*) (List_1_t7528 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m50034_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m50035_gshared (List_1_t7528 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m50035(__this, ___item, method) (( bool (*) (List_1_t7528 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m50035_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m50036_gshared (List_1_t7528 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m50036(__this, ___item, method) (( int32_t (*) (List_1_t7528 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m50036_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m50037_gshared (List_1_t7528 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m50037(__this, ___index, ___item, method) (( void (*) (List_1_t7528 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m50037_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m50038_gshared (List_1_t7528 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m50038(__this, ___item, method) (( void (*) (List_1_t7528 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m50038_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50039_gshared (List_1_t7528 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50039(__this, method) (( bool (*) (List_1_t7528 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50039_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m50040_gshared (List_1_t7528 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m50040(__this, method) (( bool (*) (List_1_t7528 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m50040_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m50041_gshared (List_1_t7528 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m50041(__this, method) (( Object_t * (*) (List_1_t7528 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m50041_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m50042_gshared (List_1_t7528 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m50042(__this, method) (( bool (*) (List_1_t7528 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m50042_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m50043_gshared (List_1_t7528 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m50043(__this, method) (( bool (*) (List_1_t7528 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m50043_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m50044_gshared (List_1_t7528 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m50044(__this, ___index, method) (( Object_t * (*) (List_1_t7528 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m50044_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m50045_gshared (List_1_t7528 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m50045(__this, ___index, ___value, method) (( void (*) (List_1_t7528 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m50045_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Add(T)
extern "C" void List_1_Add_m50046_gshared (List_1_t7528 * __this, KeyValuePair_2_t7250  ___item, const MethodInfo* method);
#define List_1_Add_m50046(__this, ___item, method) (( void (*) (List_1_t7528 *, KeyValuePair_2_t7250 , const MethodInfo*))List_1_Add_m50046_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m50047_gshared (List_1_t7528 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m50047(__this, ___newCount, method) (( void (*) (List_1_t7528 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m50047_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m50048_gshared (List_1_t7528 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m50048(__this, ___idx, ___count, method) (( void (*) (List_1_t7528 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m50048_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m50049_gshared (List_1_t7528 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m50049(__this, ___collection, method) (( void (*) (List_1_t7528 *, Object_t*, const MethodInfo*))List_1_AddCollection_m50049_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m50050_gshared (List_1_t7528 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m50050(__this, ___enumerable, method) (( void (*) (List_1_t7528 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m50050_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m50051_gshared (List_1_t7528 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m50051(__this, ___collection, method) (( void (*) (List_1_t7528 *, Object_t*, const MethodInfo*))List_1_AddRange_m50051_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7531 * List_1_AsReadOnly_m50052_gshared (List_1_t7528 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m50052(__this, method) (( ReadOnlyCollection_1_t7531 * (*) (List_1_t7528 *, const MethodInfo*))List_1_AsReadOnly_m50052_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Clear()
extern "C" void List_1_Clear_m50053_gshared (List_1_t7528 * __this, const MethodInfo* method);
#define List_1_Clear_m50053(__this, method) (( void (*) (List_1_t7528 *, const MethodInfo*))List_1_Clear_m50053_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Contains(T)
extern "C" bool List_1_Contains_m50054_gshared (List_1_t7528 * __this, KeyValuePair_2_t7250  ___item, const MethodInfo* method);
#define List_1_Contains_m50054(__this, ___item, method) (( bool (*) (List_1_t7528 *, KeyValuePair_2_t7250 , const MethodInfo*))List_1_Contains_m50054_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m50055_gshared (List_1_t7528 * __this, KeyValuePair_2U5BU5D_t7527* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m50055(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7528 *, KeyValuePair_2U5BU5D_t7527*, int32_t, const MethodInfo*))List_1_CopyTo_m50055_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7250  List_1_Find_m50056_gshared (List_1_t7528 * __this, Predicate_1_t7535 * ___match, const MethodInfo* method);
#define List_1_Find_m50056(__this, ___match, method) (( KeyValuePair_2_t7250  (*) (List_1_t7528 *, Predicate_1_t7535 *, const MethodInfo*))List_1_Find_m50056_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m50057_gshared (Object_t * __this /* static, unused */, Predicate_1_t7535 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m50057(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7535 *, const MethodInfo*))List_1_CheckMatch_m50057_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m50058_gshared (List_1_t7528 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7535 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m50058(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7528 *, int32_t, int32_t, Predicate_1_t7535 *, const MethodInfo*))List_1_GetIndex_m50058_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetEnumerator()
extern "C" Enumerator_t7529  List_1_GetEnumerator_m50059_gshared (List_1_t7528 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m50059(__this, method) (( Enumerator_t7529  (*) (List_1_t7528 *, const MethodInfo*))List_1_GetEnumerator_m50059_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7528 * List_1_GetRange_m50060_gshared (List_1_t7528 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m50060(__this, ___index, ___count, method) (( List_1_t7528 * (*) (List_1_t7528 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m50060_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m50061_gshared (List_1_t7528 * __this, KeyValuePair_2_t7250  ___item, const MethodInfo* method);
#define List_1_IndexOf_m50061(__this, ___item, method) (( int32_t (*) (List_1_t7528 *, KeyValuePair_2_t7250 , const MethodInfo*))List_1_IndexOf_m50061_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m50062_gshared (List_1_t7528 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m50062(__this, ___start, ___delta, method) (( void (*) (List_1_t7528 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m50062_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m50063_gshared (List_1_t7528 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m50063(__this, ___index, method) (( void (*) (List_1_t7528 *, int32_t, const MethodInfo*))List_1_CheckIndex_m50063_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m50064_gshared (List_1_t7528 * __this, int32_t ___index, KeyValuePair_2_t7250  ___item, const MethodInfo* method);
#define List_1_Insert_m50064(__this, ___index, ___item, method) (( void (*) (List_1_t7528 *, int32_t, KeyValuePair_2_t7250 , const MethodInfo*))List_1_Insert_m50064_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m50065_gshared (List_1_t7528 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m50065(__this, ___collection, method) (( void (*) (List_1_t7528 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m50065_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m50066_gshared (List_1_t7528 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m50066(__this, ___index, ___collection, method) (( void (*) (List_1_t7528 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m50066_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m50067_gshared (List_1_t7528 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m50067(__this, ___index, ___collection, method) (( void (*) (List_1_t7528 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m50067_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m50068_gshared (List_1_t7528 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m50068(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7528 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m50068_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Remove(T)
extern "C" bool List_1_Remove_m50069_gshared (List_1_t7528 * __this, KeyValuePair_2_t7250  ___item, const MethodInfo* method);
#define List_1_Remove_m50069(__this, ___item, method) (( bool (*) (List_1_t7528 *, KeyValuePair_2_t7250 , const MethodInfo*))List_1_Remove_m50069_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m50070_gshared (List_1_t7528 * __this, Predicate_1_t7535 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m50070(__this, ___match, method) (( int32_t (*) (List_1_t7528 *, Predicate_1_t7535 *, const MethodInfo*))List_1_RemoveAll_m50070_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m50071_gshared (List_1_t7528 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m50071(__this, ___index, method) (( void (*) (List_1_t7528 *, int32_t, const MethodInfo*))List_1_RemoveAt_m50071_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m50072_gshared (List_1_t7528 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m50072(__this, ___index, ___count, method) (( void (*) (List_1_t7528 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m50072_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Reverse()
extern "C" void List_1_Reverse_m50073_gshared (List_1_t7528 * __this, const MethodInfo* method);
#define List_1_Reverse_m50073(__this, method) (( void (*) (List_1_t7528 *, const MethodInfo*))List_1_Reverse_m50073_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort()
extern "C" void List_1_Sort_m50074_gshared (List_1_t7528 * __this, const MethodInfo* method);
#define List_1_Sort_m50074(__this, method) (( void (*) (List_1_t7528 *, const MethodInfo*))List_1_Sort_m50074_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m50075_gshared (List_1_t7528 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m50075(__this, ___comparer, method) (( void (*) (List_1_t7528 *, Object_t*, const MethodInfo*))List_1_Sort_m50075_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m50076_gshared (List_1_t7528 * __this, Comparison_1_t7538 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m50076(__this, ___comparison, method) (( void (*) (List_1_t7528 *, Comparison_1_t7538 *, const MethodInfo*))List_1_Sort_m50076_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7527* List_1_ToArray_m50077_gshared (List_1_t7528 * __this, const MethodInfo* method);
#define List_1_ToArray_m50077(__this, method) (( KeyValuePair_2U5BU5D_t7527* (*) (List_1_t7528 *, const MethodInfo*))List_1_ToArray_m50077_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::TrimExcess()
extern "C" void List_1_TrimExcess_m50078_gshared (List_1_t7528 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m50078(__this, method) (( void (*) (List_1_t7528 *, const MethodInfo*))List_1_TrimExcess_m50078_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m50079_gshared (List_1_t7528 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m50079(__this, method) (( int32_t (*) (List_1_t7528 *, const MethodInfo*))List_1_get_Capacity_m50079_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m50080_gshared (List_1_t7528 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m50080(__this, ___value, method) (( void (*) (List_1_t7528 *, int32_t, const MethodInfo*))List_1_set_Capacity_m50080_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Count()
extern "C" int32_t List_1_get_Count_m50081_gshared (List_1_t7528 * __this, const MethodInfo* method);
#define List_1_get_Count_m50081(__this, method) (( int32_t (*) (List_1_t7528 *, const MethodInfo*))List_1_get_Count_m50081_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7250  List_1_get_Item_m50082_gshared (List_1_t7528 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m50082(__this, ___index, method) (( KeyValuePair_2_t7250  (*) (List_1_t7528 *, int32_t, const MethodInfo*))List_1_get_Item_m50082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m50083_gshared (List_1_t7528 * __this, int32_t ___index, KeyValuePair_2_t7250  ___value, const MethodInfo* method);
#define List_1_set_Item_m50083(__this, ___index, ___value, method) (( void (*) (List_1_t7528 *, int32_t, KeyValuePair_2_t7250 , const MethodInfo*))List_1_set_Item_m50083_gshared)(__this, ___index, ___value, method)
