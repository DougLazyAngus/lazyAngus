#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t698;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t724;
// System.Object[]
struct ObjectU5BU5D_t696;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1202;
// System.Predicate`1<System.Object>
struct Predicate_1_t5444;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t5667;
// System.Comparison`1<System.Object>
struct Comparison_1_t5450;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3858_gshared (List_1_t698 * __this, const MethodInfo* method);
#define List_1__ctor_m3858(__this, method) (( void (*) (List_1_t698 *, const MethodInfo*))List_1__ctor_m3858_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m7623_gshared (List_1_t698 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m7623(__this, ___collection, method) (( void (*) (List_1_t698 *, Object_t*, const MethodInfo*))List_1__ctor_m7623_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m21718_gshared (List_1_t698 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m21718(__this, ___capacity, method) (( void (*) (List_1_t698 *, int32_t, const MethodInfo*))List_1__ctor_m21718_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m21720_gshared (List_1_t698 * __this, ObjectU5BU5D_t696* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m21720(__this, ___data, ___size, method) (( void (*) (List_1_t698 *, ObjectU5BU5D_t696*, int32_t, const MethodInfo*))List_1__ctor_m21720_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m21722_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21722(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21722_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10513_gshared (List_1_t698 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10513(__this, method) (( Object_t* (*) (List_1_t698 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10513_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10496_gshared (List_1_t698 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10496(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t698 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10496_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10492_gshared (List_1_t698 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10492(__this, method) (( Object_t * (*) (List_1_t698 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10492_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10501_gshared (List_1_t698 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10501(__this, ___item, method) (( int32_t (*) (List_1_t698 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10501_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10503_gshared (List_1_t698 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10503(__this, ___item, method) (( bool (*) (List_1_t698 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10503_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10504_gshared (List_1_t698 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10504(__this, ___item, method) (( int32_t (*) (List_1_t698 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10504_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10505_gshared (List_1_t698 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10505(__this, ___index, ___item, method) (( void (*) (List_1_t698 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10505_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10506_gshared (List_1_t698 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10506(__this, ___item, method) (( void (*) (List_1_t698 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10506_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10508_gshared (List_1_t698 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10508(__this, method) (( bool (*) (List_1_t698 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10508_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10494_gshared (List_1_t698 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10494(__this, method) (( bool (*) (List_1_t698 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10494_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10495_gshared (List_1_t698 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10495(__this, method) (( Object_t * (*) (List_1_t698 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10497_gshared (List_1_t698 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10497(__this, method) (( bool (*) (List_1_t698 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10497_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10498_gshared (List_1_t698 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10498(__this, method) (( bool (*) (List_1_t698 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10498_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10499_gshared (List_1_t698 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10499(__this, ___index, method) (( Object_t * (*) (List_1_t698 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10499_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10500_gshared (List_1_t698 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10500(__this, ___index, ___value, method) (( void (*) (List_1_t698 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10500_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10509_gshared (List_1_t698 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10509(__this, ___item, method) (( void (*) (List_1_t698 *, Object_t *, const MethodInfo*))List_1_Add_m10509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21740_gshared (List_1_t698 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21740(__this, ___newCount, method) (( void (*) (List_1_t698 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21740_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m21742_gshared (List_1_t698 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m21742(__this, ___idx, ___count, method) (( void (*) (List_1_t698 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21742_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21744_gshared (List_1_t698 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21744(__this, ___collection, method) (( void (*) (List_1_t698 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21744_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21746_gshared (List_1_t698 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21746(__this, ___enumerable, method) (( void (*) (List_1_t698 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21746_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m21748_gshared (List_1_t698 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m21748(__this, ___collection, method) (( void (*) (List_1_t698 *, Object_t*, const MethodInfo*))List_1_AddRange_m21748_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1202 * List_1_AsReadOnly_m21750_gshared (List_1_t698 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m21750(__this, method) (( ReadOnlyCollection_1_t1202 * (*) (List_1_t698 *, const MethodInfo*))List_1_AsReadOnly_m21750_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10502_gshared (List_1_t698 * __this, const MethodInfo* method);
#define List_1_Clear_m10502(__this, method) (( void (*) (List_1_t698 *, const MethodInfo*))List_1_Clear_m10502_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10510_gshared (List_1_t698 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10510(__this, ___item, method) (( bool (*) (List_1_t698 *, Object_t *, const MethodInfo*))List_1_Contains_m10510_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10511_gshared (List_1_t698 * __this, ObjectU5BU5D_t696* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10511(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t698 *, ObjectU5BU5D_t696*, int32_t, const MethodInfo*))List_1_CopyTo_m10511_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m21755_gshared (List_1_t698 * __this, Predicate_1_t5444 * ___match, const MethodInfo* method);
#define List_1_Find_m21755(__this, ___match, method) (( Object_t * (*) (List_1_t698 *, Predicate_1_t5444 *, const MethodInfo*))List_1_Find_m21755_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m21757_gshared (Object_t * __this /* static, unused */, Predicate_1_t5444 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m21757(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5444 *, const MethodInfo*))List_1_CheckMatch_m21757_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m21759_gshared (List_1_t698 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5444 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m21759(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t698 *, int32_t, int32_t, Predicate_1_t5444 *, const MethodInfo*))List_1_GetIndex_m21759_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t760  List_1_GetEnumerator_m4014_gshared (List_1_t698 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m4014(__this, method) (( Enumerator_t760  (*) (List_1_t698 *, const MethodInfo*))List_1_GetEnumerator_m4014_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t698 * List_1_GetRange_m21761_gshared (List_1_t698 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m21761(__this, ___index, ___count, method) (( List_1_t698 * (*) (List_1_t698 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21761_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10514_gshared (List_1_t698 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10514(__this, ___item, method) (( int32_t (*) (List_1_t698 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10514_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21764_gshared (List_1_t698 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21764(__this, ___start, ___delta, method) (( void (*) (List_1_t698 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21764_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21766_gshared (List_1_t698 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21766(__this, ___index, method) (( void (*) (List_1_t698 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21766_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10515_gshared (List_1_t698 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10515(__this, ___index, ___item, method) (( void (*) (List_1_t698 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10515_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21769_gshared (List_1_t698 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21769(__this, ___collection, method) (( void (*) (List_1_t698 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21769_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m21771_gshared (List_1_t698 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m21771(__this, ___index, ___collection, method) (( void (*) (List_1_t698 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21771_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m21773_gshared (List_1_t698 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m21773(__this, ___index, ___collection, method) (( void (*) (List_1_t698 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21773_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m21775_gshared (List_1_t698 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m21775(__this, ___index, ___enumerable, method) (( void (*) (List_1_t698 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21775_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10512_gshared (List_1_t698 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10512(__this, ___item, method) (( bool (*) (List_1_t698 *, Object_t *, const MethodInfo*))List_1_Remove_m10512_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m21778_gshared (List_1_t698 * __this, Predicate_1_t5444 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m21778(__this, ___match, method) (( int32_t (*) (List_1_t698 *, Predicate_1_t5444 *, const MethodInfo*))List_1_RemoveAll_m21778_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10507_gshared (List_1_t698 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10507(__this, ___index, method) (( void (*) (List_1_t698 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10507_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m21781_gshared (List_1_t698 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m21781(__this, ___index, ___count, method) (( void (*) (List_1_t698 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21781_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m21783_gshared (List_1_t698 * __this, const MethodInfo* method);
#define List_1_Reverse_m21783(__this, method) (( void (*) (List_1_t698 *, const MethodInfo*))List_1_Reverse_m21783_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m21785_gshared (List_1_t698 * __this, const MethodInfo* method);
#define List_1_Sort_m21785(__this, method) (( void (*) (List_1_t698 *, const MethodInfo*))List_1_Sort_m21785_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m21787_gshared (List_1_t698 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m21787(__this, ___comparer, method) (( void (*) (List_1_t698 *, Object_t*, const MethodInfo*))List_1_Sort_m21787_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21789_gshared (List_1_t698 * __this, Comparison_1_t5450 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21789(__this, ___comparison, method) (( void (*) (List_1_t698 *, Comparison_1_t5450 *, const MethodInfo*))List_1_Sort_m21789_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t696* List_1_ToArray_m21791_gshared (List_1_t698 * __this, const MethodInfo* method);
#define List_1_ToArray_m21791(__this, method) (( ObjectU5BU5D_t696* (*) (List_1_t698 *, const MethodInfo*))List_1_ToArray_m21791_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m21793_gshared (List_1_t698 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m21793(__this, method) (( void (*) (List_1_t698 *, const MethodInfo*))List_1_TrimExcess_m21793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21795_gshared (List_1_t698 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21795(__this, method) (( int32_t (*) (List_1_t698 *, const MethodInfo*))List_1_get_Capacity_m21795_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21797_gshared (List_1_t698 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21797(__this, ___value, method) (( void (*) (List_1_t698 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21797_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10493_gshared (List_1_t698 * __this, const MethodInfo* method);
#define List_1_get_Count_m10493(__this, method) (( int32_t (*) (List_1_t698 *, const MethodInfo*))List_1_get_Count_m10493_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10516_gshared (List_1_t698 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10516(__this, ___index, method) (( Object_t * (*) (List_1_t698 *, int32_t, const MethodInfo*))List_1_get_Item_m10516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10517_gshared (List_1_t698 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10517(__this, ___index, ___value, method) (( void (*) (List_1_t698 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10517_gshared)(__this, ___index, ___value, method)
