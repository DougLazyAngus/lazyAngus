#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct List_1_t8329;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IEnumerable_1_t7835;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8328;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IEnumerator_1_t7836;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct ICollection_1_t10029;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct ReadOnlyCollection_1_t8332;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Predicate_1_t8336;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IComparer_1_t10030;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Comparison_1_t8339;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_90.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor()
extern "C" void List_1__ctor_m57421_gshared (List_1_t8329 * __this, const MethodInfo* method);
#define List_1__ctor_m57421(__this, method) (( void (*) (List_1_t8329 *, const MethodInfo*))List_1__ctor_m57421_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m57422_gshared (List_1_t8329 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m57422(__this, ___collection, method) (( void (*) (List_1_t8329 *, Object_t*, const MethodInfo*))List_1__ctor_m57422_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m57423_gshared (List_1_t8329 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m57423(__this, ___capacity, method) (( void (*) (List_1_t8329 *, int32_t, const MethodInfo*))List_1__ctor_m57423_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m57424_gshared (List_1_t8329 * __this, KeyValuePair_2U5BU5D_t8328* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m57424(__this, ___data, ___size, method) (( void (*) (List_1_t8329 *, KeyValuePair_2U5BU5D_t8328*, int32_t, const MethodInfo*))List_1__ctor_m57424_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.cctor()
extern "C" void List_1__cctor_m57425_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m57425(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m57425_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m57426_gshared (List_1_t8329 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m57426(__this, method) (( Object_t* (*) (List_1_t8329 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m57426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m57427_gshared (List_1_t8329 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m57427(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8329 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m57427_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m57428_gshared (List_1_t8329 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m57428(__this, method) (( Object_t * (*) (List_1_t8329 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m57428_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m57429_gshared (List_1_t8329 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m57429(__this, ___item, method) (( int32_t (*) (List_1_t8329 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m57429_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m57430_gshared (List_1_t8329 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m57430(__this, ___item, method) (( bool (*) (List_1_t8329 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m57430_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m57431_gshared (List_1_t8329 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m57431(__this, ___item, method) (( int32_t (*) (List_1_t8329 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m57431_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m57432_gshared (List_1_t8329 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m57432(__this, ___index, ___item, method) (( void (*) (List_1_t8329 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m57432_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m57433_gshared (List_1_t8329 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m57433(__this, ___item, method) (( void (*) (List_1_t8329 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m57433_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m57434_gshared (List_1_t8329 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m57434(__this, method) (( bool (*) (List_1_t8329 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m57434_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m57435_gshared (List_1_t8329 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m57435(__this, method) (( bool (*) (List_1_t8329 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m57435_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m57436_gshared (List_1_t8329 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m57436(__this, method) (( Object_t * (*) (List_1_t8329 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m57436_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m57437_gshared (List_1_t8329 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m57437(__this, method) (( bool (*) (List_1_t8329 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m57437_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m57438_gshared (List_1_t8329 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m57438(__this, method) (( bool (*) (List_1_t8329 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m57438_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m57439_gshared (List_1_t8329 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m57439(__this, ___index, method) (( Object_t * (*) (List_1_t8329 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m57439_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m57440_gshared (List_1_t8329 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m57440(__this, ___index, ___value, method) (( void (*) (List_1_t8329 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m57440_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Add(T)
extern "C" void List_1_Add_m57441_gshared (List_1_t8329 * __this, KeyValuePair_2_t7831  ___item, const MethodInfo* method);
#define List_1_Add_m57441(__this, ___item, method) (( void (*) (List_1_t8329 *, KeyValuePair_2_t7831 , const MethodInfo*))List_1_Add_m57441_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m57442_gshared (List_1_t8329 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m57442(__this, ___newCount, method) (( void (*) (List_1_t8329 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m57442_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m57443_gshared (List_1_t8329 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m57443(__this, ___idx, ___count, method) (( void (*) (List_1_t8329 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m57443_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m57444_gshared (List_1_t8329 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m57444(__this, ___collection, method) (( void (*) (List_1_t8329 *, Object_t*, const MethodInfo*))List_1_AddCollection_m57444_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m57445_gshared (List_1_t8329 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m57445(__this, ___enumerable, method) (( void (*) (List_1_t8329 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m57445_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m57446_gshared (List_1_t8329 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m57446(__this, ___collection, method) (( void (*) (List_1_t8329 *, Object_t*, const MethodInfo*))List_1_AddRange_m57446_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8332 * List_1_AsReadOnly_m57447_gshared (List_1_t8329 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m57447(__this, method) (( ReadOnlyCollection_1_t8332 * (*) (List_1_t8329 *, const MethodInfo*))List_1_AsReadOnly_m57447_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Clear()
extern "C" void List_1_Clear_m57448_gshared (List_1_t8329 * __this, const MethodInfo* method);
#define List_1_Clear_m57448(__this, method) (( void (*) (List_1_t8329 *, const MethodInfo*))List_1_Clear_m57448_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Contains(T)
extern "C" bool List_1_Contains_m57449_gshared (List_1_t8329 * __this, KeyValuePair_2_t7831  ___item, const MethodInfo* method);
#define List_1_Contains_m57449(__this, ___item, method) (( bool (*) (List_1_t8329 *, KeyValuePair_2_t7831 , const MethodInfo*))List_1_Contains_m57449_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m57450_gshared (List_1_t8329 * __this, KeyValuePair_2U5BU5D_t8328* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m57450(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8329 *, KeyValuePair_2U5BU5D_t8328*, int32_t, const MethodInfo*))List_1_CopyTo_m57450_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7831  List_1_Find_m57451_gshared (List_1_t8329 * __this, Predicate_1_t8336 * ___match, const MethodInfo* method);
#define List_1_Find_m57451(__this, ___match, method) (( KeyValuePair_2_t7831  (*) (List_1_t8329 *, Predicate_1_t8336 *, const MethodInfo*))List_1_Find_m57451_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m57452_gshared (Object_t * __this /* static, unused */, Predicate_1_t8336 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m57452(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8336 *, const MethodInfo*))List_1_CheckMatch_m57452_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m57453_gshared (List_1_t8329 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8336 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m57453(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8329 *, int32_t, int32_t, Predicate_1_t8336 *, const MethodInfo*))List_1_GetIndex_m57453_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetEnumerator()
extern "C" Enumerator_t8330  List_1_GetEnumerator_m57454_gshared (List_1_t8329 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m57454(__this, method) (( Enumerator_t8330  (*) (List_1_t8329 *, const MethodInfo*))List_1_GetEnumerator_m57454_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8329 * List_1_GetRange_m57455_gshared (List_1_t8329 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m57455(__this, ___index, ___count, method) (( List_1_t8329 * (*) (List_1_t8329 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m57455_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m57456_gshared (List_1_t8329 * __this, KeyValuePair_2_t7831  ___item, const MethodInfo* method);
#define List_1_IndexOf_m57456(__this, ___item, method) (( int32_t (*) (List_1_t8329 *, KeyValuePair_2_t7831 , const MethodInfo*))List_1_IndexOf_m57456_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m57457_gshared (List_1_t8329 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m57457(__this, ___start, ___delta, method) (( void (*) (List_1_t8329 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m57457_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m57458_gshared (List_1_t8329 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m57458(__this, ___index, method) (( void (*) (List_1_t8329 *, int32_t, const MethodInfo*))List_1_CheckIndex_m57458_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m57459_gshared (List_1_t8329 * __this, int32_t ___index, KeyValuePair_2_t7831  ___item, const MethodInfo* method);
#define List_1_Insert_m57459(__this, ___index, ___item, method) (( void (*) (List_1_t8329 *, int32_t, KeyValuePair_2_t7831 , const MethodInfo*))List_1_Insert_m57459_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m57460_gshared (List_1_t8329 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m57460(__this, ___collection, method) (( void (*) (List_1_t8329 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m57460_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m57461_gshared (List_1_t8329 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m57461(__this, ___index, ___collection, method) (( void (*) (List_1_t8329 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m57461_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m57462_gshared (List_1_t8329 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m57462(__this, ___index, ___collection, method) (( void (*) (List_1_t8329 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m57462_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m57463_gshared (List_1_t8329 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m57463(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8329 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m57463_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Remove(T)
extern "C" bool List_1_Remove_m57464_gshared (List_1_t8329 * __this, KeyValuePair_2_t7831  ___item, const MethodInfo* method);
#define List_1_Remove_m57464(__this, ___item, method) (( bool (*) (List_1_t8329 *, KeyValuePair_2_t7831 , const MethodInfo*))List_1_Remove_m57464_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m57465_gshared (List_1_t8329 * __this, Predicate_1_t8336 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m57465(__this, ___match, method) (( int32_t (*) (List_1_t8329 *, Predicate_1_t8336 *, const MethodInfo*))List_1_RemoveAll_m57465_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m57466_gshared (List_1_t8329 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m57466(__this, ___index, method) (( void (*) (List_1_t8329 *, int32_t, const MethodInfo*))List_1_RemoveAt_m57466_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m57467_gshared (List_1_t8329 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m57467(__this, ___index, ___count, method) (( void (*) (List_1_t8329 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m57467_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Reverse()
extern "C" void List_1_Reverse_m57468_gshared (List_1_t8329 * __this, const MethodInfo* method);
#define List_1_Reverse_m57468(__this, method) (( void (*) (List_1_t8329 *, const MethodInfo*))List_1_Reverse_m57468_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort()
extern "C" void List_1_Sort_m57469_gshared (List_1_t8329 * __this, const MethodInfo* method);
#define List_1_Sort_m57469(__this, method) (( void (*) (List_1_t8329 *, const MethodInfo*))List_1_Sort_m57469_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m57470_gshared (List_1_t8329 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m57470(__this, ___comparer, method) (( void (*) (List_1_t8329 *, Object_t*, const MethodInfo*))List_1_Sort_m57470_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m57471_gshared (List_1_t8329 * __this, Comparison_1_t8339 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m57471(__this, ___comparison, method) (( void (*) (List_1_t8329 *, Comparison_1_t8339 *, const MethodInfo*))List_1_Sort_m57471_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8328* List_1_ToArray_m57472_gshared (List_1_t8329 * __this, const MethodInfo* method);
#define List_1_ToArray_m57472(__this, method) (( KeyValuePair_2U5BU5D_t8328* (*) (List_1_t8329 *, const MethodInfo*))List_1_ToArray_m57472_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::TrimExcess()
extern "C" void List_1_TrimExcess_m57473_gshared (List_1_t8329 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m57473(__this, method) (( void (*) (List_1_t8329 *, const MethodInfo*))List_1_TrimExcess_m57473_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m57474_gshared (List_1_t8329 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m57474(__this, method) (( int32_t (*) (List_1_t8329 *, const MethodInfo*))List_1_get_Capacity_m57474_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m57475_gshared (List_1_t8329 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m57475(__this, ___value, method) (( void (*) (List_1_t8329 *, int32_t, const MethodInfo*))List_1_set_Capacity_m57475_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Count()
extern "C" int32_t List_1_get_Count_m57476_gshared (List_1_t8329 * __this, const MethodInfo* method);
#define List_1_get_Count_m57476(__this, method) (( int32_t (*) (List_1_t8329 *, const MethodInfo*))List_1_get_Count_m57476_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7831  List_1_get_Item_m57477_gshared (List_1_t8329 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m57477(__this, ___index, method) (( KeyValuePair_2_t7831  (*) (List_1_t8329 *, int32_t, const MethodInfo*))List_1_get_Item_m57477_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m57478_gshared (List_1_t8329 * __this, int32_t ___index, KeyValuePair_2_t7831  ___value, const MethodInfo* method);
#define List_1_set_Item_m57478(__this, ___index, ___value, method) (( void (*) (List_1_t8329 *, int32_t, KeyValuePair_2_t7831 , const MethodInfo*))List_1_set_Item_m57478_gshared)(__this, ___index, ___value, method)
