#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct List_1_t8004;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IEnumerable_1_t7784;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8003;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IEnumerator_1_t7785;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct ICollection_1_t10004;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct ReadOnlyCollection_1_t8007;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Predicate_1_t8011;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IComparer_1_t10005;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Comparison_1_t8014;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_80.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor()
extern "C" void List_1__ctor_m53536_gshared (List_1_t8004 * __this, const MethodInfo* method);
#define List_1__ctor_m53536(__this, method) (( void (*) (List_1_t8004 *, const MethodInfo*))List_1__ctor_m53536_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m53537_gshared (List_1_t8004 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m53537(__this, ___collection, method) (( void (*) (List_1_t8004 *, Object_t*, const MethodInfo*))List_1__ctor_m53537_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m53538_gshared (List_1_t8004 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m53538(__this, ___capacity, method) (( void (*) (List_1_t8004 *, int32_t, const MethodInfo*))List_1__ctor_m53538_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m53539_gshared (List_1_t8004 * __this, KeyValuePair_2U5BU5D_t8003* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m53539(__this, ___data, ___size, method) (( void (*) (List_1_t8004 *, KeyValuePair_2U5BU5D_t8003*, int32_t, const MethodInfo*))List_1__ctor_m53539_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.cctor()
extern "C" void List_1__cctor_m53540_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m53540(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m53540_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53541_gshared (List_1_t8004 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53541(__this, method) (( Object_t* (*) (List_1_t8004 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m53542_gshared (List_1_t8004 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m53542(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8004 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m53542_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m53543_gshared (List_1_t8004 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m53543(__this, method) (( Object_t * (*) (List_1_t8004 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m53543_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m53544_gshared (List_1_t8004 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m53544(__this, ___item, method) (( int32_t (*) (List_1_t8004 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m53544_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m53545_gshared (List_1_t8004 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m53545(__this, ___item, method) (( bool (*) (List_1_t8004 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m53545_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m53546_gshared (List_1_t8004 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m53546(__this, ___item, method) (( int32_t (*) (List_1_t8004 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m53546_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m53547_gshared (List_1_t8004 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m53547(__this, ___index, ___item, method) (( void (*) (List_1_t8004 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m53547_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m53548_gshared (List_1_t8004 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m53548(__this, ___item, method) (( void (*) (List_1_t8004 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m53548_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53549_gshared (List_1_t8004 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53549(__this, method) (( bool (*) (List_1_t8004 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53549_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m53550_gshared (List_1_t8004 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m53550(__this, method) (( bool (*) (List_1_t8004 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m53550_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m53551_gshared (List_1_t8004 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m53551(__this, method) (( Object_t * (*) (List_1_t8004 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m53551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m53552_gshared (List_1_t8004 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m53552(__this, method) (( bool (*) (List_1_t8004 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m53552_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m53553_gshared (List_1_t8004 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m53553(__this, method) (( bool (*) (List_1_t8004 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m53553_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m53554_gshared (List_1_t8004 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m53554(__this, ___index, method) (( Object_t * (*) (List_1_t8004 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m53554_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m53555_gshared (List_1_t8004 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m53555(__this, ___index, ___value, method) (( void (*) (List_1_t8004 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m53555_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Add(T)
extern "C" void List_1_Add_m53556_gshared (List_1_t8004 * __this, KeyValuePair_2_t7780  ___item, const MethodInfo* method);
#define List_1_Add_m53556(__this, ___item, method) (( void (*) (List_1_t8004 *, KeyValuePair_2_t7780 , const MethodInfo*))List_1_Add_m53556_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m53557_gshared (List_1_t8004 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m53557(__this, ___newCount, method) (( void (*) (List_1_t8004 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m53557_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m53558_gshared (List_1_t8004 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m53558(__this, ___idx, ___count, method) (( void (*) (List_1_t8004 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m53558_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m53559_gshared (List_1_t8004 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m53559(__this, ___collection, method) (( void (*) (List_1_t8004 *, Object_t*, const MethodInfo*))List_1_AddCollection_m53559_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m53560_gshared (List_1_t8004 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m53560(__this, ___enumerable, method) (( void (*) (List_1_t8004 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m53560_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m53561_gshared (List_1_t8004 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m53561(__this, ___collection, method) (( void (*) (List_1_t8004 *, Object_t*, const MethodInfo*))List_1_AddRange_m53561_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8007 * List_1_AsReadOnly_m53562_gshared (List_1_t8004 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m53562(__this, method) (( ReadOnlyCollection_1_t8007 * (*) (List_1_t8004 *, const MethodInfo*))List_1_AsReadOnly_m53562_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Clear()
extern "C" void List_1_Clear_m53563_gshared (List_1_t8004 * __this, const MethodInfo* method);
#define List_1_Clear_m53563(__this, method) (( void (*) (List_1_t8004 *, const MethodInfo*))List_1_Clear_m53563_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Contains(T)
extern "C" bool List_1_Contains_m53564_gshared (List_1_t8004 * __this, KeyValuePair_2_t7780  ___item, const MethodInfo* method);
#define List_1_Contains_m53564(__this, ___item, method) (( bool (*) (List_1_t8004 *, KeyValuePair_2_t7780 , const MethodInfo*))List_1_Contains_m53564_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m53565_gshared (List_1_t8004 * __this, KeyValuePair_2U5BU5D_t8003* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m53565(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8004 *, KeyValuePair_2U5BU5D_t8003*, int32_t, const MethodInfo*))List_1_CopyTo_m53565_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7780  List_1_Find_m53566_gshared (List_1_t8004 * __this, Predicate_1_t8011 * ___match, const MethodInfo* method);
#define List_1_Find_m53566(__this, ___match, method) (( KeyValuePair_2_t7780  (*) (List_1_t8004 *, Predicate_1_t8011 *, const MethodInfo*))List_1_Find_m53566_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m53567_gshared (Object_t * __this /* static, unused */, Predicate_1_t8011 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m53567(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8011 *, const MethodInfo*))List_1_CheckMatch_m53567_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m53568_gshared (List_1_t8004 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8011 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m53568(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8004 *, int32_t, int32_t, Predicate_1_t8011 *, const MethodInfo*))List_1_GetIndex_m53568_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetEnumerator()
extern "C" Enumerator_t8005  List_1_GetEnumerator_m53569_gshared (List_1_t8004 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m53569(__this, method) (( Enumerator_t8005  (*) (List_1_t8004 *, const MethodInfo*))List_1_GetEnumerator_m53569_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8004 * List_1_GetRange_m53570_gshared (List_1_t8004 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m53570(__this, ___index, ___count, method) (( List_1_t8004 * (*) (List_1_t8004 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m53570_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m53571_gshared (List_1_t8004 * __this, KeyValuePair_2_t7780  ___item, const MethodInfo* method);
#define List_1_IndexOf_m53571(__this, ___item, method) (( int32_t (*) (List_1_t8004 *, KeyValuePair_2_t7780 , const MethodInfo*))List_1_IndexOf_m53571_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m53572_gshared (List_1_t8004 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m53572(__this, ___start, ___delta, method) (( void (*) (List_1_t8004 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m53572_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m53573_gshared (List_1_t8004 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m53573(__this, ___index, method) (( void (*) (List_1_t8004 *, int32_t, const MethodInfo*))List_1_CheckIndex_m53573_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m53574_gshared (List_1_t8004 * __this, int32_t ___index, KeyValuePair_2_t7780  ___item, const MethodInfo* method);
#define List_1_Insert_m53574(__this, ___index, ___item, method) (( void (*) (List_1_t8004 *, int32_t, KeyValuePair_2_t7780 , const MethodInfo*))List_1_Insert_m53574_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m53575_gshared (List_1_t8004 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m53575(__this, ___collection, method) (( void (*) (List_1_t8004 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m53575_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m53576_gshared (List_1_t8004 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m53576(__this, ___index, ___collection, method) (( void (*) (List_1_t8004 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m53576_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m53577_gshared (List_1_t8004 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m53577(__this, ___index, ___collection, method) (( void (*) (List_1_t8004 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m53577_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m53578_gshared (List_1_t8004 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m53578(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8004 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m53578_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Remove(T)
extern "C" bool List_1_Remove_m53579_gshared (List_1_t8004 * __this, KeyValuePair_2_t7780  ___item, const MethodInfo* method);
#define List_1_Remove_m53579(__this, ___item, method) (( bool (*) (List_1_t8004 *, KeyValuePair_2_t7780 , const MethodInfo*))List_1_Remove_m53579_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m53580_gshared (List_1_t8004 * __this, Predicate_1_t8011 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m53580(__this, ___match, method) (( int32_t (*) (List_1_t8004 *, Predicate_1_t8011 *, const MethodInfo*))List_1_RemoveAll_m53580_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m53581_gshared (List_1_t8004 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m53581(__this, ___index, method) (( void (*) (List_1_t8004 *, int32_t, const MethodInfo*))List_1_RemoveAt_m53581_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m53582_gshared (List_1_t8004 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m53582(__this, ___index, ___count, method) (( void (*) (List_1_t8004 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m53582_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Reverse()
extern "C" void List_1_Reverse_m53583_gshared (List_1_t8004 * __this, const MethodInfo* method);
#define List_1_Reverse_m53583(__this, method) (( void (*) (List_1_t8004 *, const MethodInfo*))List_1_Reverse_m53583_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort()
extern "C" void List_1_Sort_m53584_gshared (List_1_t8004 * __this, const MethodInfo* method);
#define List_1_Sort_m53584(__this, method) (( void (*) (List_1_t8004 *, const MethodInfo*))List_1_Sort_m53584_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m53585_gshared (List_1_t8004 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m53585(__this, ___comparer, method) (( void (*) (List_1_t8004 *, Object_t*, const MethodInfo*))List_1_Sort_m53585_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m53586_gshared (List_1_t8004 * __this, Comparison_1_t8014 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m53586(__this, ___comparison, method) (( void (*) (List_1_t8004 *, Comparison_1_t8014 *, const MethodInfo*))List_1_Sort_m53586_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8003* List_1_ToArray_m53587_gshared (List_1_t8004 * __this, const MethodInfo* method);
#define List_1_ToArray_m53587(__this, method) (( KeyValuePair_2U5BU5D_t8003* (*) (List_1_t8004 *, const MethodInfo*))List_1_ToArray_m53587_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::TrimExcess()
extern "C" void List_1_TrimExcess_m53588_gshared (List_1_t8004 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m53588(__this, method) (( void (*) (List_1_t8004 *, const MethodInfo*))List_1_TrimExcess_m53588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m53589_gshared (List_1_t8004 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m53589(__this, method) (( int32_t (*) (List_1_t8004 *, const MethodInfo*))List_1_get_Capacity_m53589_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m53590_gshared (List_1_t8004 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m53590(__this, ___value, method) (( void (*) (List_1_t8004 *, int32_t, const MethodInfo*))List_1_set_Capacity_m53590_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Count()
extern "C" int32_t List_1_get_Count_m53591_gshared (List_1_t8004 * __this, const MethodInfo* method);
#define List_1_get_Count_m53591(__this, method) (( int32_t (*) (List_1_t8004 *, const MethodInfo*))List_1_get_Count_m53591_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7780  List_1_get_Item_m53592_gshared (List_1_t8004 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m53592(__this, ___index, method) (( KeyValuePair_2_t7780  (*) (List_1_t8004 *, int32_t, const MethodInfo*))List_1_get_Item_m53592_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m53593_gshared (List_1_t8004 * __this, int32_t ___index, KeyValuePair_2_t7780  ___value, const MethodInfo* method);
#define List_1_set_Item_m53593(__this, ___index, ___value, method) (( void (*) (List_1_t8004 *, int32_t, KeyValuePair_2_t7780 , const MethodInfo*))List_1_set_Item_m53593_gshared)(__this, ___index, ___value, method)
