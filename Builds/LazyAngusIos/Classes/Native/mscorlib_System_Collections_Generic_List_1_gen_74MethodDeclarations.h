#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt16>
struct List_1_t6447;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt16>
struct IEnumerable_1_t6258;
// System.UInt16[]
struct UInt16U5BU5D_t4013;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t6259;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9108;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt16>
struct ReadOnlyCollection_1_t6449;
// System.Predicate`1<System.UInt16>
struct Predicate_1_t6454;
// System.Collections.Generic.IComparer`1<System.UInt16>
struct IComparer_1_t9109;
// System.Comparison`1<System.UInt16>
struct Comparison_1_t6458;
// System.Collections.Generic.List`1/Enumerator<System.UInt16>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_57.h"

// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor()
extern "C" void List_1__ctor_m36920_gshared (List_1_t6447 * __this, const MethodInfo* method);
#define List_1__ctor_m36920(__this, method) (( void (*) (List_1_t6447 *, const MethodInfo*))List_1__ctor_m36920_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m36921_gshared (List_1_t6447 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m36921(__this, ___collection, method) (( void (*) (List_1_t6447 *, Object_t*, const MethodInfo*))List_1__ctor_m36921_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Int32)
extern "C" void List_1__ctor_m36922_gshared (List_1_t6447 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m36922(__this, ___capacity, method) (( void (*) (List_1_t6447 *, int32_t, const MethodInfo*))List_1__ctor_m36922_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m36923_gshared (List_1_t6447 * __this, UInt16U5BU5D_t4013* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m36923(__this, ___data, ___size, method) (( void (*) (List_1_t6447 *, UInt16U5BU5D_t4013*, int32_t, const MethodInfo*))List_1__ctor_m36923_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.cctor()
extern "C" void List_1__cctor_m36924_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m36924(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m36924_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36925_gshared (List_1_t6447 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36925(__this, method) (( Object_t* (*) (List_1_t6447 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36925_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m36926_gshared (List_1_t6447 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m36926(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6447 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m36926_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m36927_gshared (List_1_t6447 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m36927(__this, method) (( Object_t * (*) (List_1_t6447 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m36927_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m36928_gshared (List_1_t6447 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m36928(__this, ___item, method) (( int32_t (*) (List_1_t6447 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m36928_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m36929_gshared (List_1_t6447 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m36929(__this, ___item, method) (( bool (*) (List_1_t6447 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m36929_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m36930_gshared (List_1_t6447 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m36930(__this, ___item, method) (( int32_t (*) (List_1_t6447 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m36930_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m36931_gshared (List_1_t6447 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m36931(__this, ___index, ___item, method) (( void (*) (List_1_t6447 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m36931_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m36932_gshared (List_1_t6447 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m36932(__this, ___item, method) (( void (*) (List_1_t6447 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m36932_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36933_gshared (List_1_t6447 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36933(__this, method) (( bool (*) (List_1_t6447 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36933_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m36934_gshared (List_1_t6447 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m36934(__this, method) (( bool (*) (List_1_t6447 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m36934_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m36935_gshared (List_1_t6447 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m36935(__this, method) (( Object_t * (*) (List_1_t6447 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m36935_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m36936_gshared (List_1_t6447 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m36936(__this, method) (( bool (*) (List_1_t6447 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m36936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m36937_gshared (List_1_t6447 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m36937(__this, method) (( bool (*) (List_1_t6447 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m36937_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m36938_gshared (List_1_t6447 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m36938(__this, ___index, method) (( Object_t * (*) (List_1_t6447 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m36938_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m36939_gshared (List_1_t6447 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m36939(__this, ___index, ___value, method) (( void (*) (List_1_t6447 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m36939_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Add(T)
extern "C" void List_1_Add_m36940_gshared (List_1_t6447 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Add_m36940(__this, ___item, method) (( void (*) (List_1_t6447 *, uint16_t, const MethodInfo*))List_1_Add_m36940_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m36941_gshared (List_1_t6447 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m36941(__this, ___newCount, method) (( void (*) (List_1_t6447 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m36941_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m36942_gshared (List_1_t6447 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m36942(__this, ___idx, ___count, method) (( void (*) (List_1_t6447 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m36942_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m36943_gshared (List_1_t6447 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m36943(__this, ___collection, method) (( void (*) (List_1_t6447 *, Object_t*, const MethodInfo*))List_1_AddCollection_m36943_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m36944_gshared (List_1_t6447 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m36944(__this, ___enumerable, method) (( void (*) (List_1_t6447 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m36944_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m36945_gshared (List_1_t6447 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m36945(__this, ___collection, method) (( void (*) (List_1_t6447 *, Object_t*, const MethodInfo*))List_1_AddRange_m36945_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt16>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6449 * List_1_AsReadOnly_m36946_gshared (List_1_t6447 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m36946(__this, method) (( ReadOnlyCollection_1_t6449 * (*) (List_1_t6447 *, const MethodInfo*))List_1_AsReadOnly_m36946_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Clear()
extern "C" void List_1_Clear_m36947_gshared (List_1_t6447 * __this, const MethodInfo* method);
#define List_1_Clear_m36947(__this, method) (( void (*) (List_1_t6447 *, const MethodInfo*))List_1_Clear_m36947_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Contains(T)
extern "C" bool List_1_Contains_m36948_gshared (List_1_t6447 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Contains_m36948(__this, ___item, method) (( bool (*) (List_1_t6447 *, uint16_t, const MethodInfo*))List_1_Contains_m36948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m36949_gshared (List_1_t6447 * __this, UInt16U5BU5D_t4013* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m36949(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6447 *, UInt16U5BU5D_t4013*, int32_t, const MethodInfo*))List_1_CopyTo_m36949_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt16>::Find(System.Predicate`1<T>)
extern "C" uint16_t List_1_Find_m36950_gshared (List_1_t6447 * __this, Predicate_1_t6454 * ___match, const MethodInfo* method);
#define List_1_Find_m36950(__this, ___match, method) (( uint16_t (*) (List_1_t6447 *, Predicate_1_t6454 *, const MethodInfo*))List_1_Find_m36950_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m36951_gshared (Object_t * __this /* static, unused */, Predicate_1_t6454 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m36951(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6454 *, const MethodInfo*))List_1_CheckMatch_m36951_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m36952_gshared (List_1_t6447 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6454 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m36952(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6447 *, int32_t, int32_t, Predicate_1_t6454 *, const MethodInfo*))List_1_GetIndex_m36952_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt16>::GetEnumerator()
extern "C" Enumerator_t6448  List_1_GetEnumerator_m36953_gshared (List_1_t6447 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m36953(__this, method) (( Enumerator_t6448  (*) (List_1_t6447 *, const MethodInfo*))List_1_GetEnumerator_m36953_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt16>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6447 * List_1_GetRange_m36954_gshared (List_1_t6447 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m36954(__this, ___index, ___count, method) (( List_1_t6447 * (*) (List_1_t6447 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m36954_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m36955_gshared (List_1_t6447 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m36955(__this, ___item, method) (( int32_t (*) (List_1_t6447 *, uint16_t, const MethodInfo*))List_1_IndexOf_m36955_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m36956_gshared (List_1_t6447 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m36956(__this, ___start, ___delta, method) (( void (*) (List_1_t6447 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m36956_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m36957_gshared (List_1_t6447 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m36957(__this, ___index, method) (( void (*) (List_1_t6447 *, int32_t, const MethodInfo*))List_1_CheckIndex_m36957_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m36958_gshared (List_1_t6447 * __this, int32_t ___index, uint16_t ___item, const MethodInfo* method);
#define List_1_Insert_m36958(__this, ___index, ___item, method) (( void (*) (List_1_t6447 *, int32_t, uint16_t, const MethodInfo*))List_1_Insert_m36958_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m36959_gshared (List_1_t6447 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m36959(__this, ___collection, method) (( void (*) (List_1_t6447 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m36959_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m36960_gshared (List_1_t6447 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m36960(__this, ___index, ___collection, method) (( void (*) (List_1_t6447 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m36960_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m36961_gshared (List_1_t6447 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m36961(__this, ___index, ___collection, method) (( void (*) (List_1_t6447 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m36961_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m36962_gshared (List_1_t6447 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m36962(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6447 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m36962_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Remove(T)
extern "C" bool List_1_Remove_m36963_gshared (List_1_t6447 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Remove_m36963(__this, ___item, method) (( bool (*) (List_1_t6447 *, uint16_t, const MethodInfo*))List_1_Remove_m36963_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m36964_gshared (List_1_t6447 * __this, Predicate_1_t6454 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m36964(__this, ___match, method) (( int32_t (*) (List_1_t6447 *, Predicate_1_t6454 *, const MethodInfo*))List_1_RemoveAll_m36964_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m36965_gshared (List_1_t6447 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m36965(__this, ___index, method) (( void (*) (List_1_t6447 *, int32_t, const MethodInfo*))List_1_RemoveAt_m36965_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m36966_gshared (List_1_t6447 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m36966(__this, ___index, ___count, method) (( void (*) (List_1_t6447 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m36966_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Reverse()
extern "C" void List_1_Reverse_m36967_gshared (List_1_t6447 * __this, const MethodInfo* method);
#define List_1_Reverse_m36967(__this, method) (( void (*) (List_1_t6447 *, const MethodInfo*))List_1_Reverse_m36967_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort()
extern "C" void List_1_Sort_m36968_gshared (List_1_t6447 * __this, const MethodInfo* method);
#define List_1_Sort_m36968(__this, method) (( void (*) (List_1_t6447 *, const MethodInfo*))List_1_Sort_m36968_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m36969_gshared (List_1_t6447 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m36969(__this, ___comparer, method) (( void (*) (List_1_t6447 *, Object_t*, const MethodInfo*))List_1_Sort_m36969_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m36970_gshared (List_1_t6447 * __this, Comparison_1_t6458 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m36970(__this, ___comparison, method) (( void (*) (List_1_t6447 *, Comparison_1_t6458 *, const MethodInfo*))List_1_Sort_m36970_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt16>::ToArray()
extern "C" UInt16U5BU5D_t4013* List_1_ToArray_m36971_gshared (List_1_t6447 * __this, const MethodInfo* method);
#define List_1_ToArray_m36971(__this, method) (( UInt16U5BU5D_t4013* (*) (List_1_t6447 *, const MethodInfo*))List_1_ToArray_m36971_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::TrimExcess()
extern "C" void List_1_TrimExcess_m36972_gshared (List_1_t6447 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m36972(__this, method) (( void (*) (List_1_t6447 *, const MethodInfo*))List_1_TrimExcess_m36972_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m36973_gshared (List_1_t6447 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m36973(__this, method) (( int32_t (*) (List_1_t6447 *, const MethodInfo*))List_1_get_Capacity_m36973_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m36974_gshared (List_1_t6447 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m36974(__this, ___value, method) (( void (*) (List_1_t6447 *, int32_t, const MethodInfo*))List_1_set_Capacity_m36974_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Count()
extern "C" int32_t List_1_get_Count_m36975_gshared (List_1_t6447 * __this, const MethodInfo* method);
#define List_1_get_Count_m36975(__this, method) (( int32_t (*) (List_1_t6447 *, const MethodInfo*))List_1_get_Count_m36975_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt16>::get_Item(System.Int32)
extern "C" uint16_t List_1_get_Item_m36976_gshared (List_1_t6447 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m36976(__this, ___index, method) (( uint16_t (*) (List_1_t6447 *, int32_t, const MethodInfo*))List_1_get_Item_m36976_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m36977_gshared (List_1_t6447 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method);
#define List_1_set_Item_m36977(__this, ___index, ___value, method) (( void (*) (List_1_t6447 *, int32_t, uint16_t, const MethodInfo*))List_1_set_Item_m36977_gshared)(__this, ___index, ___value, method)
