#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t702;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t728;
// System.Object[]
struct ObjectU5BU5D_t700;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1244;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1206;
// System.Predicate`1<System.Object>
struct Predicate_1_t5981;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t6204;
// System.Comparison`1<System.Object>
struct Comparison_1_t5987;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3873_gshared (List_1_t702 * __this, const MethodInfo* method);
#define List_1__ctor_m3873(__this, method) (( void (*) (List_1_t702 *, const MethodInfo*))List_1__ctor_m3873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m7640_gshared (List_1_t702 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m7640(__this, ___collection, method) (( void (*) (List_1_t702 *, Object_t*, const MethodInfo*))List_1__ctor_m7640_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m25920_gshared (List_1_t702 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m25920(__this, ___capacity, method) (( void (*) (List_1_t702 *, int32_t, const MethodInfo*))List_1__ctor_m25920_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m25922_gshared (List_1_t702 * __this, ObjectU5BU5D_t700* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m25922(__this, ___data, ___size, method) (( void (*) (List_1_t702 *, ObjectU5BU5D_t700*, int32_t, const MethodInfo*))List_1__ctor_m25922_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m25924_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m25924(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25924_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10529_gshared (List_1_t702 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10529(__this, method) (( Object_t* (*) (List_1_t702 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10529_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10512_gshared (List_1_t702 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10512(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t702 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10512_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10508_gshared (List_1_t702 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10508(__this, method) (( Object_t * (*) (List_1_t702 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10517_gshared (List_1_t702 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10517(__this, ___item, method) (( int32_t (*) (List_1_t702 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10517_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10519_gshared (List_1_t702 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10519(__this, ___item, method) (( bool (*) (List_1_t702 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10519_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10520_gshared (List_1_t702 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10520(__this, ___item, method) (( int32_t (*) (List_1_t702 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10520_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10521_gshared (List_1_t702 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10521(__this, ___index, ___item, method) (( void (*) (List_1_t702 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10521_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10522_gshared (List_1_t702 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10522(__this, ___item, method) (( void (*) (List_1_t702 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10522_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10524_gshared (List_1_t702 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10524(__this, method) (( bool (*) (List_1_t702 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10524_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10510_gshared (List_1_t702 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10510(__this, method) (( bool (*) (List_1_t702 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10510_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10511_gshared (List_1_t702 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10511(__this, method) (( Object_t * (*) (List_1_t702 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10513_gshared (List_1_t702 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10513(__this, method) (( bool (*) (List_1_t702 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10514_gshared (List_1_t702 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10514(__this, method) (( bool (*) (List_1_t702 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10514_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10515_gshared (List_1_t702 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10515(__this, ___index, method) (( Object_t * (*) (List_1_t702 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10515_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10516_gshared (List_1_t702 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10516(__this, ___index, ___value, method) (( void (*) (List_1_t702 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10516_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10525_gshared (List_1_t702 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10525(__this, ___item, method) (( void (*) (List_1_t702 *, Object_t *, const MethodInfo*))List_1_Add_m10525_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m25942_gshared (List_1_t702 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m25942(__this, ___newCount, method) (( void (*) (List_1_t702 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25942_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m25944_gshared (List_1_t702 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m25944(__this, ___idx, ___count, method) (( void (*) (List_1_t702 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25944_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m25946_gshared (List_1_t702 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m25946(__this, ___collection, method) (( void (*) (List_1_t702 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25946_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m25948_gshared (List_1_t702 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m25948(__this, ___enumerable, method) (( void (*) (List_1_t702 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25948_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m25950_gshared (List_1_t702 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m25950(__this, ___collection, method) (( void (*) (List_1_t702 *, Object_t*, const MethodInfo*))List_1_AddRange_m25950_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1206 * List_1_AsReadOnly_m25952_gshared (List_1_t702 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m25952(__this, method) (( ReadOnlyCollection_1_t1206 * (*) (List_1_t702 *, const MethodInfo*))List_1_AsReadOnly_m25952_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10518_gshared (List_1_t702 * __this, const MethodInfo* method);
#define List_1_Clear_m10518(__this, method) (( void (*) (List_1_t702 *, const MethodInfo*))List_1_Clear_m10518_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10526_gshared (List_1_t702 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10526(__this, ___item, method) (( bool (*) (List_1_t702 *, Object_t *, const MethodInfo*))List_1_Contains_m10526_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10527_gshared (List_1_t702 * __this, ObjectU5BU5D_t700* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10527(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t702 *, ObjectU5BU5D_t700*, int32_t, const MethodInfo*))List_1_CopyTo_m10527_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m25957_gshared (List_1_t702 * __this, Predicate_1_t5981 * ___match, const MethodInfo* method);
#define List_1_Find_m25957(__this, ___match, method) (( Object_t * (*) (List_1_t702 *, Predicate_1_t5981 *, const MethodInfo*))List_1_Find_m25957_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m25959_gshared (Object_t * __this /* static, unused */, Predicate_1_t5981 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m25959(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5981 *, const MethodInfo*))List_1_CheckMatch_m25959_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m25961_gshared (List_1_t702 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5981 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m25961(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t702 *, int32_t, int32_t, Predicate_1_t5981 *, const MethodInfo*))List_1_GetIndex_m25961_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t764  List_1_GetEnumerator_m4029_gshared (List_1_t702 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m4029(__this, method) (( Enumerator_t764  (*) (List_1_t702 *, const MethodInfo*))List_1_GetEnumerator_m4029_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t702 * List_1_GetRange_m25963_gshared (List_1_t702 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m25963(__this, ___index, ___count, method) (( List_1_t702 * (*) (List_1_t702 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m25963_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10530_gshared (List_1_t702 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10530(__this, ___item, method) (( int32_t (*) (List_1_t702 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10530_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m25966_gshared (List_1_t702 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m25966(__this, ___start, ___delta, method) (( void (*) (List_1_t702 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25966_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m25968_gshared (List_1_t702 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m25968(__this, ___index, method) (( void (*) (List_1_t702 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25968_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10531_gshared (List_1_t702 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10531(__this, ___index, ___item, method) (( void (*) (List_1_t702 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10531_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m25971_gshared (List_1_t702 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m25971(__this, ___collection, method) (( void (*) (List_1_t702 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25971_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m25973_gshared (List_1_t702 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m25973(__this, ___index, ___collection, method) (( void (*) (List_1_t702 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m25973_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m25975_gshared (List_1_t702 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m25975(__this, ___index, ___collection, method) (( void (*) (List_1_t702 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25975_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m25977_gshared (List_1_t702 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m25977(__this, ___index, ___enumerable, method) (( void (*) (List_1_t702 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25977_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10528_gshared (List_1_t702 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10528(__this, ___item, method) (( bool (*) (List_1_t702 *, Object_t *, const MethodInfo*))List_1_Remove_m10528_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m25980_gshared (List_1_t702 * __this, Predicate_1_t5981 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m25980(__this, ___match, method) (( int32_t (*) (List_1_t702 *, Predicate_1_t5981 *, const MethodInfo*))List_1_RemoveAll_m25980_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10523_gshared (List_1_t702 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10523(__this, ___index, method) (( void (*) (List_1_t702 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10523_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m25983_gshared (List_1_t702 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m25983(__this, ___index, ___count, method) (( void (*) (List_1_t702 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m25983_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m25985_gshared (List_1_t702 * __this, const MethodInfo* method);
#define List_1_Reverse_m25985(__this, method) (( void (*) (List_1_t702 *, const MethodInfo*))List_1_Reverse_m25985_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m25987_gshared (List_1_t702 * __this, const MethodInfo* method);
#define List_1_Sort_m25987(__this, method) (( void (*) (List_1_t702 *, const MethodInfo*))List_1_Sort_m25987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m25989_gshared (List_1_t702 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m25989(__this, ___comparer, method) (( void (*) (List_1_t702 *, Object_t*, const MethodInfo*))List_1_Sort_m25989_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m25991_gshared (List_1_t702 * __this, Comparison_1_t5987 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m25991(__this, ___comparison, method) (( void (*) (List_1_t702 *, Comparison_1_t5987 *, const MethodInfo*))List_1_Sort_m25991_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t700* List_1_ToArray_m25993_gshared (List_1_t702 * __this, const MethodInfo* method);
#define List_1_ToArray_m25993(__this, method) (( ObjectU5BU5D_t700* (*) (List_1_t702 *, const MethodInfo*))List_1_ToArray_m25993_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m25995_gshared (List_1_t702 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m25995(__this, method) (( void (*) (List_1_t702 *, const MethodInfo*))List_1_TrimExcess_m25995_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m25997_gshared (List_1_t702 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m25997(__this, method) (( int32_t (*) (List_1_t702 *, const MethodInfo*))List_1_get_Capacity_m25997_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m25999_gshared (List_1_t702 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m25999(__this, ___value, method) (( void (*) (List_1_t702 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25999_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10509_gshared (List_1_t702 * __this, const MethodInfo* method);
#define List_1_get_Count_m10509(__this, method) (( int32_t (*) (List_1_t702 *, const MethodInfo*))List_1_get_Count_m10509_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10532_gshared (List_1_t702 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10532(__this, ___index, method) (( Object_t * (*) (List_1_t702 *, int32_t, const MethodInfo*))List_1_get_Item_m10532_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10533_gshared (List_1_t702 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10533(__this, ___index, ___value, method) (( void (*) (List_1_t702 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10533_gshared)(__this, ___index, ___value, method)
