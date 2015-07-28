#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int16>
struct List_1_t6390;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int16>
struct IEnumerable_1_t6242;
// System.Int16[]
struct Int16U5BU5D_t4830;
// System.Collections.Generic.IEnumerator`1<System.Int16>
struct IEnumerator_1_t6243;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9097;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int16>
struct ReadOnlyCollection_1_t6392;
// System.Predicate`1<System.Int16>
struct Predicate_1_t6397;
// System.Collections.Generic.IComparer`1<System.Int16>
struct IComparer_1_t5309;
// System.Comparison`1<System.Int16>
struct Comparison_1_t6401;
// System.Collections.Generic.List`1/Enumerator<System.Int16>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_56.h"

// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor()
extern "C" void List_1__ctor_m36274_gshared (List_1_t6390 * __this, const MethodInfo* method);
#define List_1__ctor_m36274(__this, method) (( void (*) (List_1_t6390 *, const MethodInfo*))List_1__ctor_m36274_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m36275_gshared (List_1_t6390 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m36275(__this, ___collection, method) (( void (*) (List_1_t6390 *, Object_t*, const MethodInfo*))List_1__ctor_m36275_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(System.Int32)
extern "C" void List_1__ctor_m36276_gshared (List_1_t6390 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m36276(__this, ___capacity, method) (( void (*) (List_1_t6390 *, int32_t, const MethodInfo*))List_1__ctor_m36276_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m36277_gshared (List_1_t6390 * __this, Int16U5BU5D_t4830* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m36277(__this, ___data, ___size, method) (( void (*) (List_1_t6390 *, Int16U5BU5D_t4830*, int32_t, const MethodInfo*))List_1__ctor_m36277_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.cctor()
extern "C" void List_1__cctor_m36278_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m36278(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m36278_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int16>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36279_gshared (List_1_t6390 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36279(__this, method) (( Object_t* (*) (List_1_t6390 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36279_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m36280_gshared (List_1_t6390 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m36280(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6390 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m36280_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m36281_gshared (List_1_t6390 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m36281(__this, method) (( Object_t * (*) (List_1_t6390 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m36281_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m36282_gshared (List_1_t6390 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m36282(__this, ___item, method) (( int32_t (*) (List_1_t6390 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m36282_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m36283_gshared (List_1_t6390 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m36283(__this, ___item, method) (( bool (*) (List_1_t6390 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m36283_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m36284_gshared (List_1_t6390 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m36284(__this, ___item, method) (( int32_t (*) (List_1_t6390 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m36284_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m36285_gshared (List_1_t6390 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m36285(__this, ___index, ___item, method) (( void (*) (List_1_t6390 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m36285_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m36286_gshared (List_1_t6390 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m36286(__this, ___item, method) (( void (*) (List_1_t6390 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m36286_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36287_gshared (List_1_t6390 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36287(__this, method) (( bool (*) (List_1_t6390 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36287_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m36288_gshared (List_1_t6390 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m36288(__this, method) (( bool (*) (List_1_t6390 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m36288_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m36289_gshared (List_1_t6390 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m36289(__this, method) (( Object_t * (*) (List_1_t6390 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m36289_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m36290_gshared (List_1_t6390 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m36290(__this, method) (( bool (*) (List_1_t6390 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m36290_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m36291_gshared (List_1_t6390 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m36291(__this, method) (( bool (*) (List_1_t6390 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m36291_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m36292_gshared (List_1_t6390 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m36292(__this, ___index, method) (( Object_t * (*) (List_1_t6390 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m36292_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m36293_gshared (List_1_t6390 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m36293(__this, ___index, ___value, method) (( void (*) (List_1_t6390 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m36293_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Add(T)
extern "C" void List_1_Add_m36294_gshared (List_1_t6390 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Add_m36294(__this, ___item, method) (( void (*) (List_1_t6390 *, int16_t, const MethodInfo*))List_1_Add_m36294_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m36295_gshared (List_1_t6390 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m36295(__this, ___newCount, method) (( void (*) (List_1_t6390 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m36295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m36296_gshared (List_1_t6390 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m36296(__this, ___idx, ___count, method) (( void (*) (List_1_t6390 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m36296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m36297_gshared (List_1_t6390 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m36297(__this, ___collection, method) (( void (*) (List_1_t6390 *, Object_t*, const MethodInfo*))List_1_AddCollection_m36297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m36298_gshared (List_1_t6390 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m36298(__this, ___enumerable, method) (( void (*) (List_1_t6390 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m36298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m36299_gshared (List_1_t6390 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m36299(__this, ___collection, method) (( void (*) (List_1_t6390 *, Object_t*, const MethodInfo*))List_1_AddRange_m36299_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int16>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6392 * List_1_AsReadOnly_m36300_gshared (List_1_t6390 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m36300(__this, method) (( ReadOnlyCollection_1_t6392 * (*) (List_1_t6390 *, const MethodInfo*))List_1_AsReadOnly_m36300_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Clear()
extern "C" void List_1_Clear_m36301_gshared (List_1_t6390 * __this, const MethodInfo* method);
#define List_1_Clear_m36301(__this, method) (( void (*) (List_1_t6390 *, const MethodInfo*))List_1_Clear_m36301_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::Contains(T)
extern "C" bool List_1_Contains_m36302_gshared (List_1_t6390 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Contains_m36302(__this, ___item, method) (( bool (*) (List_1_t6390 *, int16_t, const MethodInfo*))List_1_Contains_m36302_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m36303_gshared (List_1_t6390 * __this, Int16U5BU5D_t4830* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m36303(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6390 *, Int16U5BU5D_t4830*, int32_t, const MethodInfo*))List_1_CopyTo_m36303_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int16>::Find(System.Predicate`1<T>)
extern "C" int16_t List_1_Find_m36304_gshared (List_1_t6390 * __this, Predicate_1_t6397 * ___match, const MethodInfo* method);
#define List_1_Find_m36304(__this, ___match, method) (( int16_t (*) (List_1_t6390 *, Predicate_1_t6397 *, const MethodInfo*))List_1_Find_m36304_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m36305_gshared (Object_t * __this /* static, unused */, Predicate_1_t6397 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m36305(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6397 *, const MethodInfo*))List_1_CheckMatch_m36305_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m36306_gshared (List_1_t6390 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6397 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m36306(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6390 *, int32_t, int32_t, Predicate_1_t6397 *, const MethodInfo*))List_1_GetIndex_m36306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int16>::GetEnumerator()
extern "C" Enumerator_t6391  List_1_GetEnumerator_m36307_gshared (List_1_t6390 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m36307(__this, method) (( Enumerator_t6391  (*) (List_1_t6390 *, const MethodInfo*))List_1_GetEnumerator_m36307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int16>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6390 * List_1_GetRange_m36308_gshared (List_1_t6390 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m36308(__this, ___index, ___count, method) (( List_1_t6390 * (*) (List_1_t6390 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m36308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m36309_gshared (List_1_t6390 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m36309(__this, ___item, method) (( int32_t (*) (List_1_t6390 *, int16_t, const MethodInfo*))List_1_IndexOf_m36309_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m36310_gshared (List_1_t6390 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m36310(__this, ___start, ___delta, method) (( void (*) (List_1_t6390 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m36310_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m36311_gshared (List_1_t6390 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m36311(__this, ___index, method) (( void (*) (List_1_t6390 *, int32_t, const MethodInfo*))List_1_CheckIndex_m36311_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m36312_gshared (List_1_t6390 * __this, int32_t ___index, int16_t ___item, const MethodInfo* method);
#define List_1_Insert_m36312(__this, ___index, ___item, method) (( void (*) (List_1_t6390 *, int32_t, int16_t, const MethodInfo*))List_1_Insert_m36312_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m36313_gshared (List_1_t6390 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m36313(__this, ___collection, method) (( void (*) (List_1_t6390 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m36313_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m36314_gshared (List_1_t6390 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m36314(__this, ___index, ___collection, method) (( void (*) (List_1_t6390 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m36314_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m36315_gshared (List_1_t6390 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m36315(__this, ___index, ___collection, method) (( void (*) (List_1_t6390 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m36315_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m36316_gshared (List_1_t6390 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m36316(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6390 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m36316_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::Remove(T)
extern "C" bool List_1_Remove_m36317_gshared (List_1_t6390 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Remove_m36317(__this, ___item, method) (( bool (*) (List_1_t6390 *, int16_t, const MethodInfo*))List_1_Remove_m36317_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m36318_gshared (List_1_t6390 * __this, Predicate_1_t6397 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m36318(__this, ___match, method) (( int32_t (*) (List_1_t6390 *, Predicate_1_t6397 *, const MethodInfo*))List_1_RemoveAll_m36318_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m36319_gshared (List_1_t6390 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m36319(__this, ___index, method) (( void (*) (List_1_t6390 *, int32_t, const MethodInfo*))List_1_RemoveAt_m36319_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m36320_gshared (List_1_t6390 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m36320(__this, ___index, ___count, method) (( void (*) (List_1_t6390 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m36320_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Reverse()
extern "C" void List_1_Reverse_m36321_gshared (List_1_t6390 * __this, const MethodInfo* method);
#define List_1_Reverse_m36321(__this, method) (( void (*) (List_1_t6390 *, const MethodInfo*))List_1_Reverse_m36321_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort()
extern "C" void List_1_Sort_m36322_gshared (List_1_t6390 * __this, const MethodInfo* method);
#define List_1_Sort_m36322(__this, method) (( void (*) (List_1_t6390 *, const MethodInfo*))List_1_Sort_m36322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m36323_gshared (List_1_t6390 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m36323(__this, ___comparer, method) (( void (*) (List_1_t6390 *, Object_t*, const MethodInfo*))List_1_Sort_m36323_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m36324_gshared (List_1_t6390 * __this, Comparison_1_t6401 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m36324(__this, ___comparison, method) (( void (*) (List_1_t6390 *, Comparison_1_t6401 *, const MethodInfo*))List_1_Sort_m36324_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int16>::ToArray()
extern "C" Int16U5BU5D_t4830* List_1_ToArray_m36325_gshared (List_1_t6390 * __this, const MethodInfo* method);
#define List_1_ToArray_m36325(__this, method) (( Int16U5BU5D_t4830* (*) (List_1_t6390 *, const MethodInfo*))List_1_ToArray_m36325_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::TrimExcess()
extern "C" void List_1_TrimExcess_m36326_gshared (List_1_t6390 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m36326(__this, method) (( void (*) (List_1_t6390 *, const MethodInfo*))List_1_TrimExcess_m36326_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m36327_gshared (List_1_t6390 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m36327(__this, method) (( int32_t (*) (List_1_t6390 *, const MethodInfo*))List_1_get_Capacity_m36327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m36328_gshared (List_1_t6390 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m36328(__this, ___value, method) (( void (*) (List_1_t6390 *, int32_t, const MethodInfo*))List_1_set_Capacity_m36328_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::get_Count()
extern "C" int32_t List_1_get_Count_m36329_gshared (List_1_t6390 * __this, const MethodInfo* method);
#define List_1_get_Count_m36329(__this, method) (( int32_t (*) (List_1_t6390 *, const MethodInfo*))List_1_get_Count_m36329_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int16>::get_Item(System.Int32)
extern "C" int16_t List_1_get_Item_m36330_gshared (List_1_t6390 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m36330(__this, ___index, method) (( int16_t (*) (List_1_t6390 *, int32_t, const MethodInfo*))List_1_get_Item_m36330_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m36331_gshared (List_1_t6390 * __this, int32_t ___index, int16_t ___value, const MethodInfo* method);
#define List_1_set_Item_m36331(__this, ___index, ___value, method) (( void (*) (List_1_t6390 *, int32_t, int16_t, const MethodInfo*))List_1_set_Item_m36331_gshared)(__this, ___index, ___value, method)
