#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.DateTime>
struct List_1_t6839;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.DateTime>
struct IEnumerable_1_t6833;
// System.DateTime[]
struct DateTimeU5BU5D_t4895;
// System.Collections.Generic.IEnumerator`1<System.DateTime>
struct IEnumerator_1_t6834;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9207;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.DateTime>
struct ReadOnlyCollection_1_t6841;
// System.Predicate`1<System.DateTime>
struct Predicate_1_t6845;
// System.Collections.Generic.IComparer`1<System.DateTime>
struct IComparer_1_t9208;
// System.Comparison`1<System.DateTime>
struct Comparison_1_t6848;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.List`1/Enumerator<System.DateTime>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_65.h"

// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor()
extern "C" void List_1__ctor_m41683_gshared (List_1_t6839 * __this, const MethodInfo* method);
#define List_1__ctor_m41683(__this, method) (( void (*) (List_1_t6839 *, const MethodInfo*))List_1__ctor_m41683_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m41684_gshared (List_1_t6839 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m41684(__this, ___collection, method) (( void (*) (List_1_t6839 *, Object_t*, const MethodInfo*))List_1__ctor_m41684_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(System.Int32)
extern "C" void List_1__ctor_m41685_gshared (List_1_t6839 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m41685(__this, ___capacity, method) (( void (*) (List_1_t6839 *, int32_t, const MethodInfo*))List_1__ctor_m41685_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m41686_gshared (List_1_t6839 * __this, DateTimeU5BU5D_t4895* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m41686(__this, ___data, ___size, method) (( void (*) (List_1_t6839 *, DateTimeU5BU5D_t4895*, int32_t, const MethodInfo*))List_1__ctor_m41686_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.cctor()
extern "C" void List_1__cctor_m41687_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m41687(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m41687_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.DateTime>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41688_gshared (List_1_t6839 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41688(__this, method) (( Object_t* (*) (List_1_t6839 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41688_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m41689_gshared (List_1_t6839 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m41689(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6839 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m41689_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m41690_gshared (List_1_t6839 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m41690(__this, method) (( Object_t * (*) (List_1_t6839 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m41690_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m41691_gshared (List_1_t6839 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m41691(__this, ___item, method) (( int32_t (*) (List_1_t6839 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m41691_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m41692_gshared (List_1_t6839 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m41692(__this, ___item, method) (( bool (*) (List_1_t6839 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m41692_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m41693_gshared (List_1_t6839 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m41693(__this, ___item, method) (( int32_t (*) (List_1_t6839 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m41693_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m41694_gshared (List_1_t6839 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m41694(__this, ___index, ___item, method) (( void (*) (List_1_t6839 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m41694_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m41695_gshared (List_1_t6839 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m41695(__this, ___item, method) (( void (*) (List_1_t6839 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m41695_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41696_gshared (List_1_t6839 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41696(__this, method) (( bool (*) (List_1_t6839 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41696_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m41697_gshared (List_1_t6839 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m41697(__this, method) (( bool (*) (List_1_t6839 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m41697_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m41698_gshared (List_1_t6839 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m41698(__this, method) (( Object_t * (*) (List_1_t6839 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m41698_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m41699_gshared (List_1_t6839 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m41699(__this, method) (( bool (*) (List_1_t6839 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m41699_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m41700_gshared (List_1_t6839 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m41700(__this, method) (( bool (*) (List_1_t6839 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m41700_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m41701_gshared (List_1_t6839 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m41701(__this, ___index, method) (( Object_t * (*) (List_1_t6839 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m41701_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m41702_gshared (List_1_t6839 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m41702(__this, ___index, ___value, method) (( void (*) (List_1_t6839 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m41702_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Add(T)
extern "C" void List_1_Add_m41703_gshared (List_1_t6839 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Add_m41703(__this, ___item, method) (( void (*) (List_1_t6839 *, DateTime_t287 , const MethodInfo*))List_1_Add_m41703_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m41704_gshared (List_1_t6839 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m41704(__this, ___newCount, method) (( void (*) (List_1_t6839 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m41704_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m41705_gshared (List_1_t6839 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m41705(__this, ___idx, ___count, method) (( void (*) (List_1_t6839 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m41705_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m41706_gshared (List_1_t6839 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m41706(__this, ___collection, method) (( void (*) (List_1_t6839 *, Object_t*, const MethodInfo*))List_1_AddCollection_m41706_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m41707_gshared (List_1_t6839 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m41707(__this, ___enumerable, method) (( void (*) (List_1_t6839 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m41707_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m41708_gshared (List_1_t6839 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m41708(__this, ___collection, method) (( void (*) (List_1_t6839 *, Object_t*, const MethodInfo*))List_1_AddRange_m41708_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.DateTime>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6841 * List_1_AsReadOnly_m41709_gshared (List_1_t6839 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m41709(__this, method) (( ReadOnlyCollection_1_t6841 * (*) (List_1_t6839 *, const MethodInfo*))List_1_AsReadOnly_m41709_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Clear()
extern "C" void List_1_Clear_m41710_gshared (List_1_t6839 * __this, const MethodInfo* method);
#define List_1_Clear_m41710(__this, method) (( void (*) (List_1_t6839 *, const MethodInfo*))List_1_Clear_m41710_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::Contains(T)
extern "C" bool List_1_Contains_m41711_gshared (List_1_t6839 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Contains_m41711(__this, ___item, method) (( bool (*) (List_1_t6839 *, DateTime_t287 , const MethodInfo*))List_1_Contains_m41711_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m41712_gshared (List_1_t6839 * __this, DateTimeU5BU5D_t4895* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m41712(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6839 *, DateTimeU5BU5D_t4895*, int32_t, const MethodInfo*))List_1_CopyTo_m41712_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.DateTime>::Find(System.Predicate`1<T>)
extern "C" DateTime_t287  List_1_Find_m41713_gshared (List_1_t6839 * __this, Predicate_1_t6845 * ___match, const MethodInfo* method);
#define List_1_Find_m41713(__this, ___match, method) (( DateTime_t287  (*) (List_1_t6839 *, Predicate_1_t6845 *, const MethodInfo*))List_1_Find_m41713_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m41714_gshared (Object_t * __this /* static, unused */, Predicate_1_t6845 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m41714(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6845 *, const MethodInfo*))List_1_CheckMatch_m41714_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m41715_gshared (List_1_t6839 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6845 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m41715(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6839 *, int32_t, int32_t, Predicate_1_t6845 *, const MethodInfo*))List_1_GetIndex_m41715_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.DateTime>::GetEnumerator()
extern "C" Enumerator_t6840  List_1_GetEnumerator_m41716_gshared (List_1_t6839 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m41716(__this, method) (( Enumerator_t6840  (*) (List_1_t6839 *, const MethodInfo*))List_1_GetEnumerator_m41716_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.DateTime>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6839 * List_1_GetRange_m41717_gshared (List_1_t6839 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m41717(__this, ___index, ___count, method) (( List_1_t6839 * (*) (List_1_t6839 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m41717_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m41718_gshared (List_1_t6839 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_IndexOf_m41718(__this, ___item, method) (( int32_t (*) (List_1_t6839 *, DateTime_t287 , const MethodInfo*))List_1_IndexOf_m41718_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m41719_gshared (List_1_t6839 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m41719(__this, ___start, ___delta, method) (( void (*) (List_1_t6839 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m41719_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m41720_gshared (List_1_t6839 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m41720(__this, ___index, method) (( void (*) (List_1_t6839 *, int32_t, const MethodInfo*))List_1_CheckIndex_m41720_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m41721_gshared (List_1_t6839 * __this, int32_t ___index, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Insert_m41721(__this, ___index, ___item, method) (( void (*) (List_1_t6839 *, int32_t, DateTime_t287 , const MethodInfo*))List_1_Insert_m41721_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m41722_gshared (List_1_t6839 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m41722(__this, ___collection, method) (( void (*) (List_1_t6839 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m41722_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m41723_gshared (List_1_t6839 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m41723(__this, ___index, ___collection, method) (( void (*) (List_1_t6839 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m41723_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m41724_gshared (List_1_t6839 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m41724(__this, ___index, ___collection, method) (( void (*) (List_1_t6839 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m41724_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m41725_gshared (List_1_t6839 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m41725(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6839 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m41725_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::Remove(T)
extern "C" bool List_1_Remove_m41726_gshared (List_1_t6839 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Remove_m41726(__this, ___item, method) (( bool (*) (List_1_t6839 *, DateTime_t287 , const MethodInfo*))List_1_Remove_m41726_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m41727_gshared (List_1_t6839 * __this, Predicate_1_t6845 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m41727(__this, ___match, method) (( int32_t (*) (List_1_t6839 *, Predicate_1_t6845 *, const MethodInfo*))List_1_RemoveAll_m41727_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m41728_gshared (List_1_t6839 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m41728(__this, ___index, method) (( void (*) (List_1_t6839 *, int32_t, const MethodInfo*))List_1_RemoveAt_m41728_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m41729_gshared (List_1_t6839 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m41729(__this, ___index, ___count, method) (( void (*) (List_1_t6839 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m41729_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Reverse()
extern "C" void List_1_Reverse_m41730_gshared (List_1_t6839 * __this, const MethodInfo* method);
#define List_1_Reverse_m41730(__this, method) (( void (*) (List_1_t6839 *, const MethodInfo*))List_1_Reverse_m41730_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort()
extern "C" void List_1_Sort_m41731_gshared (List_1_t6839 * __this, const MethodInfo* method);
#define List_1_Sort_m41731(__this, method) (( void (*) (List_1_t6839 *, const MethodInfo*))List_1_Sort_m41731_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m41732_gshared (List_1_t6839 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m41732(__this, ___comparer, method) (( void (*) (List_1_t6839 *, Object_t*, const MethodInfo*))List_1_Sort_m41732_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m41733_gshared (List_1_t6839 * __this, Comparison_1_t6848 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m41733(__this, ___comparison, method) (( void (*) (List_1_t6839 *, Comparison_1_t6848 *, const MethodInfo*))List_1_Sort_m41733_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.DateTime>::ToArray()
extern "C" DateTimeU5BU5D_t4895* List_1_ToArray_m41734_gshared (List_1_t6839 * __this, const MethodInfo* method);
#define List_1_ToArray_m41734(__this, method) (( DateTimeU5BU5D_t4895* (*) (List_1_t6839 *, const MethodInfo*))List_1_ToArray_m41734_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::TrimExcess()
extern "C" void List_1_TrimExcess_m41735_gshared (List_1_t6839 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m41735(__this, method) (( void (*) (List_1_t6839 *, const MethodInfo*))List_1_TrimExcess_m41735_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m41736_gshared (List_1_t6839 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m41736(__this, method) (( int32_t (*) (List_1_t6839 *, const MethodInfo*))List_1_get_Capacity_m41736_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m41737_gshared (List_1_t6839 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m41737(__this, ___value, method) (( void (*) (List_1_t6839 *, int32_t, const MethodInfo*))List_1_set_Capacity_m41737_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::get_Count()
extern "C" int32_t List_1_get_Count_m41738_gshared (List_1_t6839 * __this, const MethodInfo* method);
#define List_1_get_Count_m41738(__this, method) (( int32_t (*) (List_1_t6839 *, const MethodInfo*))List_1_get_Count_m41738_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.DateTime>::get_Item(System.Int32)
extern "C" DateTime_t287  List_1_get_Item_m41739_gshared (List_1_t6839 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m41739(__this, ___index, method) (( DateTime_t287  (*) (List_1_t6839 *, int32_t, const MethodInfo*))List_1_get_Item_m41739_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m41740_gshared (List_1_t6839 * __this, int32_t ___index, DateTime_t287  ___value, const MethodInfo* method);
#define List_1_set_Item_m41740(__this, ___index, ___value, method) (( void (*) (List_1_t6839 *, int32_t, DateTime_t287 , const MethodInfo*))List_1_set_Item_m41740_gshared)(__this, ___index, ___value, method)
