#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t4065;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t41;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3354;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t4551;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t4068;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3951;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t4070;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t4598;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t4073;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_52.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m27694_gshared (List_1_t4065 * __this, const MethodInfo* method);
#define List_1__ctor_m27694(__this, method) (( void (*) (List_1_t4065 *, const MethodInfo*))List_1__ctor_m27694_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m27696_gshared (List_1_t4065 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m27696(__this, ___collection, method) (( void (*) (List_1_t4065 *, Object_t*, const MethodInfo*))List_1__ctor_m27696_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m27698_gshared (List_1_t4065 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m27698(__this, ___capacity, method) (( void (*) (List_1_t4065 *, int32_t, const MethodInfo*))List_1__ctor_m27698_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m27700_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m27700(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m27700_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27701_gshared (List_1_t4065 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27701(__this, method) (( Object_t* (*) (List_1_t4065 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27701_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m27702_gshared (List_1_t4065 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m27702(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4065 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m27702_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m27703_gshared (List_1_t4065 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27703(__this, method) (( Object_t * (*) (List_1_t4065 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m27703_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m27704_gshared (List_1_t4065 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m27704(__this, ___item, method) (( int32_t (*) (List_1_t4065 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m27704_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m27705_gshared (List_1_t4065 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m27705(__this, ___item, method) (( bool (*) (List_1_t4065 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m27705_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m27706_gshared (List_1_t4065 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m27706(__this, ___item, method) (( int32_t (*) (List_1_t4065 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m27706_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m27707_gshared (List_1_t4065 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m27707(__this, ___index, ___item, method) (( void (*) (List_1_t4065 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m27707_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m27708_gshared (List_1_t4065 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m27708(__this, ___item, method) (( void (*) (List_1_t4065 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m27708_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27709_gshared (List_1_t4065 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27709(__this, method) (( bool (*) (List_1_t4065 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27709_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m27710_gshared (List_1_t4065 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27710(__this, method) (( bool (*) (List_1_t4065 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m27710_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m27711_gshared (List_1_t4065 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m27711(__this, method) (( Object_t * (*) (List_1_t4065 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m27711_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m27712_gshared (List_1_t4065 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m27712(__this, method) (( bool (*) (List_1_t4065 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m27712_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m27713_gshared (List_1_t4065 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m27713(__this, method) (( bool (*) (List_1_t4065 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m27713_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m27714_gshared (List_1_t4065 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m27714(__this, ___index, method) (( Object_t * (*) (List_1_t4065 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m27714_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m27715_gshared (List_1_t4065 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m27715(__this, ___index, ___value, method) (( void (*) (List_1_t4065 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m27715_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m27716_gshared (List_1_t4065 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Add_m27716(__this, ___item, method) (( void (*) (List_1_t4065 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_Add_m27716_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m27718_gshared (List_1_t4065 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m27718(__this, ___newCount, method) (( void (*) (List_1_t4065 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m27718_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m27720_gshared (List_1_t4065 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m27720(__this, ___collection, method) (( void (*) (List_1_t4065 *, Object_t*, const MethodInfo*))List_1_AddCollection_m27720_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m27722_gshared (List_1_t4065 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m27722(__this, ___enumerable, method) (( void (*) (List_1_t4065 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m27722_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m27724_gshared (List_1_t4065 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m27724(__this, ___collection, method) (( void (*) (List_1_t4065 *, Object_t*, const MethodInfo*))List_1_AddRange_m27724_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t4068 * List_1_AsReadOnly_m27726_gshared (List_1_t4065 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m27726(__this, method) (( ReadOnlyCollection_1_t4068 * (*) (List_1_t4065 *, const MethodInfo*))List_1_AsReadOnly_m27726_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m27727_gshared (List_1_t4065 * __this, const MethodInfo* method);
#define List_1_Clear_m27727(__this, method) (( void (*) (List_1_t4065 *, const MethodInfo*))List_1_Clear_m27727_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m27728_gshared (List_1_t4065 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Contains_m27728(__this, ___item, method) (( bool (*) (List_1_t4065 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_Contains_m27728_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m27729_gshared (List_1_t4065 * __this, KeyValuePair_2U5BU5D_t3951* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m27729(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4065 *, KeyValuePair_2U5BU5D_t3951*, int32_t, const MethodInfo*))List_1_CopyTo_m27729_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t40  List_1_Find_m27731_gshared (List_1_t4065 * __this, Predicate_1_t4070 * ___match, const MethodInfo* method);
#define List_1_Find_m27731(__this, ___match, method) (( KeyValuePair_2_t40  (*) (List_1_t4065 *, Predicate_1_t4070 *, const MethodInfo*))List_1_Find_m27731_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m27733_gshared (Object_t * __this /* static, unused */, Predicate_1_t4070 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m27733(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4070 *, const MethodInfo*))List_1_CheckMatch_m27733_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m27735_gshared (List_1_t4065 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4070 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m27735(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t4065 *, int32_t, int32_t, Predicate_1_t4070 *, const MethodInfo*))List_1_GetIndex_m27735_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t4066  List_1_GetEnumerator_m27736_gshared (List_1_t4065 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m27736(__this, method) (( Enumerator_t4066  (*) (List_1_t4065 *, const MethodInfo*))List_1_GetEnumerator_m27736_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m27737_gshared (List_1_t4065 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_IndexOf_m27737(__this, ___item, method) (( int32_t (*) (List_1_t4065 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_IndexOf_m27737_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m27739_gshared (List_1_t4065 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m27739(__this, ___start, ___delta, method) (( void (*) (List_1_t4065 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m27739_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m27741_gshared (List_1_t4065 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m27741(__this, ___index, method) (( void (*) (List_1_t4065 *, int32_t, const MethodInfo*))List_1_CheckIndex_m27741_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m27742_gshared (List_1_t4065 * __this, int32_t ___index, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Insert_m27742(__this, ___index, ___item, method) (( void (*) (List_1_t4065 *, int32_t, KeyValuePair_2_t40 , const MethodInfo*))List_1_Insert_m27742_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m27744_gshared (List_1_t4065 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m27744(__this, ___collection, method) (( void (*) (List_1_t4065 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m27744_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m27745_gshared (List_1_t4065 * __this, KeyValuePair_2_t40  ___item, const MethodInfo* method);
#define List_1_Remove_m27745(__this, ___item, method) (( bool (*) (List_1_t4065 *, KeyValuePair_2_t40 , const MethodInfo*))List_1_Remove_m27745_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m27747_gshared (List_1_t4065 * __this, Predicate_1_t4070 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m27747(__this, ___match, method) (( int32_t (*) (List_1_t4065 *, Predicate_1_t4070 *, const MethodInfo*))List_1_RemoveAll_m27747_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m27748_gshared (List_1_t4065 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m27748(__this, ___index, method) (( void (*) (List_1_t4065 *, int32_t, const MethodInfo*))List_1_RemoveAt_m27748_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m27750_gshared (List_1_t4065 * __this, const MethodInfo* method);
#define List_1_Reverse_m27750(__this, method) (( void (*) (List_1_t4065 *, const MethodInfo*))List_1_Reverse_m27750_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m27752_gshared (List_1_t4065 * __this, const MethodInfo* method);
#define List_1_Sort_m27752(__this, method) (( void (*) (List_1_t4065 *, const MethodInfo*))List_1_Sort_m27752_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m27754_gshared (List_1_t4065 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m27754(__this, ___comparer, method) (( void (*) (List_1_t4065 *, Object_t*, const MethodInfo*))List_1_Sort_m27754_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m27756_gshared (List_1_t4065 * __this, Comparison_1_t4073 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m27756(__this, ___comparison, method) (( void (*) (List_1_t4065 *, Comparison_1_t4073 *, const MethodInfo*))List_1_Sort_m27756_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t3951* List_1_ToArray_m27758_gshared (List_1_t4065 * __this, const MethodInfo* method);
#define List_1_ToArray_m27758(__this, method) (( KeyValuePair_2U5BU5D_t3951* (*) (List_1_t4065 *, const MethodInfo*))List_1_ToArray_m27758_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m27760_gshared (List_1_t4065 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m27760(__this, method) (( void (*) (List_1_t4065 *, const MethodInfo*))List_1_TrimExcess_m27760_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m27762_gshared (List_1_t4065 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m27762(__this, method) (( int32_t (*) (List_1_t4065 *, const MethodInfo*))List_1_get_Capacity_m27762_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m27764_gshared (List_1_t4065 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m27764(__this, ___value, method) (( void (*) (List_1_t4065 *, int32_t, const MethodInfo*))List_1_set_Capacity_m27764_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m27765_gshared (List_1_t4065 * __this, const MethodInfo* method);
#define List_1_get_Count_m27765(__this, method) (( int32_t (*) (List_1_t4065 *, const MethodInfo*))List_1_get_Count_m27765_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t40  List_1_get_Item_m27766_gshared (List_1_t4065 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m27766(__this, ___index, method) (( KeyValuePair_2_t40  (*) (List_1_t4065 *, int32_t, const MethodInfo*))List_1_get_Item_m27766_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m27767_gshared (List_1_t4065 * __this, int32_t ___index, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define List_1_set_Item_m27767(__this, ___index, ___value, method) (( void (*) (List_1_t4065 *, int32_t, KeyValuePair_2_t40 , const MethodInfo*))List_1_set_Item_m27767_gshared)(__this, ___index, ___value, method)
