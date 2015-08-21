#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct List_1_t7756;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IEnumerable_1_t7262;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7755;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IEnumerator_1_t7263;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct ICollection_1_t9396;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct ReadOnlyCollection_1_t7759;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Predicate_1_t7763;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IComparer_1_t9397;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Comparison_1_t7766;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_87.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor()
extern "C" void List_1__ctor_m52769_gshared (List_1_t7756 * __this, const MethodInfo* method);
#define List_1__ctor_m52769(__this, method) (( void (*) (List_1_t7756 *, const MethodInfo*))List_1__ctor_m52769_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m52770_gshared (List_1_t7756 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m52770(__this, ___collection, method) (( void (*) (List_1_t7756 *, Object_t*, const MethodInfo*))List_1__ctor_m52770_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m52771_gshared (List_1_t7756 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m52771(__this, ___capacity, method) (( void (*) (List_1_t7756 *, int32_t, const MethodInfo*))List_1__ctor_m52771_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m52772_gshared (List_1_t7756 * __this, KeyValuePair_2U5BU5D_t7755* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m52772(__this, ___data, ___size, method) (( void (*) (List_1_t7756 *, KeyValuePair_2U5BU5D_t7755*, int32_t, const MethodInfo*))List_1__ctor_m52772_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.cctor()
extern "C" void List_1__cctor_m52773_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m52773(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m52773_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52774_gshared (List_1_t7756 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52774(__this, method) (( Object_t* (*) (List_1_t7756 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52774_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m52775_gshared (List_1_t7756 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m52775(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7756 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m52775_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m52776_gshared (List_1_t7756 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52776(__this, method) (( Object_t * (*) (List_1_t7756 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m52776_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m52777_gshared (List_1_t7756 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m52777(__this, ___item, method) (( int32_t (*) (List_1_t7756 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m52777_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m52778_gshared (List_1_t7756 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m52778(__this, ___item, method) (( bool (*) (List_1_t7756 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m52778_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m52779_gshared (List_1_t7756 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m52779(__this, ___item, method) (( int32_t (*) (List_1_t7756 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m52779_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m52780_gshared (List_1_t7756 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m52780(__this, ___index, ___item, method) (( void (*) (List_1_t7756 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m52780_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m52781_gshared (List_1_t7756 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m52781(__this, ___item, method) (( void (*) (List_1_t7756 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m52781_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52782_gshared (List_1_t7756 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52782(__this, method) (( bool (*) (List_1_t7756 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52782_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m52783_gshared (List_1_t7756 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52783(__this, method) (( bool (*) (List_1_t7756 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m52783_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m52784_gshared (List_1_t7756 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m52784(__this, method) (( Object_t * (*) (List_1_t7756 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m52784_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m52785_gshared (List_1_t7756 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m52785(__this, method) (( bool (*) (List_1_t7756 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m52785_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m52786_gshared (List_1_t7756 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m52786(__this, method) (( bool (*) (List_1_t7756 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m52786_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m52787_gshared (List_1_t7756 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m52787(__this, ___index, method) (( Object_t * (*) (List_1_t7756 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m52787_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m52788_gshared (List_1_t7756 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m52788(__this, ___index, ___value, method) (( void (*) (List_1_t7756 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m52788_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Add(T)
extern "C" void List_1_Add_m52789_gshared (List_1_t7756 * __this, KeyValuePair_2_t7258  ___item, const MethodInfo* method);
#define List_1_Add_m52789(__this, ___item, method) (( void (*) (List_1_t7756 *, KeyValuePair_2_t7258 , const MethodInfo*))List_1_Add_m52789_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m52790_gshared (List_1_t7756 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m52790(__this, ___newCount, method) (( void (*) (List_1_t7756 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m52790_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m52791_gshared (List_1_t7756 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m52791(__this, ___idx, ___count, method) (( void (*) (List_1_t7756 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m52791_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m52792_gshared (List_1_t7756 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m52792(__this, ___collection, method) (( void (*) (List_1_t7756 *, Object_t*, const MethodInfo*))List_1_AddCollection_m52792_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m52793_gshared (List_1_t7756 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m52793(__this, ___enumerable, method) (( void (*) (List_1_t7756 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m52793_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m52794_gshared (List_1_t7756 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m52794(__this, ___collection, method) (( void (*) (List_1_t7756 *, Object_t*, const MethodInfo*))List_1_AddRange_m52794_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7759 * List_1_AsReadOnly_m52795_gshared (List_1_t7756 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m52795(__this, method) (( ReadOnlyCollection_1_t7759 * (*) (List_1_t7756 *, const MethodInfo*))List_1_AsReadOnly_m52795_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Clear()
extern "C" void List_1_Clear_m52796_gshared (List_1_t7756 * __this, const MethodInfo* method);
#define List_1_Clear_m52796(__this, method) (( void (*) (List_1_t7756 *, const MethodInfo*))List_1_Clear_m52796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Contains(T)
extern "C" bool List_1_Contains_m52797_gshared (List_1_t7756 * __this, KeyValuePair_2_t7258  ___item, const MethodInfo* method);
#define List_1_Contains_m52797(__this, ___item, method) (( bool (*) (List_1_t7756 *, KeyValuePair_2_t7258 , const MethodInfo*))List_1_Contains_m52797_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m52798_gshared (List_1_t7756 * __this, KeyValuePair_2U5BU5D_t7755* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m52798(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7756 *, KeyValuePair_2U5BU5D_t7755*, int32_t, const MethodInfo*))List_1_CopyTo_m52798_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7258  List_1_Find_m52799_gshared (List_1_t7756 * __this, Predicate_1_t7763 * ___match, const MethodInfo* method);
#define List_1_Find_m52799(__this, ___match, method) (( KeyValuePair_2_t7258  (*) (List_1_t7756 *, Predicate_1_t7763 *, const MethodInfo*))List_1_Find_m52799_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m52800_gshared (Object_t * __this /* static, unused */, Predicate_1_t7763 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m52800(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7763 *, const MethodInfo*))List_1_CheckMatch_m52800_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m52801_gshared (List_1_t7756 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7763 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m52801(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7756 *, int32_t, int32_t, Predicate_1_t7763 *, const MethodInfo*))List_1_GetIndex_m52801_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetEnumerator()
extern "C" Enumerator_t7757  List_1_GetEnumerator_m52802_gshared (List_1_t7756 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m52802(__this, method) (( Enumerator_t7757  (*) (List_1_t7756 *, const MethodInfo*))List_1_GetEnumerator_m52802_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7756 * List_1_GetRange_m52803_gshared (List_1_t7756 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m52803(__this, ___index, ___count, method) (( List_1_t7756 * (*) (List_1_t7756 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m52803_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m52804_gshared (List_1_t7756 * __this, KeyValuePair_2_t7258  ___item, const MethodInfo* method);
#define List_1_IndexOf_m52804(__this, ___item, method) (( int32_t (*) (List_1_t7756 *, KeyValuePair_2_t7258 , const MethodInfo*))List_1_IndexOf_m52804_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m52805_gshared (List_1_t7756 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m52805(__this, ___start, ___delta, method) (( void (*) (List_1_t7756 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m52805_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m52806_gshared (List_1_t7756 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m52806(__this, ___index, method) (( void (*) (List_1_t7756 *, int32_t, const MethodInfo*))List_1_CheckIndex_m52806_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m52807_gshared (List_1_t7756 * __this, int32_t ___index, KeyValuePair_2_t7258  ___item, const MethodInfo* method);
#define List_1_Insert_m52807(__this, ___index, ___item, method) (( void (*) (List_1_t7756 *, int32_t, KeyValuePair_2_t7258 , const MethodInfo*))List_1_Insert_m52807_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m52808_gshared (List_1_t7756 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m52808(__this, ___collection, method) (( void (*) (List_1_t7756 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m52808_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m52809_gshared (List_1_t7756 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m52809(__this, ___index, ___collection, method) (( void (*) (List_1_t7756 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m52809_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m52810_gshared (List_1_t7756 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m52810(__this, ___index, ___collection, method) (( void (*) (List_1_t7756 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m52810_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m52811_gshared (List_1_t7756 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m52811(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7756 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m52811_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Remove(T)
extern "C" bool List_1_Remove_m52812_gshared (List_1_t7756 * __this, KeyValuePair_2_t7258  ___item, const MethodInfo* method);
#define List_1_Remove_m52812(__this, ___item, method) (( bool (*) (List_1_t7756 *, KeyValuePair_2_t7258 , const MethodInfo*))List_1_Remove_m52812_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m52813_gshared (List_1_t7756 * __this, Predicate_1_t7763 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m52813(__this, ___match, method) (( int32_t (*) (List_1_t7756 *, Predicate_1_t7763 *, const MethodInfo*))List_1_RemoveAll_m52813_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m52814_gshared (List_1_t7756 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m52814(__this, ___index, method) (( void (*) (List_1_t7756 *, int32_t, const MethodInfo*))List_1_RemoveAt_m52814_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m52815_gshared (List_1_t7756 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m52815(__this, ___index, ___count, method) (( void (*) (List_1_t7756 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m52815_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Reverse()
extern "C" void List_1_Reverse_m52816_gshared (List_1_t7756 * __this, const MethodInfo* method);
#define List_1_Reverse_m52816(__this, method) (( void (*) (List_1_t7756 *, const MethodInfo*))List_1_Reverse_m52816_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort()
extern "C" void List_1_Sort_m52817_gshared (List_1_t7756 * __this, const MethodInfo* method);
#define List_1_Sort_m52817(__this, method) (( void (*) (List_1_t7756 *, const MethodInfo*))List_1_Sort_m52817_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m52818_gshared (List_1_t7756 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m52818(__this, ___comparer, method) (( void (*) (List_1_t7756 *, Object_t*, const MethodInfo*))List_1_Sort_m52818_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m52819_gshared (List_1_t7756 * __this, Comparison_1_t7766 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m52819(__this, ___comparison, method) (( void (*) (List_1_t7756 *, Comparison_1_t7766 *, const MethodInfo*))List_1_Sort_m52819_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7755* List_1_ToArray_m52820_gshared (List_1_t7756 * __this, const MethodInfo* method);
#define List_1_ToArray_m52820(__this, method) (( KeyValuePair_2U5BU5D_t7755* (*) (List_1_t7756 *, const MethodInfo*))List_1_ToArray_m52820_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::TrimExcess()
extern "C" void List_1_TrimExcess_m52821_gshared (List_1_t7756 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m52821(__this, method) (( void (*) (List_1_t7756 *, const MethodInfo*))List_1_TrimExcess_m52821_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m52822_gshared (List_1_t7756 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m52822(__this, method) (( int32_t (*) (List_1_t7756 *, const MethodInfo*))List_1_get_Capacity_m52822_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m52823_gshared (List_1_t7756 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m52823(__this, ___value, method) (( void (*) (List_1_t7756 *, int32_t, const MethodInfo*))List_1_set_Capacity_m52823_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Count()
extern "C" int32_t List_1_get_Count_m52824_gshared (List_1_t7756 * __this, const MethodInfo* method);
#define List_1_get_Count_m52824(__this, method) (( int32_t (*) (List_1_t7756 *, const MethodInfo*))List_1_get_Count_m52824_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7258  List_1_get_Item_m52825_gshared (List_1_t7756 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m52825(__this, ___index, method) (( KeyValuePair_2_t7258  (*) (List_1_t7756 *, int32_t, const MethodInfo*))List_1_get_Item_m52825_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m52826_gshared (List_1_t7756 * __this, int32_t ___index, KeyValuePair_2_t7258  ___value, const MethodInfo* method);
#define List_1_set_Item_m52826(__this, ___index, ___value, method) (( void (*) (List_1_t7756 *, int32_t, KeyValuePair_2_t7258 , const MethodInfo*))List_1_set_Item_m52826_gshared)(__this, ___index, ___value, method)
