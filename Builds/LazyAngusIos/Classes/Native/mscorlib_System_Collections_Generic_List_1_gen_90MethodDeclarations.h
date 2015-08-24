#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct List_1_t7292;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerable_1_t7192;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7291;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7193;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ICollection_1_t9364;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ReadOnlyCollection_1_t7295;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Predicate_1_t7299;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IComparer_1_t9365;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Comparison_1_t7302;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_73.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor()
extern "C" void List_1__ctor_m47071_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1__ctor_m47071(__this, method) (( void (*) (List_1_t7292 *, const MethodInfo*))List_1__ctor_m47071_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m47072_gshared (List_1_t7292 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m47072(__this, ___collection, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1__ctor_m47072_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m47073_gshared (List_1_t7292 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m47073(__this, ___capacity, method) (( void (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1__ctor_m47073_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m47074_gshared (List_1_t7292 * __this, KeyValuePair_2U5BU5D_t7291* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m47074(__this, ___data, ___size, method) (( void (*) (List_1_t7292 *, KeyValuePair_2U5BU5D_t7291*, int32_t, const MethodInfo*))List_1__ctor_m47074_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.cctor()
extern "C" void List_1__cctor_m47075_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m47075(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m47075_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47076_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47076(__this, method) (( Object_t* (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47076_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m47077_gshared (List_1_t7292 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m47077(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7292 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m47077_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m47078_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m47078(__this, method) (( Object_t * (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m47078_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m47079_gshared (List_1_t7292 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m47079(__this, ___item, method) (( int32_t (*) (List_1_t7292 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m47079_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m47080_gshared (List_1_t7292 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m47080(__this, ___item, method) (( bool (*) (List_1_t7292 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m47080_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m47081_gshared (List_1_t7292 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m47081(__this, ___item, method) (( int32_t (*) (List_1_t7292 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m47081_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m47082_gshared (List_1_t7292 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m47082(__this, ___index, ___item, method) (( void (*) (List_1_t7292 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m47082_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m47083_gshared (List_1_t7292 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m47083(__this, ___item, method) (( void (*) (List_1_t7292 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m47083_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47084_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47084(__this, method) (( bool (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47084_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m47085_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m47085(__this, method) (( bool (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m47085_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m47086_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m47086(__this, method) (( Object_t * (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m47086_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m47087_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m47087(__this, method) (( bool (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m47087_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m47088_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m47088(__this, method) (( bool (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m47088_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m47089_gshared (List_1_t7292 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m47089(__this, ___index, method) (( Object_t * (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m47089_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m47090_gshared (List_1_t7292 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m47090(__this, ___index, ___value, method) (( void (*) (List_1_t7292 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m47090_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Add(T)
extern "C" void List_1_Add_m47091_gshared (List_1_t7292 * __this, KeyValuePair_2_t6189  ___item, const MethodInfo* method);
#define List_1_Add_m47091(__this, ___item, method) (( void (*) (List_1_t7292 *, KeyValuePair_2_t6189 , const MethodInfo*))List_1_Add_m47091_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m47092_gshared (List_1_t7292 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m47092(__this, ___newCount, method) (( void (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m47092_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m47093_gshared (List_1_t7292 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m47093(__this, ___idx, ___count, method) (( void (*) (List_1_t7292 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m47093_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m47094_gshared (List_1_t7292 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m47094(__this, ___collection, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1_AddCollection_m47094_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m47095_gshared (List_1_t7292 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m47095(__this, ___enumerable, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m47095_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m47096_gshared (List_1_t7292 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m47096(__this, ___collection, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1_AddRange_m47096_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7295 * List_1_AsReadOnly_m47097_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m47097(__this, method) (( ReadOnlyCollection_1_t7295 * (*) (List_1_t7292 *, const MethodInfo*))List_1_AsReadOnly_m47097_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Clear()
extern "C" void List_1_Clear_m47098_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_Clear_m47098(__this, method) (( void (*) (List_1_t7292 *, const MethodInfo*))List_1_Clear_m47098_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Contains(T)
extern "C" bool List_1_Contains_m47099_gshared (List_1_t7292 * __this, KeyValuePair_2_t6189  ___item, const MethodInfo* method);
#define List_1_Contains_m47099(__this, ___item, method) (( bool (*) (List_1_t7292 *, KeyValuePair_2_t6189 , const MethodInfo*))List_1_Contains_m47099_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m47100_gshared (List_1_t7292 * __this, KeyValuePair_2U5BU5D_t7291* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m47100(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7292 *, KeyValuePair_2U5BU5D_t7291*, int32_t, const MethodInfo*))List_1_CopyTo_m47100_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6189  List_1_Find_m47101_gshared (List_1_t7292 * __this, Predicate_1_t7299 * ___match, const MethodInfo* method);
#define List_1_Find_m47101(__this, ___match, method) (( KeyValuePair_2_t6189  (*) (List_1_t7292 *, Predicate_1_t7299 *, const MethodInfo*))List_1_Find_m47101_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m47102_gshared (Object_t * __this /* static, unused */, Predicate_1_t7299 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m47102(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7299 *, const MethodInfo*))List_1_CheckMatch_m47102_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m47103_gshared (List_1_t7292 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7299 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m47103(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7292 *, int32_t, int32_t, Predicate_1_t7299 *, const MethodInfo*))List_1_GetIndex_m47103_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetEnumerator()
extern "C" Enumerator_t7293  List_1_GetEnumerator_m47104_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m47104(__this, method) (( Enumerator_t7293  (*) (List_1_t7292 *, const MethodInfo*))List_1_GetEnumerator_m47104_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7292 * List_1_GetRange_m47105_gshared (List_1_t7292 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m47105(__this, ___index, ___count, method) (( List_1_t7292 * (*) (List_1_t7292 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m47105_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m47106_gshared (List_1_t7292 * __this, KeyValuePair_2_t6189  ___item, const MethodInfo* method);
#define List_1_IndexOf_m47106(__this, ___item, method) (( int32_t (*) (List_1_t7292 *, KeyValuePair_2_t6189 , const MethodInfo*))List_1_IndexOf_m47106_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m47107_gshared (List_1_t7292 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m47107(__this, ___start, ___delta, method) (( void (*) (List_1_t7292 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m47107_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m47108_gshared (List_1_t7292 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m47108(__this, ___index, method) (( void (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_CheckIndex_m47108_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m47109_gshared (List_1_t7292 * __this, int32_t ___index, KeyValuePair_2_t6189  ___item, const MethodInfo* method);
#define List_1_Insert_m47109(__this, ___index, ___item, method) (( void (*) (List_1_t7292 *, int32_t, KeyValuePair_2_t6189 , const MethodInfo*))List_1_Insert_m47109_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m47110_gshared (List_1_t7292 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m47110(__this, ___collection, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m47110_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m47111_gshared (List_1_t7292 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m47111(__this, ___index, ___collection, method) (( void (*) (List_1_t7292 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m47111_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m47112_gshared (List_1_t7292 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m47112(__this, ___index, ___collection, method) (( void (*) (List_1_t7292 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m47112_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m47113_gshared (List_1_t7292 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m47113(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7292 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m47113_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Remove(T)
extern "C" bool List_1_Remove_m47114_gshared (List_1_t7292 * __this, KeyValuePair_2_t6189  ___item, const MethodInfo* method);
#define List_1_Remove_m47114(__this, ___item, method) (( bool (*) (List_1_t7292 *, KeyValuePair_2_t6189 , const MethodInfo*))List_1_Remove_m47114_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m47115_gshared (List_1_t7292 * __this, Predicate_1_t7299 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m47115(__this, ___match, method) (( int32_t (*) (List_1_t7292 *, Predicate_1_t7299 *, const MethodInfo*))List_1_RemoveAll_m47115_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m47116_gshared (List_1_t7292 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m47116(__this, ___index, method) (( void (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_RemoveAt_m47116_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m47117_gshared (List_1_t7292 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m47117(__this, ___index, ___count, method) (( void (*) (List_1_t7292 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m47117_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Reverse()
extern "C" void List_1_Reverse_m47118_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_Reverse_m47118(__this, method) (( void (*) (List_1_t7292 *, const MethodInfo*))List_1_Reverse_m47118_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort()
extern "C" void List_1_Sort_m47119_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_Sort_m47119(__this, method) (( void (*) (List_1_t7292 *, const MethodInfo*))List_1_Sort_m47119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m47120_gshared (List_1_t7292 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m47120(__this, ___comparer, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1_Sort_m47120_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m47121_gshared (List_1_t7292 * __this, Comparison_1_t7302 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m47121(__this, ___comparison, method) (( void (*) (List_1_t7292 *, Comparison_1_t7302 *, const MethodInfo*))List_1_Sort_m47121_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7291* List_1_ToArray_m47122_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_ToArray_m47122(__this, method) (( KeyValuePair_2U5BU5D_t7291* (*) (List_1_t7292 *, const MethodInfo*))List_1_ToArray_m47122_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::TrimExcess()
extern "C" void List_1_TrimExcess_m47123_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m47123(__this, method) (( void (*) (List_1_t7292 *, const MethodInfo*))List_1_TrimExcess_m47123_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m47124_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m47124(__this, method) (( int32_t (*) (List_1_t7292 *, const MethodInfo*))List_1_get_Capacity_m47124_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m47125_gshared (List_1_t7292 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m47125(__this, ___value, method) (( void (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_set_Capacity_m47125_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Count()
extern "C" int32_t List_1_get_Count_m47126_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_get_Count_m47126(__this, method) (( int32_t (*) (List_1_t7292 *, const MethodInfo*))List_1_get_Count_m47126_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6189  List_1_get_Item_m47127_gshared (List_1_t7292 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m47127(__this, ___index, method) (( KeyValuePair_2_t6189  (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_get_Item_m47127_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m47128_gshared (List_1_t7292 * __this, int32_t ___index, KeyValuePair_2_t6189  ___value, const MethodInfo* method);
#define List_1_set_Item_m47128(__this, ___index, ___value, method) (( void (*) (List_1_t7292 *, int32_t, KeyValuePair_2_t6189 , const MethodInfo*))List_1_set_Item_m47128_gshared)(__this, ___index, ___value, method)
