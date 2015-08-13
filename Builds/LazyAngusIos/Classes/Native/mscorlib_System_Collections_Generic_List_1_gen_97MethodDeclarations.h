#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct List_1_t7557;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerable_1_t7225;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7556;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t7226;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct ICollection_1_t9373;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct ReadOnlyCollection_1_t7560;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Predicate_1_t7564;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IComparer_1_t9374;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Comparison_1_t7567;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_80.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor()
extern "C" void List_1__ctor_m50350_gshared (List_1_t7557 * __this, const MethodInfo* method);
#define List_1__ctor_m50350(__this, method) (( void (*) (List_1_t7557 *, const MethodInfo*))List_1__ctor_m50350_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m50351_gshared (List_1_t7557 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m50351(__this, ___collection, method) (( void (*) (List_1_t7557 *, Object_t*, const MethodInfo*))List_1__ctor_m50351_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m50352_gshared (List_1_t7557 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m50352(__this, ___capacity, method) (( void (*) (List_1_t7557 *, int32_t, const MethodInfo*))List_1__ctor_m50352_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m50353_gshared (List_1_t7557 * __this, KeyValuePair_2U5BU5D_t7556* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m50353(__this, ___data, ___size, method) (( void (*) (List_1_t7557 *, KeyValuePair_2U5BU5D_t7556*, int32_t, const MethodInfo*))List_1__ctor_m50353_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.cctor()
extern "C" void List_1__cctor_m50354_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m50354(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m50354_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50355_gshared (List_1_t7557 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50355(__this, method) (( Object_t* (*) (List_1_t7557 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m50355_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m50356_gshared (List_1_t7557 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m50356(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7557 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m50356_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m50357_gshared (List_1_t7557 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m50357(__this, method) (( Object_t * (*) (List_1_t7557 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m50357_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m50358_gshared (List_1_t7557 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m50358(__this, ___item, method) (( int32_t (*) (List_1_t7557 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m50358_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m50359_gshared (List_1_t7557 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m50359(__this, ___item, method) (( bool (*) (List_1_t7557 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m50359_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m50360_gshared (List_1_t7557 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m50360(__this, ___item, method) (( int32_t (*) (List_1_t7557 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m50360_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m50361_gshared (List_1_t7557 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m50361(__this, ___index, ___item, method) (( void (*) (List_1_t7557 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m50361_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m50362_gshared (List_1_t7557 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m50362(__this, ___item, method) (( void (*) (List_1_t7557 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m50362_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50363_gshared (List_1_t7557 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50363(__this, method) (( bool (*) (List_1_t7557 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m50363_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m50364_gshared (List_1_t7557 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m50364(__this, method) (( bool (*) (List_1_t7557 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m50364_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m50365_gshared (List_1_t7557 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m50365(__this, method) (( Object_t * (*) (List_1_t7557 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m50365_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m50366_gshared (List_1_t7557 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m50366(__this, method) (( bool (*) (List_1_t7557 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m50366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m50367_gshared (List_1_t7557 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m50367(__this, method) (( bool (*) (List_1_t7557 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m50367_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m50368_gshared (List_1_t7557 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m50368(__this, ___index, method) (( Object_t * (*) (List_1_t7557 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m50368_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m50369_gshared (List_1_t7557 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m50369(__this, ___index, ___value, method) (( void (*) (List_1_t7557 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m50369_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Add(T)
extern "C" void List_1_Add_m50370_gshared (List_1_t7557 * __this, KeyValuePair_2_t5532  ___item, const MethodInfo* method);
#define List_1_Add_m50370(__this, ___item, method) (( void (*) (List_1_t7557 *, KeyValuePair_2_t5532 , const MethodInfo*))List_1_Add_m50370_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m50371_gshared (List_1_t7557 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m50371(__this, ___newCount, method) (( void (*) (List_1_t7557 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m50371_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m50372_gshared (List_1_t7557 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m50372(__this, ___idx, ___count, method) (( void (*) (List_1_t7557 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m50372_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m50373_gshared (List_1_t7557 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m50373(__this, ___collection, method) (( void (*) (List_1_t7557 *, Object_t*, const MethodInfo*))List_1_AddCollection_m50373_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m50374_gshared (List_1_t7557 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m50374(__this, ___enumerable, method) (( void (*) (List_1_t7557 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m50374_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m50375_gshared (List_1_t7557 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m50375(__this, ___collection, method) (( void (*) (List_1_t7557 *, Object_t*, const MethodInfo*))List_1_AddRange_m50375_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7560 * List_1_AsReadOnly_m50376_gshared (List_1_t7557 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m50376(__this, method) (( ReadOnlyCollection_1_t7560 * (*) (List_1_t7557 *, const MethodInfo*))List_1_AsReadOnly_m50376_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Clear()
extern "C" void List_1_Clear_m50377_gshared (List_1_t7557 * __this, const MethodInfo* method);
#define List_1_Clear_m50377(__this, method) (( void (*) (List_1_t7557 *, const MethodInfo*))List_1_Clear_m50377_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Contains(T)
extern "C" bool List_1_Contains_m50378_gshared (List_1_t7557 * __this, KeyValuePair_2_t5532  ___item, const MethodInfo* method);
#define List_1_Contains_m50378(__this, ___item, method) (( bool (*) (List_1_t7557 *, KeyValuePair_2_t5532 , const MethodInfo*))List_1_Contains_m50378_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m50379_gshared (List_1_t7557 * __this, KeyValuePair_2U5BU5D_t7556* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m50379(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7557 *, KeyValuePair_2U5BU5D_t7556*, int32_t, const MethodInfo*))List_1_CopyTo_m50379_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t5532  List_1_Find_m50380_gshared (List_1_t7557 * __this, Predicate_1_t7564 * ___match, const MethodInfo* method);
#define List_1_Find_m50380(__this, ___match, method) (( KeyValuePair_2_t5532  (*) (List_1_t7557 *, Predicate_1_t7564 *, const MethodInfo*))List_1_Find_m50380_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m50381_gshared (Object_t * __this /* static, unused */, Predicate_1_t7564 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m50381(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7564 *, const MethodInfo*))List_1_CheckMatch_m50381_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m50382_gshared (List_1_t7557 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7564 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m50382(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7557 *, int32_t, int32_t, Predicate_1_t7564 *, const MethodInfo*))List_1_GetIndex_m50382_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetEnumerator()
extern "C" Enumerator_t7558  List_1_GetEnumerator_m50383_gshared (List_1_t7557 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m50383(__this, method) (( Enumerator_t7558  (*) (List_1_t7557 *, const MethodInfo*))List_1_GetEnumerator_m50383_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7557 * List_1_GetRange_m50384_gshared (List_1_t7557 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m50384(__this, ___index, ___count, method) (( List_1_t7557 * (*) (List_1_t7557 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m50384_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m50385_gshared (List_1_t7557 * __this, KeyValuePair_2_t5532  ___item, const MethodInfo* method);
#define List_1_IndexOf_m50385(__this, ___item, method) (( int32_t (*) (List_1_t7557 *, KeyValuePair_2_t5532 , const MethodInfo*))List_1_IndexOf_m50385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m50386_gshared (List_1_t7557 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m50386(__this, ___start, ___delta, method) (( void (*) (List_1_t7557 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m50386_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m50387_gshared (List_1_t7557 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m50387(__this, ___index, method) (( void (*) (List_1_t7557 *, int32_t, const MethodInfo*))List_1_CheckIndex_m50387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m50388_gshared (List_1_t7557 * __this, int32_t ___index, KeyValuePair_2_t5532  ___item, const MethodInfo* method);
#define List_1_Insert_m50388(__this, ___index, ___item, method) (( void (*) (List_1_t7557 *, int32_t, KeyValuePair_2_t5532 , const MethodInfo*))List_1_Insert_m50388_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m50389_gshared (List_1_t7557 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m50389(__this, ___collection, method) (( void (*) (List_1_t7557 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m50389_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m50390_gshared (List_1_t7557 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m50390(__this, ___index, ___collection, method) (( void (*) (List_1_t7557 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m50390_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m50391_gshared (List_1_t7557 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m50391(__this, ___index, ___collection, method) (( void (*) (List_1_t7557 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m50391_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m50392_gshared (List_1_t7557 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m50392(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7557 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m50392_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Remove(T)
extern "C" bool List_1_Remove_m50393_gshared (List_1_t7557 * __this, KeyValuePair_2_t5532  ___item, const MethodInfo* method);
#define List_1_Remove_m50393(__this, ___item, method) (( bool (*) (List_1_t7557 *, KeyValuePair_2_t5532 , const MethodInfo*))List_1_Remove_m50393_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m50394_gshared (List_1_t7557 * __this, Predicate_1_t7564 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m50394(__this, ___match, method) (( int32_t (*) (List_1_t7557 *, Predicate_1_t7564 *, const MethodInfo*))List_1_RemoveAll_m50394_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m50395_gshared (List_1_t7557 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m50395(__this, ___index, method) (( void (*) (List_1_t7557 *, int32_t, const MethodInfo*))List_1_RemoveAt_m50395_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m50396_gshared (List_1_t7557 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m50396(__this, ___index, ___count, method) (( void (*) (List_1_t7557 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m50396_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Reverse()
extern "C" void List_1_Reverse_m50397_gshared (List_1_t7557 * __this, const MethodInfo* method);
#define List_1_Reverse_m50397(__this, method) (( void (*) (List_1_t7557 *, const MethodInfo*))List_1_Reverse_m50397_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort()
extern "C" void List_1_Sort_m50398_gshared (List_1_t7557 * __this, const MethodInfo* method);
#define List_1_Sort_m50398(__this, method) (( void (*) (List_1_t7557 *, const MethodInfo*))List_1_Sort_m50398_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m50399_gshared (List_1_t7557 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m50399(__this, ___comparer, method) (( void (*) (List_1_t7557 *, Object_t*, const MethodInfo*))List_1_Sort_m50399_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m50400_gshared (List_1_t7557 * __this, Comparison_1_t7567 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m50400(__this, ___comparison, method) (( void (*) (List_1_t7557 *, Comparison_1_t7567 *, const MethodInfo*))List_1_Sort_m50400_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7556* List_1_ToArray_m50401_gshared (List_1_t7557 * __this, const MethodInfo* method);
#define List_1_ToArray_m50401(__this, method) (( KeyValuePair_2U5BU5D_t7556* (*) (List_1_t7557 *, const MethodInfo*))List_1_ToArray_m50401_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::TrimExcess()
extern "C" void List_1_TrimExcess_m50402_gshared (List_1_t7557 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m50402(__this, method) (( void (*) (List_1_t7557 *, const MethodInfo*))List_1_TrimExcess_m50402_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m50403_gshared (List_1_t7557 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m50403(__this, method) (( int32_t (*) (List_1_t7557 *, const MethodInfo*))List_1_get_Capacity_m50403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m50404_gshared (List_1_t7557 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m50404(__this, ___value, method) (( void (*) (List_1_t7557 *, int32_t, const MethodInfo*))List_1_set_Capacity_m50404_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count()
extern "C" int32_t List_1_get_Count_m50405_gshared (List_1_t7557 * __this, const MethodInfo* method);
#define List_1_get_Count_m50405(__this, method) (( int32_t (*) (List_1_t7557 *, const MethodInfo*))List_1_get_Count_m50405_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t5532  List_1_get_Item_m50406_gshared (List_1_t7557 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m50406(__this, ___index, method) (( KeyValuePair_2_t5532  (*) (List_1_t7557 *, int32_t, const MethodInfo*))List_1_get_Item_m50406_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m50407_gshared (List_1_t7557 * __this, int32_t ___index, KeyValuePair_2_t5532  ___value, const MethodInfo* method);
#define List_1_set_Item_m50407(__this, ___index, ___value, method) (( void (*) (List_1_t7557 *, int32_t, KeyValuePair_2_t5532 , const MethodInfo*))List_1_set_Item_m50407_gshared)(__this, ___index, ___value, method)
