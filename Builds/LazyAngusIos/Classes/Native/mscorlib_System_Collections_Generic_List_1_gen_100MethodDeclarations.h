#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct List_1_t7593;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerable_1_t7261;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7592;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t7262;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct ICollection_1_t9421;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct ReadOnlyCollection_1_t7596;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Predicate_1_t7600;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IComparer_1_t9422;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Comparison_1_t7603;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_83.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C" void List_1__ctor_m50803_gshared (List_1_t7593 * __this, const MethodInfo* method);
#define List_1__ctor_m50803(__this, method) (( void (*) (List_1_t7593 *, const MethodInfo*))List_1__ctor_m50803_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m50804_gshared (List_1_t7593 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m50804(__this, ___collection, method) (( void (*) (List_1_t7593 *, Object_t*, const MethodInfo*))List_1__ctor_m50804_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m50805_gshared (List_1_t7593 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m50805(__this, ___capacity, method) (( void (*) (List_1_t7593 *, int32_t, const MethodInfo*))List_1__ctor_m50805_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m50806_gshared (List_1_t7593 * __this, KeyValuePair_2U5BU5D_t7592* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m50806(__this, ___data, ___size, method) (( void (*) (List_1_t7593 *, KeyValuePair_2U5BU5D_t7592*, int32_t, const MethodInfo*))List_1__ctor_m50806_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.cctor()
extern "C" void List_1__cctor_m50807_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m50807(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m50807_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50808_gshared (List_1_t7593 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50808(__this, method) (( Object_t* (*) (List_1_t7593 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50808_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m50809_gshared (List_1_t7593 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m50809(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7593 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m50809_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m50810_gshared (List_1_t7593 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m50810(__this, method) (( Object_t * (*) (List_1_t7593 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m50810_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m50811_gshared (List_1_t7593 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m50811(__this, ___item, method) (( int32_t (*) (List_1_t7593 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m50811_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m50812_gshared (List_1_t7593 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m50812(__this, ___item, method) (( bool (*) (List_1_t7593 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m50812_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m50813_gshared (List_1_t7593 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m50813(__this, ___item, method) (( int32_t (*) (List_1_t7593 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m50813_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m50814_gshared (List_1_t7593 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m50814(__this, ___index, ___item, method) (( void (*) (List_1_t7593 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m50814_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m50815_gshared (List_1_t7593 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m50815(__this, ___item, method) (( void (*) (List_1_t7593 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m50815_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50816_gshared (List_1_t7593 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50816(__this, method) (( bool (*) (List_1_t7593 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50816_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m50817_gshared (List_1_t7593 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m50817(__this, method) (( bool (*) (List_1_t7593 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m50817_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m50818_gshared (List_1_t7593 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m50818(__this, method) (( Object_t * (*) (List_1_t7593 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m50818_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m50819_gshared (List_1_t7593 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m50819(__this, method) (( bool (*) (List_1_t7593 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m50819_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m50820_gshared (List_1_t7593 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m50820(__this, method) (( bool (*) (List_1_t7593 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m50820_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m50821_gshared (List_1_t7593 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m50821(__this, ___index, method) (( Object_t * (*) (List_1_t7593 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m50821_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m50822_gshared (List_1_t7593 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m50822(__this, ___index, ___value, method) (( void (*) (List_1_t7593 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m50822_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Add(T)
extern "C" void List_1_Add_m50823_gshared (List_1_t7593 * __this, KeyValuePair_2_t5549  ___item, const MethodInfo* method);
#define List_1_Add_m50823(__this, ___item, method) (( void (*) (List_1_t7593 *, KeyValuePair_2_t5549 , const MethodInfo*))List_1_Add_m50823_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m50824_gshared (List_1_t7593 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m50824(__this, ___newCount, method) (( void (*) (List_1_t7593 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m50824_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m50825_gshared (List_1_t7593 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m50825(__this, ___idx, ___count, method) (( void (*) (List_1_t7593 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m50825_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m50826_gshared (List_1_t7593 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m50826(__this, ___collection, method) (( void (*) (List_1_t7593 *, Object_t*, const MethodInfo*))List_1_AddCollection_m50826_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m50827_gshared (List_1_t7593 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m50827(__this, ___enumerable, method) (( void (*) (List_1_t7593 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m50827_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m50828_gshared (List_1_t7593 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m50828(__this, ___collection, method) (( void (*) (List_1_t7593 *, Object_t*, const MethodInfo*))List_1_AddRange_m50828_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7596 * List_1_AsReadOnly_m50829_gshared (List_1_t7593 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m50829(__this, method) (( ReadOnlyCollection_1_t7596 * (*) (List_1_t7593 *, const MethodInfo*))List_1_AsReadOnly_m50829_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Clear()
extern "C" void List_1_Clear_m50830_gshared (List_1_t7593 * __this, const MethodInfo* method);
#define List_1_Clear_m50830(__this, method) (( void (*) (List_1_t7593 *, const MethodInfo*))List_1_Clear_m50830_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Contains(T)
extern "C" bool List_1_Contains_m50831_gshared (List_1_t7593 * __this, KeyValuePair_2_t5549  ___item, const MethodInfo* method);
#define List_1_Contains_m50831(__this, ___item, method) (( bool (*) (List_1_t7593 *, KeyValuePair_2_t5549 , const MethodInfo*))List_1_Contains_m50831_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m50832_gshared (List_1_t7593 * __this, KeyValuePair_2U5BU5D_t7592* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m50832(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7593 *, KeyValuePair_2U5BU5D_t7592*, int32_t, const MethodInfo*))List_1_CopyTo_m50832_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t5549  List_1_Find_m50833_gshared (List_1_t7593 * __this, Predicate_1_t7600 * ___match, const MethodInfo* method);
#define List_1_Find_m50833(__this, ___match, method) (( KeyValuePair_2_t5549  (*) (List_1_t7593 *, Predicate_1_t7600 *, const MethodInfo*))List_1_Find_m50833_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m50834_gshared (Object_t * __this /* static, unused */, Predicate_1_t7600 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m50834(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7600 *, const MethodInfo*))List_1_CheckMatch_m50834_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m50835_gshared (List_1_t7593 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7600 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m50835(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7593 *, int32_t, int32_t, Predicate_1_t7600 *, const MethodInfo*))List_1_GetIndex_m50835_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetEnumerator()
extern "C" Enumerator_t7594  List_1_GetEnumerator_m50836_gshared (List_1_t7593 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m50836(__this, method) (( Enumerator_t7594  (*) (List_1_t7593 *, const MethodInfo*))List_1_GetEnumerator_m50836_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7593 * List_1_GetRange_m50837_gshared (List_1_t7593 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m50837(__this, ___index, ___count, method) (( List_1_t7593 * (*) (List_1_t7593 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m50837_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m50838_gshared (List_1_t7593 * __this, KeyValuePair_2_t5549  ___item, const MethodInfo* method);
#define List_1_IndexOf_m50838(__this, ___item, method) (( int32_t (*) (List_1_t7593 *, KeyValuePair_2_t5549 , const MethodInfo*))List_1_IndexOf_m50838_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m50839_gshared (List_1_t7593 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m50839(__this, ___start, ___delta, method) (( void (*) (List_1_t7593 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m50839_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m50840_gshared (List_1_t7593 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m50840(__this, ___index, method) (( void (*) (List_1_t7593 *, int32_t, const MethodInfo*))List_1_CheckIndex_m50840_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m50841_gshared (List_1_t7593 * __this, int32_t ___index, KeyValuePair_2_t5549  ___item, const MethodInfo* method);
#define List_1_Insert_m50841(__this, ___index, ___item, method) (( void (*) (List_1_t7593 *, int32_t, KeyValuePair_2_t5549 , const MethodInfo*))List_1_Insert_m50841_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m50842_gshared (List_1_t7593 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m50842(__this, ___collection, method) (( void (*) (List_1_t7593 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m50842_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m50843_gshared (List_1_t7593 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m50843(__this, ___index, ___collection, method) (( void (*) (List_1_t7593 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m50843_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m50844_gshared (List_1_t7593 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m50844(__this, ___index, ___collection, method) (( void (*) (List_1_t7593 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m50844_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m50845_gshared (List_1_t7593 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m50845(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7593 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m50845_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Remove(T)
extern "C" bool List_1_Remove_m50846_gshared (List_1_t7593 * __this, KeyValuePair_2_t5549  ___item, const MethodInfo* method);
#define List_1_Remove_m50846(__this, ___item, method) (( bool (*) (List_1_t7593 *, KeyValuePair_2_t5549 , const MethodInfo*))List_1_Remove_m50846_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m50847_gshared (List_1_t7593 * __this, Predicate_1_t7600 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m50847(__this, ___match, method) (( int32_t (*) (List_1_t7593 *, Predicate_1_t7600 *, const MethodInfo*))List_1_RemoveAll_m50847_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m50848_gshared (List_1_t7593 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m50848(__this, ___index, method) (( void (*) (List_1_t7593 *, int32_t, const MethodInfo*))List_1_RemoveAt_m50848_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m50849_gshared (List_1_t7593 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m50849(__this, ___index, ___count, method) (( void (*) (List_1_t7593 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m50849_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Reverse()
extern "C" void List_1_Reverse_m50850_gshared (List_1_t7593 * __this, const MethodInfo* method);
#define List_1_Reverse_m50850(__this, method) (( void (*) (List_1_t7593 *, const MethodInfo*))List_1_Reverse_m50850_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort()
extern "C" void List_1_Sort_m50851_gshared (List_1_t7593 * __this, const MethodInfo* method);
#define List_1_Sort_m50851(__this, method) (( void (*) (List_1_t7593 *, const MethodInfo*))List_1_Sort_m50851_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m50852_gshared (List_1_t7593 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m50852(__this, ___comparer, method) (( void (*) (List_1_t7593 *, Object_t*, const MethodInfo*))List_1_Sort_m50852_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m50853_gshared (List_1_t7593 * __this, Comparison_1_t7603 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m50853(__this, ___comparison, method) (( void (*) (List_1_t7593 *, Comparison_1_t7603 *, const MethodInfo*))List_1_Sort_m50853_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7592* List_1_ToArray_m50854_gshared (List_1_t7593 * __this, const MethodInfo* method);
#define List_1_ToArray_m50854(__this, method) (( KeyValuePair_2U5BU5D_t7592* (*) (List_1_t7593 *, const MethodInfo*))List_1_ToArray_m50854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::TrimExcess()
extern "C" void List_1_TrimExcess_m50855_gshared (List_1_t7593 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m50855(__this, method) (( void (*) (List_1_t7593 *, const MethodInfo*))List_1_TrimExcess_m50855_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m50856_gshared (List_1_t7593 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m50856(__this, method) (( int32_t (*) (List_1_t7593 *, const MethodInfo*))List_1_get_Capacity_m50856_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m50857_gshared (List_1_t7593 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m50857(__this, ___value, method) (( void (*) (List_1_t7593 *, int32_t, const MethodInfo*))List_1_set_Capacity_m50857_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count()
extern "C" int32_t List_1_get_Count_m50858_gshared (List_1_t7593 * __this, const MethodInfo* method);
#define List_1_get_Count_m50858(__this, method) (( int32_t (*) (List_1_t7593 *, const MethodInfo*))List_1_get_Count_m50858_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t5549  List_1_get_Item_m50859_gshared (List_1_t7593 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m50859(__this, ___index, method) (( KeyValuePair_2_t5549  (*) (List_1_t7593 *, int32_t, const MethodInfo*))List_1_get_Item_m50859_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m50860_gshared (List_1_t7593 * __this, int32_t ___index, KeyValuePair_2_t5549  ___value, const MethodInfo* method);
#define List_1_set_Item_m50860(__this, ___index, ___value, method) (( void (*) (List_1_t7593 *, int32_t, KeyValuePair_2_t5549 , const MethodInfo*))List_1_set_Item_m50860_gshared)(__this, ___index, ___value, method)
