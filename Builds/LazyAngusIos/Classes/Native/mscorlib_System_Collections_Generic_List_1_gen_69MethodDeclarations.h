#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t5743;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t6400;
// System.Single[]
struct SingleU5BU5D_t587;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t6401;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8968;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t5746;
// System.Predicate`1<System.Single>
struct Predicate_1_t5751;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t8969;
// System.Comparison`1<System.Single>
struct Comparison_1_t5755;
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_29.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m27301_gshared (List_1_t5743 * __this, const MethodInfo* method);
#define List_1__ctor_m27301(__this, method) (( void (*) (List_1_t5743 *, const MethodInfo*))List_1__ctor_m27301_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m27302_gshared (List_1_t5743 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m27302(__this, ___collection, method) (( void (*) (List_1_t5743 *, Object_t*, const MethodInfo*))List_1__ctor_m27302_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m27303_gshared (List_1_t5743 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m27303(__this, ___capacity, method) (( void (*) (List_1_t5743 *, int32_t, const MethodInfo*))List_1__ctor_m27303_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m27304_gshared (List_1_t5743 * __this, SingleU5BU5D_t587* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m27304(__this, ___data, ___size, method) (( void (*) (List_1_t5743 *, SingleU5BU5D_t587*, int32_t, const MethodInfo*))List_1__ctor_m27304_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m27305_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m27305(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m27305_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27306_gshared (List_1_t5743 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27306(__this, method) (( Object_t* (*) (List_1_t5743 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27306_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m27307_gshared (List_1_t5743 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m27307(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5743 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m27307_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m27308_gshared (List_1_t5743 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27308(__this, method) (( Object_t * (*) (List_1_t5743 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m27308_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m27309_gshared (List_1_t5743 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m27309(__this, ___item, method) (( int32_t (*) (List_1_t5743 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m27309_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m27310_gshared (List_1_t5743 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m27310(__this, ___item, method) (( bool (*) (List_1_t5743 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m27310_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m27311_gshared (List_1_t5743 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m27311(__this, ___item, method) (( int32_t (*) (List_1_t5743 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m27311_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m27312_gshared (List_1_t5743 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m27312(__this, ___index, ___item, method) (( void (*) (List_1_t5743 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m27312_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m27313_gshared (List_1_t5743 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m27313(__this, ___item, method) (( void (*) (List_1_t5743 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m27313_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27314_gshared (List_1_t5743 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27314(__this, method) (( bool (*) (List_1_t5743 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27314_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m27315_gshared (List_1_t5743 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27315(__this, method) (( bool (*) (List_1_t5743 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m27315_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m27316_gshared (List_1_t5743 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m27316(__this, method) (( Object_t * (*) (List_1_t5743 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m27316_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m27317_gshared (List_1_t5743 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m27317(__this, method) (( bool (*) (List_1_t5743 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m27317_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m27318_gshared (List_1_t5743 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m27318(__this, method) (( bool (*) (List_1_t5743 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m27318_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m27319_gshared (List_1_t5743 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m27319(__this, ___index, method) (( Object_t * (*) (List_1_t5743 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m27319_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m27320_gshared (List_1_t5743 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m27320(__this, ___index, ___value, method) (( void (*) (List_1_t5743 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m27320_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m27321_gshared (List_1_t5743 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m27321(__this, ___item, method) (( void (*) (List_1_t5743 *, float, const MethodInfo*))List_1_Add_m27321_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m27322_gshared (List_1_t5743 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m27322(__this, ___newCount, method) (( void (*) (List_1_t5743 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m27322_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m27323_gshared (List_1_t5743 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m27323(__this, ___idx, ___count, method) (( void (*) (List_1_t5743 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m27323_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m27324_gshared (List_1_t5743 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m27324(__this, ___collection, method) (( void (*) (List_1_t5743 *, Object_t*, const MethodInfo*))List_1_AddCollection_m27324_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m27325_gshared (List_1_t5743 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m27325(__this, ___enumerable, method) (( void (*) (List_1_t5743 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m27325_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m27326_gshared (List_1_t5743 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m27326(__this, ___collection, method) (( void (*) (List_1_t5743 *, Object_t*, const MethodInfo*))List_1_AddRange_m27326_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5746 * List_1_AsReadOnly_m27327_gshared (List_1_t5743 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m27327(__this, method) (( ReadOnlyCollection_1_t5746 * (*) (List_1_t5743 *, const MethodInfo*))List_1_AsReadOnly_m27327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m27328_gshared (List_1_t5743 * __this, const MethodInfo* method);
#define List_1_Clear_m27328(__this, method) (( void (*) (List_1_t5743 *, const MethodInfo*))List_1_Clear_m27328_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m27329_gshared (List_1_t5743 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m27329(__this, ___item, method) (( bool (*) (List_1_t5743 *, float, const MethodInfo*))List_1_Contains_m27329_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m27330_gshared (List_1_t5743 * __this, SingleU5BU5D_t587* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m27330(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5743 *, SingleU5BU5D_t587*, int32_t, const MethodInfo*))List_1_CopyTo_m27330_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m27331_gshared (List_1_t5743 * __this, Predicate_1_t5751 * ___match, const MethodInfo* method);
#define List_1_Find_m27331(__this, ___match, method) (( float (*) (List_1_t5743 *, Predicate_1_t5751 *, const MethodInfo*))List_1_Find_m27331_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m27332_gshared (Object_t * __this /* static, unused */, Predicate_1_t5751 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m27332(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5751 *, const MethodInfo*))List_1_CheckMatch_m27332_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m27333_gshared (List_1_t5743 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5751 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m27333(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t5743 *, int32_t, int32_t, Predicate_1_t5751 *, const MethodInfo*))List_1_GetIndex_m27333_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t5744  List_1_GetEnumerator_m27334_gshared (List_1_t5743 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m27334(__this, method) (( Enumerator_t5744  (*) (List_1_t5743 *, const MethodInfo*))List_1_GetEnumerator_m27334_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t5743 * List_1_GetRange_m27335_gshared (List_1_t5743 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m27335(__this, ___index, ___count, method) (( List_1_t5743 * (*) (List_1_t5743 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m27335_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m27336_gshared (List_1_t5743 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m27336(__this, ___item, method) (( int32_t (*) (List_1_t5743 *, float, const MethodInfo*))List_1_IndexOf_m27336_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m27337_gshared (List_1_t5743 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m27337(__this, ___start, ___delta, method) (( void (*) (List_1_t5743 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m27337_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m27338_gshared (List_1_t5743 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m27338(__this, ___index, method) (( void (*) (List_1_t5743 *, int32_t, const MethodInfo*))List_1_CheckIndex_m27338_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m27339_gshared (List_1_t5743 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m27339(__this, ___index, ___item, method) (( void (*) (List_1_t5743 *, int32_t, float, const MethodInfo*))List_1_Insert_m27339_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m27340_gshared (List_1_t5743 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m27340(__this, ___collection, method) (( void (*) (List_1_t5743 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m27340_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m27341_gshared (List_1_t5743 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m27341(__this, ___index, ___collection, method) (( void (*) (List_1_t5743 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m27341_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m27342_gshared (List_1_t5743 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m27342(__this, ___index, ___collection, method) (( void (*) (List_1_t5743 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m27342_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m27343_gshared (List_1_t5743 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m27343(__this, ___index, ___enumerable, method) (( void (*) (List_1_t5743 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m27343_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m27344_gshared (List_1_t5743 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m27344(__this, ___item, method) (( bool (*) (List_1_t5743 *, float, const MethodInfo*))List_1_Remove_m27344_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m27345_gshared (List_1_t5743 * __this, Predicate_1_t5751 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m27345(__this, ___match, method) (( int32_t (*) (List_1_t5743 *, Predicate_1_t5751 *, const MethodInfo*))List_1_RemoveAll_m27345_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m27346_gshared (List_1_t5743 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m27346(__this, ___index, method) (( void (*) (List_1_t5743 *, int32_t, const MethodInfo*))List_1_RemoveAt_m27346_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m27347_gshared (List_1_t5743 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m27347(__this, ___index, ___count, method) (( void (*) (List_1_t5743 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m27347_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m27348_gshared (List_1_t5743 * __this, const MethodInfo* method);
#define List_1_Reverse_m27348(__this, method) (( void (*) (List_1_t5743 *, const MethodInfo*))List_1_Reverse_m27348_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m27349_gshared (List_1_t5743 * __this, const MethodInfo* method);
#define List_1_Sort_m27349(__this, method) (( void (*) (List_1_t5743 *, const MethodInfo*))List_1_Sort_m27349_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m27350_gshared (List_1_t5743 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m27350(__this, ___comparer, method) (( void (*) (List_1_t5743 *, Object_t*, const MethodInfo*))List_1_Sort_m27350_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m27351_gshared (List_1_t5743 * __this, Comparison_1_t5755 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m27351(__this, ___comparison, method) (( void (*) (List_1_t5743 *, Comparison_1_t5755 *, const MethodInfo*))List_1_Sort_m27351_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t587* List_1_ToArray_m27352_gshared (List_1_t5743 * __this, const MethodInfo* method);
#define List_1_ToArray_m27352(__this, method) (( SingleU5BU5D_t587* (*) (List_1_t5743 *, const MethodInfo*))List_1_ToArray_m27352_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m27353_gshared (List_1_t5743 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m27353(__this, method) (( void (*) (List_1_t5743 *, const MethodInfo*))List_1_TrimExcess_m27353_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m27354_gshared (List_1_t5743 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m27354(__this, method) (( int32_t (*) (List_1_t5743 *, const MethodInfo*))List_1_get_Capacity_m27354_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m27355_gshared (List_1_t5743 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m27355(__this, ___value, method) (( void (*) (List_1_t5743 *, int32_t, const MethodInfo*))List_1_set_Capacity_m27355_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m27356_gshared (List_1_t5743 * __this, const MethodInfo* method);
#define List_1_get_Count_m27356(__this, method) (( int32_t (*) (List_1_t5743 *, const MethodInfo*))List_1_get_Count_m27356_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m27357_gshared (List_1_t5743 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m27357(__this, ___index, method) (( float (*) (List_1_t5743 *, int32_t, const MethodInfo*))List_1_get_Item_m27357_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m27358_gshared (List_1_t5743 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m27358(__this, ___index, ___value, method) (( void (*) (List_1_t5743 *, int32_t, float, const MethodInfo*))List_1_set_Item_m27358_gshared)(__this, ___index, ___value, method)
