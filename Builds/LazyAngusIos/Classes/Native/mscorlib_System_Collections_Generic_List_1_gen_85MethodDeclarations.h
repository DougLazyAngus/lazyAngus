#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.DateTime>
struct List_1_t6875;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.DateTime>
struct IEnumerable_1_t6869;
// System.DateTime[]
struct DateTimeU5BU5D_t4912;
// System.Collections.Generic.IEnumerator`1<System.DateTime>
struct IEnumerator_1_t6870;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9255;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.DateTime>
struct ReadOnlyCollection_1_t6877;
// System.Predicate`1<System.DateTime>
struct Predicate_1_t6881;
// System.Collections.Generic.IComparer`1<System.DateTime>
struct IComparer_1_t9256;
// System.Comparison`1<System.DateTime>
struct Comparison_1_t6884;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.List`1/Enumerator<System.DateTime>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_68.h"

// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor()
extern "C" void List_1__ctor_m42136_gshared (List_1_t6875 * __this, const MethodInfo* method);
#define List_1__ctor_m42136(__this, method) (( void (*) (List_1_t6875 *, const MethodInfo*))List_1__ctor_m42136_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m42137_gshared (List_1_t6875 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m42137(__this, ___collection, method) (( void (*) (List_1_t6875 *, Object_t*, const MethodInfo*))List_1__ctor_m42137_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(System.Int32)
extern "C" void List_1__ctor_m42138_gshared (List_1_t6875 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m42138(__this, ___capacity, method) (( void (*) (List_1_t6875 *, int32_t, const MethodInfo*))List_1__ctor_m42138_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m42139_gshared (List_1_t6875 * __this, DateTimeU5BU5D_t4912* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m42139(__this, ___data, ___size, method) (( void (*) (List_1_t6875 *, DateTimeU5BU5D_t4912*, int32_t, const MethodInfo*))List_1__ctor_m42139_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.cctor()
extern "C" void List_1__cctor_m42140_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m42140(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m42140_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.DateTime>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42141_gshared (List_1_t6875 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42141(__this, method) (( Object_t* (*) (List_1_t6875 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42141_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m42142_gshared (List_1_t6875 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m42142(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6875 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m42142_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m42143_gshared (List_1_t6875 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m42143(__this, method) (( Object_t * (*) (List_1_t6875 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m42143_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m42144_gshared (List_1_t6875 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m42144(__this, ___item, method) (( int32_t (*) (List_1_t6875 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m42144_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m42145_gshared (List_1_t6875 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m42145(__this, ___item, method) (( bool (*) (List_1_t6875 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m42145_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m42146_gshared (List_1_t6875 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m42146(__this, ___item, method) (( int32_t (*) (List_1_t6875 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m42146_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m42147_gshared (List_1_t6875 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m42147(__this, ___index, ___item, method) (( void (*) (List_1_t6875 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m42147_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m42148_gshared (List_1_t6875 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m42148(__this, ___item, method) (( void (*) (List_1_t6875 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m42148_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42149_gshared (List_1_t6875 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42149(__this, method) (( bool (*) (List_1_t6875 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42149_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m42150_gshared (List_1_t6875 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m42150(__this, method) (( bool (*) (List_1_t6875 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m42150_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m42151_gshared (List_1_t6875 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m42151(__this, method) (( Object_t * (*) (List_1_t6875 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m42151_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m42152_gshared (List_1_t6875 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m42152(__this, method) (( bool (*) (List_1_t6875 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m42152_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m42153_gshared (List_1_t6875 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m42153(__this, method) (( bool (*) (List_1_t6875 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m42153_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m42154_gshared (List_1_t6875 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m42154(__this, ___index, method) (( Object_t * (*) (List_1_t6875 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m42154_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m42155_gshared (List_1_t6875 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m42155(__this, ___index, ___value, method) (( void (*) (List_1_t6875 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m42155_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Add(T)
extern "C" void List_1_Add_m42156_gshared (List_1_t6875 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Add_m42156(__this, ___item, method) (( void (*) (List_1_t6875 *, DateTime_t287 , const MethodInfo*))List_1_Add_m42156_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m42157_gshared (List_1_t6875 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m42157(__this, ___newCount, method) (( void (*) (List_1_t6875 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m42157_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m42158_gshared (List_1_t6875 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m42158(__this, ___idx, ___count, method) (( void (*) (List_1_t6875 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m42158_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m42159_gshared (List_1_t6875 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m42159(__this, ___collection, method) (( void (*) (List_1_t6875 *, Object_t*, const MethodInfo*))List_1_AddCollection_m42159_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m42160_gshared (List_1_t6875 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m42160(__this, ___enumerable, method) (( void (*) (List_1_t6875 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m42160_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m42161_gshared (List_1_t6875 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m42161(__this, ___collection, method) (( void (*) (List_1_t6875 *, Object_t*, const MethodInfo*))List_1_AddRange_m42161_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.DateTime>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6877 * List_1_AsReadOnly_m42162_gshared (List_1_t6875 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m42162(__this, method) (( ReadOnlyCollection_1_t6877 * (*) (List_1_t6875 *, const MethodInfo*))List_1_AsReadOnly_m42162_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Clear()
extern "C" void List_1_Clear_m42163_gshared (List_1_t6875 * __this, const MethodInfo* method);
#define List_1_Clear_m42163(__this, method) (( void (*) (List_1_t6875 *, const MethodInfo*))List_1_Clear_m42163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::Contains(T)
extern "C" bool List_1_Contains_m42164_gshared (List_1_t6875 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Contains_m42164(__this, ___item, method) (( bool (*) (List_1_t6875 *, DateTime_t287 , const MethodInfo*))List_1_Contains_m42164_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m42165_gshared (List_1_t6875 * __this, DateTimeU5BU5D_t4912* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m42165(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6875 *, DateTimeU5BU5D_t4912*, int32_t, const MethodInfo*))List_1_CopyTo_m42165_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.DateTime>::Find(System.Predicate`1<T>)
extern "C" DateTime_t287  List_1_Find_m42166_gshared (List_1_t6875 * __this, Predicate_1_t6881 * ___match, const MethodInfo* method);
#define List_1_Find_m42166(__this, ___match, method) (( DateTime_t287  (*) (List_1_t6875 *, Predicate_1_t6881 *, const MethodInfo*))List_1_Find_m42166_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m42167_gshared (Object_t * __this /* static, unused */, Predicate_1_t6881 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m42167(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6881 *, const MethodInfo*))List_1_CheckMatch_m42167_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m42168_gshared (List_1_t6875 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6881 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m42168(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6875 *, int32_t, int32_t, Predicate_1_t6881 *, const MethodInfo*))List_1_GetIndex_m42168_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.DateTime>::GetEnumerator()
extern "C" Enumerator_t6876  List_1_GetEnumerator_m42169_gshared (List_1_t6875 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m42169(__this, method) (( Enumerator_t6876  (*) (List_1_t6875 *, const MethodInfo*))List_1_GetEnumerator_m42169_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.DateTime>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6875 * List_1_GetRange_m42170_gshared (List_1_t6875 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m42170(__this, ___index, ___count, method) (( List_1_t6875 * (*) (List_1_t6875 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m42170_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m42171_gshared (List_1_t6875 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_IndexOf_m42171(__this, ___item, method) (( int32_t (*) (List_1_t6875 *, DateTime_t287 , const MethodInfo*))List_1_IndexOf_m42171_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m42172_gshared (List_1_t6875 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m42172(__this, ___start, ___delta, method) (( void (*) (List_1_t6875 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m42172_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m42173_gshared (List_1_t6875 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m42173(__this, ___index, method) (( void (*) (List_1_t6875 *, int32_t, const MethodInfo*))List_1_CheckIndex_m42173_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m42174_gshared (List_1_t6875 * __this, int32_t ___index, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Insert_m42174(__this, ___index, ___item, method) (( void (*) (List_1_t6875 *, int32_t, DateTime_t287 , const MethodInfo*))List_1_Insert_m42174_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m42175_gshared (List_1_t6875 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m42175(__this, ___collection, method) (( void (*) (List_1_t6875 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m42175_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m42176_gshared (List_1_t6875 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m42176(__this, ___index, ___collection, method) (( void (*) (List_1_t6875 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m42176_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m42177_gshared (List_1_t6875 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m42177(__this, ___index, ___collection, method) (( void (*) (List_1_t6875 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m42177_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m42178_gshared (List_1_t6875 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m42178(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6875 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m42178_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::Remove(T)
extern "C" bool List_1_Remove_m42179_gshared (List_1_t6875 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Remove_m42179(__this, ___item, method) (( bool (*) (List_1_t6875 *, DateTime_t287 , const MethodInfo*))List_1_Remove_m42179_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m42180_gshared (List_1_t6875 * __this, Predicate_1_t6881 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m42180(__this, ___match, method) (( int32_t (*) (List_1_t6875 *, Predicate_1_t6881 *, const MethodInfo*))List_1_RemoveAll_m42180_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m42181_gshared (List_1_t6875 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m42181(__this, ___index, method) (( void (*) (List_1_t6875 *, int32_t, const MethodInfo*))List_1_RemoveAt_m42181_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m42182_gshared (List_1_t6875 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m42182(__this, ___index, ___count, method) (( void (*) (List_1_t6875 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m42182_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Reverse()
extern "C" void List_1_Reverse_m42183_gshared (List_1_t6875 * __this, const MethodInfo* method);
#define List_1_Reverse_m42183(__this, method) (( void (*) (List_1_t6875 *, const MethodInfo*))List_1_Reverse_m42183_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort()
extern "C" void List_1_Sort_m42184_gshared (List_1_t6875 * __this, const MethodInfo* method);
#define List_1_Sort_m42184(__this, method) (( void (*) (List_1_t6875 *, const MethodInfo*))List_1_Sort_m42184_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m42185_gshared (List_1_t6875 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m42185(__this, ___comparer, method) (( void (*) (List_1_t6875 *, Object_t*, const MethodInfo*))List_1_Sort_m42185_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m42186_gshared (List_1_t6875 * __this, Comparison_1_t6884 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m42186(__this, ___comparison, method) (( void (*) (List_1_t6875 *, Comparison_1_t6884 *, const MethodInfo*))List_1_Sort_m42186_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.DateTime>::ToArray()
extern "C" DateTimeU5BU5D_t4912* List_1_ToArray_m42187_gshared (List_1_t6875 * __this, const MethodInfo* method);
#define List_1_ToArray_m42187(__this, method) (( DateTimeU5BU5D_t4912* (*) (List_1_t6875 *, const MethodInfo*))List_1_ToArray_m42187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::TrimExcess()
extern "C" void List_1_TrimExcess_m42188_gshared (List_1_t6875 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m42188(__this, method) (( void (*) (List_1_t6875 *, const MethodInfo*))List_1_TrimExcess_m42188_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m42189_gshared (List_1_t6875 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m42189(__this, method) (( int32_t (*) (List_1_t6875 *, const MethodInfo*))List_1_get_Capacity_m42189_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m42190_gshared (List_1_t6875 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m42190(__this, ___value, method) (( void (*) (List_1_t6875 *, int32_t, const MethodInfo*))List_1_set_Capacity_m42190_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::get_Count()
extern "C" int32_t List_1_get_Count_m42191_gshared (List_1_t6875 * __this, const MethodInfo* method);
#define List_1_get_Count_m42191(__this, method) (( int32_t (*) (List_1_t6875 *, const MethodInfo*))List_1_get_Count_m42191_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.DateTime>::get_Item(System.Int32)
extern "C" DateTime_t287  List_1_get_Item_m42192_gshared (List_1_t6875 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m42192(__this, ___index, method) (( DateTime_t287  (*) (List_1_t6875 *, int32_t, const MethodInfo*))List_1_get_Item_m42192_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m42193_gshared (List_1_t6875 * __this, int32_t ___index, DateTime_t287  ___value, const MethodInfo* method);
#define List_1_set_Item_m42193(__this, ___index, ___value, method) (( void (*) (List_1_t6875 *, int32_t, DateTime_t287 , const MethodInfo*))List_1_set_Item_m42193_gshared)(__this, ___index, ___value, method)
