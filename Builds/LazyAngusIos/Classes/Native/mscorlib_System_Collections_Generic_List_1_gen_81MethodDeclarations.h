#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Double>
struct List_1_t6751;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Double>
struct IEnumerable_1_t6359;
// System.Double[]
struct DoubleU5BU5D_t4873;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t6360;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9205;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Double>
struct ReadOnlyCollection_1_t6753;
// System.Predicate`1<System.Double>
struct Predicate_1_t6758;
// System.Collections.Generic.IComparer`1<System.Double>
struct IComparer_1_t9206;
// System.Comparison`1<System.Double>
struct Comparison_1_t6762;
// System.Collections.Generic.List`1/Enumerator<System.Double>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_64.h"

// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
extern "C" void List_1__ctor_m40603_gshared (List_1_t6751 * __this, const MethodInfo* method);
#define List_1__ctor_m40603(__this, method) (( void (*) (List_1_t6751 *, const MethodInfo*))List_1__ctor_m40603_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m40604_gshared (List_1_t6751 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m40604(__this, ___collection, method) (( void (*) (List_1_t6751 *, Object_t*, const MethodInfo*))List_1__ctor_m40604_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(System.Int32)
extern "C" void List_1__ctor_m40605_gshared (List_1_t6751 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m40605(__this, ___capacity, method) (( void (*) (List_1_t6751 *, int32_t, const MethodInfo*))List_1__ctor_m40605_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m40606_gshared (List_1_t6751 * __this, DoubleU5BU5D_t4873* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m40606(__this, ___data, ___size, method) (( void (*) (List_1_t6751 *, DoubleU5BU5D_t4873*, int32_t, const MethodInfo*))List_1__ctor_m40606_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.cctor()
extern "C" void List_1__cctor_m40607_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m40607(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m40607_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Double>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40608_gshared (List_1_t6751 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40608(__this, method) (( Object_t* (*) (List_1_t6751 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40608_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m40609_gshared (List_1_t6751 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m40609(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6751 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m40609_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m40610_gshared (List_1_t6751 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m40610(__this, method) (( Object_t * (*) (List_1_t6751 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m40610_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m40611_gshared (List_1_t6751 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m40611(__this, ___item, method) (( int32_t (*) (List_1_t6751 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m40611_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m40612_gshared (List_1_t6751 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m40612(__this, ___item, method) (( bool (*) (List_1_t6751 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m40612_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m40613_gshared (List_1_t6751 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m40613(__this, ___item, method) (( int32_t (*) (List_1_t6751 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m40613_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m40614_gshared (List_1_t6751 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m40614(__this, ___index, ___item, method) (( void (*) (List_1_t6751 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m40614_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m40615_gshared (List_1_t6751 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m40615(__this, ___item, method) (( void (*) (List_1_t6751 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m40615_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40616_gshared (List_1_t6751 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40616(__this, method) (( bool (*) (List_1_t6751 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40616_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m40617_gshared (List_1_t6751 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m40617(__this, method) (( bool (*) (List_1_t6751 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m40617_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m40618_gshared (List_1_t6751 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m40618(__this, method) (( Object_t * (*) (List_1_t6751 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m40618_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m40619_gshared (List_1_t6751 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m40619(__this, method) (( bool (*) (List_1_t6751 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m40619_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m40620_gshared (List_1_t6751 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m40620(__this, method) (( bool (*) (List_1_t6751 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m40620_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m40621_gshared (List_1_t6751 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m40621(__this, ___index, method) (( Object_t * (*) (List_1_t6751 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m40621_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m40622_gshared (List_1_t6751 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m40622(__this, ___index, ___value, method) (( void (*) (List_1_t6751 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m40622_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Add(T)
extern "C" void List_1_Add_m40623_gshared (List_1_t6751 * __this, double ___item, const MethodInfo* method);
#define List_1_Add_m40623(__this, ___item, method) (( void (*) (List_1_t6751 *, double, const MethodInfo*))List_1_Add_m40623_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m40624_gshared (List_1_t6751 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m40624(__this, ___newCount, method) (( void (*) (List_1_t6751 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m40624_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m40625_gshared (List_1_t6751 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m40625(__this, ___idx, ___count, method) (( void (*) (List_1_t6751 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m40625_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m40626_gshared (List_1_t6751 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m40626(__this, ___collection, method) (( void (*) (List_1_t6751 *, Object_t*, const MethodInfo*))List_1_AddCollection_m40626_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m40627_gshared (List_1_t6751 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m40627(__this, ___enumerable, method) (( void (*) (List_1_t6751 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m40627_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m40628_gshared (List_1_t6751 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m40628(__this, ___collection, method) (( void (*) (List_1_t6751 *, Object_t*, const MethodInfo*))List_1_AddRange_m40628_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Double>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6753 * List_1_AsReadOnly_m40629_gshared (List_1_t6751 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m40629(__this, method) (( ReadOnlyCollection_1_t6753 * (*) (List_1_t6751 *, const MethodInfo*))List_1_AsReadOnly_m40629_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Clear()
extern "C" void List_1_Clear_m40630_gshared (List_1_t6751 * __this, const MethodInfo* method);
#define List_1_Clear_m40630(__this, method) (( void (*) (List_1_t6751 *, const MethodInfo*))List_1_Clear_m40630_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::Contains(T)
extern "C" bool List_1_Contains_m40631_gshared (List_1_t6751 * __this, double ___item, const MethodInfo* method);
#define List_1_Contains_m40631(__this, ___item, method) (( bool (*) (List_1_t6751 *, double, const MethodInfo*))List_1_Contains_m40631_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m40632_gshared (List_1_t6751 * __this, DoubleU5BU5D_t4873* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m40632(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6751 *, DoubleU5BU5D_t4873*, int32_t, const MethodInfo*))List_1_CopyTo_m40632_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Double>::Find(System.Predicate`1<T>)
extern "C" double List_1_Find_m40633_gshared (List_1_t6751 * __this, Predicate_1_t6758 * ___match, const MethodInfo* method);
#define List_1_Find_m40633(__this, ___match, method) (( double (*) (List_1_t6751 *, Predicate_1_t6758 *, const MethodInfo*))List_1_Find_m40633_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m40634_gshared (Object_t * __this /* static, unused */, Predicate_1_t6758 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m40634(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6758 *, const MethodInfo*))List_1_CheckMatch_m40634_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m40635_gshared (List_1_t6751 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6758 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m40635(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6751 *, int32_t, int32_t, Predicate_1_t6758 *, const MethodInfo*))List_1_GetIndex_m40635_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Double>::GetEnumerator()
extern "C" Enumerator_t6752  List_1_GetEnumerator_m40636_gshared (List_1_t6751 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m40636(__this, method) (( Enumerator_t6752  (*) (List_1_t6751 *, const MethodInfo*))List_1_GetEnumerator_m40636_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Double>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6751 * List_1_GetRange_m40637_gshared (List_1_t6751 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m40637(__this, ___index, ___count, method) (( List_1_t6751 * (*) (List_1_t6751 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m40637_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m40638_gshared (List_1_t6751 * __this, double ___item, const MethodInfo* method);
#define List_1_IndexOf_m40638(__this, ___item, method) (( int32_t (*) (List_1_t6751 *, double, const MethodInfo*))List_1_IndexOf_m40638_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m40639_gshared (List_1_t6751 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m40639(__this, ___start, ___delta, method) (( void (*) (List_1_t6751 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m40639_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m40640_gshared (List_1_t6751 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m40640(__this, ___index, method) (( void (*) (List_1_t6751 *, int32_t, const MethodInfo*))List_1_CheckIndex_m40640_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m40641_gshared (List_1_t6751 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define List_1_Insert_m40641(__this, ___index, ___item, method) (( void (*) (List_1_t6751 *, int32_t, double, const MethodInfo*))List_1_Insert_m40641_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m40642_gshared (List_1_t6751 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m40642(__this, ___collection, method) (( void (*) (List_1_t6751 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m40642_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m40643_gshared (List_1_t6751 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m40643(__this, ___index, ___collection, method) (( void (*) (List_1_t6751 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m40643_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m40644_gshared (List_1_t6751 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m40644(__this, ___index, ___collection, method) (( void (*) (List_1_t6751 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m40644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m40645_gshared (List_1_t6751 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m40645(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6751 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m40645_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::Remove(T)
extern "C" bool List_1_Remove_m40646_gshared (List_1_t6751 * __this, double ___item, const MethodInfo* method);
#define List_1_Remove_m40646(__this, ___item, method) (( bool (*) (List_1_t6751 *, double, const MethodInfo*))List_1_Remove_m40646_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m40647_gshared (List_1_t6751 * __this, Predicate_1_t6758 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m40647(__this, ___match, method) (( int32_t (*) (List_1_t6751 *, Predicate_1_t6758 *, const MethodInfo*))List_1_RemoveAll_m40647_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Double>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m40648_gshared (List_1_t6751 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m40648(__this, ___index, method) (( void (*) (List_1_t6751 *, int32_t, const MethodInfo*))List_1_RemoveAt_m40648_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m40649_gshared (List_1_t6751 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m40649(__this, ___index, ___count, method) (( void (*) (List_1_t6751 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m40649_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Reverse()
extern "C" void List_1_Reverse_m40650_gshared (List_1_t6751 * __this, const MethodInfo* method);
#define List_1_Reverse_m40650(__this, method) (( void (*) (List_1_t6751 *, const MethodInfo*))List_1_Reverse_m40650_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort()
extern "C" void List_1_Sort_m40651_gshared (List_1_t6751 * __this, const MethodInfo* method);
#define List_1_Sort_m40651(__this, method) (( void (*) (List_1_t6751 *, const MethodInfo*))List_1_Sort_m40651_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m40652_gshared (List_1_t6751 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m40652(__this, ___comparer, method) (( void (*) (List_1_t6751 *, Object_t*, const MethodInfo*))List_1_Sort_m40652_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m40653_gshared (List_1_t6751 * __this, Comparison_1_t6762 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m40653(__this, ___comparison, method) (( void (*) (List_1_t6751 *, Comparison_1_t6762 *, const MethodInfo*))List_1_Sort_m40653_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Double>::ToArray()
extern "C" DoubleU5BU5D_t4873* List_1_ToArray_m40654_gshared (List_1_t6751 * __this, const MethodInfo* method);
#define List_1_ToArray_m40654(__this, method) (( DoubleU5BU5D_t4873* (*) (List_1_t6751 *, const MethodInfo*))List_1_ToArray_m40654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::TrimExcess()
extern "C" void List_1_TrimExcess_m40655_gshared (List_1_t6751 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m40655(__this, method) (( void (*) (List_1_t6751 *, const MethodInfo*))List_1_TrimExcess_m40655_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m40656_gshared (List_1_t6751 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m40656(__this, method) (( int32_t (*) (List_1_t6751 *, const MethodInfo*))List_1_get_Capacity_m40656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m40657_gshared (List_1_t6751 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m40657(__this, ___value, method) (( void (*) (List_1_t6751 *, int32_t, const MethodInfo*))List_1_set_Capacity_m40657_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Count()
extern "C" int32_t List_1_get_Count_m40658_gshared (List_1_t6751 * __this, const MethodInfo* method);
#define List_1_get_Count_m40658(__this, method) (( int32_t (*) (List_1_t6751 *, const MethodInfo*))List_1_get_Count_m40658_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Double>::get_Item(System.Int32)
extern "C" double List_1_get_Item_m40659_gshared (List_1_t6751 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m40659(__this, ___index, method) (( double (*) (List_1_t6751 *, int32_t, const MethodInfo*))List_1_get_Item_m40659_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m40660_gshared (List_1_t6751 * __this, int32_t ___index, double ___value, const MethodInfo* method);
#define List_1_set_Item_m40660(__this, ___index, ___value, method) (( void (*) (List_1_t6751 *, int32_t, double, const MethodInfo*))List_1_set_Item_m40660_gshared)(__this, ___index, ___value, method)
