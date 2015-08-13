#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t6600;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt32>
struct IEnumerable_1_t6338;
// System.UInt32[]
struct UInt32U5BU5D_t3217;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t6339;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9201;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt32>
struct ReadOnlyCollection_1_t6602;
// System.Predicate`1<System.UInt32>
struct Predicate_1_t6607;
// System.Collections.Generic.IComparer`1<System.UInt32>
struct IComparer_1_t9202;
// System.Comparison`1<System.UInt32>
struct Comparison_1_t6611;
// System.Collections.Generic.List`1/Enumerator<System.UInt32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_61.h"

// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor()
extern "C" void List_1__ctor_m38608_gshared (List_1_t6600 * __this, const MethodInfo* method);
#define List_1__ctor_m38608(__this, method) (( void (*) (List_1_t6600 *, const MethodInfo*))List_1__ctor_m38608_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m38609_gshared (List_1_t6600 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m38609(__this, ___collection, method) (( void (*) (List_1_t6600 *, Object_t*, const MethodInfo*))List_1__ctor_m38609_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m38610_gshared (List_1_t6600 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m38610(__this, ___capacity, method) (( void (*) (List_1_t6600 *, int32_t, const MethodInfo*))List_1__ctor_m38610_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m38611_gshared (List_1_t6600 * __this, UInt32U5BU5D_t3217* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m38611(__this, ___data, ___size, method) (( void (*) (List_1_t6600 *, UInt32U5BU5D_t3217*, int32_t, const MethodInfo*))List_1__ctor_m38611_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.cctor()
extern "C" void List_1__cctor_m38612_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m38612(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m38612_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38613_gshared (List_1_t6600 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38613(__this, method) (( Object_t* (*) (List_1_t6600 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38613_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m38614_gshared (List_1_t6600 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m38614(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6600 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m38614_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m38615_gshared (List_1_t6600 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m38615(__this, method) (( Object_t * (*) (List_1_t6600 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m38615_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m38616_gshared (List_1_t6600 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m38616(__this, ___item, method) (( int32_t (*) (List_1_t6600 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m38616_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m38617_gshared (List_1_t6600 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m38617(__this, ___item, method) (( bool (*) (List_1_t6600 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m38617_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m38618_gshared (List_1_t6600 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m38618(__this, ___item, method) (( int32_t (*) (List_1_t6600 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m38618_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m38619_gshared (List_1_t6600 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m38619(__this, ___index, ___item, method) (( void (*) (List_1_t6600 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m38619_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m38620_gshared (List_1_t6600 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m38620(__this, ___item, method) (( void (*) (List_1_t6600 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m38620_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38621_gshared (List_1_t6600 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38621(__this, method) (( bool (*) (List_1_t6600 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38621_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m38622_gshared (List_1_t6600 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m38622(__this, method) (( bool (*) (List_1_t6600 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m38622_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m38623_gshared (List_1_t6600 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m38623(__this, method) (( Object_t * (*) (List_1_t6600 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m38623_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m38624_gshared (List_1_t6600 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m38624(__this, method) (( bool (*) (List_1_t6600 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m38624_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m38625_gshared (List_1_t6600 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m38625(__this, method) (( bool (*) (List_1_t6600 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m38625_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m38626_gshared (List_1_t6600 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m38626(__this, ___index, method) (( Object_t * (*) (List_1_t6600 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m38626_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m38627_gshared (List_1_t6600 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m38627(__this, ___index, ___value, method) (( void (*) (List_1_t6600 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m38627_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Add(T)
extern "C" void List_1_Add_m38628_gshared (List_1_t6600 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Add_m38628(__this, ___item, method) (( void (*) (List_1_t6600 *, uint32_t, const MethodInfo*))List_1_Add_m38628_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m38629_gshared (List_1_t6600 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m38629(__this, ___newCount, method) (( void (*) (List_1_t6600 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m38629_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m38630_gshared (List_1_t6600 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m38630(__this, ___idx, ___count, method) (( void (*) (List_1_t6600 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m38630_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m38631_gshared (List_1_t6600 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m38631(__this, ___collection, method) (( void (*) (List_1_t6600 *, Object_t*, const MethodInfo*))List_1_AddCollection_m38631_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m38632_gshared (List_1_t6600 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m38632(__this, ___enumerable, method) (( void (*) (List_1_t6600 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m38632_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m38633_gshared (List_1_t6600 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m38633(__this, ___collection, method) (( void (*) (List_1_t6600 *, Object_t*, const MethodInfo*))List_1_AddRange_m38633_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6602 * List_1_AsReadOnly_m38634_gshared (List_1_t6600 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m38634(__this, method) (( ReadOnlyCollection_1_t6602 * (*) (List_1_t6600 *, const MethodInfo*))List_1_AsReadOnly_m38634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Clear()
extern "C" void List_1_Clear_m38635_gshared (List_1_t6600 * __this, const MethodInfo* method);
#define List_1_Clear_m38635(__this, method) (( void (*) (List_1_t6600 *, const MethodInfo*))List_1_Clear_m38635_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Contains(T)
extern "C" bool List_1_Contains_m38636_gshared (List_1_t6600 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Contains_m38636(__this, ___item, method) (( bool (*) (List_1_t6600 *, uint32_t, const MethodInfo*))List_1_Contains_m38636_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m38637_gshared (List_1_t6600 * __this, UInt32U5BU5D_t3217* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m38637(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6600 *, UInt32U5BU5D_t3217*, int32_t, const MethodInfo*))List_1_CopyTo_m38637_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt32>::Find(System.Predicate`1<T>)
extern "C" uint32_t List_1_Find_m38638_gshared (List_1_t6600 * __this, Predicate_1_t6607 * ___match, const MethodInfo* method);
#define List_1_Find_m38638(__this, ___match, method) (( uint32_t (*) (List_1_t6600 *, Predicate_1_t6607 *, const MethodInfo*))List_1_Find_m38638_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m38639_gshared (Object_t * __this /* static, unused */, Predicate_1_t6607 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m38639(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6607 *, const MethodInfo*))List_1_CheckMatch_m38639_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m38640_gshared (List_1_t6600 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6607 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m38640(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6600 *, int32_t, int32_t, Predicate_1_t6607 *, const MethodInfo*))List_1_GetIndex_m38640_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt32>::GetEnumerator()
extern "C" Enumerator_t6601  List_1_GetEnumerator_m38641_gshared (List_1_t6600 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m38641(__this, method) (( Enumerator_t6601  (*) (List_1_t6600 *, const MethodInfo*))List_1_GetEnumerator_m38641_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6600 * List_1_GetRange_m38642_gshared (List_1_t6600 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m38642(__this, ___index, ___count, method) (( List_1_t6600 * (*) (List_1_t6600 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m38642_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m38643_gshared (List_1_t6600 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m38643(__this, ___item, method) (( int32_t (*) (List_1_t6600 *, uint32_t, const MethodInfo*))List_1_IndexOf_m38643_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m38644_gshared (List_1_t6600 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m38644(__this, ___start, ___delta, method) (( void (*) (List_1_t6600 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m38644_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m38645_gshared (List_1_t6600 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m38645(__this, ___index, method) (( void (*) (List_1_t6600 *, int32_t, const MethodInfo*))List_1_CheckIndex_m38645_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m38646_gshared (List_1_t6600 * __this, int32_t ___index, uint32_t ___item, const MethodInfo* method);
#define List_1_Insert_m38646(__this, ___index, ___item, method) (( void (*) (List_1_t6600 *, int32_t, uint32_t, const MethodInfo*))List_1_Insert_m38646_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m38647_gshared (List_1_t6600 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m38647(__this, ___collection, method) (( void (*) (List_1_t6600 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m38647_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m38648_gshared (List_1_t6600 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m38648(__this, ___index, ___collection, method) (( void (*) (List_1_t6600 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m38648_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m38649_gshared (List_1_t6600 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m38649(__this, ___index, ___collection, method) (( void (*) (List_1_t6600 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m38649_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m38650_gshared (List_1_t6600 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m38650(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6600 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m38650_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Remove(T)
extern "C" bool List_1_Remove_m38651_gshared (List_1_t6600 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Remove_m38651(__this, ___item, method) (( bool (*) (List_1_t6600 *, uint32_t, const MethodInfo*))List_1_Remove_m38651_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m38652_gshared (List_1_t6600 * __this, Predicate_1_t6607 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m38652(__this, ___match, method) (( int32_t (*) (List_1_t6600 *, Predicate_1_t6607 *, const MethodInfo*))List_1_RemoveAll_m38652_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m38653_gshared (List_1_t6600 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m38653(__this, ___index, method) (( void (*) (List_1_t6600 *, int32_t, const MethodInfo*))List_1_RemoveAt_m38653_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m38654_gshared (List_1_t6600 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m38654(__this, ___index, ___count, method) (( void (*) (List_1_t6600 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m38654_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Reverse()
extern "C" void List_1_Reverse_m38655_gshared (List_1_t6600 * __this, const MethodInfo* method);
#define List_1_Reverse_m38655(__this, method) (( void (*) (List_1_t6600 *, const MethodInfo*))List_1_Reverse_m38655_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort()
extern "C" void List_1_Sort_m38656_gshared (List_1_t6600 * __this, const MethodInfo* method);
#define List_1_Sort_m38656(__this, method) (( void (*) (List_1_t6600 *, const MethodInfo*))List_1_Sort_m38656_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m38657_gshared (List_1_t6600 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m38657(__this, ___comparer, method) (( void (*) (List_1_t6600 *, Object_t*, const MethodInfo*))List_1_Sort_m38657_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m38658_gshared (List_1_t6600 * __this, Comparison_1_t6611 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m38658(__this, ___comparison, method) (( void (*) (List_1_t6600 *, Comparison_1_t6611 *, const MethodInfo*))List_1_Sort_m38658_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt32>::ToArray()
extern "C" UInt32U5BU5D_t3217* List_1_ToArray_m38659_gshared (List_1_t6600 * __this, const MethodInfo* method);
#define List_1_ToArray_m38659(__this, method) (( UInt32U5BU5D_t3217* (*) (List_1_t6600 *, const MethodInfo*))List_1_ToArray_m38659_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::TrimExcess()
extern "C" void List_1_TrimExcess_m38660_gshared (List_1_t6600 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m38660(__this, method) (( void (*) (List_1_t6600 *, const MethodInfo*))List_1_TrimExcess_m38660_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m38661_gshared (List_1_t6600 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m38661(__this, method) (( int32_t (*) (List_1_t6600 *, const MethodInfo*))List_1_get_Capacity_m38661_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m38662_gshared (List_1_t6600 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m38662(__this, ___value, method) (( void (*) (List_1_t6600 *, int32_t, const MethodInfo*))List_1_set_Capacity_m38662_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Count()
extern "C" int32_t List_1_get_Count_m38663_gshared (List_1_t6600 * __this, const MethodInfo* method);
#define List_1_get_Count_m38663(__this, method) (( int32_t (*) (List_1_t6600 *, const MethodInfo*))List_1_get_Count_m38663_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt32>::get_Item(System.Int32)
extern "C" uint32_t List_1_get_Item_m38664_gshared (List_1_t6600 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m38664(__this, ___index, method) (( uint32_t (*) (List_1_t6600 *, int32_t, const MethodInfo*))List_1_get_Item_m38664_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m38665_gshared (List_1_t6600 * __this, int32_t ___index, uint32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m38665(__this, ___index, ___value, method) (( void (*) (List_1_t6600 *, int32_t, uint32_t, const MethodInfo*))List_1_set_Item_m38665_gshared)(__this, ___index, ___value, method)
