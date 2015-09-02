#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct List_1_t7866;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerable_1_t7304;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t7865;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t7305;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ICollection_1_t9444;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ReadOnlyCollection_1_t7869;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Predicate_1_t7873;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IComparer_1_t9445;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Comparison_1_t7876;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_91.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor()
extern "C" void List_1__ctor_m54223_gshared (List_1_t7866 * __this, const MethodInfo* method);
#define List_1__ctor_m54223(__this, method) (( void (*) (List_1_t7866 *, const MethodInfo*))List_1__ctor_m54223_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m54224_gshared (List_1_t7866 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m54224(__this, ___collection, method) (( void (*) (List_1_t7866 *, Object_t*, const MethodInfo*))List_1__ctor_m54224_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m54225_gshared (List_1_t7866 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m54225(__this, ___capacity, method) (( void (*) (List_1_t7866 *, int32_t, const MethodInfo*))List_1__ctor_m54225_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m54226_gshared (List_1_t7866 * __this, KeyValuePair_2U5BU5D_t7865* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m54226(__this, ___data, ___size, method) (( void (*) (List_1_t7866 *, KeyValuePair_2U5BU5D_t7865*, int32_t, const MethodInfo*))List_1__ctor_m54226_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.cctor()
extern "C" void List_1__cctor_m54227_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m54227(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m54227_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54228_gshared (List_1_t7866 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54228(__this, method) (( Object_t* (*) (List_1_t7866 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54228_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m54229_gshared (List_1_t7866 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m54229(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7866 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m54229_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m54230_gshared (List_1_t7866 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m54230(__this, method) (( Object_t * (*) (List_1_t7866 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m54230_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m54231_gshared (List_1_t7866 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m54231(__this, ___item, method) (( int32_t (*) (List_1_t7866 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m54231_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m54232_gshared (List_1_t7866 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m54232(__this, ___item, method) (( bool (*) (List_1_t7866 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m54232_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m54233_gshared (List_1_t7866 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m54233(__this, ___item, method) (( int32_t (*) (List_1_t7866 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m54233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m54234_gshared (List_1_t7866 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m54234(__this, ___index, ___item, method) (( void (*) (List_1_t7866 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m54234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m54235_gshared (List_1_t7866 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m54235(__this, ___item, method) (( void (*) (List_1_t7866 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m54235_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54236_gshared (List_1_t7866 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54236(__this, method) (( bool (*) (List_1_t7866 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54236_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m54237_gshared (List_1_t7866 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m54237(__this, method) (( bool (*) (List_1_t7866 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m54237_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m54238_gshared (List_1_t7866 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m54238(__this, method) (( Object_t * (*) (List_1_t7866 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m54238_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m54239_gshared (List_1_t7866 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m54239(__this, method) (( bool (*) (List_1_t7866 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m54239_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m54240_gshared (List_1_t7866 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m54240(__this, method) (( bool (*) (List_1_t7866 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m54240_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m54241_gshared (List_1_t7866 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m54241(__this, ___index, method) (( Object_t * (*) (List_1_t7866 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m54241_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m54242_gshared (List_1_t7866 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m54242(__this, ___index, ___value, method) (( void (*) (List_1_t7866 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m54242_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Add(T)
extern "C" void List_1_Add_m54243_gshared (List_1_t7866 * __this, KeyValuePair_2_t7042  ___item, const MethodInfo* method);
#define List_1_Add_m54243(__this, ___item, method) (( void (*) (List_1_t7866 *, KeyValuePair_2_t7042 , const MethodInfo*))List_1_Add_m54243_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m54244_gshared (List_1_t7866 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m54244(__this, ___newCount, method) (( void (*) (List_1_t7866 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m54244_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m54245_gshared (List_1_t7866 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m54245(__this, ___idx, ___count, method) (( void (*) (List_1_t7866 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m54245_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m54246_gshared (List_1_t7866 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m54246(__this, ___collection, method) (( void (*) (List_1_t7866 *, Object_t*, const MethodInfo*))List_1_AddCollection_m54246_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m54247_gshared (List_1_t7866 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m54247(__this, ___enumerable, method) (( void (*) (List_1_t7866 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m54247_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m54248_gshared (List_1_t7866 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m54248(__this, ___collection, method) (( void (*) (List_1_t7866 *, Object_t*, const MethodInfo*))List_1_AddRange_m54248_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7869 * List_1_AsReadOnly_m54249_gshared (List_1_t7866 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m54249(__this, method) (( ReadOnlyCollection_1_t7869 * (*) (List_1_t7866 *, const MethodInfo*))List_1_AsReadOnly_m54249_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Clear()
extern "C" void List_1_Clear_m54250_gshared (List_1_t7866 * __this, const MethodInfo* method);
#define List_1_Clear_m54250(__this, method) (( void (*) (List_1_t7866 *, const MethodInfo*))List_1_Clear_m54250_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Contains(T)
extern "C" bool List_1_Contains_m54251_gshared (List_1_t7866 * __this, KeyValuePair_2_t7042  ___item, const MethodInfo* method);
#define List_1_Contains_m54251(__this, ___item, method) (( bool (*) (List_1_t7866 *, KeyValuePair_2_t7042 , const MethodInfo*))List_1_Contains_m54251_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m54252_gshared (List_1_t7866 * __this, KeyValuePair_2U5BU5D_t7865* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m54252(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7866 *, KeyValuePair_2U5BU5D_t7865*, int32_t, const MethodInfo*))List_1_CopyTo_m54252_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7042  List_1_Find_m54253_gshared (List_1_t7866 * __this, Predicate_1_t7873 * ___match, const MethodInfo* method);
#define List_1_Find_m54253(__this, ___match, method) (( KeyValuePair_2_t7042  (*) (List_1_t7866 *, Predicate_1_t7873 *, const MethodInfo*))List_1_Find_m54253_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m54254_gshared (Object_t * __this /* static, unused */, Predicate_1_t7873 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m54254(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7873 *, const MethodInfo*))List_1_CheckMatch_m54254_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m54255_gshared (List_1_t7866 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7873 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m54255(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7866 *, int32_t, int32_t, Predicate_1_t7873 *, const MethodInfo*))List_1_GetIndex_m54255_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetEnumerator()
extern "C" Enumerator_t7867  List_1_GetEnumerator_m54256_gshared (List_1_t7866 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m54256(__this, method) (( Enumerator_t7867  (*) (List_1_t7866 *, const MethodInfo*))List_1_GetEnumerator_m54256_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7866 * List_1_GetRange_m54257_gshared (List_1_t7866 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m54257(__this, ___index, ___count, method) (( List_1_t7866 * (*) (List_1_t7866 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m54257_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m54258_gshared (List_1_t7866 * __this, KeyValuePair_2_t7042  ___item, const MethodInfo* method);
#define List_1_IndexOf_m54258(__this, ___item, method) (( int32_t (*) (List_1_t7866 *, KeyValuePair_2_t7042 , const MethodInfo*))List_1_IndexOf_m54258_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m54259_gshared (List_1_t7866 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m54259(__this, ___start, ___delta, method) (( void (*) (List_1_t7866 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m54259_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m54260_gshared (List_1_t7866 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m54260(__this, ___index, method) (( void (*) (List_1_t7866 *, int32_t, const MethodInfo*))List_1_CheckIndex_m54260_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m54261_gshared (List_1_t7866 * __this, int32_t ___index, KeyValuePair_2_t7042  ___item, const MethodInfo* method);
#define List_1_Insert_m54261(__this, ___index, ___item, method) (( void (*) (List_1_t7866 *, int32_t, KeyValuePair_2_t7042 , const MethodInfo*))List_1_Insert_m54261_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m54262_gshared (List_1_t7866 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m54262(__this, ___collection, method) (( void (*) (List_1_t7866 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m54262_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m54263_gshared (List_1_t7866 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m54263(__this, ___index, ___collection, method) (( void (*) (List_1_t7866 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m54263_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m54264_gshared (List_1_t7866 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m54264(__this, ___index, ___collection, method) (( void (*) (List_1_t7866 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m54264_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m54265_gshared (List_1_t7866 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m54265(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7866 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m54265_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Remove(T)
extern "C" bool List_1_Remove_m54266_gshared (List_1_t7866 * __this, KeyValuePair_2_t7042  ___item, const MethodInfo* method);
#define List_1_Remove_m54266(__this, ___item, method) (( bool (*) (List_1_t7866 *, KeyValuePair_2_t7042 , const MethodInfo*))List_1_Remove_m54266_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m54267_gshared (List_1_t7866 * __this, Predicate_1_t7873 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m54267(__this, ___match, method) (( int32_t (*) (List_1_t7866 *, Predicate_1_t7873 *, const MethodInfo*))List_1_RemoveAll_m54267_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m54268_gshared (List_1_t7866 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m54268(__this, ___index, method) (( void (*) (List_1_t7866 *, int32_t, const MethodInfo*))List_1_RemoveAt_m54268_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m54269_gshared (List_1_t7866 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m54269(__this, ___index, ___count, method) (( void (*) (List_1_t7866 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m54269_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Reverse()
extern "C" void List_1_Reverse_m54270_gshared (List_1_t7866 * __this, const MethodInfo* method);
#define List_1_Reverse_m54270(__this, method) (( void (*) (List_1_t7866 *, const MethodInfo*))List_1_Reverse_m54270_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort()
extern "C" void List_1_Sort_m54271_gshared (List_1_t7866 * __this, const MethodInfo* method);
#define List_1_Sort_m54271(__this, method) (( void (*) (List_1_t7866 *, const MethodInfo*))List_1_Sort_m54271_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m54272_gshared (List_1_t7866 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m54272(__this, ___comparer, method) (( void (*) (List_1_t7866 *, Object_t*, const MethodInfo*))List_1_Sort_m54272_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m54273_gshared (List_1_t7866 * __this, Comparison_1_t7876 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m54273(__this, ___comparison, method) (( void (*) (List_1_t7866 *, Comparison_1_t7876 *, const MethodInfo*))List_1_Sort_m54273_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7865* List_1_ToArray_m54274_gshared (List_1_t7866 * __this, const MethodInfo* method);
#define List_1_ToArray_m54274(__this, method) (( KeyValuePair_2U5BU5D_t7865* (*) (List_1_t7866 *, const MethodInfo*))List_1_ToArray_m54274_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::TrimExcess()
extern "C" void List_1_TrimExcess_m54275_gshared (List_1_t7866 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m54275(__this, method) (( void (*) (List_1_t7866 *, const MethodInfo*))List_1_TrimExcess_m54275_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m54276_gshared (List_1_t7866 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m54276(__this, method) (( int32_t (*) (List_1_t7866 *, const MethodInfo*))List_1_get_Capacity_m54276_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m54277_gshared (List_1_t7866 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m54277(__this, ___value, method) (( void (*) (List_1_t7866 *, int32_t, const MethodInfo*))List_1_set_Capacity_m54277_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Count()
extern "C" int32_t List_1_get_Count_m54278_gshared (List_1_t7866 * __this, const MethodInfo* method);
#define List_1_get_Count_m54278(__this, method) (( int32_t (*) (List_1_t7866 *, const MethodInfo*))List_1_get_Count_m54278_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7042  List_1_get_Item_m54279_gshared (List_1_t7866 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m54279(__this, ___index, method) (( KeyValuePair_2_t7042  (*) (List_1_t7866 *, int32_t, const MethodInfo*))List_1_get_Item_m54279_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m54280_gshared (List_1_t7866 * __this, int32_t ___index, KeyValuePair_2_t7042  ___value, const MethodInfo* method);
#define List_1_set_Item_m54280(__this, ___index, ___value, method) (( void (*) (List_1_t7866 *, int32_t, KeyValuePair_2_t7042 , const MethodInfo*))List_1_set_Item_m54280_gshared)(__this, ___index, ___value, method)
