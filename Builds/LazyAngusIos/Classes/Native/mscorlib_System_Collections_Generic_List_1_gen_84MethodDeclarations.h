#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Double>
struct List_1_t6787;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Double>
struct IEnumerable_1_t6395;
// System.Double[]
struct DoubleU5BU5D_t4890;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t6396;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9253;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Double>
struct ReadOnlyCollection_1_t6789;
// System.Predicate`1<System.Double>
struct Predicate_1_t6794;
// System.Collections.Generic.IComparer`1<System.Double>
struct IComparer_1_t9254;
// System.Comparison`1<System.Double>
struct Comparison_1_t6798;
// System.Collections.Generic.List`1/Enumerator<System.Double>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_67.h"

// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
extern "C" void List_1__ctor_m41059_gshared (List_1_t6787 * __this, const MethodInfo* method);
#define List_1__ctor_m41059(__this, method) (( void (*) (List_1_t6787 *, const MethodInfo*))List_1__ctor_m41059_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m41060_gshared (List_1_t6787 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m41060(__this, ___collection, method) (( void (*) (List_1_t6787 *, Object_t*, const MethodInfo*))List_1__ctor_m41060_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(System.Int32)
extern "C" void List_1__ctor_m41061_gshared (List_1_t6787 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m41061(__this, ___capacity, method) (( void (*) (List_1_t6787 *, int32_t, const MethodInfo*))List_1__ctor_m41061_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m41062_gshared (List_1_t6787 * __this, DoubleU5BU5D_t4890* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m41062(__this, ___data, ___size, method) (( void (*) (List_1_t6787 *, DoubleU5BU5D_t4890*, int32_t, const MethodInfo*))List_1__ctor_m41062_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.cctor()
extern "C" void List_1__cctor_m41063_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m41063(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m41063_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Double>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41064_gshared (List_1_t6787 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41064(__this, method) (( Object_t* (*) (List_1_t6787 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41064_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m41065_gshared (List_1_t6787 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m41065(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6787 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m41065_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m41066_gshared (List_1_t6787 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m41066(__this, method) (( Object_t * (*) (List_1_t6787 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m41066_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m41067_gshared (List_1_t6787 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m41067(__this, ___item, method) (( int32_t (*) (List_1_t6787 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m41067_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m41068_gshared (List_1_t6787 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m41068(__this, ___item, method) (( bool (*) (List_1_t6787 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m41068_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m41069_gshared (List_1_t6787 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m41069(__this, ___item, method) (( int32_t (*) (List_1_t6787 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m41069_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m41070_gshared (List_1_t6787 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m41070(__this, ___index, ___item, method) (( void (*) (List_1_t6787 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m41070_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m41071_gshared (List_1_t6787 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m41071(__this, ___item, method) (( void (*) (List_1_t6787 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m41071_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41072_gshared (List_1_t6787 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41072(__this, method) (( bool (*) (List_1_t6787 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m41073_gshared (List_1_t6787 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m41073(__this, method) (( bool (*) (List_1_t6787 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m41073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m41074_gshared (List_1_t6787 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m41074(__this, method) (( Object_t * (*) (List_1_t6787 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m41074_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m41075_gshared (List_1_t6787 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m41075(__this, method) (( bool (*) (List_1_t6787 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m41075_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m41076_gshared (List_1_t6787 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m41076(__this, method) (( bool (*) (List_1_t6787 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m41076_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m41077_gshared (List_1_t6787 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m41077(__this, ___index, method) (( Object_t * (*) (List_1_t6787 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m41077_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m41078_gshared (List_1_t6787 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m41078(__this, ___index, ___value, method) (( void (*) (List_1_t6787 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m41078_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Add(T)
extern "C" void List_1_Add_m41079_gshared (List_1_t6787 * __this, double ___item, const MethodInfo* method);
#define List_1_Add_m41079(__this, ___item, method) (( void (*) (List_1_t6787 *, double, const MethodInfo*))List_1_Add_m41079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m41080_gshared (List_1_t6787 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m41080(__this, ___newCount, method) (( void (*) (List_1_t6787 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m41080_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m41081_gshared (List_1_t6787 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m41081(__this, ___idx, ___count, method) (( void (*) (List_1_t6787 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m41081_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m41082_gshared (List_1_t6787 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m41082(__this, ___collection, method) (( void (*) (List_1_t6787 *, Object_t*, const MethodInfo*))List_1_AddCollection_m41082_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m41083_gshared (List_1_t6787 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m41083(__this, ___enumerable, method) (( void (*) (List_1_t6787 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m41083_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m41084_gshared (List_1_t6787 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m41084(__this, ___collection, method) (( void (*) (List_1_t6787 *, Object_t*, const MethodInfo*))List_1_AddRange_m41084_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Double>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6789 * List_1_AsReadOnly_m41085_gshared (List_1_t6787 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m41085(__this, method) (( ReadOnlyCollection_1_t6789 * (*) (List_1_t6787 *, const MethodInfo*))List_1_AsReadOnly_m41085_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Clear()
extern "C" void List_1_Clear_m41086_gshared (List_1_t6787 * __this, const MethodInfo* method);
#define List_1_Clear_m41086(__this, method) (( void (*) (List_1_t6787 *, const MethodInfo*))List_1_Clear_m41086_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::Contains(T)
extern "C" bool List_1_Contains_m41087_gshared (List_1_t6787 * __this, double ___item, const MethodInfo* method);
#define List_1_Contains_m41087(__this, ___item, method) (( bool (*) (List_1_t6787 *, double, const MethodInfo*))List_1_Contains_m41087_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m41088_gshared (List_1_t6787 * __this, DoubleU5BU5D_t4890* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m41088(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6787 *, DoubleU5BU5D_t4890*, int32_t, const MethodInfo*))List_1_CopyTo_m41088_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Double>::Find(System.Predicate`1<T>)
extern "C" double List_1_Find_m41089_gshared (List_1_t6787 * __this, Predicate_1_t6794 * ___match, const MethodInfo* method);
#define List_1_Find_m41089(__this, ___match, method) (( double (*) (List_1_t6787 *, Predicate_1_t6794 *, const MethodInfo*))List_1_Find_m41089_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m41090_gshared (Object_t * __this /* static, unused */, Predicate_1_t6794 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m41090(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6794 *, const MethodInfo*))List_1_CheckMatch_m41090_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m41091_gshared (List_1_t6787 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6794 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m41091(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6787 *, int32_t, int32_t, Predicate_1_t6794 *, const MethodInfo*))List_1_GetIndex_m41091_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Double>::GetEnumerator()
extern "C" Enumerator_t6788  List_1_GetEnumerator_m41092_gshared (List_1_t6787 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m41092(__this, method) (( Enumerator_t6788  (*) (List_1_t6787 *, const MethodInfo*))List_1_GetEnumerator_m41092_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Double>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6787 * List_1_GetRange_m41093_gshared (List_1_t6787 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m41093(__this, ___index, ___count, method) (( List_1_t6787 * (*) (List_1_t6787 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m41093_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m41094_gshared (List_1_t6787 * __this, double ___item, const MethodInfo* method);
#define List_1_IndexOf_m41094(__this, ___item, method) (( int32_t (*) (List_1_t6787 *, double, const MethodInfo*))List_1_IndexOf_m41094_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m41095_gshared (List_1_t6787 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m41095(__this, ___start, ___delta, method) (( void (*) (List_1_t6787 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m41095_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m41096_gshared (List_1_t6787 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m41096(__this, ___index, method) (( void (*) (List_1_t6787 *, int32_t, const MethodInfo*))List_1_CheckIndex_m41096_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m41097_gshared (List_1_t6787 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define List_1_Insert_m41097(__this, ___index, ___item, method) (( void (*) (List_1_t6787 *, int32_t, double, const MethodInfo*))List_1_Insert_m41097_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m41098_gshared (List_1_t6787 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m41098(__this, ___collection, method) (( void (*) (List_1_t6787 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m41098_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m41099_gshared (List_1_t6787 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m41099(__this, ___index, ___collection, method) (( void (*) (List_1_t6787 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m41099_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m41100_gshared (List_1_t6787 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m41100(__this, ___index, ___collection, method) (( void (*) (List_1_t6787 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m41100_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m41101_gshared (List_1_t6787 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m41101(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6787 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m41101_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::Remove(T)
extern "C" bool List_1_Remove_m41102_gshared (List_1_t6787 * __this, double ___item, const MethodInfo* method);
#define List_1_Remove_m41102(__this, ___item, method) (( bool (*) (List_1_t6787 *, double, const MethodInfo*))List_1_Remove_m41102_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m41103_gshared (List_1_t6787 * __this, Predicate_1_t6794 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m41103(__this, ___match, method) (( int32_t (*) (List_1_t6787 *, Predicate_1_t6794 *, const MethodInfo*))List_1_RemoveAll_m41103_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Double>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m41104_gshared (List_1_t6787 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m41104(__this, ___index, method) (( void (*) (List_1_t6787 *, int32_t, const MethodInfo*))List_1_RemoveAt_m41104_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m41105_gshared (List_1_t6787 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m41105(__this, ___index, ___count, method) (( void (*) (List_1_t6787 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m41105_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Reverse()
extern "C" void List_1_Reverse_m41106_gshared (List_1_t6787 * __this, const MethodInfo* method);
#define List_1_Reverse_m41106(__this, method) (( void (*) (List_1_t6787 *, const MethodInfo*))List_1_Reverse_m41106_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort()
extern "C" void List_1_Sort_m41107_gshared (List_1_t6787 * __this, const MethodInfo* method);
#define List_1_Sort_m41107(__this, method) (( void (*) (List_1_t6787 *, const MethodInfo*))List_1_Sort_m41107_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m41108_gshared (List_1_t6787 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m41108(__this, ___comparer, method) (( void (*) (List_1_t6787 *, Object_t*, const MethodInfo*))List_1_Sort_m41108_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m41109_gshared (List_1_t6787 * __this, Comparison_1_t6798 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m41109(__this, ___comparison, method) (( void (*) (List_1_t6787 *, Comparison_1_t6798 *, const MethodInfo*))List_1_Sort_m41109_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Double>::ToArray()
extern "C" DoubleU5BU5D_t4890* List_1_ToArray_m41110_gshared (List_1_t6787 * __this, const MethodInfo* method);
#define List_1_ToArray_m41110(__this, method) (( DoubleU5BU5D_t4890* (*) (List_1_t6787 *, const MethodInfo*))List_1_ToArray_m41110_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::TrimExcess()
extern "C" void List_1_TrimExcess_m41111_gshared (List_1_t6787 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m41111(__this, method) (( void (*) (List_1_t6787 *, const MethodInfo*))List_1_TrimExcess_m41111_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m41112_gshared (List_1_t6787 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m41112(__this, method) (( int32_t (*) (List_1_t6787 *, const MethodInfo*))List_1_get_Capacity_m41112_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m41113_gshared (List_1_t6787 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m41113(__this, ___value, method) (( void (*) (List_1_t6787 *, int32_t, const MethodInfo*))List_1_set_Capacity_m41113_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Count()
extern "C" int32_t List_1_get_Count_m41114_gshared (List_1_t6787 * __this, const MethodInfo* method);
#define List_1_get_Count_m41114(__this, method) (( int32_t (*) (List_1_t6787 *, const MethodInfo*))List_1_get_Count_m41114_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Double>::get_Item(System.Int32)
extern "C" double List_1_get_Item_m41115_gshared (List_1_t6787 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m41115(__this, ___index, method) (( double (*) (List_1_t6787 *, int32_t, const MethodInfo*))List_1_get_Item_m41115_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m41116_gshared (List_1_t6787 * __this, int32_t ___index, double ___value, const MethodInfo* method);
#define List_1_set_Item_m41116(__this, ___index, ___value, method) (( void (*) (List_1_t6787 *, int32_t, double, const MethodInfo*))List_1_set_Item_m41116_gshared)(__this, ___index, ___value, method)
