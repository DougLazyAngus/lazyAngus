#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct List_1_t7723;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerable_1_t7283;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7722;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t7284;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct ICollection_1_t9431;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct ReadOnlyCollection_1_t7726;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Predicate_1_t7730;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IComparer_1_t9432;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Comparison_1_t7733;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_87.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor()
extern "C" void List_1__ctor_m52357_gshared (List_1_t7723 * __this, const MethodInfo* method);
#define List_1__ctor_m52357(__this, method) (( void (*) (List_1_t7723 *, const MethodInfo*))List_1__ctor_m52357_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m52358_gshared (List_1_t7723 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m52358(__this, ___collection, method) (( void (*) (List_1_t7723 *, Object_t*, const MethodInfo*))List_1__ctor_m52358_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m52359_gshared (List_1_t7723 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m52359(__this, ___capacity, method) (( void (*) (List_1_t7723 *, int32_t, const MethodInfo*))List_1__ctor_m52359_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m52360_gshared (List_1_t7723 * __this, KeyValuePair_2U5BU5D_t7722* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m52360(__this, ___data, ___size, method) (( void (*) (List_1_t7723 *, KeyValuePair_2U5BU5D_t7722*, int32_t, const MethodInfo*))List_1__ctor_m52360_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.cctor()
extern "C" void List_1__cctor_m52361_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m52361(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m52361_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52362_gshared (List_1_t7723 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52362(__this, method) (( Object_t* (*) (List_1_t7723 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m52363_gshared (List_1_t7723 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m52363(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7723 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m52363_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m52364_gshared (List_1_t7723 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52364(__this, method) (( Object_t * (*) (List_1_t7723 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m52364_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m52365_gshared (List_1_t7723 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m52365(__this, ___item, method) (( int32_t (*) (List_1_t7723 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m52365_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m52366_gshared (List_1_t7723 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m52366(__this, ___item, method) (( bool (*) (List_1_t7723 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m52366_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m52367_gshared (List_1_t7723 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m52367(__this, ___item, method) (( int32_t (*) (List_1_t7723 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m52367_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m52368_gshared (List_1_t7723 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m52368(__this, ___index, ___item, method) (( void (*) (List_1_t7723 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m52368_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m52369_gshared (List_1_t7723 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m52369(__this, ___item, method) (( void (*) (List_1_t7723 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m52369_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52370_gshared (List_1_t7723 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52370(__this, method) (( bool (*) (List_1_t7723 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52370_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m52371_gshared (List_1_t7723 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52371(__this, method) (( bool (*) (List_1_t7723 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m52371_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m52372_gshared (List_1_t7723 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m52372(__this, method) (( Object_t * (*) (List_1_t7723 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m52372_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m52373_gshared (List_1_t7723 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m52373(__this, method) (( bool (*) (List_1_t7723 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m52373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m52374_gshared (List_1_t7723 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m52374(__this, method) (( bool (*) (List_1_t7723 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m52374_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m52375_gshared (List_1_t7723 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m52375(__this, ___index, method) (( Object_t * (*) (List_1_t7723 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m52375_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m52376_gshared (List_1_t7723 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m52376(__this, ___index, ___value, method) (( void (*) (List_1_t7723 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m52376_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Add(T)
extern "C" void List_1_Add_m52377_gshared (List_1_t7723 * __this, KeyValuePair_2_t7279  ___item, const MethodInfo* method);
#define List_1_Add_m52377(__this, ___item, method) (( void (*) (List_1_t7723 *, KeyValuePair_2_t7279 , const MethodInfo*))List_1_Add_m52377_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m52378_gshared (List_1_t7723 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m52378(__this, ___newCount, method) (( void (*) (List_1_t7723 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m52378_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m52379_gshared (List_1_t7723 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m52379(__this, ___idx, ___count, method) (( void (*) (List_1_t7723 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m52379_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m52380_gshared (List_1_t7723 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m52380(__this, ___collection, method) (( void (*) (List_1_t7723 *, Object_t*, const MethodInfo*))List_1_AddCollection_m52380_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m52381_gshared (List_1_t7723 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m52381(__this, ___enumerable, method) (( void (*) (List_1_t7723 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m52381_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m52382_gshared (List_1_t7723 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m52382(__this, ___collection, method) (( void (*) (List_1_t7723 *, Object_t*, const MethodInfo*))List_1_AddRange_m52382_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7726 * List_1_AsReadOnly_m52383_gshared (List_1_t7723 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m52383(__this, method) (( ReadOnlyCollection_1_t7726 * (*) (List_1_t7723 *, const MethodInfo*))List_1_AsReadOnly_m52383_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Clear()
extern "C" void List_1_Clear_m52384_gshared (List_1_t7723 * __this, const MethodInfo* method);
#define List_1_Clear_m52384(__this, method) (( void (*) (List_1_t7723 *, const MethodInfo*))List_1_Clear_m52384_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Contains(T)
extern "C" bool List_1_Contains_m52385_gshared (List_1_t7723 * __this, KeyValuePair_2_t7279  ___item, const MethodInfo* method);
#define List_1_Contains_m52385(__this, ___item, method) (( bool (*) (List_1_t7723 *, KeyValuePair_2_t7279 , const MethodInfo*))List_1_Contains_m52385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m52386_gshared (List_1_t7723 * __this, KeyValuePair_2U5BU5D_t7722* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m52386(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7723 *, KeyValuePair_2U5BU5D_t7722*, int32_t, const MethodInfo*))List_1_CopyTo_m52386_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7279  List_1_Find_m52387_gshared (List_1_t7723 * __this, Predicate_1_t7730 * ___match, const MethodInfo* method);
#define List_1_Find_m52387(__this, ___match, method) (( KeyValuePair_2_t7279  (*) (List_1_t7723 *, Predicate_1_t7730 *, const MethodInfo*))List_1_Find_m52387_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m52388_gshared (Object_t * __this /* static, unused */, Predicate_1_t7730 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m52388(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7730 *, const MethodInfo*))List_1_CheckMatch_m52388_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m52389_gshared (List_1_t7723 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7730 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m52389(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7723 *, int32_t, int32_t, Predicate_1_t7730 *, const MethodInfo*))List_1_GetIndex_m52389_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetEnumerator()
extern "C" Enumerator_t7724  List_1_GetEnumerator_m52390_gshared (List_1_t7723 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m52390(__this, method) (( Enumerator_t7724  (*) (List_1_t7723 *, const MethodInfo*))List_1_GetEnumerator_m52390_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7723 * List_1_GetRange_m52391_gshared (List_1_t7723 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m52391(__this, ___index, ___count, method) (( List_1_t7723 * (*) (List_1_t7723 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m52391_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m52392_gshared (List_1_t7723 * __this, KeyValuePair_2_t7279  ___item, const MethodInfo* method);
#define List_1_IndexOf_m52392(__this, ___item, method) (( int32_t (*) (List_1_t7723 *, KeyValuePair_2_t7279 , const MethodInfo*))List_1_IndexOf_m52392_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m52393_gshared (List_1_t7723 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m52393(__this, ___start, ___delta, method) (( void (*) (List_1_t7723 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m52393_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m52394_gshared (List_1_t7723 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m52394(__this, ___index, method) (( void (*) (List_1_t7723 *, int32_t, const MethodInfo*))List_1_CheckIndex_m52394_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m52395_gshared (List_1_t7723 * __this, int32_t ___index, KeyValuePair_2_t7279  ___item, const MethodInfo* method);
#define List_1_Insert_m52395(__this, ___index, ___item, method) (( void (*) (List_1_t7723 *, int32_t, KeyValuePair_2_t7279 , const MethodInfo*))List_1_Insert_m52395_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m52396_gshared (List_1_t7723 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m52396(__this, ___collection, method) (( void (*) (List_1_t7723 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m52396_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m52397_gshared (List_1_t7723 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m52397(__this, ___index, ___collection, method) (( void (*) (List_1_t7723 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m52397_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m52398_gshared (List_1_t7723 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m52398(__this, ___index, ___collection, method) (( void (*) (List_1_t7723 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m52398_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m52399_gshared (List_1_t7723 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m52399(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7723 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m52399_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Remove(T)
extern "C" bool List_1_Remove_m52400_gshared (List_1_t7723 * __this, KeyValuePair_2_t7279  ___item, const MethodInfo* method);
#define List_1_Remove_m52400(__this, ___item, method) (( bool (*) (List_1_t7723 *, KeyValuePair_2_t7279 , const MethodInfo*))List_1_Remove_m52400_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m52401_gshared (List_1_t7723 * __this, Predicate_1_t7730 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m52401(__this, ___match, method) (( int32_t (*) (List_1_t7723 *, Predicate_1_t7730 *, const MethodInfo*))List_1_RemoveAll_m52401_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m52402_gshared (List_1_t7723 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m52402(__this, ___index, method) (( void (*) (List_1_t7723 *, int32_t, const MethodInfo*))List_1_RemoveAt_m52402_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m52403_gshared (List_1_t7723 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m52403(__this, ___index, ___count, method) (( void (*) (List_1_t7723 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m52403_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Reverse()
extern "C" void List_1_Reverse_m52404_gshared (List_1_t7723 * __this, const MethodInfo* method);
#define List_1_Reverse_m52404(__this, method) (( void (*) (List_1_t7723 *, const MethodInfo*))List_1_Reverse_m52404_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort()
extern "C" void List_1_Sort_m52405_gshared (List_1_t7723 * __this, const MethodInfo* method);
#define List_1_Sort_m52405(__this, method) (( void (*) (List_1_t7723 *, const MethodInfo*))List_1_Sort_m52405_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m52406_gshared (List_1_t7723 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m52406(__this, ___comparer, method) (( void (*) (List_1_t7723 *, Object_t*, const MethodInfo*))List_1_Sort_m52406_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m52407_gshared (List_1_t7723 * __this, Comparison_1_t7733 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m52407(__this, ___comparison, method) (( void (*) (List_1_t7723 *, Comparison_1_t7733 *, const MethodInfo*))List_1_Sort_m52407_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7722* List_1_ToArray_m52408_gshared (List_1_t7723 * __this, const MethodInfo* method);
#define List_1_ToArray_m52408(__this, method) (( KeyValuePair_2U5BU5D_t7722* (*) (List_1_t7723 *, const MethodInfo*))List_1_ToArray_m52408_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::TrimExcess()
extern "C" void List_1_TrimExcess_m52409_gshared (List_1_t7723 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m52409(__this, method) (( void (*) (List_1_t7723 *, const MethodInfo*))List_1_TrimExcess_m52409_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m52410_gshared (List_1_t7723 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m52410(__this, method) (( int32_t (*) (List_1_t7723 *, const MethodInfo*))List_1_get_Capacity_m52410_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m52411_gshared (List_1_t7723 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m52411(__this, ___value, method) (( void (*) (List_1_t7723 *, int32_t, const MethodInfo*))List_1_set_Capacity_m52411_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Count()
extern "C" int32_t List_1_get_Count_m52412_gshared (List_1_t7723 * __this, const MethodInfo* method);
#define List_1_get_Count_m52412(__this, method) (( int32_t (*) (List_1_t7723 *, const MethodInfo*))List_1_get_Count_m52412_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7279  List_1_get_Item_m52413_gshared (List_1_t7723 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m52413(__this, ___index, method) (( KeyValuePair_2_t7279  (*) (List_1_t7723 *, int32_t, const MethodInfo*))List_1_get_Item_m52413_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m52414_gshared (List_1_t7723 * __this, int32_t ___index, KeyValuePair_2_t7279  ___value, const MethodInfo* method);
#define List_1_set_Item_m52414(__this, ___index, ___value, method) (( void (*) (List_1_t7723 *, int32_t, KeyValuePair_2_t7279 , const MethodInfo*))List_1_set_Item_m52414_gshared)(__this, ___index, ___value, method)
