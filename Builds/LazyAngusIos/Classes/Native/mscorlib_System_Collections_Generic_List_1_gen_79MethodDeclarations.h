#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.DateTime>
struct List_1_t6757;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.DateTime>
struct IEnumerable_1_t6751;
// System.DateTime[]
struct DateTimeU5BU5D_t4839;
// System.Collections.Generic.IEnumerator`1<System.DateTime>
struct IEnumerator_1_t6752;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9106;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.DateTime>
struct ReadOnlyCollection_1_t6759;
// System.Predicate`1<System.DateTime>
struct Predicate_1_t6763;
// System.Collections.Generic.IComparer`1<System.DateTime>
struct IComparer_1_t9107;
// System.Comparison`1<System.DateTime>
struct Comparison_1_t6766;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.List`1/Enumerator<System.DateTime>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_62.h"

// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor()
extern "C" void List_1__ctor_m40936_gshared (List_1_t6757 * __this, const MethodInfo* method);
#define List_1__ctor_m40936(__this, method) (( void (*) (List_1_t6757 *, const MethodInfo*))List_1__ctor_m40936_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m40937_gshared (List_1_t6757 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m40937(__this, ___collection, method) (( void (*) (List_1_t6757 *, Object_t*, const MethodInfo*))List_1__ctor_m40937_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(System.Int32)
extern "C" void List_1__ctor_m40938_gshared (List_1_t6757 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m40938(__this, ___capacity, method) (( void (*) (List_1_t6757 *, int32_t, const MethodInfo*))List_1__ctor_m40938_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m40939_gshared (List_1_t6757 * __this, DateTimeU5BU5D_t4839* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m40939(__this, ___data, ___size, method) (( void (*) (List_1_t6757 *, DateTimeU5BU5D_t4839*, int32_t, const MethodInfo*))List_1__ctor_m40939_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.cctor()
extern "C" void List_1__cctor_m40940_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m40940(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m40940_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.DateTime>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40941_gshared (List_1_t6757 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40941(__this, method) (( Object_t* (*) (List_1_t6757 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40941_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m40942_gshared (List_1_t6757 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m40942(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6757 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m40942_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m40943_gshared (List_1_t6757 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m40943(__this, method) (( Object_t * (*) (List_1_t6757 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m40943_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m40944_gshared (List_1_t6757 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m40944(__this, ___item, method) (( int32_t (*) (List_1_t6757 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m40944_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m40945_gshared (List_1_t6757 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m40945(__this, ___item, method) (( bool (*) (List_1_t6757 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m40945_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m40946_gshared (List_1_t6757 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m40946(__this, ___item, method) (( int32_t (*) (List_1_t6757 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m40946_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m40947_gshared (List_1_t6757 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m40947(__this, ___index, ___item, method) (( void (*) (List_1_t6757 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m40947_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m40948_gshared (List_1_t6757 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m40948(__this, ___item, method) (( void (*) (List_1_t6757 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m40948_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40949_gshared (List_1_t6757 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40949(__this, method) (( bool (*) (List_1_t6757 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40949_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m40950_gshared (List_1_t6757 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m40950(__this, method) (( bool (*) (List_1_t6757 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m40950_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m40951_gshared (List_1_t6757 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m40951(__this, method) (( Object_t * (*) (List_1_t6757 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m40951_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m40952_gshared (List_1_t6757 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m40952(__this, method) (( bool (*) (List_1_t6757 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m40952_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m40953_gshared (List_1_t6757 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m40953(__this, method) (( bool (*) (List_1_t6757 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m40953_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m40954_gshared (List_1_t6757 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m40954(__this, ___index, method) (( Object_t * (*) (List_1_t6757 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m40954_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m40955_gshared (List_1_t6757 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m40955(__this, ___index, ___value, method) (( void (*) (List_1_t6757 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m40955_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Add(T)
extern "C" void List_1_Add_m40956_gshared (List_1_t6757 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Add_m40956(__this, ___item, method) (( void (*) (List_1_t6757 *, DateTime_t287 , const MethodInfo*))List_1_Add_m40956_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m40957_gshared (List_1_t6757 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m40957(__this, ___newCount, method) (( void (*) (List_1_t6757 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m40957_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m40958_gshared (List_1_t6757 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m40958(__this, ___idx, ___count, method) (( void (*) (List_1_t6757 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m40958_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m40959_gshared (List_1_t6757 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m40959(__this, ___collection, method) (( void (*) (List_1_t6757 *, Object_t*, const MethodInfo*))List_1_AddCollection_m40959_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m40960_gshared (List_1_t6757 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m40960(__this, ___enumerable, method) (( void (*) (List_1_t6757 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m40960_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m40961_gshared (List_1_t6757 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m40961(__this, ___collection, method) (( void (*) (List_1_t6757 *, Object_t*, const MethodInfo*))List_1_AddRange_m40961_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.DateTime>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6759 * List_1_AsReadOnly_m40962_gshared (List_1_t6757 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m40962(__this, method) (( ReadOnlyCollection_1_t6759 * (*) (List_1_t6757 *, const MethodInfo*))List_1_AsReadOnly_m40962_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Clear()
extern "C" void List_1_Clear_m40963_gshared (List_1_t6757 * __this, const MethodInfo* method);
#define List_1_Clear_m40963(__this, method) (( void (*) (List_1_t6757 *, const MethodInfo*))List_1_Clear_m40963_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::Contains(T)
extern "C" bool List_1_Contains_m40964_gshared (List_1_t6757 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Contains_m40964(__this, ___item, method) (( bool (*) (List_1_t6757 *, DateTime_t287 , const MethodInfo*))List_1_Contains_m40964_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m40965_gshared (List_1_t6757 * __this, DateTimeU5BU5D_t4839* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m40965(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6757 *, DateTimeU5BU5D_t4839*, int32_t, const MethodInfo*))List_1_CopyTo_m40965_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.DateTime>::Find(System.Predicate`1<T>)
extern "C" DateTime_t287  List_1_Find_m40966_gshared (List_1_t6757 * __this, Predicate_1_t6763 * ___match, const MethodInfo* method);
#define List_1_Find_m40966(__this, ___match, method) (( DateTime_t287  (*) (List_1_t6757 *, Predicate_1_t6763 *, const MethodInfo*))List_1_Find_m40966_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m40967_gshared (Object_t * __this /* static, unused */, Predicate_1_t6763 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m40967(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6763 *, const MethodInfo*))List_1_CheckMatch_m40967_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m40968_gshared (List_1_t6757 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6763 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m40968(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6757 *, int32_t, int32_t, Predicate_1_t6763 *, const MethodInfo*))List_1_GetIndex_m40968_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.DateTime>::GetEnumerator()
extern "C" Enumerator_t6758  List_1_GetEnumerator_m40969_gshared (List_1_t6757 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m40969(__this, method) (( Enumerator_t6758  (*) (List_1_t6757 *, const MethodInfo*))List_1_GetEnumerator_m40969_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.DateTime>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6757 * List_1_GetRange_m40970_gshared (List_1_t6757 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m40970(__this, ___index, ___count, method) (( List_1_t6757 * (*) (List_1_t6757 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m40970_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m40971_gshared (List_1_t6757 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_IndexOf_m40971(__this, ___item, method) (( int32_t (*) (List_1_t6757 *, DateTime_t287 , const MethodInfo*))List_1_IndexOf_m40971_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m40972_gshared (List_1_t6757 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m40972(__this, ___start, ___delta, method) (( void (*) (List_1_t6757 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m40972_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m40973_gshared (List_1_t6757 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m40973(__this, ___index, method) (( void (*) (List_1_t6757 *, int32_t, const MethodInfo*))List_1_CheckIndex_m40973_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m40974_gshared (List_1_t6757 * __this, int32_t ___index, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Insert_m40974(__this, ___index, ___item, method) (( void (*) (List_1_t6757 *, int32_t, DateTime_t287 , const MethodInfo*))List_1_Insert_m40974_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m40975_gshared (List_1_t6757 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m40975(__this, ___collection, method) (( void (*) (List_1_t6757 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m40975_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m40976_gshared (List_1_t6757 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m40976(__this, ___index, ___collection, method) (( void (*) (List_1_t6757 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m40976_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m40977_gshared (List_1_t6757 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m40977(__this, ___index, ___collection, method) (( void (*) (List_1_t6757 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m40977_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m40978_gshared (List_1_t6757 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m40978(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6757 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m40978_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::Remove(T)
extern "C" bool List_1_Remove_m40979_gshared (List_1_t6757 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Remove_m40979(__this, ___item, method) (( bool (*) (List_1_t6757 *, DateTime_t287 , const MethodInfo*))List_1_Remove_m40979_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m40980_gshared (List_1_t6757 * __this, Predicate_1_t6763 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m40980(__this, ___match, method) (( int32_t (*) (List_1_t6757 *, Predicate_1_t6763 *, const MethodInfo*))List_1_RemoveAll_m40980_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m40981_gshared (List_1_t6757 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m40981(__this, ___index, method) (( void (*) (List_1_t6757 *, int32_t, const MethodInfo*))List_1_RemoveAt_m40981_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m40982_gshared (List_1_t6757 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m40982(__this, ___index, ___count, method) (( void (*) (List_1_t6757 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m40982_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Reverse()
extern "C" void List_1_Reverse_m40983_gshared (List_1_t6757 * __this, const MethodInfo* method);
#define List_1_Reverse_m40983(__this, method) (( void (*) (List_1_t6757 *, const MethodInfo*))List_1_Reverse_m40983_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort()
extern "C" void List_1_Sort_m40984_gshared (List_1_t6757 * __this, const MethodInfo* method);
#define List_1_Sort_m40984(__this, method) (( void (*) (List_1_t6757 *, const MethodInfo*))List_1_Sort_m40984_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m40985_gshared (List_1_t6757 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m40985(__this, ___comparer, method) (( void (*) (List_1_t6757 *, Object_t*, const MethodInfo*))List_1_Sort_m40985_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m40986_gshared (List_1_t6757 * __this, Comparison_1_t6766 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m40986(__this, ___comparison, method) (( void (*) (List_1_t6757 *, Comparison_1_t6766 *, const MethodInfo*))List_1_Sort_m40986_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.DateTime>::ToArray()
extern "C" DateTimeU5BU5D_t4839* List_1_ToArray_m40987_gshared (List_1_t6757 * __this, const MethodInfo* method);
#define List_1_ToArray_m40987(__this, method) (( DateTimeU5BU5D_t4839* (*) (List_1_t6757 *, const MethodInfo*))List_1_ToArray_m40987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::TrimExcess()
extern "C" void List_1_TrimExcess_m40988_gshared (List_1_t6757 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m40988(__this, method) (( void (*) (List_1_t6757 *, const MethodInfo*))List_1_TrimExcess_m40988_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m40989_gshared (List_1_t6757 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m40989(__this, method) (( int32_t (*) (List_1_t6757 *, const MethodInfo*))List_1_get_Capacity_m40989_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m40990_gshared (List_1_t6757 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m40990(__this, ___value, method) (( void (*) (List_1_t6757 *, int32_t, const MethodInfo*))List_1_set_Capacity_m40990_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::get_Count()
extern "C" int32_t List_1_get_Count_m40991_gshared (List_1_t6757 * __this, const MethodInfo* method);
#define List_1_get_Count_m40991(__this, method) (( int32_t (*) (List_1_t6757 *, const MethodInfo*))List_1_get_Count_m40991_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.DateTime>::get_Item(System.Int32)
extern "C" DateTime_t287  List_1_get_Item_m40992_gshared (List_1_t6757 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m40992(__this, ___index, method) (( DateTime_t287  (*) (List_1_t6757 *, int32_t, const MethodInfo*))List_1_get_Item_m40992_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m40993_gshared (List_1_t6757 * __this, int32_t ___index, DateTime_t287  ___value, const MethodInfo* method);
#define List_1_set_Item_m40993(__this, ___index, ___value, method) (( void (*) (List_1_t6757 *, int32_t, DateTime_t287 , const MethodInfo*))List_1_set_Item_m40993_gshared)(__this, ___index, ___value, method)
