#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct List_1_t7895;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerable_1_t7886;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7894;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t7887;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ICollection_1_t9313;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ReadOnlyCollection_1_t7898;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Predicate_1_t7902;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IComparer_1_t9314;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Comparison_1_t7905;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_89.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor()
extern "C" void List_1__ctor_m54715_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1__ctor_m54715(__this, method) (( void (*) (List_1_t7895 *, const MethodInfo*))List_1__ctor_m54715_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m54716_gshared (List_1_t7895 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m54716(__this, ___collection, method) (( void (*) (List_1_t7895 *, Object_t*, const MethodInfo*))List_1__ctor_m54716_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m54717_gshared (List_1_t7895 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m54717(__this, ___capacity, method) (( void (*) (List_1_t7895 *, int32_t, const MethodInfo*))List_1__ctor_m54717_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m54718_gshared (List_1_t7895 * __this, KeyValuePair_2U5BU5D_t7894* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m54718(__this, ___data, ___size, method) (( void (*) (List_1_t7895 *, KeyValuePair_2U5BU5D_t7894*, int32_t, const MethodInfo*))List_1__ctor_m54718_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.cctor()
extern "C" void List_1__cctor_m54719_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m54719(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m54719_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54720_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54720(__this, method) (( Object_t* (*) (List_1_t7895 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54720_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m54721_gshared (List_1_t7895 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m54721(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7895 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m54721_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m54722_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m54722(__this, method) (( Object_t * (*) (List_1_t7895 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m54722_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m54723_gshared (List_1_t7895 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m54723(__this, ___item, method) (( int32_t (*) (List_1_t7895 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m54723_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m54724_gshared (List_1_t7895 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m54724(__this, ___item, method) (( bool (*) (List_1_t7895 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m54724_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m54725_gshared (List_1_t7895 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m54725(__this, ___item, method) (( int32_t (*) (List_1_t7895 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m54725_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m54726_gshared (List_1_t7895 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m54726(__this, ___index, ___item, method) (( void (*) (List_1_t7895 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m54726_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m54727_gshared (List_1_t7895 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m54727(__this, ___item, method) (( void (*) (List_1_t7895 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m54727_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54728_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54728(__this, method) (( bool (*) (List_1_t7895 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54728_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m54729_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m54729(__this, method) (( bool (*) (List_1_t7895 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m54729_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m54730_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m54730(__this, method) (( Object_t * (*) (List_1_t7895 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m54730_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m54731_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m54731(__this, method) (( bool (*) (List_1_t7895 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m54731_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m54732_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m54732(__this, method) (( bool (*) (List_1_t7895 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m54732_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m54733_gshared (List_1_t7895 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m54733(__this, ___index, method) (( Object_t * (*) (List_1_t7895 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m54733_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m54734_gshared (List_1_t7895 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m54734(__this, ___index, ___value, method) (( void (*) (List_1_t7895 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m54734_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Add(T)
extern "C" void List_1_Add_m54735_gshared (List_1_t7895 * __this, KeyValuePair_2_t6943  ___item, const MethodInfo* method);
#define List_1_Add_m54735(__this, ___item, method) (( void (*) (List_1_t7895 *, KeyValuePair_2_t6943 , const MethodInfo*))List_1_Add_m54735_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m54736_gshared (List_1_t7895 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m54736(__this, ___newCount, method) (( void (*) (List_1_t7895 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m54736_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m54737_gshared (List_1_t7895 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m54737(__this, ___idx, ___count, method) (( void (*) (List_1_t7895 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m54737_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m54738_gshared (List_1_t7895 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m54738(__this, ___collection, method) (( void (*) (List_1_t7895 *, Object_t*, const MethodInfo*))List_1_AddCollection_m54738_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m54739_gshared (List_1_t7895 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m54739(__this, ___enumerable, method) (( void (*) (List_1_t7895 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m54739_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m54740_gshared (List_1_t7895 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m54740(__this, ___collection, method) (( void (*) (List_1_t7895 *, Object_t*, const MethodInfo*))List_1_AddRange_m54740_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7898 * List_1_AsReadOnly_m54741_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m54741(__this, method) (( ReadOnlyCollection_1_t7898 * (*) (List_1_t7895 *, const MethodInfo*))List_1_AsReadOnly_m54741_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Clear()
extern "C" void List_1_Clear_m54742_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_Clear_m54742(__this, method) (( void (*) (List_1_t7895 *, const MethodInfo*))List_1_Clear_m54742_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Contains(T)
extern "C" bool List_1_Contains_m54743_gshared (List_1_t7895 * __this, KeyValuePair_2_t6943  ___item, const MethodInfo* method);
#define List_1_Contains_m54743(__this, ___item, method) (( bool (*) (List_1_t7895 *, KeyValuePair_2_t6943 , const MethodInfo*))List_1_Contains_m54743_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m54744_gshared (List_1_t7895 * __this, KeyValuePair_2U5BU5D_t7894* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m54744(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7895 *, KeyValuePair_2U5BU5D_t7894*, int32_t, const MethodInfo*))List_1_CopyTo_m54744_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6943  List_1_Find_m54745_gshared (List_1_t7895 * __this, Predicate_1_t7902 * ___match, const MethodInfo* method);
#define List_1_Find_m54745(__this, ___match, method) (( KeyValuePair_2_t6943  (*) (List_1_t7895 *, Predicate_1_t7902 *, const MethodInfo*))List_1_Find_m54745_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m54746_gshared (Object_t * __this /* static, unused */, Predicate_1_t7902 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m54746(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7902 *, const MethodInfo*))List_1_CheckMatch_m54746_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m54747_gshared (List_1_t7895 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7902 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m54747(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7895 *, int32_t, int32_t, Predicate_1_t7902 *, const MethodInfo*))List_1_GetIndex_m54747_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetEnumerator()
extern "C" Enumerator_t7896  List_1_GetEnumerator_m54748_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m54748(__this, method) (( Enumerator_t7896  (*) (List_1_t7895 *, const MethodInfo*))List_1_GetEnumerator_m54748_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7895 * List_1_GetRange_m54749_gshared (List_1_t7895 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m54749(__this, ___index, ___count, method) (( List_1_t7895 * (*) (List_1_t7895 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m54749_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m54750_gshared (List_1_t7895 * __this, KeyValuePair_2_t6943  ___item, const MethodInfo* method);
#define List_1_IndexOf_m54750(__this, ___item, method) (( int32_t (*) (List_1_t7895 *, KeyValuePair_2_t6943 , const MethodInfo*))List_1_IndexOf_m54750_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m54751_gshared (List_1_t7895 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m54751(__this, ___start, ___delta, method) (( void (*) (List_1_t7895 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m54751_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m54752_gshared (List_1_t7895 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m54752(__this, ___index, method) (( void (*) (List_1_t7895 *, int32_t, const MethodInfo*))List_1_CheckIndex_m54752_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m54753_gshared (List_1_t7895 * __this, int32_t ___index, KeyValuePair_2_t6943  ___item, const MethodInfo* method);
#define List_1_Insert_m54753(__this, ___index, ___item, method) (( void (*) (List_1_t7895 *, int32_t, KeyValuePair_2_t6943 , const MethodInfo*))List_1_Insert_m54753_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m54754_gshared (List_1_t7895 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m54754(__this, ___collection, method) (( void (*) (List_1_t7895 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m54754_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m54755_gshared (List_1_t7895 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m54755(__this, ___index, ___collection, method) (( void (*) (List_1_t7895 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m54755_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m54756_gshared (List_1_t7895 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m54756(__this, ___index, ___collection, method) (( void (*) (List_1_t7895 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m54756_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m54757_gshared (List_1_t7895 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m54757(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7895 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m54757_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Remove(T)
extern "C" bool List_1_Remove_m54758_gshared (List_1_t7895 * __this, KeyValuePair_2_t6943  ___item, const MethodInfo* method);
#define List_1_Remove_m54758(__this, ___item, method) (( bool (*) (List_1_t7895 *, KeyValuePair_2_t6943 , const MethodInfo*))List_1_Remove_m54758_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m54759_gshared (List_1_t7895 * __this, Predicate_1_t7902 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m54759(__this, ___match, method) (( int32_t (*) (List_1_t7895 *, Predicate_1_t7902 *, const MethodInfo*))List_1_RemoveAll_m54759_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m54760_gshared (List_1_t7895 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m54760(__this, ___index, method) (( void (*) (List_1_t7895 *, int32_t, const MethodInfo*))List_1_RemoveAt_m54760_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m54761_gshared (List_1_t7895 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m54761(__this, ___index, ___count, method) (( void (*) (List_1_t7895 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m54761_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Reverse()
extern "C" void List_1_Reverse_m54762_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_Reverse_m54762(__this, method) (( void (*) (List_1_t7895 *, const MethodInfo*))List_1_Reverse_m54762_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort()
extern "C" void List_1_Sort_m54763_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_Sort_m54763(__this, method) (( void (*) (List_1_t7895 *, const MethodInfo*))List_1_Sort_m54763_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m54764_gshared (List_1_t7895 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m54764(__this, ___comparer, method) (( void (*) (List_1_t7895 *, Object_t*, const MethodInfo*))List_1_Sort_m54764_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m54765_gshared (List_1_t7895 * __this, Comparison_1_t7905 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m54765(__this, ___comparison, method) (( void (*) (List_1_t7895 *, Comparison_1_t7905 *, const MethodInfo*))List_1_Sort_m54765_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7894* List_1_ToArray_m54766_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_ToArray_m54766(__this, method) (( KeyValuePair_2U5BU5D_t7894* (*) (List_1_t7895 *, const MethodInfo*))List_1_ToArray_m54766_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::TrimExcess()
extern "C" void List_1_TrimExcess_m54767_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m54767(__this, method) (( void (*) (List_1_t7895 *, const MethodInfo*))List_1_TrimExcess_m54767_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m54768_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m54768(__this, method) (( int32_t (*) (List_1_t7895 *, const MethodInfo*))List_1_get_Capacity_m54768_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m54769_gshared (List_1_t7895 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m54769(__this, ___value, method) (( void (*) (List_1_t7895 *, int32_t, const MethodInfo*))List_1_set_Capacity_m54769_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Count()
extern "C" int32_t List_1_get_Count_m54770_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_get_Count_m54770(__this, method) (( int32_t (*) (List_1_t7895 *, const MethodInfo*))List_1_get_Count_m54770_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6943  List_1_get_Item_m54771_gshared (List_1_t7895 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m54771(__this, ___index, method) (( KeyValuePair_2_t6943  (*) (List_1_t7895 *, int32_t, const MethodInfo*))List_1_get_Item_m54771_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m54772_gshared (List_1_t7895 * __this, int32_t ___index, KeyValuePair_2_t6943  ___value, const MethodInfo* method);
#define List_1_set_Item_m54772(__this, ___index, ___value, method) (( void (*) (List_1_t7895 *, int32_t, KeyValuePair_2_t6943 , const MethodInfo*))List_1_set_Item_m54772_gshared)(__this, ___index, ___value, method)
