#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct List_1_t7346;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IEnumerable_1_t7126;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7345;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IEnumerator_1_t7127;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct ICollection_1_t9263;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct ReadOnlyCollection_1_t7349;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Predicate_1_t7353;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IComparer_1_t9264;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Comparison_1_t7356;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_73.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor()
extern "C" void List_1__ctor_m48049_gshared (List_1_t7346 * __this, const MethodInfo* method);
#define List_1__ctor_m48049(__this, method) (( void (*) (List_1_t7346 *, const MethodInfo*))List_1__ctor_m48049_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m48050_gshared (List_1_t7346 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m48050(__this, ___collection, method) (( void (*) (List_1_t7346 *, Object_t*, const MethodInfo*))List_1__ctor_m48050_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m48051_gshared (List_1_t7346 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m48051(__this, ___capacity, method) (( void (*) (List_1_t7346 *, int32_t, const MethodInfo*))List_1__ctor_m48051_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m48052_gshared (List_1_t7346 * __this, KeyValuePair_2U5BU5D_t7345* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m48052(__this, ___data, ___size, method) (( void (*) (List_1_t7346 *, KeyValuePair_2U5BU5D_t7345*, int32_t, const MethodInfo*))List_1__ctor_m48052_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.cctor()
extern "C" void List_1__cctor_m48053_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m48053(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48053_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48054_gshared (List_1_t7346 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48054(__this, method) (( Object_t* (*) (List_1_t7346 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m48055_gshared (List_1_t7346 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m48055(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7346 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48055_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m48056_gshared (List_1_t7346 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m48056(__this, method) (( Object_t * (*) (List_1_t7346 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48056_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m48057_gshared (List_1_t7346 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m48057(__this, ___item, method) (( int32_t (*) (List_1_t7346 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48057_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m48058_gshared (List_1_t7346 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m48058(__this, ___item, method) (( bool (*) (List_1_t7346 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48058_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m48059_gshared (List_1_t7346 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m48059(__this, ___item, method) (( int32_t (*) (List_1_t7346 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48059_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m48060_gshared (List_1_t7346 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m48060(__this, ___index, ___item, method) (( void (*) (List_1_t7346 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48060_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m48061_gshared (List_1_t7346 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m48061(__this, ___item, method) (( void (*) (List_1_t7346 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48061_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48062_gshared (List_1_t7346 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48062(__this, method) (( bool (*) (List_1_t7346 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48062_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m48063_gshared (List_1_t7346 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m48063(__this, method) (( bool (*) (List_1_t7346 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48063_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m48064_gshared (List_1_t7346 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m48064(__this, method) (( Object_t * (*) (List_1_t7346 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48064_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m48065_gshared (List_1_t7346 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m48065(__this, method) (( bool (*) (List_1_t7346 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48065_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m48066_gshared (List_1_t7346 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m48066(__this, method) (( bool (*) (List_1_t7346 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48066_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m48067_gshared (List_1_t7346 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m48067(__this, ___index, method) (( Object_t * (*) (List_1_t7346 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48067_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m48068_gshared (List_1_t7346 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m48068(__this, ___index, ___value, method) (( void (*) (List_1_t7346 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48068_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Add(T)
extern "C" void List_1_Add_m48069_gshared (List_1_t7346 * __this, KeyValuePair_2_t7122  ___item, const MethodInfo* method);
#define List_1_Add_m48069(__this, ___item, method) (( void (*) (List_1_t7346 *, KeyValuePair_2_t7122 , const MethodInfo*))List_1_Add_m48069_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m48070_gshared (List_1_t7346 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m48070(__this, ___newCount, method) (( void (*) (List_1_t7346 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48070_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m48071_gshared (List_1_t7346 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m48071(__this, ___idx, ___count, method) (( void (*) (List_1_t7346 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48071_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m48072_gshared (List_1_t7346 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m48072(__this, ___collection, method) (( void (*) (List_1_t7346 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48072_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m48073_gshared (List_1_t7346 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m48073(__this, ___enumerable, method) (( void (*) (List_1_t7346 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48073_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m48074_gshared (List_1_t7346 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m48074(__this, ___collection, method) (( void (*) (List_1_t7346 *, Object_t*, const MethodInfo*))List_1_AddRange_m48074_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7349 * List_1_AsReadOnly_m48075_gshared (List_1_t7346 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m48075(__this, method) (( ReadOnlyCollection_1_t7349 * (*) (List_1_t7346 *, const MethodInfo*))List_1_AsReadOnly_m48075_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Clear()
extern "C" void List_1_Clear_m48076_gshared (List_1_t7346 * __this, const MethodInfo* method);
#define List_1_Clear_m48076(__this, method) (( void (*) (List_1_t7346 *, const MethodInfo*))List_1_Clear_m48076_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Contains(T)
extern "C" bool List_1_Contains_m48077_gshared (List_1_t7346 * __this, KeyValuePair_2_t7122  ___item, const MethodInfo* method);
#define List_1_Contains_m48077(__this, ___item, method) (( bool (*) (List_1_t7346 *, KeyValuePair_2_t7122 , const MethodInfo*))List_1_Contains_m48077_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m48078_gshared (List_1_t7346 * __this, KeyValuePair_2U5BU5D_t7345* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m48078(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7346 *, KeyValuePair_2U5BU5D_t7345*, int32_t, const MethodInfo*))List_1_CopyTo_m48078_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7122  List_1_Find_m48079_gshared (List_1_t7346 * __this, Predicate_1_t7353 * ___match, const MethodInfo* method);
#define List_1_Find_m48079(__this, ___match, method) (( KeyValuePair_2_t7122  (*) (List_1_t7346 *, Predicate_1_t7353 *, const MethodInfo*))List_1_Find_m48079_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m48080_gshared (Object_t * __this /* static, unused */, Predicate_1_t7353 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m48080(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7353 *, const MethodInfo*))List_1_CheckMatch_m48080_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m48081_gshared (List_1_t7346 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7353 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m48081(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7346 *, int32_t, int32_t, Predicate_1_t7353 *, const MethodInfo*))List_1_GetIndex_m48081_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetEnumerator()
extern "C" Enumerator_t7347  List_1_GetEnumerator_m48082_gshared (List_1_t7346 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m48082(__this, method) (( Enumerator_t7347  (*) (List_1_t7346 *, const MethodInfo*))List_1_GetEnumerator_m48082_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7346 * List_1_GetRange_m48083_gshared (List_1_t7346 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m48083(__this, ___index, ___count, method) (( List_1_t7346 * (*) (List_1_t7346 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48083_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m48084_gshared (List_1_t7346 * __this, KeyValuePair_2_t7122  ___item, const MethodInfo* method);
#define List_1_IndexOf_m48084(__this, ___item, method) (( int32_t (*) (List_1_t7346 *, KeyValuePair_2_t7122 , const MethodInfo*))List_1_IndexOf_m48084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m48085_gshared (List_1_t7346 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m48085(__this, ___start, ___delta, method) (( void (*) (List_1_t7346 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48085_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m48086_gshared (List_1_t7346 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m48086(__this, ___index, method) (( void (*) (List_1_t7346 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48086_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m48087_gshared (List_1_t7346 * __this, int32_t ___index, KeyValuePair_2_t7122  ___item, const MethodInfo* method);
#define List_1_Insert_m48087(__this, ___index, ___item, method) (( void (*) (List_1_t7346 *, int32_t, KeyValuePair_2_t7122 , const MethodInfo*))List_1_Insert_m48087_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m48088_gshared (List_1_t7346 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m48088(__this, ___collection, method) (( void (*) (List_1_t7346 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48088_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m48089_gshared (List_1_t7346 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m48089(__this, ___index, ___collection, method) (( void (*) (List_1_t7346 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48089_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m48090_gshared (List_1_t7346 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m48090(__this, ___index, ___collection, method) (( void (*) (List_1_t7346 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48090_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m48091_gshared (List_1_t7346 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m48091(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7346 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48091_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Remove(T)
extern "C" bool List_1_Remove_m48092_gshared (List_1_t7346 * __this, KeyValuePair_2_t7122  ___item, const MethodInfo* method);
#define List_1_Remove_m48092(__this, ___item, method) (( bool (*) (List_1_t7346 *, KeyValuePair_2_t7122 , const MethodInfo*))List_1_Remove_m48092_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m48093_gshared (List_1_t7346 * __this, Predicate_1_t7353 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m48093(__this, ___match, method) (( int32_t (*) (List_1_t7346 *, Predicate_1_t7353 *, const MethodInfo*))List_1_RemoveAll_m48093_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m48094_gshared (List_1_t7346 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m48094(__this, ___index, method) (( void (*) (List_1_t7346 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48094_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m48095_gshared (List_1_t7346 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m48095(__this, ___index, ___count, method) (( void (*) (List_1_t7346 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48095_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Reverse()
extern "C" void List_1_Reverse_m48096_gshared (List_1_t7346 * __this, const MethodInfo* method);
#define List_1_Reverse_m48096(__this, method) (( void (*) (List_1_t7346 *, const MethodInfo*))List_1_Reverse_m48096_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort()
extern "C" void List_1_Sort_m48097_gshared (List_1_t7346 * __this, const MethodInfo* method);
#define List_1_Sort_m48097(__this, method) (( void (*) (List_1_t7346 *, const MethodInfo*))List_1_Sort_m48097_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m48098_gshared (List_1_t7346 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m48098(__this, ___comparer, method) (( void (*) (List_1_t7346 *, Object_t*, const MethodInfo*))List_1_Sort_m48098_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m48099_gshared (List_1_t7346 * __this, Comparison_1_t7356 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m48099(__this, ___comparison, method) (( void (*) (List_1_t7346 *, Comparison_1_t7356 *, const MethodInfo*))List_1_Sort_m48099_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7345* List_1_ToArray_m48100_gshared (List_1_t7346 * __this, const MethodInfo* method);
#define List_1_ToArray_m48100(__this, method) (( KeyValuePair_2U5BU5D_t7345* (*) (List_1_t7346 *, const MethodInfo*))List_1_ToArray_m48100_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::TrimExcess()
extern "C" void List_1_TrimExcess_m48101_gshared (List_1_t7346 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m48101(__this, method) (( void (*) (List_1_t7346 *, const MethodInfo*))List_1_TrimExcess_m48101_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m48102_gshared (List_1_t7346 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m48102(__this, method) (( int32_t (*) (List_1_t7346 *, const MethodInfo*))List_1_get_Capacity_m48102_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m48103_gshared (List_1_t7346 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m48103(__this, ___value, method) (( void (*) (List_1_t7346 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48103_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Count()
extern "C" int32_t List_1_get_Count_m48104_gshared (List_1_t7346 * __this, const MethodInfo* method);
#define List_1_get_Count_m48104(__this, method) (( int32_t (*) (List_1_t7346 *, const MethodInfo*))List_1_get_Count_m48104_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7122  List_1_get_Item_m48105_gshared (List_1_t7346 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m48105(__this, ___index, method) (( KeyValuePair_2_t7122  (*) (List_1_t7346 *, int32_t, const MethodInfo*))List_1_get_Item_m48105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m48106_gshared (List_1_t7346 * __this, int32_t ___index, KeyValuePair_2_t7122  ___value, const MethodInfo* method);
#define List_1_set_Item_m48106(__this, ___index, ___value, method) (( void (*) (List_1_t7346 *, int32_t, KeyValuePair_2_t7122 , const MethodInfo*))List_1_set_Item_m48106_gshared)(__this, ___index, ___value, method)
