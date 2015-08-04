#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct List_1_t7897;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerable_1_t7888;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7896;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t7889;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ICollection_1_t9315;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ReadOnlyCollection_1_t7900;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Predicate_1_t7904;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IComparer_1_t9316;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Comparison_1_t7907;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_89.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor()
extern "C" void List_1__ctor_m54731_gshared (List_1_t7897 * __this, const MethodInfo* method);
#define List_1__ctor_m54731(__this, method) (( void (*) (List_1_t7897 *, const MethodInfo*))List_1__ctor_m54731_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m54732_gshared (List_1_t7897 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m54732(__this, ___collection, method) (( void (*) (List_1_t7897 *, Object_t*, const MethodInfo*))List_1__ctor_m54732_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m54733_gshared (List_1_t7897 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m54733(__this, ___capacity, method) (( void (*) (List_1_t7897 *, int32_t, const MethodInfo*))List_1__ctor_m54733_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m54734_gshared (List_1_t7897 * __this, KeyValuePair_2U5BU5D_t7896* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m54734(__this, ___data, ___size, method) (( void (*) (List_1_t7897 *, KeyValuePair_2U5BU5D_t7896*, int32_t, const MethodInfo*))List_1__ctor_m54734_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.cctor()
extern "C" void List_1__cctor_m54735_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m54735(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m54735_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54736_gshared (List_1_t7897 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54736(__this, method) (( Object_t* (*) (List_1_t7897 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54736_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m54737_gshared (List_1_t7897 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m54737(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7897 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m54737_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m54738_gshared (List_1_t7897 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m54738(__this, method) (( Object_t * (*) (List_1_t7897 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m54738_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m54739_gshared (List_1_t7897 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m54739(__this, ___item, method) (( int32_t (*) (List_1_t7897 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m54739_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m54740_gshared (List_1_t7897 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m54740(__this, ___item, method) (( bool (*) (List_1_t7897 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m54740_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m54741_gshared (List_1_t7897 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m54741(__this, ___item, method) (( int32_t (*) (List_1_t7897 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m54741_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m54742_gshared (List_1_t7897 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m54742(__this, ___index, ___item, method) (( void (*) (List_1_t7897 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m54742_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m54743_gshared (List_1_t7897 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m54743(__this, ___item, method) (( void (*) (List_1_t7897 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m54743_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54744_gshared (List_1_t7897 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54744(__this, method) (( bool (*) (List_1_t7897 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54744_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m54745_gshared (List_1_t7897 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m54745(__this, method) (( bool (*) (List_1_t7897 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m54745_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m54746_gshared (List_1_t7897 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m54746(__this, method) (( Object_t * (*) (List_1_t7897 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m54746_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m54747_gshared (List_1_t7897 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m54747(__this, method) (( bool (*) (List_1_t7897 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m54747_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m54748_gshared (List_1_t7897 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m54748(__this, method) (( bool (*) (List_1_t7897 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m54748_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m54749_gshared (List_1_t7897 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m54749(__this, ___index, method) (( Object_t * (*) (List_1_t7897 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m54749_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m54750_gshared (List_1_t7897 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m54750(__this, ___index, ___value, method) (( void (*) (List_1_t7897 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m54750_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Add(T)
extern "C" void List_1_Add_m54751_gshared (List_1_t7897 * __this, KeyValuePair_2_t6945  ___item, const MethodInfo* method);
#define List_1_Add_m54751(__this, ___item, method) (( void (*) (List_1_t7897 *, KeyValuePair_2_t6945 , const MethodInfo*))List_1_Add_m54751_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m54752_gshared (List_1_t7897 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m54752(__this, ___newCount, method) (( void (*) (List_1_t7897 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m54752_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m54753_gshared (List_1_t7897 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m54753(__this, ___idx, ___count, method) (( void (*) (List_1_t7897 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m54753_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m54754_gshared (List_1_t7897 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m54754(__this, ___collection, method) (( void (*) (List_1_t7897 *, Object_t*, const MethodInfo*))List_1_AddCollection_m54754_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m54755_gshared (List_1_t7897 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m54755(__this, ___enumerable, method) (( void (*) (List_1_t7897 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m54755_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m54756_gshared (List_1_t7897 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m54756(__this, ___collection, method) (( void (*) (List_1_t7897 *, Object_t*, const MethodInfo*))List_1_AddRange_m54756_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7900 * List_1_AsReadOnly_m54757_gshared (List_1_t7897 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m54757(__this, method) (( ReadOnlyCollection_1_t7900 * (*) (List_1_t7897 *, const MethodInfo*))List_1_AsReadOnly_m54757_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Clear()
extern "C" void List_1_Clear_m54758_gshared (List_1_t7897 * __this, const MethodInfo* method);
#define List_1_Clear_m54758(__this, method) (( void (*) (List_1_t7897 *, const MethodInfo*))List_1_Clear_m54758_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Contains(T)
extern "C" bool List_1_Contains_m54759_gshared (List_1_t7897 * __this, KeyValuePair_2_t6945  ___item, const MethodInfo* method);
#define List_1_Contains_m54759(__this, ___item, method) (( bool (*) (List_1_t7897 *, KeyValuePair_2_t6945 , const MethodInfo*))List_1_Contains_m54759_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m54760_gshared (List_1_t7897 * __this, KeyValuePair_2U5BU5D_t7896* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m54760(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7897 *, KeyValuePair_2U5BU5D_t7896*, int32_t, const MethodInfo*))List_1_CopyTo_m54760_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6945  List_1_Find_m54761_gshared (List_1_t7897 * __this, Predicate_1_t7904 * ___match, const MethodInfo* method);
#define List_1_Find_m54761(__this, ___match, method) (( KeyValuePair_2_t6945  (*) (List_1_t7897 *, Predicate_1_t7904 *, const MethodInfo*))List_1_Find_m54761_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m54762_gshared (Object_t * __this /* static, unused */, Predicate_1_t7904 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m54762(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7904 *, const MethodInfo*))List_1_CheckMatch_m54762_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m54763_gshared (List_1_t7897 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7904 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m54763(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7897 *, int32_t, int32_t, Predicate_1_t7904 *, const MethodInfo*))List_1_GetIndex_m54763_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetEnumerator()
extern "C" Enumerator_t7898  List_1_GetEnumerator_m54764_gshared (List_1_t7897 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m54764(__this, method) (( Enumerator_t7898  (*) (List_1_t7897 *, const MethodInfo*))List_1_GetEnumerator_m54764_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7897 * List_1_GetRange_m54765_gshared (List_1_t7897 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m54765(__this, ___index, ___count, method) (( List_1_t7897 * (*) (List_1_t7897 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m54765_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m54766_gshared (List_1_t7897 * __this, KeyValuePair_2_t6945  ___item, const MethodInfo* method);
#define List_1_IndexOf_m54766(__this, ___item, method) (( int32_t (*) (List_1_t7897 *, KeyValuePair_2_t6945 , const MethodInfo*))List_1_IndexOf_m54766_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m54767_gshared (List_1_t7897 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m54767(__this, ___start, ___delta, method) (( void (*) (List_1_t7897 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m54767_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m54768_gshared (List_1_t7897 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m54768(__this, ___index, method) (( void (*) (List_1_t7897 *, int32_t, const MethodInfo*))List_1_CheckIndex_m54768_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m54769_gshared (List_1_t7897 * __this, int32_t ___index, KeyValuePair_2_t6945  ___item, const MethodInfo* method);
#define List_1_Insert_m54769(__this, ___index, ___item, method) (( void (*) (List_1_t7897 *, int32_t, KeyValuePair_2_t6945 , const MethodInfo*))List_1_Insert_m54769_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m54770_gshared (List_1_t7897 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m54770(__this, ___collection, method) (( void (*) (List_1_t7897 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m54770_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m54771_gshared (List_1_t7897 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m54771(__this, ___index, ___collection, method) (( void (*) (List_1_t7897 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m54771_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m54772_gshared (List_1_t7897 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m54772(__this, ___index, ___collection, method) (( void (*) (List_1_t7897 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m54772_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m54773_gshared (List_1_t7897 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m54773(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7897 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m54773_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Remove(T)
extern "C" bool List_1_Remove_m54774_gshared (List_1_t7897 * __this, KeyValuePair_2_t6945  ___item, const MethodInfo* method);
#define List_1_Remove_m54774(__this, ___item, method) (( bool (*) (List_1_t7897 *, KeyValuePair_2_t6945 , const MethodInfo*))List_1_Remove_m54774_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m54775_gshared (List_1_t7897 * __this, Predicate_1_t7904 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m54775(__this, ___match, method) (( int32_t (*) (List_1_t7897 *, Predicate_1_t7904 *, const MethodInfo*))List_1_RemoveAll_m54775_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m54776_gshared (List_1_t7897 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m54776(__this, ___index, method) (( void (*) (List_1_t7897 *, int32_t, const MethodInfo*))List_1_RemoveAt_m54776_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m54777_gshared (List_1_t7897 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m54777(__this, ___index, ___count, method) (( void (*) (List_1_t7897 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m54777_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Reverse()
extern "C" void List_1_Reverse_m54778_gshared (List_1_t7897 * __this, const MethodInfo* method);
#define List_1_Reverse_m54778(__this, method) (( void (*) (List_1_t7897 *, const MethodInfo*))List_1_Reverse_m54778_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort()
extern "C" void List_1_Sort_m54779_gshared (List_1_t7897 * __this, const MethodInfo* method);
#define List_1_Sort_m54779(__this, method) (( void (*) (List_1_t7897 *, const MethodInfo*))List_1_Sort_m54779_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m54780_gshared (List_1_t7897 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m54780(__this, ___comparer, method) (( void (*) (List_1_t7897 *, Object_t*, const MethodInfo*))List_1_Sort_m54780_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m54781_gshared (List_1_t7897 * __this, Comparison_1_t7907 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m54781(__this, ___comparison, method) (( void (*) (List_1_t7897 *, Comparison_1_t7907 *, const MethodInfo*))List_1_Sort_m54781_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7896* List_1_ToArray_m54782_gshared (List_1_t7897 * __this, const MethodInfo* method);
#define List_1_ToArray_m54782(__this, method) (( KeyValuePair_2U5BU5D_t7896* (*) (List_1_t7897 *, const MethodInfo*))List_1_ToArray_m54782_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::TrimExcess()
extern "C" void List_1_TrimExcess_m54783_gshared (List_1_t7897 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m54783(__this, method) (( void (*) (List_1_t7897 *, const MethodInfo*))List_1_TrimExcess_m54783_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m54784_gshared (List_1_t7897 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m54784(__this, method) (( int32_t (*) (List_1_t7897 *, const MethodInfo*))List_1_get_Capacity_m54784_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m54785_gshared (List_1_t7897 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m54785(__this, ___value, method) (( void (*) (List_1_t7897 *, int32_t, const MethodInfo*))List_1_set_Capacity_m54785_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Count()
extern "C" int32_t List_1_get_Count_m54786_gshared (List_1_t7897 * __this, const MethodInfo* method);
#define List_1_get_Count_m54786(__this, method) (( int32_t (*) (List_1_t7897 *, const MethodInfo*))List_1_get_Count_m54786_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6945  List_1_get_Item_m54787_gshared (List_1_t7897 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m54787(__this, ___index, method) (( KeyValuePair_2_t6945  (*) (List_1_t7897 *, int32_t, const MethodInfo*))List_1_get_Item_m54787_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m54788_gshared (List_1_t7897 * __this, int32_t ___index, KeyValuePair_2_t6945  ___value, const MethodInfo* method);
#define List_1_set_Item_m54788(__this, ___index, ___value, method) (( void (*) (List_1_t7897 *, int32_t, KeyValuePair_2_t6945 , const MethodInfo*))List_1_set_Item_m54788_gshared)(__this, ___index, ___value, method)
