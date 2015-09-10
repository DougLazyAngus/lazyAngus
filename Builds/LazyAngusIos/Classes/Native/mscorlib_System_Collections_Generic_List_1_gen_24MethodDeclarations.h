#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t825;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1505;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3803;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9342;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t6246;
// System.Predicate`1<System.Int32>
struct Predicate_1_t6248;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t5767;
// System.Comparison`1<System.Int32>
struct Comparison_1_t6252;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m4539_gshared (List_1_t825 * __this, const MethodInfo* method);
#define List_1__ctor_m4539(__this, method) (( void (*) (List_1_t825 *, const MethodInfo*))List_1__ctor_m4539_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m30892_gshared (List_1_t825 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m30892(__this, ___collection, method) (( void (*) (List_1_t825 *, Object_t*, const MethodInfo*))List_1__ctor_m30892_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m30894_gshared (List_1_t825 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m30894(__this, ___capacity, method) (( void (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1__ctor_m30894_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m30896_gshared (List_1_t825 * __this, Int32U5BU5D_t484* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m30896(__this, ___data, ___size, method) (( void (*) (List_1_t825 *, Int32U5BU5D_t484*, int32_t, const MethodInfo*))List_1__ctor_m30896_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m30898_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m30898(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m30898_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30900_gshared (List_1_t825 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30900(__this, method) (( Object_t* (*) (List_1_t825 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m30902_gshared (List_1_t825 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m30902(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t825 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m30902_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m30904_gshared (List_1_t825 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30904(__this, method) (( Object_t * (*) (List_1_t825 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m30904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m30906_gshared (List_1_t825 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m30906(__this, ___item, method) (( int32_t (*) (List_1_t825 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m30906_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m30908_gshared (List_1_t825 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m30908(__this, ___item, method) (( bool (*) (List_1_t825 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m30908_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m30910_gshared (List_1_t825 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m30910(__this, ___item, method) (( int32_t (*) (List_1_t825 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m30910_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m30912_gshared (List_1_t825 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m30912(__this, ___index, ___item, method) (( void (*) (List_1_t825 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m30912_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m30914_gshared (List_1_t825 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m30914(__this, ___item, method) (( void (*) (List_1_t825 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m30914_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30916_gshared (List_1_t825 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30916(__this, method) (( bool (*) (List_1_t825 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30916_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m30918_gshared (List_1_t825 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30918(__this, method) (( bool (*) (List_1_t825 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m30918_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m30920_gshared (List_1_t825 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m30920(__this, method) (( Object_t * (*) (List_1_t825 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m30920_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m30922_gshared (List_1_t825 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m30922(__this, method) (( bool (*) (List_1_t825 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m30922_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m30924_gshared (List_1_t825 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m30924(__this, method) (( bool (*) (List_1_t825 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m30924_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m30926_gshared (List_1_t825 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m30926(__this, ___index, method) (( Object_t * (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m30926_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m30928_gshared (List_1_t825 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m30928(__this, ___index, ___value, method) (( void (*) (List_1_t825 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m30928_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m30930_gshared (List_1_t825 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m30930(__this, ___item, method) (( void (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1_Add_m30930_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m30932_gshared (List_1_t825 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m30932(__this, ___newCount, method) (( void (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m30932_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m30934_gshared (List_1_t825 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m30934(__this, ___idx, ___count, method) (( void (*) (List_1_t825 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m30934_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m30936_gshared (List_1_t825 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m30936(__this, ___collection, method) (( void (*) (List_1_t825 *, Object_t*, const MethodInfo*))List_1_AddCollection_m30936_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m30938_gshared (List_1_t825 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m30938(__this, ___enumerable, method) (( void (*) (List_1_t825 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m30938_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m30940_gshared (List_1_t825 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m30940(__this, ___collection, method) (( void (*) (List_1_t825 *, Object_t*, const MethodInfo*))List_1_AddRange_m30940_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6246 * List_1_AsReadOnly_m30942_gshared (List_1_t825 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m30942(__this, method) (( ReadOnlyCollection_1_t6246 * (*) (List_1_t825 *, const MethodInfo*))List_1_AsReadOnly_m30942_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m30944_gshared (List_1_t825 * __this, const MethodInfo* method);
#define List_1_Clear_m30944(__this, method) (( void (*) (List_1_t825 *, const MethodInfo*))List_1_Clear_m30944_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m30946_gshared (List_1_t825 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m30946(__this, ___item, method) (( bool (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1_Contains_m30946_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m30948_gshared (List_1_t825 * __this, Int32U5BU5D_t484* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m30948(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t825 *, Int32U5BU5D_t484*, int32_t, const MethodInfo*))List_1_CopyTo_m30948_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m30950_gshared (List_1_t825 * __this, Predicate_1_t6248 * ___match, const MethodInfo* method);
#define List_1_Find_m30950(__this, ___match, method) (( int32_t (*) (List_1_t825 *, Predicate_1_t6248 *, const MethodInfo*))List_1_Find_m30950_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m30952_gshared (Object_t * __this /* static, unused */, Predicate_1_t6248 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m30952(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6248 *, const MethodInfo*))List_1_CheckMatch_m30952_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m30954_gshared (List_1_t825 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6248 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m30954(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t825 *, int32_t, int32_t, Predicate_1_t6248 *, const MethodInfo*))List_1_GetIndex_m30954_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t6244  List_1_GetEnumerator_m30956_gshared (List_1_t825 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m30956(__this, method) (( Enumerator_t6244  (*) (List_1_t825 *, const MethodInfo*))List_1_GetEnumerator_m30956_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t825 * List_1_GetRange_m30958_gshared (List_1_t825 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m30958(__this, ___index, ___count, method) (( List_1_t825 * (*) (List_1_t825 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m30958_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m30960_gshared (List_1_t825 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m30960(__this, ___item, method) (( int32_t (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1_IndexOf_m30960_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m30962_gshared (List_1_t825 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m30962(__this, ___start, ___delta, method) (( void (*) (List_1_t825 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m30962_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m30964_gshared (List_1_t825 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m30964(__this, ___index, method) (( void (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1_CheckIndex_m30964_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m30966_gshared (List_1_t825 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m30966(__this, ___index, ___item, method) (( void (*) (List_1_t825 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m30966_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m30968_gshared (List_1_t825 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m30968(__this, ___collection, method) (( void (*) (List_1_t825 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m30968_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m30970_gshared (List_1_t825 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m30970(__this, ___index, ___collection, method) (( void (*) (List_1_t825 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m30970_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m30972_gshared (List_1_t825 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m30972(__this, ___index, ___collection, method) (( void (*) (List_1_t825 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m30972_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m30974_gshared (List_1_t825 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m30974(__this, ___index, ___enumerable, method) (( void (*) (List_1_t825 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m30974_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m30976_gshared (List_1_t825 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m30976(__this, ___item, method) (( bool (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1_Remove_m30976_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m30978_gshared (List_1_t825 * __this, Predicate_1_t6248 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m30978(__this, ___match, method) (( int32_t (*) (List_1_t825 *, Predicate_1_t6248 *, const MethodInfo*))List_1_RemoveAll_m30978_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m30980_gshared (List_1_t825 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m30980(__this, ___index, method) (( void (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1_RemoveAt_m30980_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m30982_gshared (List_1_t825 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m30982(__this, ___index, ___count, method) (( void (*) (List_1_t825 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m30982_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m30984_gshared (List_1_t825 * __this, const MethodInfo* method);
#define List_1_Reverse_m30984(__this, method) (( void (*) (List_1_t825 *, const MethodInfo*))List_1_Reverse_m30984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m30986_gshared (List_1_t825 * __this, const MethodInfo* method);
#define List_1_Sort_m30986(__this, method) (( void (*) (List_1_t825 *, const MethodInfo*))List_1_Sort_m30986_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m30988_gshared (List_1_t825 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m30988(__this, ___comparer, method) (( void (*) (List_1_t825 *, Object_t*, const MethodInfo*))List_1_Sort_m30988_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m30990_gshared (List_1_t825 * __this, Comparison_1_t6252 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m30990(__this, ___comparison, method) (( void (*) (List_1_t825 *, Comparison_1_t6252 *, const MethodInfo*))List_1_Sort_m30990_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t484* List_1_ToArray_m30992_gshared (List_1_t825 * __this, const MethodInfo* method);
#define List_1_ToArray_m30992(__this, method) (( Int32U5BU5D_t484* (*) (List_1_t825 *, const MethodInfo*))List_1_ToArray_m30992_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m30994_gshared (List_1_t825 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m30994(__this, method) (( void (*) (List_1_t825 *, const MethodInfo*))List_1_TrimExcess_m30994_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m30996_gshared (List_1_t825 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m30996(__this, method) (( int32_t (*) (List_1_t825 *, const MethodInfo*))List_1_get_Capacity_m30996_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m30998_gshared (List_1_t825 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m30998(__this, ___value, method) (( void (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1_set_Capacity_m30998_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m31000_gshared (List_1_t825 * __this, const MethodInfo* method);
#define List_1_get_Count_m31000(__this, method) (( int32_t (*) (List_1_t825 *, const MethodInfo*))List_1_get_Count_m31000_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m31002_gshared (List_1_t825 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m31002(__this, ___index, method) (( int32_t (*) (List_1_t825 *, int32_t, const MethodInfo*))List_1_get_Item_m31002_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m31004_gshared (List_1_t825 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m31004(__this, ___index, ___value, method) (( void (*) (List_1_t825 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m31004_gshared)(__this, ___index, ___value, method)
