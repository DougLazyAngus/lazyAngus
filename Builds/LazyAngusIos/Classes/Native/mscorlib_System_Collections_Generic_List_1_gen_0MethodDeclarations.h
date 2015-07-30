#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t636;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t659;
// System.Object[]
struct ObjectU5BU5D_t634;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1168;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1130;
// System.Predicate`1<System.Object>
struct Predicate_1_t5379;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t5602;
// System.Comparison`1<System.Object>
struct Comparison_1_t5385;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3463_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1__ctor_m3463(__this, method) (( void (*) (List_1_t636 *, const MethodInfo*))List_1__ctor_m3463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m7198_gshared (List_1_t636 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m7198(__this, ___collection, method) (( void (*) (List_1_t636 *, Object_t*, const MethodInfo*))List_1__ctor_m7198_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m21295_gshared (List_1_t636 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m21295(__this, ___capacity, method) (( void (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1__ctor_m21295_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m21297_gshared (List_1_t636 * __this, ObjectU5BU5D_t634* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m21297(__this, ___data, ___size, method) (( void (*) (List_1_t636 *, ObjectU5BU5D_t634*, int32_t, const MethodInfo*))List_1__ctor_m21297_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m21299_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21299(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21299_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088(__this, method) (( Object_t* (*) (List_1_t636 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10088_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10071_gshared (List_1_t636 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10071(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t636 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10071_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10067_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10067(__this, method) (( Object_t * (*) (List_1_t636 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10076_gshared (List_1_t636 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10076(__this, ___item, method) (( int32_t (*) (List_1_t636 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10076_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10078_gshared (List_1_t636 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10078(__this, ___item, method) (( bool (*) (List_1_t636 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10078_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10079_gshared (List_1_t636 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10079(__this, ___item, method) (( int32_t (*) (List_1_t636 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10079_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10080_gshared (List_1_t636 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10080(__this, ___index, ___item, method) (( void (*) (List_1_t636 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10080_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10081_gshared (List_1_t636 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10081(__this, ___item, method) (( void (*) (List_1_t636 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10081_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083(__this, method) (( bool (*) (List_1_t636 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10069_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10069(__this, method) (( bool (*) (List_1_t636 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10069_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10070_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10070(__this, method) (( Object_t * (*) (List_1_t636 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10072_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10072(__this, method) (( bool (*) (List_1_t636 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10073_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10073(__this, method) (( bool (*) (List_1_t636 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10073_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10074_gshared (List_1_t636 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10074(__this, ___index, method) (( Object_t * (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10074_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10075_gshared (List_1_t636 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10075(__this, ___index, ___value, method) (( void (*) (List_1_t636 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10075_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10084_gshared (List_1_t636 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10084(__this, ___item, method) (( void (*) (List_1_t636 *, Object_t *, const MethodInfo*))List_1_Add_m10084_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21317_gshared (List_1_t636 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21317(__this, ___newCount, method) (( void (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21317_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m21319_gshared (List_1_t636 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m21319(__this, ___idx, ___count, method) (( void (*) (List_1_t636 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21319_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21321_gshared (List_1_t636 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21321(__this, ___collection, method) (( void (*) (List_1_t636 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21321_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21323_gshared (List_1_t636 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21323(__this, ___enumerable, method) (( void (*) (List_1_t636 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21323_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m21325_gshared (List_1_t636 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m21325(__this, ___collection, method) (( void (*) (List_1_t636 *, Object_t*, const MethodInfo*))List_1_AddRange_m21325_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1130 * List_1_AsReadOnly_m21327_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m21327(__this, method) (( ReadOnlyCollection_1_t1130 * (*) (List_1_t636 *, const MethodInfo*))List_1_AsReadOnly_m21327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10077_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_Clear_m10077(__this, method) (( void (*) (List_1_t636 *, const MethodInfo*))List_1_Clear_m10077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10085_gshared (List_1_t636 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10085(__this, ___item, method) (( bool (*) (List_1_t636 *, Object_t *, const MethodInfo*))List_1_Contains_m10085_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10086_gshared (List_1_t636 * __this, ObjectU5BU5D_t634* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10086(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t636 *, ObjectU5BU5D_t634*, int32_t, const MethodInfo*))List_1_CopyTo_m10086_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m21332_gshared (List_1_t636 * __this, Predicate_1_t5379 * ___match, const MethodInfo* method);
#define List_1_Find_m21332(__this, ___match, method) (( Object_t * (*) (List_1_t636 *, Predicate_1_t5379 *, const MethodInfo*))List_1_Find_m21332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m21334_gshared (Object_t * __this /* static, unused */, Predicate_1_t5379 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m21334(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5379 *, const MethodInfo*))List_1_CheckMatch_m21334_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m21336_gshared (List_1_t636 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5379 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m21336(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t636 *, int32_t, int32_t, Predicate_1_t5379 *, const MethodInfo*))List_1_GetIndex_m21336_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t696  List_1_GetEnumerator_m3619_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m3619(__this, method) (( Enumerator_t696  (*) (List_1_t636 *, const MethodInfo*))List_1_GetEnumerator_m3619_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t636 * List_1_GetRange_m21338_gshared (List_1_t636 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m21338(__this, ___index, ___count, method) (( List_1_t636 * (*) (List_1_t636 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21338_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10089_gshared (List_1_t636 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10089(__this, ___item, method) (( int32_t (*) (List_1_t636 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21341_gshared (List_1_t636 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21341(__this, ___start, ___delta, method) (( void (*) (List_1_t636 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21341_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21343_gshared (List_1_t636 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21343(__this, ___index, method) (( void (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21343_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10090_gshared (List_1_t636 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10090(__this, ___index, ___item, method) (( void (*) (List_1_t636 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10090_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21346_gshared (List_1_t636 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21346(__this, ___collection, method) (( void (*) (List_1_t636 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21346_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m21348_gshared (List_1_t636 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m21348(__this, ___index, ___collection, method) (( void (*) (List_1_t636 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21348_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m21350_gshared (List_1_t636 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m21350(__this, ___index, ___collection, method) (( void (*) (List_1_t636 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21350_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m21352_gshared (List_1_t636 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m21352(__this, ___index, ___enumerable, method) (( void (*) (List_1_t636 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21352_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10087_gshared (List_1_t636 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10087(__this, ___item, method) (( bool (*) (List_1_t636 *, Object_t *, const MethodInfo*))List_1_Remove_m10087_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m21355_gshared (List_1_t636 * __this, Predicate_1_t5379 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m21355(__this, ___match, method) (( int32_t (*) (List_1_t636 *, Predicate_1_t5379 *, const MethodInfo*))List_1_RemoveAll_m21355_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10082_gshared (List_1_t636 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10082(__this, ___index, method) (( void (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10082_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m21358_gshared (List_1_t636 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m21358(__this, ___index, ___count, method) (( void (*) (List_1_t636 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21358_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m21360_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_Reverse_m21360(__this, method) (( void (*) (List_1_t636 *, const MethodInfo*))List_1_Reverse_m21360_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m21362_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_Sort_m21362(__this, method) (( void (*) (List_1_t636 *, const MethodInfo*))List_1_Sort_m21362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m21364_gshared (List_1_t636 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m21364(__this, ___comparer, method) (( void (*) (List_1_t636 *, Object_t*, const MethodInfo*))List_1_Sort_m21364_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21366_gshared (List_1_t636 * __this, Comparison_1_t5385 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21366(__this, ___comparison, method) (( void (*) (List_1_t636 *, Comparison_1_t5385 *, const MethodInfo*))List_1_Sort_m21366_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t634* List_1_ToArray_m21368_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_ToArray_m21368(__this, method) (( ObjectU5BU5D_t634* (*) (List_1_t636 *, const MethodInfo*))List_1_ToArray_m21368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m21370_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m21370(__this, method) (( void (*) (List_1_t636 *, const MethodInfo*))List_1_TrimExcess_m21370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21372_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21372(__this, method) (( int32_t (*) (List_1_t636 *, const MethodInfo*))List_1_get_Capacity_m21372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21374_gshared (List_1_t636 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21374(__this, ___value, method) (( void (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21374_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10068_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_get_Count_m10068(__this, method) (( int32_t (*) (List_1_t636 *, const MethodInfo*))List_1_get_Count_m10068_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10091_gshared (List_1_t636 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10091(__this, ___index, method) (( Object_t * (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1_get_Item_m10091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10092_gshared (List_1_t636 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10092(__this, ___index, ___value, method) (( void (*) (List_1_t636 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10092_gshared)(__this, ___index, ___value, method)
