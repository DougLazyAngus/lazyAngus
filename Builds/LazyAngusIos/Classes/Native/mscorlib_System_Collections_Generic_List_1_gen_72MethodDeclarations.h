#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.SByte>
struct List_1_t6344;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.SByte>
struct IEnumerable_1_t6236;
// System.SByte[]
struct SByteU5BU5D_t4706;
// System.Collections.Generic.IEnumerator`1<System.SByte>
struct IEnumerator_1_t6237;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9097;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.SByte>
struct ReadOnlyCollection_1_t6346;
// System.Predicate`1<System.SByte>
struct Predicate_1_t6351;
// System.Collections.Generic.IComparer`1<System.SByte>
struct IComparer_1_t5309;
// System.Comparison`1<System.SByte>
struct Comparison_1_t6355;
// System.Collections.Generic.List`1/Enumerator<System.SByte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_55.h"

// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor()
extern "C" void List_1__ctor_m35691_gshared (List_1_t6344 * __this, const MethodInfo* method);
#define List_1__ctor_m35691(__this, method) (( void (*) (List_1_t6344 *, const MethodInfo*))List_1__ctor_m35691_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m35692_gshared (List_1_t6344 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m35692(__this, ___collection, method) (( void (*) (List_1_t6344 *, Object_t*, const MethodInfo*))List_1__ctor_m35692_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m35693_gshared (List_1_t6344 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m35693(__this, ___capacity, method) (( void (*) (List_1_t6344 *, int32_t, const MethodInfo*))List_1__ctor_m35693_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m35694_gshared (List_1_t6344 * __this, SByteU5BU5D_t4706* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m35694(__this, ___data, ___size, method) (( void (*) (List_1_t6344 *, SByteU5BU5D_t4706*, int32_t, const MethodInfo*))List_1__ctor_m35694_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.cctor()
extern "C" void List_1__cctor_m35695_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m35695(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m35695_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.SByte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35696_gshared (List_1_t6344 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35696(__this, method) (( Object_t* (*) (List_1_t6344 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35696_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m35697_gshared (List_1_t6344 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m35697(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6344 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m35697_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m35698_gshared (List_1_t6344 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m35698(__this, method) (( Object_t * (*) (List_1_t6344 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m35698_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m35699_gshared (List_1_t6344 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m35699(__this, ___item, method) (( int32_t (*) (List_1_t6344 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m35699_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m35700_gshared (List_1_t6344 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m35700(__this, ___item, method) (( bool (*) (List_1_t6344 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m35700_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m35701_gshared (List_1_t6344 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m35701(__this, ___item, method) (( int32_t (*) (List_1_t6344 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m35701_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m35702_gshared (List_1_t6344 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m35702(__this, ___index, ___item, method) (( void (*) (List_1_t6344 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m35702_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m35703_gshared (List_1_t6344 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m35703(__this, ___item, method) (( void (*) (List_1_t6344 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m35703_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35704_gshared (List_1_t6344 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35704(__this, method) (( bool (*) (List_1_t6344 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35704_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m35705_gshared (List_1_t6344 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m35705(__this, method) (( bool (*) (List_1_t6344 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m35705_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m35706_gshared (List_1_t6344 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m35706(__this, method) (( Object_t * (*) (List_1_t6344 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m35706_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m35707_gshared (List_1_t6344 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m35707(__this, method) (( bool (*) (List_1_t6344 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m35707_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m35708_gshared (List_1_t6344 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m35708(__this, method) (( bool (*) (List_1_t6344 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m35708_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m35709_gshared (List_1_t6344 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m35709(__this, ___index, method) (( Object_t * (*) (List_1_t6344 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m35709_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m35710_gshared (List_1_t6344 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m35710(__this, ___index, ___value, method) (( void (*) (List_1_t6344 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m35710_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Add(T)
extern "C" void List_1_Add_m35711_gshared (List_1_t6344 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Add_m35711(__this, ___item, method) (( void (*) (List_1_t6344 *, int8_t, const MethodInfo*))List_1_Add_m35711_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m35712_gshared (List_1_t6344 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m35712(__this, ___newCount, method) (( void (*) (List_1_t6344 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m35712_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m35713_gshared (List_1_t6344 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m35713(__this, ___idx, ___count, method) (( void (*) (List_1_t6344 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m35713_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m35714_gshared (List_1_t6344 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m35714(__this, ___collection, method) (( void (*) (List_1_t6344 *, Object_t*, const MethodInfo*))List_1_AddCollection_m35714_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m35715_gshared (List_1_t6344 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m35715(__this, ___enumerable, method) (( void (*) (List_1_t6344 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m35715_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m35716_gshared (List_1_t6344 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m35716(__this, ___collection, method) (( void (*) (List_1_t6344 *, Object_t*, const MethodInfo*))List_1_AddRange_m35716_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.SByte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6346 * List_1_AsReadOnly_m35717_gshared (List_1_t6344 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m35717(__this, method) (( ReadOnlyCollection_1_t6346 * (*) (List_1_t6344 *, const MethodInfo*))List_1_AsReadOnly_m35717_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Clear()
extern "C" void List_1_Clear_m35718_gshared (List_1_t6344 * __this, const MethodInfo* method);
#define List_1_Clear_m35718(__this, method) (( void (*) (List_1_t6344 *, const MethodInfo*))List_1_Clear_m35718_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::Contains(T)
extern "C" bool List_1_Contains_m35719_gshared (List_1_t6344 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Contains_m35719(__this, ___item, method) (( bool (*) (List_1_t6344 *, int8_t, const MethodInfo*))List_1_Contains_m35719_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m35720_gshared (List_1_t6344 * __this, SByteU5BU5D_t4706* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m35720(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6344 *, SByteU5BU5D_t4706*, int32_t, const MethodInfo*))List_1_CopyTo_m35720_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.SByte>::Find(System.Predicate`1<T>)
extern "C" int8_t List_1_Find_m35721_gshared (List_1_t6344 * __this, Predicate_1_t6351 * ___match, const MethodInfo* method);
#define List_1_Find_m35721(__this, ___match, method) (( int8_t (*) (List_1_t6344 *, Predicate_1_t6351 *, const MethodInfo*))List_1_Find_m35721_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m35722_gshared (Object_t * __this /* static, unused */, Predicate_1_t6351 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m35722(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6351 *, const MethodInfo*))List_1_CheckMatch_m35722_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m35723_gshared (List_1_t6344 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6351 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m35723(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6344 *, int32_t, int32_t, Predicate_1_t6351 *, const MethodInfo*))List_1_GetIndex_m35723_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.SByte>::GetEnumerator()
extern "C" Enumerator_t6345  List_1_GetEnumerator_m35724_gshared (List_1_t6344 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m35724(__this, method) (( Enumerator_t6345  (*) (List_1_t6344 *, const MethodInfo*))List_1_GetEnumerator_m35724_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.SByte>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6344 * List_1_GetRange_m35725_gshared (List_1_t6344 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m35725(__this, ___index, ___count, method) (( List_1_t6344 * (*) (List_1_t6344 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m35725_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m35726_gshared (List_1_t6344 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m35726(__this, ___item, method) (( int32_t (*) (List_1_t6344 *, int8_t, const MethodInfo*))List_1_IndexOf_m35726_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m35727_gshared (List_1_t6344 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m35727(__this, ___start, ___delta, method) (( void (*) (List_1_t6344 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m35727_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m35728_gshared (List_1_t6344 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m35728(__this, ___index, method) (( void (*) (List_1_t6344 *, int32_t, const MethodInfo*))List_1_CheckIndex_m35728_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m35729_gshared (List_1_t6344 * __this, int32_t ___index, int8_t ___item, const MethodInfo* method);
#define List_1_Insert_m35729(__this, ___index, ___item, method) (( void (*) (List_1_t6344 *, int32_t, int8_t, const MethodInfo*))List_1_Insert_m35729_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m35730_gshared (List_1_t6344 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m35730(__this, ___collection, method) (( void (*) (List_1_t6344 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m35730_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m35731_gshared (List_1_t6344 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m35731(__this, ___index, ___collection, method) (( void (*) (List_1_t6344 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m35731_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m35732_gshared (List_1_t6344 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m35732(__this, ___index, ___collection, method) (( void (*) (List_1_t6344 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m35732_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m35733_gshared (List_1_t6344 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m35733(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6344 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m35733_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::Remove(T)
extern "C" bool List_1_Remove_m35734_gshared (List_1_t6344 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Remove_m35734(__this, ___item, method) (( bool (*) (List_1_t6344 *, int8_t, const MethodInfo*))List_1_Remove_m35734_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m35735_gshared (List_1_t6344 * __this, Predicate_1_t6351 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m35735(__this, ___match, method) (( int32_t (*) (List_1_t6344 *, Predicate_1_t6351 *, const MethodInfo*))List_1_RemoveAll_m35735_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m35736_gshared (List_1_t6344 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m35736(__this, ___index, method) (( void (*) (List_1_t6344 *, int32_t, const MethodInfo*))List_1_RemoveAt_m35736_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m35737_gshared (List_1_t6344 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m35737(__this, ___index, ___count, method) (( void (*) (List_1_t6344 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m35737_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Reverse()
extern "C" void List_1_Reverse_m35738_gshared (List_1_t6344 * __this, const MethodInfo* method);
#define List_1_Reverse_m35738(__this, method) (( void (*) (List_1_t6344 *, const MethodInfo*))List_1_Reverse_m35738_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort()
extern "C" void List_1_Sort_m35739_gshared (List_1_t6344 * __this, const MethodInfo* method);
#define List_1_Sort_m35739(__this, method) (( void (*) (List_1_t6344 *, const MethodInfo*))List_1_Sort_m35739_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m35740_gshared (List_1_t6344 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m35740(__this, ___comparer, method) (( void (*) (List_1_t6344 *, Object_t*, const MethodInfo*))List_1_Sort_m35740_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m35741_gshared (List_1_t6344 * __this, Comparison_1_t6355 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m35741(__this, ___comparison, method) (( void (*) (List_1_t6344 *, Comparison_1_t6355 *, const MethodInfo*))List_1_Sort_m35741_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.SByte>::ToArray()
extern "C" SByteU5BU5D_t4706* List_1_ToArray_m35742_gshared (List_1_t6344 * __this, const MethodInfo* method);
#define List_1_ToArray_m35742(__this, method) (( SByteU5BU5D_t4706* (*) (List_1_t6344 *, const MethodInfo*))List_1_ToArray_m35742_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::TrimExcess()
extern "C" void List_1_TrimExcess_m35743_gshared (List_1_t6344 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m35743(__this, method) (( void (*) (List_1_t6344 *, const MethodInfo*))List_1_TrimExcess_m35743_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m35744_gshared (List_1_t6344 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m35744(__this, method) (( int32_t (*) (List_1_t6344 *, const MethodInfo*))List_1_get_Capacity_m35744_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m35745_gshared (List_1_t6344 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m35745(__this, ___value, method) (( void (*) (List_1_t6344 *, int32_t, const MethodInfo*))List_1_set_Capacity_m35745_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::get_Count()
extern "C" int32_t List_1_get_Count_m35746_gshared (List_1_t6344 * __this, const MethodInfo* method);
#define List_1_get_Count_m35746(__this, method) (( int32_t (*) (List_1_t6344 *, const MethodInfo*))List_1_get_Count_m35746_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.SByte>::get_Item(System.Int32)
extern "C" int8_t List_1_get_Item_m35747_gshared (List_1_t6344 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m35747(__this, ___index, method) (( int8_t (*) (List_1_t6344 *, int32_t, const MethodInfo*))List_1_get_Item_m35747_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m35748_gshared (List_1_t6344 * __this, int32_t ___index, int8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m35748(__this, ___index, ___value, method) (( void (*) (List_1_t6344 *, int32_t, int8_t, const MethodInfo*))List_1_set_Item_m35748_gshared)(__this, ___index, ___value, method)
