#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t6369;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t6310;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6311;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9130;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t6371;
// System.Predicate`1<System.Byte>
struct Predicate_1_t6373;
// System.Collections.Generic.IComparer`1<System.Byte>
struct IComparer_1_t9196;
// System.Comparison`1<System.Byte>
struct Comparison_1_t6377;
// System.Collections.Generic.List`1/Enumerator<System.Byte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_57.h"

// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
extern "C" void List_1__ctor_m35623_gshared (List_1_t6369 * __this, const MethodInfo* method);
#define List_1__ctor_m35623(__this, method) (( void (*) (List_1_t6369 *, const MethodInfo*))List_1__ctor_m35623_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m35624_gshared (List_1_t6369 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m35624(__this, ___collection, method) (( void (*) (List_1_t6369 *, Object_t*, const MethodInfo*))List_1__ctor_m35624_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m35625_gshared (List_1_t6369 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m35625(__this, ___capacity, method) (( void (*) (List_1_t6369 *, int32_t, const MethodInfo*))List_1__ctor_m35625_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m35626_gshared (List_1_t6369 * __this, ByteU5BU5D_t66* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m35626(__this, ___data, ___size, method) (( void (*) (List_1_t6369 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))List_1__ctor_m35626_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.cctor()
extern "C" void List_1__cctor_m35627_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m35627(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m35627_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35628_gshared (List_1_t6369 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35628(__this, method) (( Object_t* (*) (List_1_t6369 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35628_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m35629_gshared (List_1_t6369 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m35629(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6369 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m35629_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m35630_gshared (List_1_t6369 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m35630(__this, method) (( Object_t * (*) (List_1_t6369 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m35630_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m35631_gshared (List_1_t6369 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m35631(__this, ___item, method) (( int32_t (*) (List_1_t6369 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m35631_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m35632_gshared (List_1_t6369 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m35632(__this, ___item, method) (( bool (*) (List_1_t6369 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m35632_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m35633_gshared (List_1_t6369 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m35633(__this, ___item, method) (( int32_t (*) (List_1_t6369 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m35633_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m35634_gshared (List_1_t6369 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m35634(__this, ___index, ___item, method) (( void (*) (List_1_t6369 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m35634_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m35635_gshared (List_1_t6369 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m35635(__this, ___item, method) (( void (*) (List_1_t6369 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m35635_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35636_gshared (List_1_t6369 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35636(__this, method) (( bool (*) (List_1_t6369 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35636_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m35637_gshared (List_1_t6369 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m35637(__this, method) (( bool (*) (List_1_t6369 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m35637_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m35638_gshared (List_1_t6369 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m35638(__this, method) (( Object_t * (*) (List_1_t6369 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m35638_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m35639_gshared (List_1_t6369 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m35639(__this, method) (( bool (*) (List_1_t6369 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m35639_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m35640_gshared (List_1_t6369 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m35640(__this, method) (( bool (*) (List_1_t6369 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m35640_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m35641_gshared (List_1_t6369 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m35641(__this, ___index, method) (( Object_t * (*) (List_1_t6369 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m35641_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m35642_gshared (List_1_t6369 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m35642(__this, ___index, ___value, method) (( void (*) (List_1_t6369 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m35642_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
extern "C" void List_1_Add_m35643_gshared (List_1_t6369 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Add_m35643(__this, ___item, method) (( void (*) (List_1_t6369 *, uint8_t, const MethodInfo*))List_1_Add_m35643_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m35644_gshared (List_1_t6369 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m35644(__this, ___newCount, method) (( void (*) (List_1_t6369 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m35644_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m35645_gshared (List_1_t6369 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m35645(__this, ___idx, ___count, method) (( void (*) (List_1_t6369 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m35645_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m35646_gshared (List_1_t6369 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m35646(__this, ___collection, method) (( void (*) (List_1_t6369 *, Object_t*, const MethodInfo*))List_1_AddCollection_m35646_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m35647_gshared (List_1_t6369 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m35647(__this, ___enumerable, method) (( void (*) (List_1_t6369 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m35647_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m35648_gshared (List_1_t6369 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m35648(__this, ___collection, method) (( void (*) (List_1_t6369 *, Object_t*, const MethodInfo*))List_1_AddRange_m35648_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6371 * List_1_AsReadOnly_m35649_gshared (List_1_t6369 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m35649(__this, method) (( ReadOnlyCollection_1_t6371 * (*) (List_1_t6369 *, const MethodInfo*))List_1_AsReadOnly_m35649_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
extern "C" void List_1_Clear_m35650_gshared (List_1_t6369 * __this, const MethodInfo* method);
#define List_1_Clear_m35650(__this, method) (( void (*) (List_1_t6369 *, const MethodInfo*))List_1_Clear_m35650_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Contains(T)
extern "C" bool List_1_Contains_m35651_gshared (List_1_t6369 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Contains_m35651(__this, ___item, method) (( bool (*) (List_1_t6369 *, uint8_t, const MethodInfo*))List_1_Contains_m35651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m35652_gshared (List_1_t6369 * __this, ByteU5BU5D_t66* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m35652(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6369 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))List_1_CopyTo_m35652_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte>::Find(System.Predicate`1<T>)
extern "C" uint8_t List_1_Find_m35653_gshared (List_1_t6369 * __this, Predicate_1_t6373 * ___match, const MethodInfo* method);
#define List_1_Find_m35653(__this, ___match, method) (( uint8_t (*) (List_1_t6369 *, Predicate_1_t6373 *, const MethodInfo*))List_1_Find_m35653_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m35654_gshared (Object_t * __this /* static, unused */, Predicate_1_t6373 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m35654(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6373 *, const MethodInfo*))List_1_CheckMatch_m35654_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m35655_gshared (List_1_t6369 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6373 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m35655(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6369 *, int32_t, int32_t, Predicate_1_t6373 *, const MethodInfo*))List_1_GetIndex_m35655_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
extern "C" Enumerator_t6370  List_1_GetEnumerator_m35656_gshared (List_1_t6369 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m35656(__this, method) (( Enumerator_t6370  (*) (List_1_t6369 *, const MethodInfo*))List_1_GetEnumerator_m35656_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6369 * List_1_GetRange_m35657_gshared (List_1_t6369 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m35657(__this, ___index, ___count, method) (( List_1_t6369 * (*) (List_1_t6369 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m35657_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m35658_gshared (List_1_t6369 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m35658(__this, ___item, method) (( int32_t (*) (List_1_t6369 *, uint8_t, const MethodInfo*))List_1_IndexOf_m35658_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m35659_gshared (List_1_t6369 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m35659(__this, ___start, ___delta, method) (( void (*) (List_1_t6369 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m35659_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m35660_gshared (List_1_t6369 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m35660(__this, ___index, method) (( void (*) (List_1_t6369 *, int32_t, const MethodInfo*))List_1_CheckIndex_m35660_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m35661_gshared (List_1_t6369 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define List_1_Insert_m35661(__this, ___index, ___item, method) (( void (*) (List_1_t6369 *, int32_t, uint8_t, const MethodInfo*))List_1_Insert_m35661_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m35662_gshared (List_1_t6369 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m35662(__this, ___collection, method) (( void (*) (List_1_t6369 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m35662_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m35663_gshared (List_1_t6369 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m35663(__this, ___index, ___collection, method) (( void (*) (List_1_t6369 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m35663_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m35664_gshared (List_1_t6369 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m35664(__this, ___index, ___collection, method) (( void (*) (List_1_t6369 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m35664_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m35665_gshared (List_1_t6369 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m35665(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6369 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m35665_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Remove(T)
extern "C" bool List_1_Remove_m35666_gshared (List_1_t6369 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Remove_m35666(__this, ___item, method) (( bool (*) (List_1_t6369 *, uint8_t, const MethodInfo*))List_1_Remove_m35666_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m35667_gshared (List_1_t6369 * __this, Predicate_1_t6373 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m35667(__this, ___match, method) (( int32_t (*) (List_1_t6369 *, Predicate_1_t6373 *, const MethodInfo*))List_1_RemoveAll_m35667_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m35668_gshared (List_1_t6369 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m35668(__this, ___index, method) (( void (*) (List_1_t6369 *, int32_t, const MethodInfo*))List_1_RemoveAt_m35668_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m35669_gshared (List_1_t6369 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m35669(__this, ___index, ___count, method) (( void (*) (List_1_t6369 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m35669_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
extern "C" void List_1_Reverse_m35670_gshared (List_1_t6369 * __this, const MethodInfo* method);
#define List_1_Reverse_m35670(__this, method) (( void (*) (List_1_t6369 *, const MethodInfo*))List_1_Reverse_m35670_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort()
extern "C" void List_1_Sort_m35671_gshared (List_1_t6369 * __this, const MethodInfo* method);
#define List_1_Sort_m35671(__this, method) (( void (*) (List_1_t6369 *, const MethodInfo*))List_1_Sort_m35671_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m35672_gshared (List_1_t6369 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m35672(__this, ___comparer, method) (( void (*) (List_1_t6369 *, Object_t*, const MethodInfo*))List_1_Sort_m35672_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m35673_gshared (List_1_t6369 * __this, Comparison_1_t6377 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m35673(__this, ___comparison, method) (( void (*) (List_1_t6369 *, Comparison_1_t6377 *, const MethodInfo*))List_1_Sort_m35673_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
extern "C" ByteU5BU5D_t66* List_1_ToArray_m35674_gshared (List_1_t6369 * __this, const MethodInfo* method);
#define List_1_ToArray_m35674(__this, method) (( ByteU5BU5D_t66* (*) (List_1_t6369 *, const MethodInfo*))List_1_ToArray_m35674_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::TrimExcess()
extern "C" void List_1_TrimExcess_m35675_gshared (List_1_t6369 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m35675(__this, method) (( void (*) (List_1_t6369 *, const MethodInfo*))List_1_TrimExcess_m35675_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m35676_gshared (List_1_t6369 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m35676(__this, method) (( int32_t (*) (List_1_t6369 *, const MethodInfo*))List_1_get_Capacity_m35676_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m35677_gshared (List_1_t6369 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m35677(__this, ___value, method) (( void (*) (List_1_t6369 *, int32_t, const MethodInfo*))List_1_set_Capacity_m35677_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
extern "C" int32_t List_1_get_Count_m35678_gshared (List_1_t6369 * __this, const MethodInfo* method);
#define List_1_get_Count_m35678(__this, method) (( int32_t (*) (List_1_t6369 *, const MethodInfo*))List_1_get_Count_m35678_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t List_1_get_Item_m35679_gshared (List_1_t6369 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m35679(__this, ___index, method) (( uint8_t (*) (List_1_t6369 *, int32_t, const MethodInfo*))List_1_get_Item_m35679_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m35680_gshared (List_1_t6369 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m35680(__this, ___index, ___value, method) (( void (*) (List_1_t6369 *, int32_t, uint8_t, const MethodInfo*))List_1_set_Item_m35680_gshared)(__this, ___index, ___value, method)
