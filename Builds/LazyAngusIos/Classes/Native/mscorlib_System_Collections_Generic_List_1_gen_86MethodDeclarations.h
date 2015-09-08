#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.DateTime>
struct List_1_t7414;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.DateTime>
struct IEnumerable_1_t7408;
// System.DateTime[]
struct DateTimeU5BU5D_t5448;
// System.Collections.Generic.IEnumerator`1<System.DateTime>
struct IEnumerator_1_t7409;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9848;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.DateTime>
struct ReadOnlyCollection_1_t7416;
// System.Predicate`1<System.DateTime>
struct Predicate_1_t7421;
// System.Collections.Generic.IComparer`1<System.DateTime>
struct IComparer_1_t9849;
// System.Comparison`1<System.DateTime>
struct Comparison_1_t7425;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.List`1/Enumerator<System.DateTime>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_69.h"

// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor()
extern "C" void List_1__ctor_m46409_gshared (List_1_t7414 * __this, const MethodInfo* method);
#define List_1__ctor_m46409(__this, method) (( void (*) (List_1_t7414 *, const MethodInfo*))List_1__ctor_m46409_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m46410_gshared (List_1_t7414 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m46410(__this, ___collection, method) (( void (*) (List_1_t7414 *, Object_t*, const MethodInfo*))List_1__ctor_m46410_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(System.Int32)
extern "C" void List_1__ctor_m46411_gshared (List_1_t7414 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m46411(__this, ___capacity, method) (( void (*) (List_1_t7414 *, int32_t, const MethodInfo*))List_1__ctor_m46411_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m46412_gshared (List_1_t7414 * __this, DateTimeU5BU5D_t5448* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m46412(__this, ___data, ___size, method) (( void (*) (List_1_t7414 *, DateTimeU5BU5D_t5448*, int32_t, const MethodInfo*))List_1__ctor_m46412_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.cctor()
extern "C" void List_1__cctor_m46413_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m46413(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m46413_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.DateTime>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46414_gshared (List_1_t7414 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46414(__this, method) (( Object_t* (*) (List_1_t7414 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46414_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m46415_gshared (List_1_t7414 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m46415(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7414 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m46415_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m46416_gshared (List_1_t7414 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m46416(__this, method) (( Object_t * (*) (List_1_t7414 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m46416_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m46417_gshared (List_1_t7414 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m46417(__this, ___item, method) (( int32_t (*) (List_1_t7414 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m46417_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m46418_gshared (List_1_t7414 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m46418(__this, ___item, method) (( bool (*) (List_1_t7414 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m46418_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m46419_gshared (List_1_t7414 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m46419(__this, ___item, method) (( int32_t (*) (List_1_t7414 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m46419_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m46420_gshared (List_1_t7414 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m46420(__this, ___index, ___item, method) (( void (*) (List_1_t7414 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m46420_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m46421_gshared (List_1_t7414 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m46421(__this, ___item, method) (( void (*) (List_1_t7414 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m46421_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46422_gshared (List_1_t7414 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46422(__this, method) (( bool (*) (List_1_t7414 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46422_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m46423_gshared (List_1_t7414 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m46423(__this, method) (( bool (*) (List_1_t7414 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m46423_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m46424_gshared (List_1_t7414 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m46424(__this, method) (( Object_t * (*) (List_1_t7414 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m46424_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m46425_gshared (List_1_t7414 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m46425(__this, method) (( bool (*) (List_1_t7414 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m46425_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m46426_gshared (List_1_t7414 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m46426(__this, method) (( bool (*) (List_1_t7414 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m46426_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m46427_gshared (List_1_t7414 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m46427(__this, ___index, method) (( Object_t * (*) (List_1_t7414 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m46427_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m46428_gshared (List_1_t7414 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m46428(__this, ___index, ___value, method) (( void (*) (List_1_t7414 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m46428_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Add(T)
extern "C" void List_1_Add_m46429_gshared (List_1_t7414 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Add_m46429(__this, ___item, method) (( void (*) (List_1_t7414 *, DateTime_t287 , const MethodInfo*))List_1_Add_m46429_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m46430_gshared (List_1_t7414 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m46430(__this, ___newCount, method) (( void (*) (List_1_t7414 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m46430_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m46431_gshared (List_1_t7414 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m46431(__this, ___idx, ___count, method) (( void (*) (List_1_t7414 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m46431_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m46432_gshared (List_1_t7414 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m46432(__this, ___collection, method) (( void (*) (List_1_t7414 *, Object_t*, const MethodInfo*))List_1_AddCollection_m46432_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m46433_gshared (List_1_t7414 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m46433(__this, ___enumerable, method) (( void (*) (List_1_t7414 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m46433_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m46434_gshared (List_1_t7414 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m46434(__this, ___collection, method) (( void (*) (List_1_t7414 *, Object_t*, const MethodInfo*))List_1_AddRange_m46434_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.DateTime>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7416 * List_1_AsReadOnly_m46435_gshared (List_1_t7414 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m46435(__this, method) (( ReadOnlyCollection_1_t7416 * (*) (List_1_t7414 *, const MethodInfo*))List_1_AsReadOnly_m46435_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Clear()
extern "C" void List_1_Clear_m46436_gshared (List_1_t7414 * __this, const MethodInfo* method);
#define List_1_Clear_m46436(__this, method) (( void (*) (List_1_t7414 *, const MethodInfo*))List_1_Clear_m46436_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::Contains(T)
extern "C" bool List_1_Contains_m46437_gshared (List_1_t7414 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Contains_m46437(__this, ___item, method) (( bool (*) (List_1_t7414 *, DateTime_t287 , const MethodInfo*))List_1_Contains_m46437_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m46438_gshared (List_1_t7414 * __this, DateTimeU5BU5D_t5448* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m46438(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7414 *, DateTimeU5BU5D_t5448*, int32_t, const MethodInfo*))List_1_CopyTo_m46438_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.DateTime>::Find(System.Predicate`1<T>)
extern "C" DateTime_t287  List_1_Find_m46439_gshared (List_1_t7414 * __this, Predicate_1_t7421 * ___match, const MethodInfo* method);
#define List_1_Find_m46439(__this, ___match, method) (( DateTime_t287  (*) (List_1_t7414 *, Predicate_1_t7421 *, const MethodInfo*))List_1_Find_m46439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m46440_gshared (Object_t * __this /* static, unused */, Predicate_1_t7421 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m46440(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7421 *, const MethodInfo*))List_1_CheckMatch_m46440_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m46441_gshared (List_1_t7414 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7421 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m46441(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7414 *, int32_t, int32_t, Predicate_1_t7421 *, const MethodInfo*))List_1_GetIndex_m46441_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.DateTime>::GetEnumerator()
extern "C" Enumerator_t7415  List_1_GetEnumerator_m46442_gshared (List_1_t7414 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m46442(__this, method) (( Enumerator_t7415  (*) (List_1_t7414 *, const MethodInfo*))List_1_GetEnumerator_m46442_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.DateTime>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7414 * List_1_GetRange_m46443_gshared (List_1_t7414 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m46443(__this, ___index, ___count, method) (( List_1_t7414 * (*) (List_1_t7414 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m46443_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m46444_gshared (List_1_t7414 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_IndexOf_m46444(__this, ___item, method) (( int32_t (*) (List_1_t7414 *, DateTime_t287 , const MethodInfo*))List_1_IndexOf_m46444_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m46445_gshared (List_1_t7414 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m46445(__this, ___start, ___delta, method) (( void (*) (List_1_t7414 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m46445_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m46446_gshared (List_1_t7414 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m46446(__this, ___index, method) (( void (*) (List_1_t7414 *, int32_t, const MethodInfo*))List_1_CheckIndex_m46446_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m46447_gshared (List_1_t7414 * __this, int32_t ___index, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Insert_m46447(__this, ___index, ___item, method) (( void (*) (List_1_t7414 *, int32_t, DateTime_t287 , const MethodInfo*))List_1_Insert_m46447_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m46448_gshared (List_1_t7414 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m46448(__this, ___collection, method) (( void (*) (List_1_t7414 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m46448_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m46449_gshared (List_1_t7414 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m46449(__this, ___index, ___collection, method) (( void (*) (List_1_t7414 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m46449_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m46450_gshared (List_1_t7414 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m46450(__this, ___index, ___collection, method) (( void (*) (List_1_t7414 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m46450_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m46451_gshared (List_1_t7414 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m46451(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7414 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m46451_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::Remove(T)
extern "C" bool List_1_Remove_m46452_gshared (List_1_t7414 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Remove_m46452(__this, ___item, method) (( bool (*) (List_1_t7414 *, DateTime_t287 , const MethodInfo*))List_1_Remove_m46452_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m46453_gshared (List_1_t7414 * __this, Predicate_1_t7421 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m46453(__this, ___match, method) (( int32_t (*) (List_1_t7414 *, Predicate_1_t7421 *, const MethodInfo*))List_1_RemoveAll_m46453_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m46454_gshared (List_1_t7414 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m46454(__this, ___index, method) (( void (*) (List_1_t7414 *, int32_t, const MethodInfo*))List_1_RemoveAt_m46454_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m46455_gshared (List_1_t7414 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m46455(__this, ___index, ___count, method) (( void (*) (List_1_t7414 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m46455_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Reverse()
extern "C" void List_1_Reverse_m46456_gshared (List_1_t7414 * __this, const MethodInfo* method);
#define List_1_Reverse_m46456(__this, method) (( void (*) (List_1_t7414 *, const MethodInfo*))List_1_Reverse_m46456_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort()
extern "C" void List_1_Sort_m46457_gshared (List_1_t7414 * __this, const MethodInfo* method);
#define List_1_Sort_m46457(__this, method) (( void (*) (List_1_t7414 *, const MethodInfo*))List_1_Sort_m46457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m46458_gshared (List_1_t7414 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m46458(__this, ___comparer, method) (( void (*) (List_1_t7414 *, Object_t*, const MethodInfo*))List_1_Sort_m46458_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m46459_gshared (List_1_t7414 * __this, Comparison_1_t7425 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m46459(__this, ___comparison, method) (( void (*) (List_1_t7414 *, Comparison_1_t7425 *, const MethodInfo*))List_1_Sort_m46459_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.DateTime>::ToArray()
extern "C" DateTimeU5BU5D_t5448* List_1_ToArray_m46460_gshared (List_1_t7414 * __this, const MethodInfo* method);
#define List_1_ToArray_m46460(__this, method) (( DateTimeU5BU5D_t5448* (*) (List_1_t7414 *, const MethodInfo*))List_1_ToArray_m46460_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::TrimExcess()
extern "C" void List_1_TrimExcess_m46461_gshared (List_1_t7414 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m46461(__this, method) (( void (*) (List_1_t7414 *, const MethodInfo*))List_1_TrimExcess_m46461_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m46462_gshared (List_1_t7414 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m46462(__this, method) (( int32_t (*) (List_1_t7414 *, const MethodInfo*))List_1_get_Capacity_m46462_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m46463_gshared (List_1_t7414 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m46463(__this, ___value, method) (( void (*) (List_1_t7414 *, int32_t, const MethodInfo*))List_1_set_Capacity_m46463_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::get_Count()
extern "C" int32_t List_1_get_Count_m46464_gshared (List_1_t7414 * __this, const MethodInfo* method);
#define List_1_get_Count_m46464(__this, method) (( int32_t (*) (List_1_t7414 *, const MethodInfo*))List_1_get_Count_m46464_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.DateTime>::get_Item(System.Int32)
extern "C" DateTime_t287  List_1_get_Item_m46465_gshared (List_1_t7414 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m46465(__this, ___index, method) (( DateTime_t287  (*) (List_1_t7414 *, int32_t, const MethodInfo*))List_1_get_Item_m46465_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m46466_gshared (List_1_t7414 * __this, int32_t ___index, DateTime_t287  ___value, const MethodInfo* method);
#define List_1_set_Item_m46466(__this, ___index, ___value, method) (( void (*) (List_1_t7414 *, int32_t, DateTime_t287 , const MethodInfo*))List_1_set_Item_m46466_gshared)(__this, ___index, ___value, method)
