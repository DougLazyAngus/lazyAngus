#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct List_1_t7289;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerable_1_t7189;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7288;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7190;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ICollection_1_t9361;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ReadOnlyCollection_1_t7292;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Predicate_1_t7296;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IComparer_1_t9362;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Comparison_1_t7299;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_73.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor()
extern "C" void List_1__ctor_m47038_gshared (List_1_t7289 * __this, const MethodInfo* method);
#define List_1__ctor_m47038(__this, method) (( void (*) (List_1_t7289 *, const MethodInfo*))List_1__ctor_m47038_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m47039_gshared (List_1_t7289 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m47039(__this, ___collection, method) (( void (*) (List_1_t7289 *, Object_t*, const MethodInfo*))List_1__ctor_m47039_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m47040_gshared (List_1_t7289 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m47040(__this, ___capacity, method) (( void (*) (List_1_t7289 *, int32_t, const MethodInfo*))List_1__ctor_m47040_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m47041_gshared (List_1_t7289 * __this, KeyValuePair_2U5BU5D_t7288* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m47041(__this, ___data, ___size, method) (( void (*) (List_1_t7289 *, KeyValuePair_2U5BU5D_t7288*, int32_t, const MethodInfo*))List_1__ctor_m47041_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.cctor()
extern "C" void List_1__cctor_m47042_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m47042(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m47042_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47043_gshared (List_1_t7289 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47043(__this, method) (( Object_t* (*) (List_1_t7289 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47043_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m47044_gshared (List_1_t7289 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m47044(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7289 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m47044_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m47045_gshared (List_1_t7289 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m47045(__this, method) (( Object_t * (*) (List_1_t7289 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m47045_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m47046_gshared (List_1_t7289 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m47046(__this, ___item, method) (( int32_t (*) (List_1_t7289 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m47046_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m47047_gshared (List_1_t7289 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m47047(__this, ___item, method) (( bool (*) (List_1_t7289 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m47047_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m47048_gshared (List_1_t7289 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m47048(__this, ___item, method) (( int32_t (*) (List_1_t7289 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m47048_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m47049_gshared (List_1_t7289 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m47049(__this, ___index, ___item, method) (( void (*) (List_1_t7289 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m47049_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m47050_gshared (List_1_t7289 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m47050(__this, ___item, method) (( void (*) (List_1_t7289 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m47050_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47051_gshared (List_1_t7289 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47051(__this, method) (( bool (*) (List_1_t7289 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47051_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m47052_gshared (List_1_t7289 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m47052(__this, method) (( bool (*) (List_1_t7289 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m47052_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m47053_gshared (List_1_t7289 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m47053(__this, method) (( Object_t * (*) (List_1_t7289 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m47053_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m47054_gshared (List_1_t7289 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m47054(__this, method) (( bool (*) (List_1_t7289 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m47054_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m47055_gshared (List_1_t7289 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m47055(__this, method) (( bool (*) (List_1_t7289 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m47055_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m47056_gshared (List_1_t7289 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m47056(__this, ___index, method) (( Object_t * (*) (List_1_t7289 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m47056_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m47057_gshared (List_1_t7289 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m47057(__this, ___index, ___value, method) (( void (*) (List_1_t7289 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m47057_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Add(T)
extern "C" void List_1_Add_m47058_gshared (List_1_t7289 * __this, KeyValuePair_2_t6186  ___item, const MethodInfo* method);
#define List_1_Add_m47058(__this, ___item, method) (( void (*) (List_1_t7289 *, KeyValuePair_2_t6186 , const MethodInfo*))List_1_Add_m47058_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m47059_gshared (List_1_t7289 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m47059(__this, ___newCount, method) (( void (*) (List_1_t7289 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m47059_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m47060_gshared (List_1_t7289 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m47060(__this, ___idx, ___count, method) (( void (*) (List_1_t7289 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m47060_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m47061_gshared (List_1_t7289 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m47061(__this, ___collection, method) (( void (*) (List_1_t7289 *, Object_t*, const MethodInfo*))List_1_AddCollection_m47061_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m47062_gshared (List_1_t7289 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m47062(__this, ___enumerable, method) (( void (*) (List_1_t7289 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m47062_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m47063_gshared (List_1_t7289 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m47063(__this, ___collection, method) (( void (*) (List_1_t7289 *, Object_t*, const MethodInfo*))List_1_AddRange_m47063_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7292 * List_1_AsReadOnly_m47064_gshared (List_1_t7289 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m47064(__this, method) (( ReadOnlyCollection_1_t7292 * (*) (List_1_t7289 *, const MethodInfo*))List_1_AsReadOnly_m47064_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Clear()
extern "C" void List_1_Clear_m47065_gshared (List_1_t7289 * __this, const MethodInfo* method);
#define List_1_Clear_m47065(__this, method) (( void (*) (List_1_t7289 *, const MethodInfo*))List_1_Clear_m47065_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Contains(T)
extern "C" bool List_1_Contains_m47066_gshared (List_1_t7289 * __this, KeyValuePair_2_t6186  ___item, const MethodInfo* method);
#define List_1_Contains_m47066(__this, ___item, method) (( bool (*) (List_1_t7289 *, KeyValuePair_2_t6186 , const MethodInfo*))List_1_Contains_m47066_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m47067_gshared (List_1_t7289 * __this, KeyValuePair_2U5BU5D_t7288* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m47067(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7289 *, KeyValuePair_2U5BU5D_t7288*, int32_t, const MethodInfo*))List_1_CopyTo_m47067_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6186  List_1_Find_m47068_gshared (List_1_t7289 * __this, Predicate_1_t7296 * ___match, const MethodInfo* method);
#define List_1_Find_m47068(__this, ___match, method) (( KeyValuePair_2_t6186  (*) (List_1_t7289 *, Predicate_1_t7296 *, const MethodInfo*))List_1_Find_m47068_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m47069_gshared (Object_t * __this /* static, unused */, Predicate_1_t7296 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m47069(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7296 *, const MethodInfo*))List_1_CheckMatch_m47069_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m47070_gshared (List_1_t7289 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7296 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m47070(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7289 *, int32_t, int32_t, Predicate_1_t7296 *, const MethodInfo*))List_1_GetIndex_m47070_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetEnumerator()
extern "C" Enumerator_t7290  List_1_GetEnumerator_m47071_gshared (List_1_t7289 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m47071(__this, method) (( Enumerator_t7290  (*) (List_1_t7289 *, const MethodInfo*))List_1_GetEnumerator_m47071_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7289 * List_1_GetRange_m47072_gshared (List_1_t7289 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m47072(__this, ___index, ___count, method) (( List_1_t7289 * (*) (List_1_t7289 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m47072_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m47073_gshared (List_1_t7289 * __this, KeyValuePair_2_t6186  ___item, const MethodInfo* method);
#define List_1_IndexOf_m47073(__this, ___item, method) (( int32_t (*) (List_1_t7289 *, KeyValuePair_2_t6186 , const MethodInfo*))List_1_IndexOf_m47073_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m47074_gshared (List_1_t7289 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m47074(__this, ___start, ___delta, method) (( void (*) (List_1_t7289 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m47074_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m47075_gshared (List_1_t7289 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m47075(__this, ___index, method) (( void (*) (List_1_t7289 *, int32_t, const MethodInfo*))List_1_CheckIndex_m47075_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m47076_gshared (List_1_t7289 * __this, int32_t ___index, KeyValuePair_2_t6186  ___item, const MethodInfo* method);
#define List_1_Insert_m47076(__this, ___index, ___item, method) (( void (*) (List_1_t7289 *, int32_t, KeyValuePair_2_t6186 , const MethodInfo*))List_1_Insert_m47076_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m47077_gshared (List_1_t7289 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m47077(__this, ___collection, method) (( void (*) (List_1_t7289 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m47077_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m47078_gshared (List_1_t7289 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m47078(__this, ___index, ___collection, method) (( void (*) (List_1_t7289 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m47078_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m47079_gshared (List_1_t7289 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m47079(__this, ___index, ___collection, method) (( void (*) (List_1_t7289 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m47079_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m47080_gshared (List_1_t7289 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m47080(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7289 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m47080_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Remove(T)
extern "C" bool List_1_Remove_m47081_gshared (List_1_t7289 * __this, KeyValuePair_2_t6186  ___item, const MethodInfo* method);
#define List_1_Remove_m47081(__this, ___item, method) (( bool (*) (List_1_t7289 *, KeyValuePair_2_t6186 , const MethodInfo*))List_1_Remove_m47081_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m47082_gshared (List_1_t7289 * __this, Predicate_1_t7296 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m47082(__this, ___match, method) (( int32_t (*) (List_1_t7289 *, Predicate_1_t7296 *, const MethodInfo*))List_1_RemoveAll_m47082_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m47083_gshared (List_1_t7289 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m47083(__this, ___index, method) (( void (*) (List_1_t7289 *, int32_t, const MethodInfo*))List_1_RemoveAt_m47083_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m47084_gshared (List_1_t7289 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m47084(__this, ___index, ___count, method) (( void (*) (List_1_t7289 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m47084_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Reverse()
extern "C" void List_1_Reverse_m47085_gshared (List_1_t7289 * __this, const MethodInfo* method);
#define List_1_Reverse_m47085(__this, method) (( void (*) (List_1_t7289 *, const MethodInfo*))List_1_Reverse_m47085_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort()
extern "C" void List_1_Sort_m47086_gshared (List_1_t7289 * __this, const MethodInfo* method);
#define List_1_Sort_m47086(__this, method) (( void (*) (List_1_t7289 *, const MethodInfo*))List_1_Sort_m47086_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m47087_gshared (List_1_t7289 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m47087(__this, ___comparer, method) (( void (*) (List_1_t7289 *, Object_t*, const MethodInfo*))List_1_Sort_m47087_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m47088_gshared (List_1_t7289 * __this, Comparison_1_t7299 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m47088(__this, ___comparison, method) (( void (*) (List_1_t7289 *, Comparison_1_t7299 *, const MethodInfo*))List_1_Sort_m47088_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7288* List_1_ToArray_m47089_gshared (List_1_t7289 * __this, const MethodInfo* method);
#define List_1_ToArray_m47089(__this, method) (( KeyValuePair_2U5BU5D_t7288* (*) (List_1_t7289 *, const MethodInfo*))List_1_ToArray_m47089_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::TrimExcess()
extern "C" void List_1_TrimExcess_m47090_gshared (List_1_t7289 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m47090(__this, method) (( void (*) (List_1_t7289 *, const MethodInfo*))List_1_TrimExcess_m47090_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m47091_gshared (List_1_t7289 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m47091(__this, method) (( int32_t (*) (List_1_t7289 *, const MethodInfo*))List_1_get_Capacity_m47091_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m47092_gshared (List_1_t7289 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m47092(__this, ___value, method) (( void (*) (List_1_t7289 *, int32_t, const MethodInfo*))List_1_set_Capacity_m47092_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Count()
extern "C" int32_t List_1_get_Count_m47093_gshared (List_1_t7289 * __this, const MethodInfo* method);
#define List_1_get_Count_m47093(__this, method) (( int32_t (*) (List_1_t7289 *, const MethodInfo*))List_1_get_Count_m47093_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6186  List_1_get_Item_m47094_gshared (List_1_t7289 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m47094(__this, ___index, method) (( KeyValuePair_2_t6186  (*) (List_1_t7289 *, int32_t, const MethodInfo*))List_1_get_Item_m47094_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m47095_gshared (List_1_t7289 * __this, int32_t ___index, KeyValuePair_2_t6186  ___value, const MethodInfo* method);
#define List_1_set_Item_m47095(__this, ___index, ___value, method) (( void (*) (List_1_t7289 *, int32_t, KeyValuePair_2_t6186 , const MethodInfo*))List_1_set_Item_m47095_gshared)(__this, ___index, ___value, method)
