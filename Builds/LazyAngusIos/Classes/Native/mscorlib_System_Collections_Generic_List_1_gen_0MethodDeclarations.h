#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t709;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t735;
// System.Object[]
struct ObjectU5BU5D_t707;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1251;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1213;
// System.Predicate`1<System.Object>
struct Predicate_1_t5988;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t6211;
// System.Comparison`1<System.Object>
struct Comparison_1_t5994;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3929_gshared (List_1_t709 * __this, const MethodInfo* method);
#define List_1__ctor_m3929(__this, method) (( void (*) (List_1_t709 *, const MethodInfo*))List_1__ctor_m3929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m7698_gshared (List_1_t709 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m7698(__this, ___collection, method) (( void (*) (List_1_t709 *, Object_t*, const MethodInfo*))List_1__ctor_m7698_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m25977_gshared (List_1_t709 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m25977(__this, ___capacity, method) (( void (*) (List_1_t709 *, int32_t, const MethodInfo*))List_1__ctor_m25977_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m25979_gshared (List_1_t709 * __this, ObjectU5BU5D_t707* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m25979(__this, ___data, ___size, method) (( void (*) (List_1_t709 *, ObjectU5BU5D_t707*, int32_t, const MethodInfo*))List_1__ctor_m25979_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m25981_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m25981(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25981_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10586_gshared (List_1_t709 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10586(__this, method) (( Object_t* (*) (List_1_t709 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10586_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10569_gshared (List_1_t709 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10569(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t709 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10569_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10565_gshared (List_1_t709 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10565(__this, method) (( Object_t * (*) (List_1_t709 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10565_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10574_gshared (List_1_t709 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10574(__this, ___item, method) (( int32_t (*) (List_1_t709 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10574_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10576_gshared (List_1_t709 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10576(__this, ___item, method) (( bool (*) (List_1_t709 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10576_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10577_gshared (List_1_t709 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10577(__this, ___item, method) (( int32_t (*) (List_1_t709 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10577_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10578_gshared (List_1_t709 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10578(__this, ___index, ___item, method) (( void (*) (List_1_t709 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10578_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10579_gshared (List_1_t709 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10579(__this, ___item, method) (( void (*) (List_1_t709 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10579_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10581_gshared (List_1_t709 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10581(__this, method) (( bool (*) (List_1_t709 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10567_gshared (List_1_t709 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10567(__this, method) (( bool (*) (List_1_t709 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10567_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10568_gshared (List_1_t709 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10568(__this, method) (( Object_t * (*) (List_1_t709 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10568_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10570_gshared (List_1_t709 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10570(__this, method) (( bool (*) (List_1_t709 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10570_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10571_gshared (List_1_t709 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10571(__this, method) (( bool (*) (List_1_t709 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10571_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10572_gshared (List_1_t709 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10572(__this, ___index, method) (( Object_t * (*) (List_1_t709 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10572_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10573_gshared (List_1_t709 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10573(__this, ___index, ___value, method) (( void (*) (List_1_t709 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10573_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10582_gshared (List_1_t709 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10582(__this, ___item, method) (( void (*) (List_1_t709 *, Object_t *, const MethodInfo*))List_1_Add_m10582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m25999_gshared (List_1_t709 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m25999(__this, ___newCount, method) (( void (*) (List_1_t709 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25999_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m26001_gshared (List_1_t709 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m26001(__this, ___idx, ___count, method) (( void (*) (List_1_t709 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26001_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m26003_gshared (List_1_t709 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m26003(__this, ___collection, method) (( void (*) (List_1_t709 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26003_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m26005_gshared (List_1_t709 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m26005(__this, ___enumerable, method) (( void (*) (List_1_t709 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26005_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m26007_gshared (List_1_t709 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m26007(__this, ___collection, method) (( void (*) (List_1_t709 *, Object_t*, const MethodInfo*))List_1_AddRange_m26007_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1213 * List_1_AsReadOnly_m26009_gshared (List_1_t709 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m26009(__this, method) (( ReadOnlyCollection_1_t1213 * (*) (List_1_t709 *, const MethodInfo*))List_1_AsReadOnly_m26009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10575_gshared (List_1_t709 * __this, const MethodInfo* method);
#define List_1_Clear_m10575(__this, method) (( void (*) (List_1_t709 *, const MethodInfo*))List_1_Clear_m10575_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10583_gshared (List_1_t709 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10583(__this, ___item, method) (( bool (*) (List_1_t709 *, Object_t *, const MethodInfo*))List_1_Contains_m10583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10584_gshared (List_1_t709 * __this, ObjectU5BU5D_t707* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10584(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t709 *, ObjectU5BU5D_t707*, int32_t, const MethodInfo*))List_1_CopyTo_m10584_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m26014_gshared (List_1_t709 * __this, Predicate_1_t5988 * ___match, const MethodInfo* method);
#define List_1_Find_m26014(__this, ___match, method) (( Object_t * (*) (List_1_t709 *, Predicate_1_t5988 *, const MethodInfo*))List_1_Find_m26014_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m26016_gshared (Object_t * __this /* static, unused */, Predicate_1_t5988 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m26016(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5988 *, const MethodInfo*))List_1_CheckMatch_m26016_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m26018_gshared (List_1_t709 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5988 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m26018(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t709 *, int32_t, int32_t, Predicate_1_t5988 *, const MethodInfo*))List_1_GetIndex_m26018_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t771  List_1_GetEnumerator_m4085_gshared (List_1_t709 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m4085(__this, method) (( Enumerator_t771  (*) (List_1_t709 *, const MethodInfo*))List_1_GetEnumerator_m4085_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t709 * List_1_GetRange_m26020_gshared (List_1_t709 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m26020(__this, ___index, ___count, method) (( List_1_t709 * (*) (List_1_t709 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26020_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10587_gshared (List_1_t709 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10587(__this, ___item, method) (( int32_t (*) (List_1_t709 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10587_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m26023_gshared (List_1_t709 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m26023(__this, ___start, ___delta, method) (( void (*) (List_1_t709 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26023_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m26025_gshared (List_1_t709 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m26025(__this, ___index, method) (( void (*) (List_1_t709 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26025_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10588_gshared (List_1_t709 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10588(__this, ___index, ___item, method) (( void (*) (List_1_t709 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10588_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m26028_gshared (List_1_t709 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m26028(__this, ___collection, method) (( void (*) (List_1_t709 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26028_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m26030_gshared (List_1_t709 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m26030(__this, ___index, ___collection, method) (( void (*) (List_1_t709 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26030_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m26032_gshared (List_1_t709 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m26032(__this, ___index, ___collection, method) (( void (*) (List_1_t709 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26032_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m26034_gshared (List_1_t709 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m26034(__this, ___index, ___enumerable, method) (( void (*) (List_1_t709 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26034_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10585_gshared (List_1_t709 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10585(__this, ___item, method) (( bool (*) (List_1_t709 *, Object_t *, const MethodInfo*))List_1_Remove_m10585_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m26037_gshared (List_1_t709 * __this, Predicate_1_t5988 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m26037(__this, ___match, method) (( int32_t (*) (List_1_t709 *, Predicate_1_t5988 *, const MethodInfo*))List_1_RemoveAll_m26037_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10580_gshared (List_1_t709 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10580(__this, ___index, method) (( void (*) (List_1_t709 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10580_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m26040_gshared (List_1_t709 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m26040(__this, ___index, ___count, method) (( void (*) (List_1_t709 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26040_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m26042_gshared (List_1_t709 * __this, const MethodInfo* method);
#define List_1_Reverse_m26042(__this, method) (( void (*) (List_1_t709 *, const MethodInfo*))List_1_Reverse_m26042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m26044_gshared (List_1_t709 * __this, const MethodInfo* method);
#define List_1_Sort_m26044(__this, method) (( void (*) (List_1_t709 *, const MethodInfo*))List_1_Sort_m26044_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m26046_gshared (List_1_t709 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m26046(__this, ___comparer, method) (( void (*) (List_1_t709 *, Object_t*, const MethodInfo*))List_1_Sort_m26046_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m26048_gshared (List_1_t709 * __this, Comparison_1_t5994 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m26048(__this, ___comparison, method) (( void (*) (List_1_t709 *, Comparison_1_t5994 *, const MethodInfo*))List_1_Sort_m26048_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t707* List_1_ToArray_m26050_gshared (List_1_t709 * __this, const MethodInfo* method);
#define List_1_ToArray_m26050(__this, method) (( ObjectU5BU5D_t707* (*) (List_1_t709 *, const MethodInfo*))List_1_ToArray_m26050_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m26052_gshared (List_1_t709 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m26052(__this, method) (( void (*) (List_1_t709 *, const MethodInfo*))List_1_TrimExcess_m26052_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m26054_gshared (List_1_t709 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m26054(__this, method) (( int32_t (*) (List_1_t709 *, const MethodInfo*))List_1_get_Capacity_m26054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m26056_gshared (List_1_t709 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m26056(__this, ___value, method) (( void (*) (List_1_t709 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26056_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10566_gshared (List_1_t709 * __this, const MethodInfo* method);
#define List_1_get_Count_m10566(__this, method) (( int32_t (*) (List_1_t709 *, const MethodInfo*))List_1_get_Count_m10566_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10589_gshared (List_1_t709 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10589(__this, ___index, method) (( Object_t * (*) (List_1_t709 *, int32_t, const MethodInfo*))List_1_get_Item_m10589_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10590_gshared (List_1_t709 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10590(__this, ___index, ___value, method) (( void (*) (List_1_t709 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10590_gshared)(__this, ___index, ___value, method)
