#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int64>
struct List_1_t6565;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int64>
struct IEnumerable_1_t6262;
// System.Int64[]
struct Int64U5BU5D_t4816;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6263;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8971;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int64>
struct ReadOnlyCollection_1_t6567;
// System.Predicate`1<System.Int64>
struct Predicate_1_t6569;
// System.Collections.Generic.IComparer`1<System.Int64>
struct IComparer_1_t5311;
// System.Comparison`1<System.Int64>
struct Comparison_1_t6573;
// System.Collections.Generic.List`1/Enumerator<System.Int64>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_59.h"

// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor()
extern "C" void List_1__ctor_m38444_gshared (List_1_t6565 * __this, const MethodInfo* method);
#define List_1__ctor_m38444(__this, method) (( void (*) (List_1_t6565 *, const MethodInfo*))List_1__ctor_m38444_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m38445_gshared (List_1_t6565 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m38445(__this, ___collection, method) (( void (*) (List_1_t6565 *, Object_t*, const MethodInfo*))List_1__ctor_m38445_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(System.Int32)
extern "C" void List_1__ctor_m38446_gshared (List_1_t6565 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m38446(__this, ___capacity, method) (( void (*) (List_1_t6565 *, int32_t, const MethodInfo*))List_1__ctor_m38446_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m38447_gshared (List_1_t6565 * __this, Int64U5BU5D_t4816* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m38447(__this, ___data, ___size, method) (( void (*) (List_1_t6565 *, Int64U5BU5D_t4816*, int32_t, const MethodInfo*))List_1__ctor_m38447_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.cctor()
extern "C" void List_1__cctor_m38448_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m38448(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m38448_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38449_gshared (List_1_t6565 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38449(__this, method) (( Object_t* (*) (List_1_t6565 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38449_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m38450_gshared (List_1_t6565 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m38450(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6565 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m38450_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m38451_gshared (List_1_t6565 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m38451(__this, method) (( Object_t * (*) (List_1_t6565 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m38451_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m38452_gshared (List_1_t6565 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m38452(__this, ___item, method) (( int32_t (*) (List_1_t6565 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m38452_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m38453_gshared (List_1_t6565 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m38453(__this, ___item, method) (( bool (*) (List_1_t6565 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m38453_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m38454_gshared (List_1_t6565 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m38454(__this, ___item, method) (( int32_t (*) (List_1_t6565 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m38454_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m38455_gshared (List_1_t6565 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m38455(__this, ___index, ___item, method) (( void (*) (List_1_t6565 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m38455_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m38456_gshared (List_1_t6565 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m38456(__this, ___item, method) (( void (*) (List_1_t6565 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m38456_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38457_gshared (List_1_t6565 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38457(__this, method) (( bool (*) (List_1_t6565 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38457_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m38458_gshared (List_1_t6565 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m38458(__this, method) (( bool (*) (List_1_t6565 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m38458_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m38459_gshared (List_1_t6565 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m38459(__this, method) (( Object_t * (*) (List_1_t6565 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m38459_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m38460_gshared (List_1_t6565 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m38460(__this, method) (( bool (*) (List_1_t6565 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m38460_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m38461_gshared (List_1_t6565 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m38461(__this, method) (( bool (*) (List_1_t6565 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m38461_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m38462_gshared (List_1_t6565 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m38462(__this, ___index, method) (( Object_t * (*) (List_1_t6565 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m38462_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m38463_gshared (List_1_t6565 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m38463(__this, ___index, ___value, method) (( void (*) (List_1_t6565 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m38463_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Add(T)
extern "C" void List_1_Add_m38464_gshared (List_1_t6565 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Add_m38464(__this, ___item, method) (( void (*) (List_1_t6565 *, int64_t, const MethodInfo*))List_1_Add_m38464_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m38465_gshared (List_1_t6565 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m38465(__this, ___newCount, method) (( void (*) (List_1_t6565 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m38465_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m38466_gshared (List_1_t6565 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m38466(__this, ___idx, ___count, method) (( void (*) (List_1_t6565 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m38466_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m38467_gshared (List_1_t6565 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m38467(__this, ___collection, method) (( void (*) (List_1_t6565 *, Object_t*, const MethodInfo*))List_1_AddCollection_m38467_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m38468_gshared (List_1_t6565 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m38468(__this, ___enumerable, method) (( void (*) (List_1_t6565 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m38468_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m38469_gshared (List_1_t6565 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m38469(__this, ___collection, method) (( void (*) (List_1_t6565 *, Object_t*, const MethodInfo*))List_1_AddRange_m38469_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int64>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6567 * List_1_AsReadOnly_m38470_gshared (List_1_t6565 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m38470(__this, method) (( ReadOnlyCollection_1_t6567 * (*) (List_1_t6565 *, const MethodInfo*))List_1_AsReadOnly_m38470_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Clear()
extern "C" void List_1_Clear_m38471_gshared (List_1_t6565 * __this, const MethodInfo* method);
#define List_1_Clear_m38471(__this, method) (( void (*) (List_1_t6565 *, const MethodInfo*))List_1_Clear_m38471_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Contains(T)
extern "C" bool List_1_Contains_m38472_gshared (List_1_t6565 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Contains_m38472(__this, ___item, method) (( bool (*) (List_1_t6565 *, int64_t, const MethodInfo*))List_1_Contains_m38472_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m38473_gshared (List_1_t6565 * __this, Int64U5BU5D_t4816* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m38473(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6565 *, Int64U5BU5D_t4816*, int32_t, const MethodInfo*))List_1_CopyTo_m38473_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int64>::Find(System.Predicate`1<T>)
extern "C" int64_t List_1_Find_m38474_gshared (List_1_t6565 * __this, Predicate_1_t6569 * ___match, const MethodInfo* method);
#define List_1_Find_m38474(__this, ___match, method) (( int64_t (*) (List_1_t6565 *, Predicate_1_t6569 *, const MethodInfo*))List_1_Find_m38474_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m38475_gshared (Object_t * __this /* static, unused */, Predicate_1_t6569 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m38475(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6569 *, const MethodInfo*))List_1_CheckMatch_m38475_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m38476_gshared (List_1_t6565 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6569 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m38476(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6565 *, int32_t, int32_t, Predicate_1_t6569 *, const MethodInfo*))List_1_GetIndex_m38476_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int64>::GetEnumerator()
extern "C" Enumerator_t6566  List_1_GetEnumerator_m38477_gshared (List_1_t6565 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m38477(__this, method) (( Enumerator_t6566  (*) (List_1_t6565 *, const MethodInfo*))List_1_GetEnumerator_m38477_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int64>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6565 * List_1_GetRange_m38478_gshared (List_1_t6565 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m38478(__this, ___index, ___count, method) (( List_1_t6565 * (*) (List_1_t6565 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m38478_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m38479_gshared (List_1_t6565 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m38479(__this, ___item, method) (( int32_t (*) (List_1_t6565 *, int64_t, const MethodInfo*))List_1_IndexOf_m38479_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m38480_gshared (List_1_t6565 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m38480(__this, ___start, ___delta, method) (( void (*) (List_1_t6565 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m38480_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m38481_gshared (List_1_t6565 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m38481(__this, ___index, method) (( void (*) (List_1_t6565 *, int32_t, const MethodInfo*))List_1_CheckIndex_m38481_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m38482_gshared (List_1_t6565 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define List_1_Insert_m38482(__this, ___index, ___item, method) (( void (*) (List_1_t6565 *, int32_t, int64_t, const MethodInfo*))List_1_Insert_m38482_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m38483_gshared (List_1_t6565 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m38483(__this, ___collection, method) (( void (*) (List_1_t6565 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m38483_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m38484_gshared (List_1_t6565 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m38484(__this, ___index, ___collection, method) (( void (*) (List_1_t6565 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m38484_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m38485_gshared (List_1_t6565 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m38485(__this, ___index, ___collection, method) (( void (*) (List_1_t6565 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m38485_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m38486_gshared (List_1_t6565 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m38486(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6565 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m38486_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Remove(T)
extern "C" bool List_1_Remove_m38487_gshared (List_1_t6565 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Remove_m38487(__this, ___item, method) (( bool (*) (List_1_t6565 *, int64_t, const MethodInfo*))List_1_Remove_m38487_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m38488_gshared (List_1_t6565 * __this, Predicate_1_t6569 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m38488(__this, ___match, method) (( int32_t (*) (List_1_t6565 *, Predicate_1_t6569 *, const MethodInfo*))List_1_RemoveAll_m38488_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m38489_gshared (List_1_t6565 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m38489(__this, ___index, method) (( void (*) (List_1_t6565 *, int32_t, const MethodInfo*))List_1_RemoveAt_m38489_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m38490_gshared (List_1_t6565 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m38490(__this, ___index, ___count, method) (( void (*) (List_1_t6565 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m38490_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Reverse()
extern "C" void List_1_Reverse_m38491_gshared (List_1_t6565 * __this, const MethodInfo* method);
#define List_1_Reverse_m38491(__this, method) (( void (*) (List_1_t6565 *, const MethodInfo*))List_1_Reverse_m38491_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort()
extern "C" void List_1_Sort_m38492_gshared (List_1_t6565 * __this, const MethodInfo* method);
#define List_1_Sort_m38492(__this, method) (( void (*) (List_1_t6565 *, const MethodInfo*))List_1_Sort_m38492_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m38493_gshared (List_1_t6565 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m38493(__this, ___comparer, method) (( void (*) (List_1_t6565 *, Object_t*, const MethodInfo*))List_1_Sort_m38493_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m38494_gshared (List_1_t6565 * __this, Comparison_1_t6573 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m38494(__this, ___comparison, method) (( void (*) (List_1_t6565 *, Comparison_1_t6573 *, const MethodInfo*))List_1_Sort_m38494_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int64>::ToArray()
extern "C" Int64U5BU5D_t4816* List_1_ToArray_m38495_gshared (List_1_t6565 * __this, const MethodInfo* method);
#define List_1_ToArray_m38495(__this, method) (( Int64U5BU5D_t4816* (*) (List_1_t6565 *, const MethodInfo*))List_1_ToArray_m38495_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::TrimExcess()
extern "C" void List_1_TrimExcess_m38496_gshared (List_1_t6565 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m38496(__this, method) (( void (*) (List_1_t6565 *, const MethodInfo*))List_1_TrimExcess_m38496_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m38497_gshared (List_1_t6565 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m38497(__this, method) (( int32_t (*) (List_1_t6565 *, const MethodInfo*))List_1_get_Capacity_m38497_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m38498_gshared (List_1_t6565 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m38498(__this, ___value, method) (( void (*) (List_1_t6565 *, int32_t, const MethodInfo*))List_1_set_Capacity_m38498_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Count()
extern "C" int32_t List_1_get_Count_m38499_gshared (List_1_t6565 * __this, const MethodInfo* method);
#define List_1_get_Count_m38499(__this, method) (( int32_t (*) (List_1_t6565 *, const MethodInfo*))List_1_get_Count_m38499_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int64>::get_Item(System.Int32)
extern "C" int64_t List_1_get_Item_m38500_gshared (List_1_t6565 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m38500(__this, ___index, method) (( int64_t (*) (List_1_t6565 *, int32_t, const MethodInfo*))List_1_get_Item_m38500_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m38501_gshared (List_1_t6565 * __this, int32_t ___index, int64_t ___value, const MethodInfo* method);
#define List_1_set_Item_m38501(__this, ___index, ___value, method) (( void (*) (List_1_t6565 *, int32_t, int64_t, const MethodInfo*))List_1_set_Item_m38501_gshared)(__this, ___index, ___value, method)
