#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int16>
struct List_1_t6472;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int16>
struct IEnumerable_1_t6324;
// System.Int16[]
struct Int16U5BU5D_t4886;
// System.Collections.Generic.IEnumerator`1<System.Int16>
struct IEnumerator_1_t6325;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9198;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int16>
struct ReadOnlyCollection_1_t6474;
// System.Predicate`1<System.Int16>
struct Predicate_1_t6479;
// System.Collections.Generic.IComparer`1<System.Int16>
struct IComparer_1_t5365;
// System.Comparison`1<System.Int16>
struct Comparison_1_t6483;
// System.Collections.Generic.List`1/Enumerator<System.Int16>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_59.h"

// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor()
extern "C" void List_1__ctor_m37021_gshared (List_1_t6472 * __this, const MethodInfo* method);
#define List_1__ctor_m37021(__this, method) (( void (*) (List_1_t6472 *, const MethodInfo*))List_1__ctor_m37021_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m37022_gshared (List_1_t6472 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m37022(__this, ___collection, method) (( void (*) (List_1_t6472 *, Object_t*, const MethodInfo*))List_1__ctor_m37022_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(System.Int32)
extern "C" void List_1__ctor_m37023_gshared (List_1_t6472 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m37023(__this, ___capacity, method) (( void (*) (List_1_t6472 *, int32_t, const MethodInfo*))List_1__ctor_m37023_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m37024_gshared (List_1_t6472 * __this, Int16U5BU5D_t4886* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m37024(__this, ___data, ___size, method) (( void (*) (List_1_t6472 *, Int16U5BU5D_t4886*, int32_t, const MethodInfo*))List_1__ctor_m37024_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.cctor()
extern "C" void List_1__cctor_m37025_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m37025(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m37025_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int16>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37026_gshared (List_1_t6472 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37026(__this, method) (( Object_t* (*) (List_1_t6472 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37026_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m37027_gshared (List_1_t6472 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m37027(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6472 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m37027_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m37028_gshared (List_1_t6472 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m37028(__this, method) (( Object_t * (*) (List_1_t6472 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m37028_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m37029_gshared (List_1_t6472 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m37029(__this, ___item, method) (( int32_t (*) (List_1_t6472 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m37029_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m37030_gshared (List_1_t6472 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m37030(__this, ___item, method) (( bool (*) (List_1_t6472 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m37030_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m37031_gshared (List_1_t6472 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m37031(__this, ___item, method) (( int32_t (*) (List_1_t6472 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m37031_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m37032_gshared (List_1_t6472 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m37032(__this, ___index, ___item, method) (( void (*) (List_1_t6472 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m37032_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m37033_gshared (List_1_t6472 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m37033(__this, ___item, method) (( void (*) (List_1_t6472 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m37033_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37034_gshared (List_1_t6472 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37034(__this, method) (( bool (*) (List_1_t6472 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37034_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m37035_gshared (List_1_t6472 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m37035(__this, method) (( bool (*) (List_1_t6472 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m37035_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m37036_gshared (List_1_t6472 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m37036(__this, method) (( Object_t * (*) (List_1_t6472 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m37036_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m37037_gshared (List_1_t6472 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m37037(__this, method) (( bool (*) (List_1_t6472 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m37037_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m37038_gshared (List_1_t6472 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m37038(__this, method) (( bool (*) (List_1_t6472 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m37038_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m37039_gshared (List_1_t6472 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m37039(__this, ___index, method) (( Object_t * (*) (List_1_t6472 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m37039_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m37040_gshared (List_1_t6472 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m37040(__this, ___index, ___value, method) (( void (*) (List_1_t6472 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m37040_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Add(T)
extern "C" void List_1_Add_m37041_gshared (List_1_t6472 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Add_m37041(__this, ___item, method) (( void (*) (List_1_t6472 *, int16_t, const MethodInfo*))List_1_Add_m37041_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m37042_gshared (List_1_t6472 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m37042(__this, ___newCount, method) (( void (*) (List_1_t6472 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m37042_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m37043_gshared (List_1_t6472 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m37043(__this, ___idx, ___count, method) (( void (*) (List_1_t6472 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m37043_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m37044_gshared (List_1_t6472 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m37044(__this, ___collection, method) (( void (*) (List_1_t6472 *, Object_t*, const MethodInfo*))List_1_AddCollection_m37044_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m37045_gshared (List_1_t6472 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m37045(__this, ___enumerable, method) (( void (*) (List_1_t6472 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m37045_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m37046_gshared (List_1_t6472 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m37046(__this, ___collection, method) (( void (*) (List_1_t6472 *, Object_t*, const MethodInfo*))List_1_AddRange_m37046_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int16>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6474 * List_1_AsReadOnly_m37047_gshared (List_1_t6472 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m37047(__this, method) (( ReadOnlyCollection_1_t6474 * (*) (List_1_t6472 *, const MethodInfo*))List_1_AsReadOnly_m37047_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Clear()
extern "C" void List_1_Clear_m37048_gshared (List_1_t6472 * __this, const MethodInfo* method);
#define List_1_Clear_m37048(__this, method) (( void (*) (List_1_t6472 *, const MethodInfo*))List_1_Clear_m37048_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::Contains(T)
extern "C" bool List_1_Contains_m37049_gshared (List_1_t6472 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Contains_m37049(__this, ___item, method) (( bool (*) (List_1_t6472 *, int16_t, const MethodInfo*))List_1_Contains_m37049_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m37050_gshared (List_1_t6472 * __this, Int16U5BU5D_t4886* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m37050(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6472 *, Int16U5BU5D_t4886*, int32_t, const MethodInfo*))List_1_CopyTo_m37050_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int16>::Find(System.Predicate`1<T>)
extern "C" int16_t List_1_Find_m37051_gshared (List_1_t6472 * __this, Predicate_1_t6479 * ___match, const MethodInfo* method);
#define List_1_Find_m37051(__this, ___match, method) (( int16_t (*) (List_1_t6472 *, Predicate_1_t6479 *, const MethodInfo*))List_1_Find_m37051_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m37052_gshared (Object_t * __this /* static, unused */, Predicate_1_t6479 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m37052(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6479 *, const MethodInfo*))List_1_CheckMatch_m37052_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m37053_gshared (List_1_t6472 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6479 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m37053(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6472 *, int32_t, int32_t, Predicate_1_t6479 *, const MethodInfo*))List_1_GetIndex_m37053_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int16>::GetEnumerator()
extern "C" Enumerator_t6473  List_1_GetEnumerator_m37054_gshared (List_1_t6472 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m37054(__this, method) (( Enumerator_t6473  (*) (List_1_t6472 *, const MethodInfo*))List_1_GetEnumerator_m37054_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int16>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6472 * List_1_GetRange_m37055_gshared (List_1_t6472 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m37055(__this, ___index, ___count, method) (( List_1_t6472 * (*) (List_1_t6472 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m37055_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m37056_gshared (List_1_t6472 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m37056(__this, ___item, method) (( int32_t (*) (List_1_t6472 *, int16_t, const MethodInfo*))List_1_IndexOf_m37056_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m37057_gshared (List_1_t6472 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m37057(__this, ___start, ___delta, method) (( void (*) (List_1_t6472 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m37057_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m37058_gshared (List_1_t6472 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m37058(__this, ___index, method) (( void (*) (List_1_t6472 *, int32_t, const MethodInfo*))List_1_CheckIndex_m37058_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m37059_gshared (List_1_t6472 * __this, int32_t ___index, int16_t ___item, const MethodInfo* method);
#define List_1_Insert_m37059(__this, ___index, ___item, method) (( void (*) (List_1_t6472 *, int32_t, int16_t, const MethodInfo*))List_1_Insert_m37059_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m37060_gshared (List_1_t6472 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m37060(__this, ___collection, method) (( void (*) (List_1_t6472 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m37060_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m37061_gshared (List_1_t6472 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m37061(__this, ___index, ___collection, method) (( void (*) (List_1_t6472 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m37061_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m37062_gshared (List_1_t6472 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m37062(__this, ___index, ___collection, method) (( void (*) (List_1_t6472 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m37062_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m37063_gshared (List_1_t6472 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m37063(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6472 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m37063_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::Remove(T)
extern "C" bool List_1_Remove_m37064_gshared (List_1_t6472 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Remove_m37064(__this, ___item, method) (( bool (*) (List_1_t6472 *, int16_t, const MethodInfo*))List_1_Remove_m37064_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m37065_gshared (List_1_t6472 * __this, Predicate_1_t6479 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m37065(__this, ___match, method) (( int32_t (*) (List_1_t6472 *, Predicate_1_t6479 *, const MethodInfo*))List_1_RemoveAll_m37065_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m37066_gshared (List_1_t6472 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m37066(__this, ___index, method) (( void (*) (List_1_t6472 *, int32_t, const MethodInfo*))List_1_RemoveAt_m37066_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m37067_gshared (List_1_t6472 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m37067(__this, ___index, ___count, method) (( void (*) (List_1_t6472 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m37067_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Reverse()
extern "C" void List_1_Reverse_m37068_gshared (List_1_t6472 * __this, const MethodInfo* method);
#define List_1_Reverse_m37068(__this, method) (( void (*) (List_1_t6472 *, const MethodInfo*))List_1_Reverse_m37068_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort()
extern "C" void List_1_Sort_m37069_gshared (List_1_t6472 * __this, const MethodInfo* method);
#define List_1_Sort_m37069(__this, method) (( void (*) (List_1_t6472 *, const MethodInfo*))List_1_Sort_m37069_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m37070_gshared (List_1_t6472 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m37070(__this, ___comparer, method) (( void (*) (List_1_t6472 *, Object_t*, const MethodInfo*))List_1_Sort_m37070_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m37071_gshared (List_1_t6472 * __this, Comparison_1_t6483 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m37071(__this, ___comparison, method) (( void (*) (List_1_t6472 *, Comparison_1_t6483 *, const MethodInfo*))List_1_Sort_m37071_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int16>::ToArray()
extern "C" Int16U5BU5D_t4886* List_1_ToArray_m37072_gshared (List_1_t6472 * __this, const MethodInfo* method);
#define List_1_ToArray_m37072(__this, method) (( Int16U5BU5D_t4886* (*) (List_1_t6472 *, const MethodInfo*))List_1_ToArray_m37072_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::TrimExcess()
extern "C" void List_1_TrimExcess_m37073_gshared (List_1_t6472 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m37073(__this, method) (( void (*) (List_1_t6472 *, const MethodInfo*))List_1_TrimExcess_m37073_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m37074_gshared (List_1_t6472 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m37074(__this, method) (( int32_t (*) (List_1_t6472 *, const MethodInfo*))List_1_get_Capacity_m37074_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m37075_gshared (List_1_t6472 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m37075(__this, ___value, method) (( void (*) (List_1_t6472 *, int32_t, const MethodInfo*))List_1_set_Capacity_m37075_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::get_Count()
extern "C" int32_t List_1_get_Count_m37076_gshared (List_1_t6472 * __this, const MethodInfo* method);
#define List_1_get_Count_m37076(__this, method) (( int32_t (*) (List_1_t6472 *, const MethodInfo*))List_1_get_Count_m37076_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int16>::get_Item(System.Int32)
extern "C" int16_t List_1_get_Item_m37077_gshared (List_1_t6472 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m37077(__this, ___index, method) (( int16_t (*) (List_1_t6472 *, int32_t, const MethodInfo*))List_1_get_Item_m37077_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m37078_gshared (List_1_t6472 * __this, int32_t ___index, int16_t ___value, const MethodInfo* method);
#define List_1_set_Item_m37078(__this, ___index, ___value, method) (( void (*) (List_1_t6472 *, int32_t, int16_t, const MethodInfo*))List_1_set_Item_m37078_gshared)(__this, ___index, ___value, method)
