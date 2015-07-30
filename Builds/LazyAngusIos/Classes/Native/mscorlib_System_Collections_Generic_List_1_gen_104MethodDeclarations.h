#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct List_1_t7821;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerable_1_t7201;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t7820;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t7202;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct ICollection_1_t9308;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct ReadOnlyCollection_1_t7824;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Predicate_1_t7828;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IComparer_1_t9309;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Comparison_1_t7831;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_87.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor()
extern "C" void List_1__ctor_m53847_gshared (List_1_t7821 * __this, const MethodInfo* method);
#define List_1__ctor_m53847(__this, method) (( void (*) (List_1_t7821 *, const MethodInfo*))List_1__ctor_m53847_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m53848_gshared (List_1_t7821 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m53848(__this, ___collection, method) (( void (*) (List_1_t7821 *, Object_t*, const MethodInfo*))List_1__ctor_m53848_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m53849_gshared (List_1_t7821 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m53849(__this, ___capacity, method) (( void (*) (List_1_t7821 *, int32_t, const MethodInfo*))List_1__ctor_m53849_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m53850_gshared (List_1_t7821 * __this, KeyValuePair_2U5BU5D_t7820* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m53850(__this, ___data, ___size, method) (( void (*) (List_1_t7821 *, KeyValuePair_2U5BU5D_t7820*, int32_t, const MethodInfo*))List_1__ctor_m53850_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.cctor()
extern "C" void List_1__cctor_m53851_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m53851(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m53851_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53852_gshared (List_1_t7821 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53852(__this, method) (( Object_t* (*) (List_1_t7821 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53852_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m53853_gshared (List_1_t7821 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m53853(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7821 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m53853_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m53854_gshared (List_1_t7821 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m53854(__this, method) (( Object_t * (*) (List_1_t7821 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m53854_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m53855_gshared (List_1_t7821 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m53855(__this, ___item, method) (( int32_t (*) (List_1_t7821 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m53855_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m53856_gshared (List_1_t7821 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m53856(__this, ___item, method) (( bool (*) (List_1_t7821 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m53856_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m53857_gshared (List_1_t7821 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m53857(__this, ___item, method) (( int32_t (*) (List_1_t7821 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m53857_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m53858_gshared (List_1_t7821 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m53858(__this, ___index, ___item, method) (( void (*) (List_1_t7821 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m53858_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m53859_gshared (List_1_t7821 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m53859(__this, ___item, method) (( void (*) (List_1_t7821 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m53859_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53860_gshared (List_1_t7821 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53860(__this, method) (( bool (*) (List_1_t7821 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53860_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m53861_gshared (List_1_t7821 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m53861(__this, method) (( bool (*) (List_1_t7821 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m53861_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m53862_gshared (List_1_t7821 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m53862(__this, method) (( Object_t * (*) (List_1_t7821 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m53862_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m53863_gshared (List_1_t7821 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m53863(__this, method) (( bool (*) (List_1_t7821 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m53863_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m53864_gshared (List_1_t7821 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m53864(__this, method) (( bool (*) (List_1_t7821 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m53864_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m53865_gshared (List_1_t7821 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m53865(__this, ___index, method) (( Object_t * (*) (List_1_t7821 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m53865_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m53866_gshared (List_1_t7821 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m53866(__this, ___index, ___value, method) (( void (*) (List_1_t7821 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m53866_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Add(T)
extern "C" void List_1_Add_m53867_gshared (List_1_t7821 * __this, KeyValuePair_2_t6926  ___item, const MethodInfo* method);
#define List_1_Add_m53867(__this, ___item, method) (( void (*) (List_1_t7821 *, KeyValuePair_2_t6926 , const MethodInfo*))List_1_Add_m53867_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m53868_gshared (List_1_t7821 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m53868(__this, ___newCount, method) (( void (*) (List_1_t7821 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m53868_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m53869_gshared (List_1_t7821 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m53869(__this, ___idx, ___count, method) (( void (*) (List_1_t7821 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m53869_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m53870_gshared (List_1_t7821 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m53870(__this, ___collection, method) (( void (*) (List_1_t7821 *, Object_t*, const MethodInfo*))List_1_AddCollection_m53870_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m53871_gshared (List_1_t7821 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m53871(__this, ___enumerable, method) (( void (*) (List_1_t7821 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m53871_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m53872_gshared (List_1_t7821 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m53872(__this, ___collection, method) (( void (*) (List_1_t7821 *, Object_t*, const MethodInfo*))List_1_AddRange_m53872_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7824 * List_1_AsReadOnly_m53873_gshared (List_1_t7821 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m53873(__this, method) (( ReadOnlyCollection_1_t7824 * (*) (List_1_t7821 *, const MethodInfo*))List_1_AsReadOnly_m53873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Clear()
extern "C" void List_1_Clear_m53874_gshared (List_1_t7821 * __this, const MethodInfo* method);
#define List_1_Clear_m53874(__this, method) (( void (*) (List_1_t7821 *, const MethodInfo*))List_1_Clear_m53874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Contains(T)
extern "C" bool List_1_Contains_m53875_gshared (List_1_t7821 * __this, KeyValuePair_2_t6926  ___item, const MethodInfo* method);
#define List_1_Contains_m53875(__this, ___item, method) (( bool (*) (List_1_t7821 *, KeyValuePair_2_t6926 , const MethodInfo*))List_1_Contains_m53875_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m53876_gshared (List_1_t7821 * __this, KeyValuePair_2U5BU5D_t7820* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m53876(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7821 *, KeyValuePair_2U5BU5D_t7820*, int32_t, const MethodInfo*))List_1_CopyTo_m53876_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6926  List_1_Find_m53877_gshared (List_1_t7821 * __this, Predicate_1_t7828 * ___match, const MethodInfo* method);
#define List_1_Find_m53877(__this, ___match, method) (( KeyValuePair_2_t6926  (*) (List_1_t7821 *, Predicate_1_t7828 *, const MethodInfo*))List_1_Find_m53877_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m53878_gshared (Object_t * __this /* static, unused */, Predicate_1_t7828 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m53878(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7828 *, const MethodInfo*))List_1_CheckMatch_m53878_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m53879_gshared (List_1_t7821 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7828 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m53879(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7821 *, int32_t, int32_t, Predicate_1_t7828 *, const MethodInfo*))List_1_GetIndex_m53879_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetEnumerator()
extern "C" Enumerator_t7822  List_1_GetEnumerator_m53880_gshared (List_1_t7821 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m53880(__this, method) (( Enumerator_t7822  (*) (List_1_t7821 *, const MethodInfo*))List_1_GetEnumerator_m53880_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7821 * List_1_GetRange_m53881_gshared (List_1_t7821 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m53881(__this, ___index, ___count, method) (( List_1_t7821 * (*) (List_1_t7821 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m53881_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m53882_gshared (List_1_t7821 * __this, KeyValuePair_2_t6926  ___item, const MethodInfo* method);
#define List_1_IndexOf_m53882(__this, ___item, method) (( int32_t (*) (List_1_t7821 *, KeyValuePair_2_t6926 , const MethodInfo*))List_1_IndexOf_m53882_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m53883_gshared (List_1_t7821 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m53883(__this, ___start, ___delta, method) (( void (*) (List_1_t7821 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m53883_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m53884_gshared (List_1_t7821 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m53884(__this, ___index, method) (( void (*) (List_1_t7821 *, int32_t, const MethodInfo*))List_1_CheckIndex_m53884_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m53885_gshared (List_1_t7821 * __this, int32_t ___index, KeyValuePair_2_t6926  ___item, const MethodInfo* method);
#define List_1_Insert_m53885(__this, ___index, ___item, method) (( void (*) (List_1_t7821 *, int32_t, KeyValuePair_2_t6926 , const MethodInfo*))List_1_Insert_m53885_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m53886_gshared (List_1_t7821 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m53886(__this, ___collection, method) (( void (*) (List_1_t7821 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m53886_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m53887_gshared (List_1_t7821 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m53887(__this, ___index, ___collection, method) (( void (*) (List_1_t7821 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m53887_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m53888_gshared (List_1_t7821 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m53888(__this, ___index, ___collection, method) (( void (*) (List_1_t7821 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m53888_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m53889_gshared (List_1_t7821 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m53889(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7821 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m53889_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Remove(T)
extern "C" bool List_1_Remove_m53890_gshared (List_1_t7821 * __this, KeyValuePair_2_t6926  ___item, const MethodInfo* method);
#define List_1_Remove_m53890(__this, ___item, method) (( bool (*) (List_1_t7821 *, KeyValuePair_2_t6926 , const MethodInfo*))List_1_Remove_m53890_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m53891_gshared (List_1_t7821 * __this, Predicate_1_t7828 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m53891(__this, ___match, method) (( int32_t (*) (List_1_t7821 *, Predicate_1_t7828 *, const MethodInfo*))List_1_RemoveAll_m53891_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m53892_gshared (List_1_t7821 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m53892(__this, ___index, method) (( void (*) (List_1_t7821 *, int32_t, const MethodInfo*))List_1_RemoveAt_m53892_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m53893_gshared (List_1_t7821 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m53893(__this, ___index, ___count, method) (( void (*) (List_1_t7821 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m53893_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Reverse()
extern "C" void List_1_Reverse_m53894_gshared (List_1_t7821 * __this, const MethodInfo* method);
#define List_1_Reverse_m53894(__this, method) (( void (*) (List_1_t7821 *, const MethodInfo*))List_1_Reverse_m53894_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort()
extern "C" void List_1_Sort_m53895_gshared (List_1_t7821 * __this, const MethodInfo* method);
#define List_1_Sort_m53895(__this, method) (( void (*) (List_1_t7821 *, const MethodInfo*))List_1_Sort_m53895_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m53896_gshared (List_1_t7821 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m53896(__this, ___comparer, method) (( void (*) (List_1_t7821 *, Object_t*, const MethodInfo*))List_1_Sort_m53896_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m53897_gshared (List_1_t7821 * __this, Comparison_1_t7831 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m53897(__this, ___comparison, method) (( void (*) (List_1_t7821 *, Comparison_1_t7831 *, const MethodInfo*))List_1_Sort_m53897_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7820* List_1_ToArray_m53898_gshared (List_1_t7821 * __this, const MethodInfo* method);
#define List_1_ToArray_m53898(__this, method) (( KeyValuePair_2U5BU5D_t7820* (*) (List_1_t7821 *, const MethodInfo*))List_1_ToArray_m53898_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::TrimExcess()
extern "C" void List_1_TrimExcess_m53899_gshared (List_1_t7821 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m53899(__this, method) (( void (*) (List_1_t7821 *, const MethodInfo*))List_1_TrimExcess_m53899_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m53900_gshared (List_1_t7821 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m53900(__this, method) (( int32_t (*) (List_1_t7821 *, const MethodInfo*))List_1_get_Capacity_m53900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m53901_gshared (List_1_t7821 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m53901(__this, ___value, method) (( void (*) (List_1_t7821 *, int32_t, const MethodInfo*))List_1_set_Capacity_m53901_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Count()
extern "C" int32_t List_1_get_Count_m53902_gshared (List_1_t7821 * __this, const MethodInfo* method);
#define List_1_get_Count_m53902(__this, method) (( int32_t (*) (List_1_t7821 *, const MethodInfo*))List_1_get_Count_m53902_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6926  List_1_get_Item_m53903_gshared (List_1_t7821 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m53903(__this, ___index, method) (( KeyValuePair_2_t6926  (*) (List_1_t7821 *, int32_t, const MethodInfo*))List_1_get_Item_m53903_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m53904_gshared (List_1_t7821 * __this, int32_t ___index, KeyValuePair_2_t6926  ___value, const MethodInfo* method);
#define List_1_set_Item_m53904(__this, ___index, ___value, method) (( void (*) (List_1_t7821 *, int32_t, KeyValuePair_2_t6926 , const MethodInfo*))List_1_set_Item_m53904_gshared)(__this, ___index, ___value, method)
