#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t684;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t710;
// System.Object[]
struct ObjectU5BU5D_t682;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1185;
// System.Predicate`1<System.Object>
struct Predicate_1_t5427;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t5650;
// System.Comparison`1<System.Object>
struct Comparison_1_t5433;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3713_gshared (List_1_t684 * __this, const MethodInfo* method);
#define List_1__ctor_m3713(__this, method) (( void (*) (List_1_t684 *, const MethodInfo*))List_1__ctor_m3713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m7471_gshared (List_1_t684 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m7471(__this, ___collection, method) (( void (*) (List_1_t684 *, Object_t*, const MethodInfo*))List_1__ctor_m7471_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m21570_gshared (List_1_t684 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m21570(__this, ___capacity, method) (( void (*) (List_1_t684 *, int32_t, const MethodInfo*))List_1__ctor_m21570_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m21572_gshared (List_1_t684 * __this, ObjectU5BU5D_t682* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m21572(__this, ___data, ___size, method) (( void (*) (List_1_t684 *, ObjectU5BU5D_t682*, int32_t, const MethodInfo*))List_1__ctor_m21572_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m21574_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21574(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21574_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10361_gshared (List_1_t684 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10361(__this, method) (( Object_t* (*) (List_1_t684 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10361_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10344_gshared (List_1_t684 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10344(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t684 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10344_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10340_gshared (List_1_t684 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10340(__this, method) (( Object_t * (*) (List_1_t684 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10340_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10349_gshared (List_1_t684 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10349(__this, ___item, method) (( int32_t (*) (List_1_t684 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10349_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10351_gshared (List_1_t684 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10351(__this, ___item, method) (( bool (*) (List_1_t684 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10351_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10352_gshared (List_1_t684 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10352(__this, ___item, method) (( int32_t (*) (List_1_t684 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10353_gshared (List_1_t684 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10353(__this, ___index, ___item, method) (( void (*) (List_1_t684 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10353_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10354_gshared (List_1_t684 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10354(__this, ___item, method) (( void (*) (List_1_t684 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10354_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10356_gshared (List_1_t684 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10356(__this, method) (( bool (*) (List_1_t684 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10342_gshared (List_1_t684 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10342(__this, method) (( bool (*) (List_1_t684 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10342_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10343_gshared (List_1_t684 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10343(__this, method) (( Object_t * (*) (List_1_t684 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10345_gshared (List_1_t684 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10345(__this, method) (( bool (*) (List_1_t684 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10345_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10346_gshared (List_1_t684 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10346(__this, method) (( bool (*) (List_1_t684 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10346_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10347_gshared (List_1_t684 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10347(__this, ___index, method) (( Object_t * (*) (List_1_t684 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10347_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10348_gshared (List_1_t684 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10348(__this, ___index, ___value, method) (( void (*) (List_1_t684 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10348_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10357_gshared (List_1_t684 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10357(__this, ___item, method) (( void (*) (List_1_t684 *, Object_t *, const MethodInfo*))List_1_Add_m10357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21592_gshared (List_1_t684 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21592(__this, ___newCount, method) (( void (*) (List_1_t684 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21592_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m21594_gshared (List_1_t684 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m21594(__this, ___idx, ___count, method) (( void (*) (List_1_t684 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21594_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21596_gshared (List_1_t684 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21596(__this, ___collection, method) (( void (*) (List_1_t684 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21596_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21598_gshared (List_1_t684 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21598(__this, ___enumerable, method) (( void (*) (List_1_t684 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21598_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m21600_gshared (List_1_t684 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m21600(__this, ___collection, method) (( void (*) (List_1_t684 *, Object_t*, const MethodInfo*))List_1_AddRange_m21600_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1185 * List_1_AsReadOnly_m21602_gshared (List_1_t684 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m21602(__this, method) (( ReadOnlyCollection_1_t1185 * (*) (List_1_t684 *, const MethodInfo*))List_1_AsReadOnly_m21602_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10350_gshared (List_1_t684 * __this, const MethodInfo* method);
#define List_1_Clear_m10350(__this, method) (( void (*) (List_1_t684 *, const MethodInfo*))List_1_Clear_m10350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10358_gshared (List_1_t684 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10358(__this, ___item, method) (( bool (*) (List_1_t684 *, Object_t *, const MethodInfo*))List_1_Contains_m10358_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10359_gshared (List_1_t684 * __this, ObjectU5BU5D_t682* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10359(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t684 *, ObjectU5BU5D_t682*, int32_t, const MethodInfo*))List_1_CopyTo_m10359_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m21607_gshared (List_1_t684 * __this, Predicate_1_t5427 * ___match, const MethodInfo* method);
#define List_1_Find_m21607(__this, ___match, method) (( Object_t * (*) (List_1_t684 *, Predicate_1_t5427 *, const MethodInfo*))List_1_Find_m21607_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m21609_gshared (Object_t * __this /* static, unused */, Predicate_1_t5427 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m21609(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5427 *, const MethodInfo*))List_1_CheckMatch_m21609_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m21611_gshared (List_1_t684 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5427 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m21611(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t684 *, int32_t, int32_t, Predicate_1_t5427 *, const MethodInfo*))List_1_GetIndex_m21611_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t746  List_1_GetEnumerator_m3869_gshared (List_1_t684 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m3869(__this, method) (( Enumerator_t746  (*) (List_1_t684 *, const MethodInfo*))List_1_GetEnumerator_m3869_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t684 * List_1_GetRange_m21613_gshared (List_1_t684 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m21613(__this, ___index, ___count, method) (( List_1_t684 * (*) (List_1_t684 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21613_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10362_gshared (List_1_t684 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10362(__this, ___item, method) (( int32_t (*) (List_1_t684 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10362_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21616_gshared (List_1_t684 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21616(__this, ___start, ___delta, method) (( void (*) (List_1_t684 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21616_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21618_gshared (List_1_t684 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21618(__this, ___index, method) (( void (*) (List_1_t684 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21618_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10363_gshared (List_1_t684 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10363(__this, ___index, ___item, method) (( void (*) (List_1_t684 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10363_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21621_gshared (List_1_t684 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21621(__this, ___collection, method) (( void (*) (List_1_t684 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21621_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m21623_gshared (List_1_t684 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m21623(__this, ___index, ___collection, method) (( void (*) (List_1_t684 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21623_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m21625_gshared (List_1_t684 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m21625(__this, ___index, ___collection, method) (( void (*) (List_1_t684 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21625_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m21627_gshared (List_1_t684 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m21627(__this, ___index, ___enumerable, method) (( void (*) (List_1_t684 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21627_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10360_gshared (List_1_t684 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10360(__this, ___item, method) (( bool (*) (List_1_t684 *, Object_t *, const MethodInfo*))List_1_Remove_m10360_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m21630_gshared (List_1_t684 * __this, Predicate_1_t5427 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m21630(__this, ___match, method) (( int32_t (*) (List_1_t684 *, Predicate_1_t5427 *, const MethodInfo*))List_1_RemoveAll_m21630_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10355_gshared (List_1_t684 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10355(__this, ___index, method) (( void (*) (List_1_t684 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10355_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m21633_gshared (List_1_t684 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m21633(__this, ___index, ___count, method) (( void (*) (List_1_t684 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21633_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m21635_gshared (List_1_t684 * __this, const MethodInfo* method);
#define List_1_Reverse_m21635(__this, method) (( void (*) (List_1_t684 *, const MethodInfo*))List_1_Reverse_m21635_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m21637_gshared (List_1_t684 * __this, const MethodInfo* method);
#define List_1_Sort_m21637(__this, method) (( void (*) (List_1_t684 *, const MethodInfo*))List_1_Sort_m21637_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m21639_gshared (List_1_t684 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m21639(__this, ___comparer, method) (( void (*) (List_1_t684 *, Object_t*, const MethodInfo*))List_1_Sort_m21639_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21641_gshared (List_1_t684 * __this, Comparison_1_t5433 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21641(__this, ___comparison, method) (( void (*) (List_1_t684 *, Comparison_1_t5433 *, const MethodInfo*))List_1_Sort_m21641_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t682* List_1_ToArray_m21643_gshared (List_1_t684 * __this, const MethodInfo* method);
#define List_1_ToArray_m21643(__this, method) (( ObjectU5BU5D_t682* (*) (List_1_t684 *, const MethodInfo*))List_1_ToArray_m21643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m21645_gshared (List_1_t684 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m21645(__this, method) (( void (*) (List_1_t684 *, const MethodInfo*))List_1_TrimExcess_m21645_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21647_gshared (List_1_t684 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21647(__this, method) (( int32_t (*) (List_1_t684 *, const MethodInfo*))List_1_get_Capacity_m21647_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21649_gshared (List_1_t684 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21649(__this, ___value, method) (( void (*) (List_1_t684 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21649_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10341_gshared (List_1_t684 * __this, const MethodInfo* method);
#define List_1_get_Count_m10341(__this, method) (( int32_t (*) (List_1_t684 *, const MethodInfo*))List_1_get_Count_m10341_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10364_gshared (List_1_t684 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10364(__this, ___index, method) (( Object_t * (*) (List_1_t684 *, int32_t, const MethodInfo*))List_1_get_Item_m10364_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10365_gshared (List_1_t684 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10365(__this, ___index, ___value, method) (( void (*) (List_1_t684 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10365_gshared)(__this, ___index, ___value, method)
