#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int64>
struct List_1_t6651;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int64>
struct IEnumerable_1_t6348;
// System.Int64[]
struct Int64U5BU5D_t4870;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6349;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9080;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int64>
struct ReadOnlyCollection_1_t6653;
// System.Predicate`1<System.Int64>
struct Predicate_1_t6655;
// System.Collections.Generic.IComparer`1<System.Int64>
struct IComparer_1_t5365;
// System.Comparison`1<System.Int64>
struct Comparison_1_t6659;
// System.Collections.Generic.List`1/Enumerator<System.Int64>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_63.h"

// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor()
extern "C" void List_1__ctor_m39279_gshared (List_1_t6651 * __this, const MethodInfo* method);
#define List_1__ctor_m39279(__this, method) (( void (*) (List_1_t6651 *, const MethodInfo*))List_1__ctor_m39279_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m39280_gshared (List_1_t6651 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m39280(__this, ___collection, method) (( void (*) (List_1_t6651 *, Object_t*, const MethodInfo*))List_1__ctor_m39280_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(System.Int32)
extern "C" void List_1__ctor_m39281_gshared (List_1_t6651 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m39281(__this, ___capacity, method) (( void (*) (List_1_t6651 *, int32_t, const MethodInfo*))List_1__ctor_m39281_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m39282_gshared (List_1_t6651 * __this, Int64U5BU5D_t4870* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m39282(__this, ___data, ___size, method) (( void (*) (List_1_t6651 *, Int64U5BU5D_t4870*, int32_t, const MethodInfo*))List_1__ctor_m39282_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.cctor()
extern "C" void List_1__cctor_m39283_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m39283(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m39283_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39284_gshared (List_1_t6651 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39284(__this, method) (( Object_t* (*) (List_1_t6651 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39284_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m39285_gshared (List_1_t6651 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m39285(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6651 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m39285_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m39286_gshared (List_1_t6651 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39286(__this, method) (( Object_t * (*) (List_1_t6651 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m39286_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m39287_gshared (List_1_t6651 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m39287(__this, ___item, method) (( int32_t (*) (List_1_t6651 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m39287_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m39288_gshared (List_1_t6651 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m39288(__this, ___item, method) (( bool (*) (List_1_t6651 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m39288_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m39289_gshared (List_1_t6651 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m39289(__this, ___item, method) (( int32_t (*) (List_1_t6651 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m39289_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m39290_gshared (List_1_t6651 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m39290(__this, ___index, ___item, method) (( void (*) (List_1_t6651 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m39290_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m39291_gshared (List_1_t6651 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m39291(__this, ___item, method) (( void (*) (List_1_t6651 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m39291_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39292_gshared (List_1_t6651 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39292(__this, method) (( bool (*) (List_1_t6651 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39292_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m39293_gshared (List_1_t6651 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39293(__this, method) (( bool (*) (List_1_t6651 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m39293_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m39294_gshared (List_1_t6651 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m39294(__this, method) (( Object_t * (*) (List_1_t6651 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m39294_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m39295_gshared (List_1_t6651 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m39295(__this, method) (( bool (*) (List_1_t6651 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m39295_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m39296_gshared (List_1_t6651 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m39296(__this, method) (( bool (*) (List_1_t6651 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m39296_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m39297_gshared (List_1_t6651 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m39297(__this, ___index, method) (( Object_t * (*) (List_1_t6651 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m39297_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m39298_gshared (List_1_t6651 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m39298(__this, ___index, ___value, method) (( void (*) (List_1_t6651 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m39298_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Add(T)
extern "C" void List_1_Add_m39299_gshared (List_1_t6651 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Add_m39299(__this, ___item, method) (( void (*) (List_1_t6651 *, int64_t, const MethodInfo*))List_1_Add_m39299_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m39300_gshared (List_1_t6651 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m39300(__this, ___newCount, method) (( void (*) (List_1_t6651 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m39300_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m39301_gshared (List_1_t6651 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m39301(__this, ___idx, ___count, method) (( void (*) (List_1_t6651 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m39301_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m39302_gshared (List_1_t6651 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m39302(__this, ___collection, method) (( void (*) (List_1_t6651 *, Object_t*, const MethodInfo*))List_1_AddCollection_m39302_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m39303_gshared (List_1_t6651 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m39303(__this, ___enumerable, method) (( void (*) (List_1_t6651 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m39303_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m39304_gshared (List_1_t6651 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m39304(__this, ___collection, method) (( void (*) (List_1_t6651 *, Object_t*, const MethodInfo*))List_1_AddRange_m39304_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int64>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6653 * List_1_AsReadOnly_m39305_gshared (List_1_t6651 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m39305(__this, method) (( ReadOnlyCollection_1_t6653 * (*) (List_1_t6651 *, const MethodInfo*))List_1_AsReadOnly_m39305_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Clear()
extern "C" void List_1_Clear_m39306_gshared (List_1_t6651 * __this, const MethodInfo* method);
#define List_1_Clear_m39306(__this, method) (( void (*) (List_1_t6651 *, const MethodInfo*))List_1_Clear_m39306_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Contains(T)
extern "C" bool List_1_Contains_m39307_gshared (List_1_t6651 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Contains_m39307(__this, ___item, method) (( bool (*) (List_1_t6651 *, int64_t, const MethodInfo*))List_1_Contains_m39307_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m39308_gshared (List_1_t6651 * __this, Int64U5BU5D_t4870* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m39308(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6651 *, Int64U5BU5D_t4870*, int32_t, const MethodInfo*))List_1_CopyTo_m39308_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int64>::Find(System.Predicate`1<T>)
extern "C" int64_t List_1_Find_m39309_gshared (List_1_t6651 * __this, Predicate_1_t6655 * ___match, const MethodInfo* method);
#define List_1_Find_m39309(__this, ___match, method) (( int64_t (*) (List_1_t6651 *, Predicate_1_t6655 *, const MethodInfo*))List_1_Find_m39309_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m39310_gshared (Object_t * __this /* static, unused */, Predicate_1_t6655 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m39310(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6655 *, const MethodInfo*))List_1_CheckMatch_m39310_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m39311_gshared (List_1_t6651 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6655 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m39311(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6651 *, int32_t, int32_t, Predicate_1_t6655 *, const MethodInfo*))List_1_GetIndex_m39311_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int64>::GetEnumerator()
extern "C" Enumerator_t6652  List_1_GetEnumerator_m39312_gshared (List_1_t6651 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m39312(__this, method) (( Enumerator_t6652  (*) (List_1_t6651 *, const MethodInfo*))List_1_GetEnumerator_m39312_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int64>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6651 * List_1_GetRange_m39313_gshared (List_1_t6651 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m39313(__this, ___index, ___count, method) (( List_1_t6651 * (*) (List_1_t6651 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m39313_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m39314_gshared (List_1_t6651 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m39314(__this, ___item, method) (( int32_t (*) (List_1_t6651 *, int64_t, const MethodInfo*))List_1_IndexOf_m39314_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m39315_gshared (List_1_t6651 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m39315(__this, ___start, ___delta, method) (( void (*) (List_1_t6651 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m39315_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m39316_gshared (List_1_t6651 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m39316(__this, ___index, method) (( void (*) (List_1_t6651 *, int32_t, const MethodInfo*))List_1_CheckIndex_m39316_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m39317_gshared (List_1_t6651 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define List_1_Insert_m39317(__this, ___index, ___item, method) (( void (*) (List_1_t6651 *, int32_t, int64_t, const MethodInfo*))List_1_Insert_m39317_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m39318_gshared (List_1_t6651 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m39318(__this, ___collection, method) (( void (*) (List_1_t6651 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m39318_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m39319_gshared (List_1_t6651 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m39319(__this, ___index, ___collection, method) (( void (*) (List_1_t6651 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m39319_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m39320_gshared (List_1_t6651 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m39320(__this, ___index, ___collection, method) (( void (*) (List_1_t6651 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m39320_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m39321_gshared (List_1_t6651 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m39321(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6651 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m39321_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Remove(T)
extern "C" bool List_1_Remove_m39322_gshared (List_1_t6651 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Remove_m39322(__this, ___item, method) (( bool (*) (List_1_t6651 *, int64_t, const MethodInfo*))List_1_Remove_m39322_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m39323_gshared (List_1_t6651 * __this, Predicate_1_t6655 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m39323(__this, ___match, method) (( int32_t (*) (List_1_t6651 *, Predicate_1_t6655 *, const MethodInfo*))List_1_RemoveAll_m39323_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m39324_gshared (List_1_t6651 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m39324(__this, ___index, method) (( void (*) (List_1_t6651 *, int32_t, const MethodInfo*))List_1_RemoveAt_m39324_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m39325_gshared (List_1_t6651 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m39325(__this, ___index, ___count, method) (( void (*) (List_1_t6651 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m39325_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Reverse()
extern "C" void List_1_Reverse_m39326_gshared (List_1_t6651 * __this, const MethodInfo* method);
#define List_1_Reverse_m39326(__this, method) (( void (*) (List_1_t6651 *, const MethodInfo*))List_1_Reverse_m39326_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort()
extern "C" void List_1_Sort_m39327_gshared (List_1_t6651 * __this, const MethodInfo* method);
#define List_1_Sort_m39327(__this, method) (( void (*) (List_1_t6651 *, const MethodInfo*))List_1_Sort_m39327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m39328_gshared (List_1_t6651 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m39328(__this, ___comparer, method) (( void (*) (List_1_t6651 *, Object_t*, const MethodInfo*))List_1_Sort_m39328_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m39329_gshared (List_1_t6651 * __this, Comparison_1_t6659 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m39329(__this, ___comparison, method) (( void (*) (List_1_t6651 *, Comparison_1_t6659 *, const MethodInfo*))List_1_Sort_m39329_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int64>::ToArray()
extern "C" Int64U5BU5D_t4870* List_1_ToArray_m39330_gshared (List_1_t6651 * __this, const MethodInfo* method);
#define List_1_ToArray_m39330(__this, method) (( Int64U5BU5D_t4870* (*) (List_1_t6651 *, const MethodInfo*))List_1_ToArray_m39330_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::TrimExcess()
extern "C" void List_1_TrimExcess_m39331_gshared (List_1_t6651 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m39331(__this, method) (( void (*) (List_1_t6651 *, const MethodInfo*))List_1_TrimExcess_m39331_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m39332_gshared (List_1_t6651 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m39332(__this, method) (( int32_t (*) (List_1_t6651 *, const MethodInfo*))List_1_get_Capacity_m39332_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m39333_gshared (List_1_t6651 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m39333(__this, ___value, method) (( void (*) (List_1_t6651 *, int32_t, const MethodInfo*))List_1_set_Capacity_m39333_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Count()
extern "C" int32_t List_1_get_Count_m39334_gshared (List_1_t6651 * __this, const MethodInfo* method);
#define List_1_get_Count_m39334(__this, method) (( int32_t (*) (List_1_t6651 *, const MethodInfo*))List_1_get_Count_m39334_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int64>::get_Item(System.Int32)
extern "C" int64_t List_1_get_Item_m39335_gshared (List_1_t6651 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m39335(__this, ___index, method) (( int64_t (*) (List_1_t6651 *, int32_t, const MethodInfo*))List_1_get_Item_m39335_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m39336_gshared (List_1_t6651 * __this, int32_t ___index, int64_t ___value, const MethodInfo* method);
#define List_1_set_Item_m39336(__this, ___index, ___value, method) (( void (*) (List_1_t6651 *, int32_t, int64_t, const MethodInfo*))List_1_set_Item_m39336_gshared)(__this, ___index, ___value, method)
