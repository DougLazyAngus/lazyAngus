#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct List_1_t7752;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IEnumerable_1_t7258;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7751;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IEnumerator_1_t7259;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct ICollection_1_t9388;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct ReadOnlyCollection_1_t7755;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Predicate_1_t7759;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IComparer_1_t9389;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Comparison_1_t7762;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_86.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor()
extern "C" void List_1__ctor_m52678_gshared (List_1_t7752 * __this, const MethodInfo* method);
#define List_1__ctor_m52678(__this, method) (( void (*) (List_1_t7752 *, const MethodInfo*))List_1__ctor_m52678_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m52679_gshared (List_1_t7752 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m52679(__this, ___collection, method) (( void (*) (List_1_t7752 *, Object_t*, const MethodInfo*))List_1__ctor_m52679_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m52680_gshared (List_1_t7752 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m52680(__this, ___capacity, method) (( void (*) (List_1_t7752 *, int32_t, const MethodInfo*))List_1__ctor_m52680_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m52681_gshared (List_1_t7752 * __this, KeyValuePair_2U5BU5D_t7751* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m52681(__this, ___data, ___size, method) (( void (*) (List_1_t7752 *, KeyValuePair_2U5BU5D_t7751*, int32_t, const MethodInfo*))List_1__ctor_m52681_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.cctor()
extern "C" void List_1__cctor_m52682_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m52682(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m52682_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52683_gshared (List_1_t7752 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52683(__this, method) (( Object_t* (*) (List_1_t7752 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52683_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m52684_gshared (List_1_t7752 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m52684(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7752 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m52684_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m52685_gshared (List_1_t7752 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52685(__this, method) (( Object_t * (*) (List_1_t7752 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m52685_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m52686_gshared (List_1_t7752 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m52686(__this, ___item, method) (( int32_t (*) (List_1_t7752 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m52686_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m52687_gshared (List_1_t7752 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m52687(__this, ___item, method) (( bool (*) (List_1_t7752 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m52687_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m52688_gshared (List_1_t7752 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m52688(__this, ___item, method) (( int32_t (*) (List_1_t7752 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m52688_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m52689_gshared (List_1_t7752 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m52689(__this, ___index, ___item, method) (( void (*) (List_1_t7752 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m52689_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m52690_gshared (List_1_t7752 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m52690(__this, ___item, method) (( void (*) (List_1_t7752 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m52690_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52691_gshared (List_1_t7752 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52691(__this, method) (( bool (*) (List_1_t7752 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52691_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m52692_gshared (List_1_t7752 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52692(__this, method) (( bool (*) (List_1_t7752 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m52692_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m52693_gshared (List_1_t7752 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m52693(__this, method) (( Object_t * (*) (List_1_t7752 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m52693_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m52694_gshared (List_1_t7752 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m52694(__this, method) (( bool (*) (List_1_t7752 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m52694_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m52695_gshared (List_1_t7752 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m52695(__this, method) (( bool (*) (List_1_t7752 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m52695_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m52696_gshared (List_1_t7752 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m52696(__this, ___index, method) (( Object_t * (*) (List_1_t7752 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m52696_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m52697_gshared (List_1_t7752 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m52697(__this, ___index, ___value, method) (( void (*) (List_1_t7752 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m52697_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Add(T)
extern "C" void List_1_Add_m52698_gshared (List_1_t7752 * __this, KeyValuePair_2_t7254  ___item, const MethodInfo* method);
#define List_1_Add_m52698(__this, ___item, method) (( void (*) (List_1_t7752 *, KeyValuePair_2_t7254 , const MethodInfo*))List_1_Add_m52698_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m52699_gshared (List_1_t7752 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m52699(__this, ___newCount, method) (( void (*) (List_1_t7752 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m52699_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m52700_gshared (List_1_t7752 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m52700(__this, ___idx, ___count, method) (( void (*) (List_1_t7752 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m52700_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m52701_gshared (List_1_t7752 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m52701(__this, ___collection, method) (( void (*) (List_1_t7752 *, Object_t*, const MethodInfo*))List_1_AddCollection_m52701_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m52702_gshared (List_1_t7752 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m52702(__this, ___enumerable, method) (( void (*) (List_1_t7752 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m52702_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m52703_gshared (List_1_t7752 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m52703(__this, ___collection, method) (( void (*) (List_1_t7752 *, Object_t*, const MethodInfo*))List_1_AddRange_m52703_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7755 * List_1_AsReadOnly_m52704_gshared (List_1_t7752 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m52704(__this, method) (( ReadOnlyCollection_1_t7755 * (*) (List_1_t7752 *, const MethodInfo*))List_1_AsReadOnly_m52704_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Clear()
extern "C" void List_1_Clear_m52705_gshared (List_1_t7752 * __this, const MethodInfo* method);
#define List_1_Clear_m52705(__this, method) (( void (*) (List_1_t7752 *, const MethodInfo*))List_1_Clear_m52705_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Contains(T)
extern "C" bool List_1_Contains_m52706_gshared (List_1_t7752 * __this, KeyValuePair_2_t7254  ___item, const MethodInfo* method);
#define List_1_Contains_m52706(__this, ___item, method) (( bool (*) (List_1_t7752 *, KeyValuePair_2_t7254 , const MethodInfo*))List_1_Contains_m52706_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m52707_gshared (List_1_t7752 * __this, KeyValuePair_2U5BU5D_t7751* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m52707(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7752 *, KeyValuePair_2U5BU5D_t7751*, int32_t, const MethodInfo*))List_1_CopyTo_m52707_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7254  List_1_Find_m52708_gshared (List_1_t7752 * __this, Predicate_1_t7759 * ___match, const MethodInfo* method);
#define List_1_Find_m52708(__this, ___match, method) (( KeyValuePair_2_t7254  (*) (List_1_t7752 *, Predicate_1_t7759 *, const MethodInfo*))List_1_Find_m52708_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m52709_gshared (Object_t * __this /* static, unused */, Predicate_1_t7759 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m52709(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7759 *, const MethodInfo*))List_1_CheckMatch_m52709_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m52710_gshared (List_1_t7752 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7759 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m52710(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7752 *, int32_t, int32_t, Predicate_1_t7759 *, const MethodInfo*))List_1_GetIndex_m52710_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetEnumerator()
extern "C" Enumerator_t7753  List_1_GetEnumerator_m52711_gshared (List_1_t7752 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m52711(__this, method) (( Enumerator_t7753  (*) (List_1_t7752 *, const MethodInfo*))List_1_GetEnumerator_m52711_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7752 * List_1_GetRange_m52712_gshared (List_1_t7752 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m52712(__this, ___index, ___count, method) (( List_1_t7752 * (*) (List_1_t7752 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m52712_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m52713_gshared (List_1_t7752 * __this, KeyValuePair_2_t7254  ___item, const MethodInfo* method);
#define List_1_IndexOf_m52713(__this, ___item, method) (( int32_t (*) (List_1_t7752 *, KeyValuePair_2_t7254 , const MethodInfo*))List_1_IndexOf_m52713_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m52714_gshared (List_1_t7752 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m52714(__this, ___start, ___delta, method) (( void (*) (List_1_t7752 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m52714_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m52715_gshared (List_1_t7752 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m52715(__this, ___index, method) (( void (*) (List_1_t7752 *, int32_t, const MethodInfo*))List_1_CheckIndex_m52715_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m52716_gshared (List_1_t7752 * __this, int32_t ___index, KeyValuePair_2_t7254  ___item, const MethodInfo* method);
#define List_1_Insert_m52716(__this, ___index, ___item, method) (( void (*) (List_1_t7752 *, int32_t, KeyValuePair_2_t7254 , const MethodInfo*))List_1_Insert_m52716_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m52717_gshared (List_1_t7752 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m52717(__this, ___collection, method) (( void (*) (List_1_t7752 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m52717_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m52718_gshared (List_1_t7752 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m52718(__this, ___index, ___collection, method) (( void (*) (List_1_t7752 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m52718_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m52719_gshared (List_1_t7752 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m52719(__this, ___index, ___collection, method) (( void (*) (List_1_t7752 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m52719_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m52720_gshared (List_1_t7752 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m52720(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7752 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m52720_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Remove(T)
extern "C" bool List_1_Remove_m52721_gshared (List_1_t7752 * __this, KeyValuePair_2_t7254  ___item, const MethodInfo* method);
#define List_1_Remove_m52721(__this, ___item, method) (( bool (*) (List_1_t7752 *, KeyValuePair_2_t7254 , const MethodInfo*))List_1_Remove_m52721_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m52722_gshared (List_1_t7752 * __this, Predicate_1_t7759 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m52722(__this, ___match, method) (( int32_t (*) (List_1_t7752 *, Predicate_1_t7759 *, const MethodInfo*))List_1_RemoveAll_m52722_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m52723_gshared (List_1_t7752 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m52723(__this, ___index, method) (( void (*) (List_1_t7752 *, int32_t, const MethodInfo*))List_1_RemoveAt_m52723_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m52724_gshared (List_1_t7752 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m52724(__this, ___index, ___count, method) (( void (*) (List_1_t7752 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m52724_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Reverse()
extern "C" void List_1_Reverse_m52725_gshared (List_1_t7752 * __this, const MethodInfo* method);
#define List_1_Reverse_m52725(__this, method) (( void (*) (List_1_t7752 *, const MethodInfo*))List_1_Reverse_m52725_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort()
extern "C" void List_1_Sort_m52726_gshared (List_1_t7752 * __this, const MethodInfo* method);
#define List_1_Sort_m52726(__this, method) (( void (*) (List_1_t7752 *, const MethodInfo*))List_1_Sort_m52726_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m52727_gshared (List_1_t7752 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m52727(__this, ___comparer, method) (( void (*) (List_1_t7752 *, Object_t*, const MethodInfo*))List_1_Sort_m52727_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m52728_gshared (List_1_t7752 * __this, Comparison_1_t7762 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m52728(__this, ___comparison, method) (( void (*) (List_1_t7752 *, Comparison_1_t7762 *, const MethodInfo*))List_1_Sort_m52728_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7751* List_1_ToArray_m52729_gshared (List_1_t7752 * __this, const MethodInfo* method);
#define List_1_ToArray_m52729(__this, method) (( KeyValuePair_2U5BU5D_t7751* (*) (List_1_t7752 *, const MethodInfo*))List_1_ToArray_m52729_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::TrimExcess()
extern "C" void List_1_TrimExcess_m52730_gshared (List_1_t7752 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m52730(__this, method) (( void (*) (List_1_t7752 *, const MethodInfo*))List_1_TrimExcess_m52730_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m52731_gshared (List_1_t7752 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m52731(__this, method) (( int32_t (*) (List_1_t7752 *, const MethodInfo*))List_1_get_Capacity_m52731_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m52732_gshared (List_1_t7752 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m52732(__this, ___value, method) (( void (*) (List_1_t7752 *, int32_t, const MethodInfo*))List_1_set_Capacity_m52732_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Count()
extern "C" int32_t List_1_get_Count_m52733_gshared (List_1_t7752 * __this, const MethodInfo* method);
#define List_1_get_Count_m52733(__this, method) (( int32_t (*) (List_1_t7752 *, const MethodInfo*))List_1_get_Count_m52733_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7254  List_1_get_Item_m52734_gshared (List_1_t7752 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m52734(__this, ___index, method) (( KeyValuePair_2_t7254  (*) (List_1_t7752 *, int32_t, const MethodInfo*))List_1_get_Item_m52734_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m52735_gshared (List_1_t7752 * __this, int32_t ___index, KeyValuePair_2_t7254  ___value, const MethodInfo* method);
#define List_1_set_Item_m52735(__this, ___index, ___value, method) (( void (*) (List_1_t7752 *, int32_t, KeyValuePair_2_t7254 , const MethodInfo*))List_1_set_Item_m52735_gshared)(__this, ___index, ___value, method)
