#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct List_1_t8553;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerable_1_t8544;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t8552;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t8545;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ICollection_1_t10054;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ReadOnlyCollection_1_t8556;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Predicate_1_t8560;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IComparer_1_t10055;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Comparison_1_t8563;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_96.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor()
extern "C" void List_1__ctor_m60212_gshared (List_1_t8553 * __this, const MethodInfo* method);
#define List_1__ctor_m60212(__this, method) (( void (*) (List_1_t8553 *, const MethodInfo*))List_1__ctor_m60212_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m60213_gshared (List_1_t8553 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m60213(__this, ___collection, method) (( void (*) (List_1_t8553 *, Object_t*, const MethodInfo*))List_1__ctor_m60213_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m60214_gshared (List_1_t8553 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m60214(__this, ___capacity, method) (( void (*) (List_1_t8553 *, int32_t, const MethodInfo*))List_1__ctor_m60214_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m60215_gshared (List_1_t8553 * __this, KeyValuePair_2U5BU5D_t8552* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m60215(__this, ___data, ___size, method) (( void (*) (List_1_t8553 *, KeyValuePair_2U5BU5D_t8552*, int32_t, const MethodInfo*))List_1__ctor_m60215_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.cctor()
extern "C" void List_1__cctor_m60216_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m60216(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m60216_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60217_gshared (List_1_t8553 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60217(__this, method) (( Object_t* (*) (List_1_t8553 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60217_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m60218_gshared (List_1_t8553 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m60218(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8553 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m60218_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m60219_gshared (List_1_t8553 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60219(__this, method) (( Object_t * (*) (List_1_t8553 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m60219_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m60220_gshared (List_1_t8553 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m60220(__this, ___item, method) (( int32_t (*) (List_1_t8553 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m60220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m60221_gshared (List_1_t8553 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m60221(__this, ___item, method) (( bool (*) (List_1_t8553 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m60221_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m60222_gshared (List_1_t8553 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m60222(__this, ___item, method) (( int32_t (*) (List_1_t8553 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m60222_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m60223_gshared (List_1_t8553 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m60223(__this, ___index, ___item, method) (( void (*) (List_1_t8553 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m60223_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m60224_gshared (List_1_t8553 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m60224(__this, ___item, method) (( void (*) (List_1_t8553 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m60224_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60225_gshared (List_1_t8553 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60225(__this, method) (( bool (*) (List_1_t8553 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60225_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m60226_gshared (List_1_t8553 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60226(__this, method) (( bool (*) (List_1_t8553 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m60226_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m60227_gshared (List_1_t8553 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m60227(__this, method) (( Object_t * (*) (List_1_t8553 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m60227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m60228_gshared (List_1_t8553 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m60228(__this, method) (( bool (*) (List_1_t8553 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m60228_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m60229_gshared (List_1_t8553 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m60229(__this, method) (( bool (*) (List_1_t8553 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m60229_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m60230_gshared (List_1_t8553 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m60230(__this, ___index, method) (( Object_t * (*) (List_1_t8553 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m60230_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m60231_gshared (List_1_t8553 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m60231(__this, ___index, ___value, method) (( void (*) (List_1_t8553 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m60231_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Add(T)
extern "C" void List_1_Add_m60232_gshared (List_1_t8553 * __this, KeyValuePair_2_t7601  ___item, const MethodInfo* method);
#define List_1_Add_m60232(__this, ___item, method) (( void (*) (List_1_t8553 *, KeyValuePair_2_t7601 , const MethodInfo*))List_1_Add_m60232_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m60233_gshared (List_1_t8553 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m60233(__this, ___newCount, method) (( void (*) (List_1_t8553 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m60233_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m60234_gshared (List_1_t8553 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m60234(__this, ___idx, ___count, method) (( void (*) (List_1_t8553 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m60234_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m60235_gshared (List_1_t8553 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m60235(__this, ___collection, method) (( void (*) (List_1_t8553 *, Object_t*, const MethodInfo*))List_1_AddCollection_m60235_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m60236_gshared (List_1_t8553 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m60236(__this, ___enumerable, method) (( void (*) (List_1_t8553 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m60236_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m60237_gshared (List_1_t8553 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m60237(__this, ___collection, method) (( void (*) (List_1_t8553 *, Object_t*, const MethodInfo*))List_1_AddRange_m60237_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8556 * List_1_AsReadOnly_m60238_gshared (List_1_t8553 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m60238(__this, method) (( ReadOnlyCollection_1_t8556 * (*) (List_1_t8553 *, const MethodInfo*))List_1_AsReadOnly_m60238_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Clear()
extern "C" void List_1_Clear_m60239_gshared (List_1_t8553 * __this, const MethodInfo* method);
#define List_1_Clear_m60239(__this, method) (( void (*) (List_1_t8553 *, const MethodInfo*))List_1_Clear_m60239_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Contains(T)
extern "C" bool List_1_Contains_m60240_gshared (List_1_t8553 * __this, KeyValuePair_2_t7601  ___item, const MethodInfo* method);
#define List_1_Contains_m60240(__this, ___item, method) (( bool (*) (List_1_t8553 *, KeyValuePair_2_t7601 , const MethodInfo*))List_1_Contains_m60240_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m60241_gshared (List_1_t8553 * __this, KeyValuePair_2U5BU5D_t8552* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m60241(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8553 *, KeyValuePair_2U5BU5D_t8552*, int32_t, const MethodInfo*))List_1_CopyTo_m60241_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7601  List_1_Find_m60242_gshared (List_1_t8553 * __this, Predicate_1_t8560 * ___match, const MethodInfo* method);
#define List_1_Find_m60242(__this, ___match, method) (( KeyValuePair_2_t7601  (*) (List_1_t8553 *, Predicate_1_t8560 *, const MethodInfo*))List_1_Find_m60242_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m60243_gshared (Object_t * __this /* static, unused */, Predicate_1_t8560 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m60243(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8560 *, const MethodInfo*))List_1_CheckMatch_m60243_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m60244_gshared (List_1_t8553 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8560 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m60244(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8553 *, int32_t, int32_t, Predicate_1_t8560 *, const MethodInfo*))List_1_GetIndex_m60244_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetEnumerator()
extern "C" Enumerator_t8554  List_1_GetEnumerator_m60245_gshared (List_1_t8553 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m60245(__this, method) (( Enumerator_t8554  (*) (List_1_t8553 *, const MethodInfo*))List_1_GetEnumerator_m60245_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8553 * List_1_GetRange_m60246_gshared (List_1_t8553 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m60246(__this, ___index, ___count, method) (( List_1_t8553 * (*) (List_1_t8553 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m60246_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m60247_gshared (List_1_t8553 * __this, KeyValuePair_2_t7601  ___item, const MethodInfo* method);
#define List_1_IndexOf_m60247(__this, ___item, method) (( int32_t (*) (List_1_t8553 *, KeyValuePair_2_t7601 , const MethodInfo*))List_1_IndexOf_m60247_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m60248_gshared (List_1_t8553 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m60248(__this, ___start, ___delta, method) (( void (*) (List_1_t8553 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m60248_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m60249_gshared (List_1_t8553 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m60249(__this, ___index, method) (( void (*) (List_1_t8553 *, int32_t, const MethodInfo*))List_1_CheckIndex_m60249_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m60250_gshared (List_1_t8553 * __this, int32_t ___index, KeyValuePair_2_t7601  ___item, const MethodInfo* method);
#define List_1_Insert_m60250(__this, ___index, ___item, method) (( void (*) (List_1_t8553 *, int32_t, KeyValuePair_2_t7601 , const MethodInfo*))List_1_Insert_m60250_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m60251_gshared (List_1_t8553 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m60251(__this, ___collection, method) (( void (*) (List_1_t8553 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m60251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m60252_gshared (List_1_t8553 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m60252(__this, ___index, ___collection, method) (( void (*) (List_1_t8553 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m60252_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m60253_gshared (List_1_t8553 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m60253(__this, ___index, ___collection, method) (( void (*) (List_1_t8553 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m60253_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m60254_gshared (List_1_t8553 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m60254(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8553 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m60254_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Remove(T)
extern "C" bool List_1_Remove_m60255_gshared (List_1_t8553 * __this, KeyValuePair_2_t7601  ___item, const MethodInfo* method);
#define List_1_Remove_m60255(__this, ___item, method) (( bool (*) (List_1_t8553 *, KeyValuePair_2_t7601 , const MethodInfo*))List_1_Remove_m60255_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m60256_gshared (List_1_t8553 * __this, Predicate_1_t8560 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m60256(__this, ___match, method) (( int32_t (*) (List_1_t8553 *, Predicate_1_t8560 *, const MethodInfo*))List_1_RemoveAll_m60256_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m60257_gshared (List_1_t8553 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m60257(__this, ___index, method) (( void (*) (List_1_t8553 *, int32_t, const MethodInfo*))List_1_RemoveAt_m60257_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m60258_gshared (List_1_t8553 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m60258(__this, ___index, ___count, method) (( void (*) (List_1_t8553 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m60258_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Reverse()
extern "C" void List_1_Reverse_m60259_gshared (List_1_t8553 * __this, const MethodInfo* method);
#define List_1_Reverse_m60259(__this, method) (( void (*) (List_1_t8553 *, const MethodInfo*))List_1_Reverse_m60259_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort()
extern "C" void List_1_Sort_m60260_gshared (List_1_t8553 * __this, const MethodInfo* method);
#define List_1_Sort_m60260(__this, method) (( void (*) (List_1_t8553 *, const MethodInfo*))List_1_Sort_m60260_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m60261_gshared (List_1_t8553 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m60261(__this, ___comparer, method) (( void (*) (List_1_t8553 *, Object_t*, const MethodInfo*))List_1_Sort_m60261_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m60262_gshared (List_1_t8553 * __this, Comparison_1_t8563 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m60262(__this, ___comparison, method) (( void (*) (List_1_t8553 *, Comparison_1_t8563 *, const MethodInfo*))List_1_Sort_m60262_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8552* List_1_ToArray_m60263_gshared (List_1_t8553 * __this, const MethodInfo* method);
#define List_1_ToArray_m60263(__this, method) (( KeyValuePair_2U5BU5D_t8552* (*) (List_1_t8553 *, const MethodInfo*))List_1_ToArray_m60263_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::TrimExcess()
extern "C" void List_1_TrimExcess_m60264_gshared (List_1_t8553 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m60264(__this, method) (( void (*) (List_1_t8553 *, const MethodInfo*))List_1_TrimExcess_m60264_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m60265_gshared (List_1_t8553 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m60265(__this, method) (( int32_t (*) (List_1_t8553 *, const MethodInfo*))List_1_get_Capacity_m60265_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m60266_gshared (List_1_t8553 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m60266(__this, ___value, method) (( void (*) (List_1_t8553 *, int32_t, const MethodInfo*))List_1_set_Capacity_m60266_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Count()
extern "C" int32_t List_1_get_Count_m60267_gshared (List_1_t8553 * __this, const MethodInfo* method);
#define List_1_get_Count_m60267(__this, method) (( int32_t (*) (List_1_t8553 *, const MethodInfo*))List_1_get_Count_m60267_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7601  List_1_get_Item_m60268_gshared (List_1_t8553 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m60268(__this, ___index, method) (( KeyValuePair_2_t7601  (*) (List_1_t8553 *, int32_t, const MethodInfo*))List_1_get_Item_m60268_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m60269_gshared (List_1_t8553 * __this, int32_t ___index, KeyValuePair_2_t7601  ___value, const MethodInfo* method);
#define List_1_set_Item_m60269(__this, ___index, ___value, method) (( void (*) (List_1_t8553 *, int32_t, KeyValuePair_2_t7601 , const MethodInfo*))List_1_set_Item_m60269_gshared)(__this, ___index, ___value, method)
