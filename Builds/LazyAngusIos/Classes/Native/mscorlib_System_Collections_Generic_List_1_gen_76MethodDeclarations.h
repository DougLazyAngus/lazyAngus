#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int64>
struct List_1_t6577;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int64>
struct IEnumerable_1_t6274;
// System.Int64[]
struct Int64U5BU5D_t4828;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6275;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8983;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int64>
struct ReadOnlyCollection_1_t6579;
// System.Predicate`1<System.Int64>
struct Predicate_1_t6581;
// System.Collections.Generic.IComparer`1<System.Int64>
struct IComparer_1_t5323;
// System.Comparison`1<System.Int64>
struct Comparison_1_t6585;
// System.Collections.Generic.List`1/Enumerator<System.Int64>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_59.h"

// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor()
extern "C" void List_1__ctor_m38519_gshared (List_1_t6577 * __this, const MethodInfo* method);
#define List_1__ctor_m38519(__this, method) (( void (*) (List_1_t6577 *, const MethodInfo*))List_1__ctor_m38519_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m38520_gshared (List_1_t6577 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m38520(__this, ___collection, method) (( void (*) (List_1_t6577 *, Object_t*, const MethodInfo*))List_1__ctor_m38520_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(System.Int32)
extern "C" void List_1__ctor_m38521_gshared (List_1_t6577 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m38521(__this, ___capacity, method) (( void (*) (List_1_t6577 *, int32_t, const MethodInfo*))List_1__ctor_m38521_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m38522_gshared (List_1_t6577 * __this, Int64U5BU5D_t4828* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m38522(__this, ___data, ___size, method) (( void (*) (List_1_t6577 *, Int64U5BU5D_t4828*, int32_t, const MethodInfo*))List_1__ctor_m38522_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.cctor()
extern "C" void List_1__cctor_m38523_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m38523(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m38523_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38524_gshared (List_1_t6577 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38524(__this, method) (( Object_t* (*) (List_1_t6577 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38524_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m38525_gshared (List_1_t6577 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m38525(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6577 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m38525_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m38526_gshared (List_1_t6577 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m38526(__this, method) (( Object_t * (*) (List_1_t6577 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m38526_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m38527_gshared (List_1_t6577 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m38527(__this, ___item, method) (( int32_t (*) (List_1_t6577 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m38527_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m38528_gshared (List_1_t6577 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m38528(__this, ___item, method) (( bool (*) (List_1_t6577 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m38528_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m38529_gshared (List_1_t6577 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m38529(__this, ___item, method) (( int32_t (*) (List_1_t6577 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m38529_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m38530_gshared (List_1_t6577 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m38530(__this, ___index, ___item, method) (( void (*) (List_1_t6577 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m38530_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m38531_gshared (List_1_t6577 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m38531(__this, ___item, method) (( void (*) (List_1_t6577 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m38531_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38532_gshared (List_1_t6577 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38532(__this, method) (( bool (*) (List_1_t6577 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38532_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m38533_gshared (List_1_t6577 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m38533(__this, method) (( bool (*) (List_1_t6577 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m38533_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m38534_gshared (List_1_t6577 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m38534(__this, method) (( Object_t * (*) (List_1_t6577 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m38534_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m38535_gshared (List_1_t6577 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m38535(__this, method) (( bool (*) (List_1_t6577 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m38535_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m38536_gshared (List_1_t6577 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m38536(__this, method) (( bool (*) (List_1_t6577 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m38536_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m38537_gshared (List_1_t6577 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m38537(__this, ___index, method) (( Object_t * (*) (List_1_t6577 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m38537_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m38538_gshared (List_1_t6577 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m38538(__this, ___index, ___value, method) (( void (*) (List_1_t6577 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m38538_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Add(T)
extern "C" void List_1_Add_m38539_gshared (List_1_t6577 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Add_m38539(__this, ___item, method) (( void (*) (List_1_t6577 *, int64_t, const MethodInfo*))List_1_Add_m38539_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m38540_gshared (List_1_t6577 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m38540(__this, ___newCount, method) (( void (*) (List_1_t6577 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m38540_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m38541_gshared (List_1_t6577 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m38541(__this, ___idx, ___count, method) (( void (*) (List_1_t6577 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m38541_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m38542_gshared (List_1_t6577 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m38542(__this, ___collection, method) (( void (*) (List_1_t6577 *, Object_t*, const MethodInfo*))List_1_AddCollection_m38542_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m38543_gshared (List_1_t6577 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m38543(__this, ___enumerable, method) (( void (*) (List_1_t6577 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m38543_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m38544_gshared (List_1_t6577 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m38544(__this, ___collection, method) (( void (*) (List_1_t6577 *, Object_t*, const MethodInfo*))List_1_AddRange_m38544_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int64>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6579 * List_1_AsReadOnly_m38545_gshared (List_1_t6577 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m38545(__this, method) (( ReadOnlyCollection_1_t6579 * (*) (List_1_t6577 *, const MethodInfo*))List_1_AsReadOnly_m38545_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Clear()
extern "C" void List_1_Clear_m38546_gshared (List_1_t6577 * __this, const MethodInfo* method);
#define List_1_Clear_m38546(__this, method) (( void (*) (List_1_t6577 *, const MethodInfo*))List_1_Clear_m38546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Contains(T)
extern "C" bool List_1_Contains_m38547_gshared (List_1_t6577 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Contains_m38547(__this, ___item, method) (( bool (*) (List_1_t6577 *, int64_t, const MethodInfo*))List_1_Contains_m38547_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m38548_gshared (List_1_t6577 * __this, Int64U5BU5D_t4828* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m38548(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6577 *, Int64U5BU5D_t4828*, int32_t, const MethodInfo*))List_1_CopyTo_m38548_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int64>::Find(System.Predicate`1<T>)
extern "C" int64_t List_1_Find_m38549_gshared (List_1_t6577 * __this, Predicate_1_t6581 * ___match, const MethodInfo* method);
#define List_1_Find_m38549(__this, ___match, method) (( int64_t (*) (List_1_t6577 *, Predicate_1_t6581 *, const MethodInfo*))List_1_Find_m38549_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m38550_gshared (Object_t * __this /* static, unused */, Predicate_1_t6581 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m38550(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6581 *, const MethodInfo*))List_1_CheckMatch_m38550_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m38551_gshared (List_1_t6577 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6581 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m38551(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6577 *, int32_t, int32_t, Predicate_1_t6581 *, const MethodInfo*))List_1_GetIndex_m38551_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int64>::GetEnumerator()
extern "C" Enumerator_t6578  List_1_GetEnumerator_m38552_gshared (List_1_t6577 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m38552(__this, method) (( Enumerator_t6578  (*) (List_1_t6577 *, const MethodInfo*))List_1_GetEnumerator_m38552_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int64>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6577 * List_1_GetRange_m38553_gshared (List_1_t6577 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m38553(__this, ___index, ___count, method) (( List_1_t6577 * (*) (List_1_t6577 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m38553_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m38554_gshared (List_1_t6577 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m38554(__this, ___item, method) (( int32_t (*) (List_1_t6577 *, int64_t, const MethodInfo*))List_1_IndexOf_m38554_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m38555_gshared (List_1_t6577 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m38555(__this, ___start, ___delta, method) (( void (*) (List_1_t6577 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m38555_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m38556_gshared (List_1_t6577 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m38556(__this, ___index, method) (( void (*) (List_1_t6577 *, int32_t, const MethodInfo*))List_1_CheckIndex_m38556_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m38557_gshared (List_1_t6577 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define List_1_Insert_m38557(__this, ___index, ___item, method) (( void (*) (List_1_t6577 *, int32_t, int64_t, const MethodInfo*))List_1_Insert_m38557_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m38558_gshared (List_1_t6577 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m38558(__this, ___collection, method) (( void (*) (List_1_t6577 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m38558_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m38559_gshared (List_1_t6577 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m38559(__this, ___index, ___collection, method) (( void (*) (List_1_t6577 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m38559_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m38560_gshared (List_1_t6577 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m38560(__this, ___index, ___collection, method) (( void (*) (List_1_t6577 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m38560_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m38561_gshared (List_1_t6577 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m38561(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6577 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m38561_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Remove(T)
extern "C" bool List_1_Remove_m38562_gshared (List_1_t6577 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Remove_m38562(__this, ___item, method) (( bool (*) (List_1_t6577 *, int64_t, const MethodInfo*))List_1_Remove_m38562_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m38563_gshared (List_1_t6577 * __this, Predicate_1_t6581 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m38563(__this, ___match, method) (( int32_t (*) (List_1_t6577 *, Predicate_1_t6581 *, const MethodInfo*))List_1_RemoveAll_m38563_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m38564_gshared (List_1_t6577 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m38564(__this, ___index, method) (( void (*) (List_1_t6577 *, int32_t, const MethodInfo*))List_1_RemoveAt_m38564_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m38565_gshared (List_1_t6577 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m38565(__this, ___index, ___count, method) (( void (*) (List_1_t6577 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m38565_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Reverse()
extern "C" void List_1_Reverse_m38566_gshared (List_1_t6577 * __this, const MethodInfo* method);
#define List_1_Reverse_m38566(__this, method) (( void (*) (List_1_t6577 *, const MethodInfo*))List_1_Reverse_m38566_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort()
extern "C" void List_1_Sort_m38567_gshared (List_1_t6577 * __this, const MethodInfo* method);
#define List_1_Sort_m38567(__this, method) (( void (*) (List_1_t6577 *, const MethodInfo*))List_1_Sort_m38567_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m38568_gshared (List_1_t6577 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m38568(__this, ___comparer, method) (( void (*) (List_1_t6577 *, Object_t*, const MethodInfo*))List_1_Sort_m38568_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m38569_gshared (List_1_t6577 * __this, Comparison_1_t6585 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m38569(__this, ___comparison, method) (( void (*) (List_1_t6577 *, Comparison_1_t6585 *, const MethodInfo*))List_1_Sort_m38569_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int64>::ToArray()
extern "C" Int64U5BU5D_t4828* List_1_ToArray_m38570_gshared (List_1_t6577 * __this, const MethodInfo* method);
#define List_1_ToArray_m38570(__this, method) (( Int64U5BU5D_t4828* (*) (List_1_t6577 *, const MethodInfo*))List_1_ToArray_m38570_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::TrimExcess()
extern "C" void List_1_TrimExcess_m38571_gshared (List_1_t6577 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m38571(__this, method) (( void (*) (List_1_t6577 *, const MethodInfo*))List_1_TrimExcess_m38571_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m38572_gshared (List_1_t6577 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m38572(__this, method) (( int32_t (*) (List_1_t6577 *, const MethodInfo*))List_1_get_Capacity_m38572_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m38573_gshared (List_1_t6577 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m38573(__this, ___value, method) (( void (*) (List_1_t6577 *, int32_t, const MethodInfo*))List_1_set_Capacity_m38573_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Count()
extern "C" int32_t List_1_get_Count_m38574_gshared (List_1_t6577 * __this, const MethodInfo* method);
#define List_1_get_Count_m38574(__this, method) (( int32_t (*) (List_1_t6577 *, const MethodInfo*))List_1_get_Count_m38574_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int64>::get_Item(System.Int32)
extern "C" int64_t List_1_get_Item_m38575_gshared (List_1_t6577 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m38575(__this, ___index, method) (( int64_t (*) (List_1_t6577 *, int32_t, const MethodInfo*))List_1_get_Item_m38575_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m38576_gshared (List_1_t6577 * __this, int32_t ___index, int64_t ___value, const MethodInfo* method);
#define List_1_set_Item_m38576(__this, ___index, ___value, method) (( void (*) (List_1_t6577 *, int32_t, int64_t, const MethodInfo*))List_1_set_Item_m38576_gshared)(__this, ___index, ___value, method)
