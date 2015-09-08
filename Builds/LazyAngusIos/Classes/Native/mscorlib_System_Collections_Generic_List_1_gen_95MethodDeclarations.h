#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct List_1_t7934;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerable_1_t7768;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7933;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerator_1_t7769;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct ICollection_1_t9994;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct ReadOnlyCollection_1_t7937;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Predicate_1_t7941;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IComparer_1_t9995;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Comparison_1_t7944;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_78.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor()
extern "C" void List_1__ctor_m52747_gshared (List_1_t7934 * __this, const MethodInfo* method);
#define List_1__ctor_m52747(__this, method) (( void (*) (List_1_t7934 *, const MethodInfo*))List_1__ctor_m52747_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m52748_gshared (List_1_t7934 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m52748(__this, ___collection, method) (( void (*) (List_1_t7934 *, Object_t*, const MethodInfo*))List_1__ctor_m52748_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m52749_gshared (List_1_t7934 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m52749(__this, ___capacity, method) (( void (*) (List_1_t7934 *, int32_t, const MethodInfo*))List_1__ctor_m52749_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m52750_gshared (List_1_t7934 * __this, KeyValuePair_2U5BU5D_t7933* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m52750(__this, ___data, ___size, method) (( void (*) (List_1_t7934 *, KeyValuePair_2U5BU5D_t7933*, int32_t, const MethodInfo*))List_1__ctor_m52750_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.cctor()
extern "C" void List_1__cctor_m52751_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m52751(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m52751_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52752_gshared (List_1_t7934 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52752(__this, method) (( Object_t* (*) (List_1_t7934 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52752_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m52753_gshared (List_1_t7934 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m52753(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7934 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m52753_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m52754_gshared (List_1_t7934 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52754(__this, method) (( Object_t * (*) (List_1_t7934 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m52754_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m52755_gshared (List_1_t7934 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m52755(__this, ___item, method) (( int32_t (*) (List_1_t7934 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m52755_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m52756_gshared (List_1_t7934 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m52756(__this, ___item, method) (( bool (*) (List_1_t7934 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m52756_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m52757_gshared (List_1_t7934 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m52757(__this, ___item, method) (( int32_t (*) (List_1_t7934 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m52757_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m52758_gshared (List_1_t7934 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m52758(__this, ___index, ___item, method) (( void (*) (List_1_t7934 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m52758_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m52759_gshared (List_1_t7934 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m52759(__this, ___item, method) (( void (*) (List_1_t7934 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m52759_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52760_gshared (List_1_t7934 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52760(__this, method) (( bool (*) (List_1_t7934 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52760_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m52761_gshared (List_1_t7934 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52761(__this, method) (( bool (*) (List_1_t7934 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m52761_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m52762_gshared (List_1_t7934 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m52762(__this, method) (( Object_t * (*) (List_1_t7934 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m52762_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m52763_gshared (List_1_t7934 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m52763(__this, method) (( bool (*) (List_1_t7934 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m52763_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m52764_gshared (List_1_t7934 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m52764(__this, method) (( bool (*) (List_1_t7934 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m52764_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m52765_gshared (List_1_t7934 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m52765(__this, ___index, method) (( Object_t * (*) (List_1_t7934 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m52765_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m52766_gshared (List_1_t7934 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m52766(__this, ___index, ___value, method) (( void (*) (List_1_t7934 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m52766_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Add(T)
extern "C" void List_1_Add_m52767_gshared (List_1_t7934 * __this, KeyValuePair_2_t7764  ___item, const MethodInfo* method);
#define List_1_Add_m52767(__this, ___item, method) (( void (*) (List_1_t7934 *, KeyValuePair_2_t7764 , const MethodInfo*))List_1_Add_m52767_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m52768_gshared (List_1_t7934 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m52768(__this, ___newCount, method) (( void (*) (List_1_t7934 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m52768_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m52769_gshared (List_1_t7934 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m52769(__this, ___idx, ___count, method) (( void (*) (List_1_t7934 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m52769_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m52770_gshared (List_1_t7934 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m52770(__this, ___collection, method) (( void (*) (List_1_t7934 *, Object_t*, const MethodInfo*))List_1_AddCollection_m52770_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m52771_gshared (List_1_t7934 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m52771(__this, ___enumerable, method) (( void (*) (List_1_t7934 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m52771_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m52772_gshared (List_1_t7934 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m52772(__this, ___collection, method) (( void (*) (List_1_t7934 *, Object_t*, const MethodInfo*))List_1_AddRange_m52772_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7937 * List_1_AsReadOnly_m52773_gshared (List_1_t7934 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m52773(__this, method) (( ReadOnlyCollection_1_t7937 * (*) (List_1_t7934 *, const MethodInfo*))List_1_AsReadOnly_m52773_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Clear()
extern "C" void List_1_Clear_m52774_gshared (List_1_t7934 * __this, const MethodInfo* method);
#define List_1_Clear_m52774(__this, method) (( void (*) (List_1_t7934 *, const MethodInfo*))List_1_Clear_m52774_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Contains(T)
extern "C" bool List_1_Contains_m52775_gshared (List_1_t7934 * __this, KeyValuePair_2_t7764  ___item, const MethodInfo* method);
#define List_1_Contains_m52775(__this, ___item, method) (( bool (*) (List_1_t7934 *, KeyValuePair_2_t7764 , const MethodInfo*))List_1_Contains_m52775_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m52776_gshared (List_1_t7934 * __this, KeyValuePair_2U5BU5D_t7933* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m52776(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7934 *, KeyValuePair_2U5BU5D_t7933*, int32_t, const MethodInfo*))List_1_CopyTo_m52776_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7764  List_1_Find_m52777_gshared (List_1_t7934 * __this, Predicate_1_t7941 * ___match, const MethodInfo* method);
#define List_1_Find_m52777(__this, ___match, method) (( KeyValuePair_2_t7764  (*) (List_1_t7934 *, Predicate_1_t7941 *, const MethodInfo*))List_1_Find_m52777_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m52778_gshared (Object_t * __this /* static, unused */, Predicate_1_t7941 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m52778(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7941 *, const MethodInfo*))List_1_CheckMatch_m52778_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m52779_gshared (List_1_t7934 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7941 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m52779(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7934 *, int32_t, int32_t, Predicate_1_t7941 *, const MethodInfo*))List_1_GetIndex_m52779_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetEnumerator()
extern "C" Enumerator_t7935  List_1_GetEnumerator_m52780_gshared (List_1_t7934 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m52780(__this, method) (( Enumerator_t7935  (*) (List_1_t7934 *, const MethodInfo*))List_1_GetEnumerator_m52780_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7934 * List_1_GetRange_m52781_gshared (List_1_t7934 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m52781(__this, ___index, ___count, method) (( List_1_t7934 * (*) (List_1_t7934 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m52781_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m52782_gshared (List_1_t7934 * __this, KeyValuePair_2_t7764  ___item, const MethodInfo* method);
#define List_1_IndexOf_m52782(__this, ___item, method) (( int32_t (*) (List_1_t7934 *, KeyValuePair_2_t7764 , const MethodInfo*))List_1_IndexOf_m52782_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m52783_gshared (List_1_t7934 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m52783(__this, ___start, ___delta, method) (( void (*) (List_1_t7934 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m52783_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m52784_gshared (List_1_t7934 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m52784(__this, ___index, method) (( void (*) (List_1_t7934 *, int32_t, const MethodInfo*))List_1_CheckIndex_m52784_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m52785_gshared (List_1_t7934 * __this, int32_t ___index, KeyValuePair_2_t7764  ___item, const MethodInfo* method);
#define List_1_Insert_m52785(__this, ___index, ___item, method) (( void (*) (List_1_t7934 *, int32_t, KeyValuePair_2_t7764 , const MethodInfo*))List_1_Insert_m52785_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m52786_gshared (List_1_t7934 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m52786(__this, ___collection, method) (( void (*) (List_1_t7934 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m52786_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m52787_gshared (List_1_t7934 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m52787(__this, ___index, ___collection, method) (( void (*) (List_1_t7934 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m52787_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m52788_gshared (List_1_t7934 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m52788(__this, ___index, ___collection, method) (( void (*) (List_1_t7934 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m52788_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m52789_gshared (List_1_t7934 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m52789(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7934 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m52789_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Remove(T)
extern "C" bool List_1_Remove_m52790_gshared (List_1_t7934 * __this, KeyValuePair_2_t7764  ___item, const MethodInfo* method);
#define List_1_Remove_m52790(__this, ___item, method) (( bool (*) (List_1_t7934 *, KeyValuePair_2_t7764 , const MethodInfo*))List_1_Remove_m52790_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m52791_gshared (List_1_t7934 * __this, Predicate_1_t7941 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m52791(__this, ___match, method) (( int32_t (*) (List_1_t7934 *, Predicate_1_t7941 *, const MethodInfo*))List_1_RemoveAll_m52791_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m52792_gshared (List_1_t7934 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m52792(__this, ___index, method) (( void (*) (List_1_t7934 *, int32_t, const MethodInfo*))List_1_RemoveAt_m52792_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m52793_gshared (List_1_t7934 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m52793(__this, ___index, ___count, method) (( void (*) (List_1_t7934 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m52793_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Reverse()
extern "C" void List_1_Reverse_m52794_gshared (List_1_t7934 * __this, const MethodInfo* method);
#define List_1_Reverse_m52794(__this, method) (( void (*) (List_1_t7934 *, const MethodInfo*))List_1_Reverse_m52794_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort()
extern "C" void List_1_Sort_m52795_gshared (List_1_t7934 * __this, const MethodInfo* method);
#define List_1_Sort_m52795(__this, method) (( void (*) (List_1_t7934 *, const MethodInfo*))List_1_Sort_m52795_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m52796_gshared (List_1_t7934 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m52796(__this, ___comparer, method) (( void (*) (List_1_t7934 *, Object_t*, const MethodInfo*))List_1_Sort_m52796_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m52797_gshared (List_1_t7934 * __this, Comparison_1_t7944 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m52797(__this, ___comparison, method) (( void (*) (List_1_t7934 *, Comparison_1_t7944 *, const MethodInfo*))List_1_Sort_m52797_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7933* List_1_ToArray_m52798_gshared (List_1_t7934 * __this, const MethodInfo* method);
#define List_1_ToArray_m52798(__this, method) (( KeyValuePair_2U5BU5D_t7933* (*) (List_1_t7934 *, const MethodInfo*))List_1_ToArray_m52798_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::TrimExcess()
extern "C" void List_1_TrimExcess_m52799_gshared (List_1_t7934 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m52799(__this, method) (( void (*) (List_1_t7934 *, const MethodInfo*))List_1_TrimExcess_m52799_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m52800_gshared (List_1_t7934 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m52800(__this, method) (( int32_t (*) (List_1_t7934 *, const MethodInfo*))List_1_get_Capacity_m52800_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m52801_gshared (List_1_t7934 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m52801(__this, ___value, method) (( void (*) (List_1_t7934 *, int32_t, const MethodInfo*))List_1_set_Capacity_m52801_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Count()
extern "C" int32_t List_1_get_Count_m52802_gshared (List_1_t7934 * __this, const MethodInfo* method);
#define List_1_get_Count_m52802(__this, method) (( int32_t (*) (List_1_t7934 *, const MethodInfo*))List_1_get_Count_m52802_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7764  List_1_get_Item_m52803_gshared (List_1_t7934 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m52803(__this, ___index, method) (( KeyValuePair_2_t7764  (*) (List_1_t7934 *, int32_t, const MethodInfo*))List_1_get_Item_m52803_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m52804_gshared (List_1_t7934 * __this, int32_t ___index, KeyValuePair_2_t7764  ___value, const MethodInfo* method);
#define List_1_set_Item_m52804(__this, ___index, ___value, method) (( void (*) (List_1_t7934 *, int32_t, KeyValuePair_2_t7764 , const MethodInfo*))List_1_set_Item_m52804_gshared)(__this, ___index, ___value, method)
