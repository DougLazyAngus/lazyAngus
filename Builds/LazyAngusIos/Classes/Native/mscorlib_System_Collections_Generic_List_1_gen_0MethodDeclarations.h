#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t682;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t708;
// System.Object[]
struct ObjectU5BU5D_t680;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1221;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1183;
// System.Predicate`1<System.Object>
struct Predicate_1_t5425;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t5648;
// System.Comparison`1<System.Object>
struct Comparison_1_t5431;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3699_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1__ctor_m3699(__this, method) (( void (*) (List_1_t682 *, const MethodInfo*))List_1__ctor_m3699_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m7459_gshared (List_1_t682 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m7459(__this, ___collection, method) (( void (*) (List_1_t682 *, Object_t*, const MethodInfo*))List_1__ctor_m7459_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m21557_gshared (List_1_t682 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m21557(__this, ___capacity, method) (( void (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1__ctor_m21557_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m21559_gshared (List_1_t682 * __this, ObjectU5BU5D_t680* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m21559(__this, ___data, ___size, method) (( void (*) (List_1_t682 *, ObjectU5BU5D_t680*, int32_t, const MethodInfo*))List_1__ctor_m21559_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m21561_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21561(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21561_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10352_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10352(__this, method) (( Object_t* (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10352_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10335_gshared (List_1_t682 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10335(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t682 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10335_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10331_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10331(__this, method) (( Object_t * (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10331_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10340_gshared (List_1_t682 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10340(__this, ___item, method) (( int32_t (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10340_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10342_gshared (List_1_t682 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10342(__this, ___item, method) (( bool (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10342_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10343_gshared (List_1_t682 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10343(__this, ___item, method) (( int32_t (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10343_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10344_gshared (List_1_t682 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10344(__this, ___index, ___item, method) (( void (*) (List_1_t682 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10344_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10345_gshared (List_1_t682 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10345(__this, ___item, method) (( void (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10345_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10347_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10347(__this, method) (( bool (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10347_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10333_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10333(__this, method) (( bool (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10333_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10334_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10334(__this, method) (( Object_t * (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10334_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10336_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10336(__this, method) (( bool (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10336_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10337_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10337(__this, method) (( bool (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10337_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10338_gshared (List_1_t682 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10338(__this, ___index, method) (( Object_t * (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10338_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10339_gshared (List_1_t682 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10339(__this, ___index, ___value, method) (( void (*) (List_1_t682 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10339_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10348_gshared (List_1_t682 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10348(__this, ___item, method) (( void (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_Add_m10348_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21579_gshared (List_1_t682 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21579(__this, ___newCount, method) (( void (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21579_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m21581_gshared (List_1_t682 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m21581(__this, ___idx, ___count, method) (( void (*) (List_1_t682 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21581_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21583_gshared (List_1_t682 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21583(__this, ___collection, method) (( void (*) (List_1_t682 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21583_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21585_gshared (List_1_t682 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21585(__this, ___enumerable, method) (( void (*) (List_1_t682 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21585_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m21587_gshared (List_1_t682 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m21587(__this, ___collection, method) (( void (*) (List_1_t682 *, Object_t*, const MethodInfo*))List_1_AddRange_m21587_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1183 * List_1_AsReadOnly_m21589_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m21589(__this, method) (( ReadOnlyCollection_1_t1183 * (*) (List_1_t682 *, const MethodInfo*))List_1_AsReadOnly_m21589_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10341_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_Clear_m10341(__this, method) (( void (*) (List_1_t682 *, const MethodInfo*))List_1_Clear_m10341_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10349_gshared (List_1_t682 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10349(__this, ___item, method) (( bool (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_Contains_m10349_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10350_gshared (List_1_t682 * __this, ObjectU5BU5D_t680* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10350(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t682 *, ObjectU5BU5D_t680*, int32_t, const MethodInfo*))List_1_CopyTo_m10350_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m21594_gshared (List_1_t682 * __this, Predicate_1_t5425 * ___match, const MethodInfo* method);
#define List_1_Find_m21594(__this, ___match, method) (( Object_t * (*) (List_1_t682 *, Predicate_1_t5425 *, const MethodInfo*))List_1_Find_m21594_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m21596_gshared (Object_t * __this /* static, unused */, Predicate_1_t5425 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m21596(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5425 *, const MethodInfo*))List_1_CheckMatch_m21596_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m21598_gshared (List_1_t682 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5425 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m21598(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t682 *, int32_t, int32_t, Predicate_1_t5425 *, const MethodInfo*))List_1_GetIndex_m21598_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t744  List_1_GetEnumerator_m3855_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m3855(__this, method) (( Enumerator_t744  (*) (List_1_t682 *, const MethodInfo*))List_1_GetEnumerator_m3855_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t682 * List_1_GetRange_m21600_gshared (List_1_t682 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m21600(__this, ___index, ___count, method) (( List_1_t682 * (*) (List_1_t682 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21600_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10353_gshared (List_1_t682 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10353(__this, ___item, method) (( int32_t (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21603_gshared (List_1_t682 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21603(__this, ___start, ___delta, method) (( void (*) (List_1_t682 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21603_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21605_gshared (List_1_t682 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21605(__this, ___index, method) (( void (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21605_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10354_gshared (List_1_t682 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10354(__this, ___index, ___item, method) (( void (*) (List_1_t682 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10354_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21608_gshared (List_1_t682 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21608(__this, ___collection, method) (( void (*) (List_1_t682 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21608_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m21610_gshared (List_1_t682 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m21610(__this, ___index, ___collection, method) (( void (*) (List_1_t682 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21610_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m21612_gshared (List_1_t682 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m21612(__this, ___index, ___collection, method) (( void (*) (List_1_t682 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21612_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m21614_gshared (List_1_t682 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m21614(__this, ___index, ___enumerable, method) (( void (*) (List_1_t682 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21614_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10351_gshared (List_1_t682 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10351(__this, ___item, method) (( bool (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_Remove_m10351_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m21617_gshared (List_1_t682 * __this, Predicate_1_t5425 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m21617(__this, ___match, method) (( int32_t (*) (List_1_t682 *, Predicate_1_t5425 *, const MethodInfo*))List_1_RemoveAll_m21617_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10346_gshared (List_1_t682 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10346(__this, ___index, method) (( void (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10346_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m21620_gshared (List_1_t682 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m21620(__this, ___index, ___count, method) (( void (*) (List_1_t682 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21620_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m21622_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_Reverse_m21622(__this, method) (( void (*) (List_1_t682 *, const MethodInfo*))List_1_Reverse_m21622_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m21624_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_Sort_m21624(__this, method) (( void (*) (List_1_t682 *, const MethodInfo*))List_1_Sort_m21624_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m21626_gshared (List_1_t682 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m21626(__this, ___comparer, method) (( void (*) (List_1_t682 *, Object_t*, const MethodInfo*))List_1_Sort_m21626_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21628_gshared (List_1_t682 * __this, Comparison_1_t5431 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21628(__this, ___comparison, method) (( void (*) (List_1_t682 *, Comparison_1_t5431 *, const MethodInfo*))List_1_Sort_m21628_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t680* List_1_ToArray_m21630_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_ToArray_m21630(__this, method) (( ObjectU5BU5D_t680* (*) (List_1_t682 *, const MethodInfo*))List_1_ToArray_m21630_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m21632_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m21632(__this, method) (( void (*) (List_1_t682 *, const MethodInfo*))List_1_TrimExcess_m21632_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21634_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21634(__this, method) (( int32_t (*) (List_1_t682 *, const MethodInfo*))List_1_get_Capacity_m21634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21636_gshared (List_1_t682 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21636(__this, ___value, method) (( void (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21636_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10332_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_get_Count_m10332(__this, method) (( int32_t (*) (List_1_t682 *, const MethodInfo*))List_1_get_Count_m10332_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10355_gshared (List_1_t682 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10355(__this, ___index, method) (( Object_t * (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_get_Item_m10355_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10356_gshared (List_1_t682 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10356(__this, ___index, ___value, method) (( void (*) (List_1_t682 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10356_gshared)(__this, ___index, ___value, method)
