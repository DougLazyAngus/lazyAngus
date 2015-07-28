#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t5644;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t6283;
// System.Single[]
struct SingleU5BU5D_t535;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t6284;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8832;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t5647;
// System.Predicate`1<System.Single>
struct Predicate_1_t5652;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t8833;
// System.Comparison`1<System.Single>
struct Comparison_1_t5656;
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m26416_gshared (List_1_t5644 * __this, const MethodInfo* method);
#define List_1__ctor_m26416(__this, method) (( void (*) (List_1_t5644 *, const MethodInfo*))List_1__ctor_m26416_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m26417_gshared (List_1_t5644 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m26417(__this, ___collection, method) (( void (*) (List_1_t5644 *, Object_t*, const MethodInfo*))List_1__ctor_m26417_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m26418_gshared (List_1_t5644 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m26418(__this, ___capacity, method) (( void (*) (List_1_t5644 *, int32_t, const MethodInfo*))List_1__ctor_m26418_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m26419_gshared (List_1_t5644 * __this, SingleU5BU5D_t535* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m26419(__this, ___data, ___size, method) (( void (*) (List_1_t5644 *, SingleU5BU5D_t535*, int32_t, const MethodInfo*))List_1__ctor_m26419_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m26420_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m26420(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m26420_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26421_gshared (List_1_t5644 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26421(__this, method) (( Object_t* (*) (List_1_t5644 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26421_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m26422_gshared (List_1_t5644 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m26422(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5644 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m26422_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m26423_gshared (List_1_t5644 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26423(__this, method) (( Object_t * (*) (List_1_t5644 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m26423_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m26424_gshared (List_1_t5644 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m26424(__this, ___item, method) (( int32_t (*) (List_1_t5644 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m26424_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m26425_gshared (List_1_t5644 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m26425(__this, ___item, method) (( bool (*) (List_1_t5644 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m26425_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m26426_gshared (List_1_t5644 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m26426(__this, ___item, method) (( int32_t (*) (List_1_t5644 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m26426_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m26427_gshared (List_1_t5644 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m26427(__this, ___index, ___item, method) (( void (*) (List_1_t5644 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m26427_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m26428_gshared (List_1_t5644 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m26428(__this, ___item, method) (( void (*) (List_1_t5644 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m26428_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26429_gshared (List_1_t5644 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26429(__this, method) (( bool (*) (List_1_t5644 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26429_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m26430_gshared (List_1_t5644 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26430(__this, method) (( bool (*) (List_1_t5644 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m26430_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m26431_gshared (List_1_t5644 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m26431(__this, method) (( Object_t * (*) (List_1_t5644 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m26431_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m26432_gshared (List_1_t5644 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m26432(__this, method) (( bool (*) (List_1_t5644 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m26432_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m26433_gshared (List_1_t5644 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m26433(__this, method) (( bool (*) (List_1_t5644 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m26433_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m26434_gshared (List_1_t5644 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m26434(__this, ___index, method) (( Object_t * (*) (List_1_t5644 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m26434_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m26435_gshared (List_1_t5644 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m26435(__this, ___index, ___value, method) (( void (*) (List_1_t5644 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m26435_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m26436_gshared (List_1_t5644 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m26436(__this, ___item, method) (( void (*) (List_1_t5644 *, float, const MethodInfo*))List_1_Add_m26436_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m26437_gshared (List_1_t5644 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m26437(__this, ___newCount, method) (( void (*) (List_1_t5644 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m26437_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m26438_gshared (List_1_t5644 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m26438(__this, ___idx, ___count, method) (( void (*) (List_1_t5644 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26438_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m26439_gshared (List_1_t5644 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m26439(__this, ___collection, method) (( void (*) (List_1_t5644 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26439_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m26440_gshared (List_1_t5644 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m26440(__this, ___enumerable, method) (( void (*) (List_1_t5644 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26440_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m26441_gshared (List_1_t5644 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m26441(__this, ___collection, method) (( void (*) (List_1_t5644 *, Object_t*, const MethodInfo*))List_1_AddRange_m26441_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5647 * List_1_AsReadOnly_m26442_gshared (List_1_t5644 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m26442(__this, method) (( ReadOnlyCollection_1_t5647 * (*) (List_1_t5644 *, const MethodInfo*))List_1_AsReadOnly_m26442_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m26443_gshared (List_1_t5644 * __this, const MethodInfo* method);
#define List_1_Clear_m26443(__this, method) (( void (*) (List_1_t5644 *, const MethodInfo*))List_1_Clear_m26443_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m26444_gshared (List_1_t5644 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m26444(__this, ___item, method) (( bool (*) (List_1_t5644 *, float, const MethodInfo*))List_1_Contains_m26444_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m26445_gshared (List_1_t5644 * __this, SingleU5BU5D_t535* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m26445(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5644 *, SingleU5BU5D_t535*, int32_t, const MethodInfo*))List_1_CopyTo_m26445_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m26446_gshared (List_1_t5644 * __this, Predicate_1_t5652 * ___match, const MethodInfo* method);
#define List_1_Find_m26446(__this, ___match, method) (( float (*) (List_1_t5644 *, Predicate_1_t5652 *, const MethodInfo*))List_1_Find_m26446_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m26447_gshared (Object_t * __this /* static, unused */, Predicate_1_t5652 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m26447(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5652 *, const MethodInfo*))List_1_CheckMatch_m26447_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m26448_gshared (List_1_t5644 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5652 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m26448(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t5644 *, int32_t, int32_t, Predicate_1_t5652 *, const MethodInfo*))List_1_GetIndex_m26448_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t5645  List_1_GetEnumerator_m26449_gshared (List_1_t5644 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m26449(__this, method) (( Enumerator_t5645  (*) (List_1_t5644 *, const MethodInfo*))List_1_GetEnumerator_m26449_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t5644 * List_1_GetRange_m26450_gshared (List_1_t5644 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m26450(__this, ___index, ___count, method) (( List_1_t5644 * (*) (List_1_t5644 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26450_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m26451_gshared (List_1_t5644 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m26451(__this, ___item, method) (( int32_t (*) (List_1_t5644 *, float, const MethodInfo*))List_1_IndexOf_m26451_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m26452_gshared (List_1_t5644 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m26452(__this, ___start, ___delta, method) (( void (*) (List_1_t5644 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26452_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m26453_gshared (List_1_t5644 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m26453(__this, ___index, method) (( void (*) (List_1_t5644 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26453_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m26454_gshared (List_1_t5644 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m26454(__this, ___index, ___item, method) (( void (*) (List_1_t5644 *, int32_t, float, const MethodInfo*))List_1_Insert_m26454_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m26455_gshared (List_1_t5644 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m26455(__this, ___collection, method) (( void (*) (List_1_t5644 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26455_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m26456_gshared (List_1_t5644 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m26456(__this, ___index, ___collection, method) (( void (*) (List_1_t5644 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26456_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m26457_gshared (List_1_t5644 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m26457(__this, ___index, ___collection, method) (( void (*) (List_1_t5644 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26457_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m26458_gshared (List_1_t5644 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m26458(__this, ___index, ___enumerable, method) (( void (*) (List_1_t5644 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26458_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m26459_gshared (List_1_t5644 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m26459(__this, ___item, method) (( bool (*) (List_1_t5644 *, float, const MethodInfo*))List_1_Remove_m26459_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m26460_gshared (List_1_t5644 * __this, Predicate_1_t5652 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m26460(__this, ___match, method) (( int32_t (*) (List_1_t5644 *, Predicate_1_t5652 *, const MethodInfo*))List_1_RemoveAll_m26460_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m26461_gshared (List_1_t5644 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m26461(__this, ___index, method) (( void (*) (List_1_t5644 *, int32_t, const MethodInfo*))List_1_RemoveAt_m26461_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m26462_gshared (List_1_t5644 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m26462(__this, ___index, ___count, method) (( void (*) (List_1_t5644 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26462_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m26463_gshared (List_1_t5644 * __this, const MethodInfo* method);
#define List_1_Reverse_m26463(__this, method) (( void (*) (List_1_t5644 *, const MethodInfo*))List_1_Reverse_m26463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m26464_gshared (List_1_t5644 * __this, const MethodInfo* method);
#define List_1_Sort_m26464(__this, method) (( void (*) (List_1_t5644 *, const MethodInfo*))List_1_Sort_m26464_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m26465_gshared (List_1_t5644 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m26465(__this, ___comparer, method) (( void (*) (List_1_t5644 *, Object_t*, const MethodInfo*))List_1_Sort_m26465_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m26466_gshared (List_1_t5644 * __this, Comparison_1_t5656 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m26466(__this, ___comparison, method) (( void (*) (List_1_t5644 *, Comparison_1_t5656 *, const MethodInfo*))List_1_Sort_m26466_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t535* List_1_ToArray_m26467_gshared (List_1_t5644 * __this, const MethodInfo* method);
#define List_1_ToArray_m26467(__this, method) (( SingleU5BU5D_t535* (*) (List_1_t5644 *, const MethodInfo*))List_1_ToArray_m26467_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m26468_gshared (List_1_t5644 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m26468(__this, method) (( void (*) (List_1_t5644 *, const MethodInfo*))List_1_TrimExcess_m26468_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m26469_gshared (List_1_t5644 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m26469(__this, method) (( int32_t (*) (List_1_t5644 *, const MethodInfo*))List_1_get_Capacity_m26469_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m26470_gshared (List_1_t5644 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m26470(__this, ___value, method) (( void (*) (List_1_t5644 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26470_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m26471_gshared (List_1_t5644 * __this, const MethodInfo* method);
#define List_1_get_Count_m26471(__this, method) (( int32_t (*) (List_1_t5644 *, const MethodInfo*))List_1_get_Count_m26471_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m26472_gshared (List_1_t5644 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m26472(__this, ___index, method) (( float (*) (List_1_t5644 *, int32_t, const MethodInfo*))List_1_get_Item_m26472_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m26473_gshared (List_1_t5644 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m26473(__this, ___index, ___value, method) (( void (*) (List_1_t5644 *, int32_t, float, const MethodInfo*))List_1_set_Item_m26473_gshared)(__this, ___index, ___value, method)
