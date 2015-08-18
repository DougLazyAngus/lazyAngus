#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct List_1_t7362;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerable_1_t7196;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7361;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerator_1_t7197;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct ICollection_1_t9358;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct ReadOnlyCollection_1_t7365;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Predicate_1_t7369;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IComparer_1_t9359;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Comparison_1_t7372;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_74.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor()
extern "C" void List_1__ctor_m48016_gshared (List_1_t7362 * __this, const MethodInfo* method);
#define List_1__ctor_m48016(__this, method) (( void (*) (List_1_t7362 *, const MethodInfo*))List_1__ctor_m48016_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m48017_gshared (List_1_t7362 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m48017(__this, ___collection, method) (( void (*) (List_1_t7362 *, Object_t*, const MethodInfo*))List_1__ctor_m48017_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m48018_gshared (List_1_t7362 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m48018(__this, ___capacity, method) (( void (*) (List_1_t7362 *, int32_t, const MethodInfo*))List_1__ctor_m48018_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m48019_gshared (List_1_t7362 * __this, KeyValuePair_2U5BU5D_t7361* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m48019(__this, ___data, ___size, method) (( void (*) (List_1_t7362 *, KeyValuePair_2U5BU5D_t7361*, int32_t, const MethodInfo*))List_1__ctor_m48019_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.cctor()
extern "C" void List_1__cctor_m48020_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m48020(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48020_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48021_gshared (List_1_t7362 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48021(__this, method) (( Object_t* (*) (List_1_t7362 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48021_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m48022_gshared (List_1_t7362 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m48022(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7362 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48022_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m48023_gshared (List_1_t7362 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m48023(__this, method) (( Object_t * (*) (List_1_t7362 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48023_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m48024_gshared (List_1_t7362 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m48024(__this, ___item, method) (( int32_t (*) (List_1_t7362 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48024_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m48025_gshared (List_1_t7362 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m48025(__this, ___item, method) (( bool (*) (List_1_t7362 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48025_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m48026_gshared (List_1_t7362 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m48026(__this, ___item, method) (( int32_t (*) (List_1_t7362 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48026_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m48027_gshared (List_1_t7362 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m48027(__this, ___index, ___item, method) (( void (*) (List_1_t7362 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48027_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m48028_gshared (List_1_t7362 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m48028(__this, ___item, method) (( void (*) (List_1_t7362 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48028_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48029_gshared (List_1_t7362 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48029(__this, method) (( bool (*) (List_1_t7362 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48029_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m48030_gshared (List_1_t7362 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m48030(__this, method) (( bool (*) (List_1_t7362 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48030_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m48031_gshared (List_1_t7362 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m48031(__this, method) (( Object_t * (*) (List_1_t7362 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48031_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m48032_gshared (List_1_t7362 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m48032(__this, method) (( bool (*) (List_1_t7362 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48032_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m48033_gshared (List_1_t7362 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m48033(__this, method) (( bool (*) (List_1_t7362 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48033_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m48034_gshared (List_1_t7362 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m48034(__this, ___index, method) (( Object_t * (*) (List_1_t7362 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48034_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m48035_gshared (List_1_t7362 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m48035(__this, ___index, ___value, method) (( void (*) (List_1_t7362 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48035_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Add(T)
extern "C" void List_1_Add_m48036_gshared (List_1_t7362 * __this, KeyValuePair_2_t7192  ___item, const MethodInfo* method);
#define List_1_Add_m48036(__this, ___item, method) (( void (*) (List_1_t7362 *, KeyValuePair_2_t7192 , const MethodInfo*))List_1_Add_m48036_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m48037_gshared (List_1_t7362 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m48037(__this, ___newCount, method) (( void (*) (List_1_t7362 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48037_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m48038_gshared (List_1_t7362 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m48038(__this, ___idx, ___count, method) (( void (*) (List_1_t7362 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48038_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m48039_gshared (List_1_t7362 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m48039(__this, ___collection, method) (( void (*) (List_1_t7362 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48039_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m48040_gshared (List_1_t7362 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m48040(__this, ___enumerable, method) (( void (*) (List_1_t7362 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48040_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m48041_gshared (List_1_t7362 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m48041(__this, ___collection, method) (( void (*) (List_1_t7362 *, Object_t*, const MethodInfo*))List_1_AddRange_m48041_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7365 * List_1_AsReadOnly_m48042_gshared (List_1_t7362 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m48042(__this, method) (( ReadOnlyCollection_1_t7365 * (*) (List_1_t7362 *, const MethodInfo*))List_1_AsReadOnly_m48042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Clear()
extern "C" void List_1_Clear_m48043_gshared (List_1_t7362 * __this, const MethodInfo* method);
#define List_1_Clear_m48043(__this, method) (( void (*) (List_1_t7362 *, const MethodInfo*))List_1_Clear_m48043_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Contains(T)
extern "C" bool List_1_Contains_m48044_gshared (List_1_t7362 * __this, KeyValuePair_2_t7192  ___item, const MethodInfo* method);
#define List_1_Contains_m48044(__this, ___item, method) (( bool (*) (List_1_t7362 *, KeyValuePair_2_t7192 , const MethodInfo*))List_1_Contains_m48044_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m48045_gshared (List_1_t7362 * __this, KeyValuePair_2U5BU5D_t7361* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m48045(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7362 *, KeyValuePair_2U5BU5D_t7361*, int32_t, const MethodInfo*))List_1_CopyTo_m48045_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7192  List_1_Find_m48046_gshared (List_1_t7362 * __this, Predicate_1_t7369 * ___match, const MethodInfo* method);
#define List_1_Find_m48046(__this, ___match, method) (( KeyValuePair_2_t7192  (*) (List_1_t7362 *, Predicate_1_t7369 *, const MethodInfo*))List_1_Find_m48046_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m48047_gshared (Object_t * __this /* static, unused */, Predicate_1_t7369 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m48047(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7369 *, const MethodInfo*))List_1_CheckMatch_m48047_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m48048_gshared (List_1_t7362 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7369 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m48048(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7362 *, int32_t, int32_t, Predicate_1_t7369 *, const MethodInfo*))List_1_GetIndex_m48048_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetEnumerator()
extern "C" Enumerator_t7363  List_1_GetEnumerator_m48049_gshared (List_1_t7362 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m48049(__this, method) (( Enumerator_t7363  (*) (List_1_t7362 *, const MethodInfo*))List_1_GetEnumerator_m48049_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7362 * List_1_GetRange_m48050_gshared (List_1_t7362 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m48050(__this, ___index, ___count, method) (( List_1_t7362 * (*) (List_1_t7362 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48050_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m48051_gshared (List_1_t7362 * __this, KeyValuePair_2_t7192  ___item, const MethodInfo* method);
#define List_1_IndexOf_m48051(__this, ___item, method) (( int32_t (*) (List_1_t7362 *, KeyValuePair_2_t7192 , const MethodInfo*))List_1_IndexOf_m48051_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m48052_gshared (List_1_t7362 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m48052(__this, ___start, ___delta, method) (( void (*) (List_1_t7362 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48052_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m48053_gshared (List_1_t7362 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m48053(__this, ___index, method) (( void (*) (List_1_t7362 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48053_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m48054_gshared (List_1_t7362 * __this, int32_t ___index, KeyValuePair_2_t7192  ___item, const MethodInfo* method);
#define List_1_Insert_m48054(__this, ___index, ___item, method) (( void (*) (List_1_t7362 *, int32_t, KeyValuePair_2_t7192 , const MethodInfo*))List_1_Insert_m48054_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m48055_gshared (List_1_t7362 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m48055(__this, ___collection, method) (( void (*) (List_1_t7362 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48055_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m48056_gshared (List_1_t7362 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m48056(__this, ___index, ___collection, method) (( void (*) (List_1_t7362 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48056_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m48057_gshared (List_1_t7362 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m48057(__this, ___index, ___collection, method) (( void (*) (List_1_t7362 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48057_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m48058_gshared (List_1_t7362 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m48058(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7362 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48058_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Remove(T)
extern "C" bool List_1_Remove_m48059_gshared (List_1_t7362 * __this, KeyValuePair_2_t7192  ___item, const MethodInfo* method);
#define List_1_Remove_m48059(__this, ___item, method) (( bool (*) (List_1_t7362 *, KeyValuePair_2_t7192 , const MethodInfo*))List_1_Remove_m48059_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m48060_gshared (List_1_t7362 * __this, Predicate_1_t7369 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m48060(__this, ___match, method) (( int32_t (*) (List_1_t7362 *, Predicate_1_t7369 *, const MethodInfo*))List_1_RemoveAll_m48060_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m48061_gshared (List_1_t7362 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m48061(__this, ___index, method) (( void (*) (List_1_t7362 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48061_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m48062_gshared (List_1_t7362 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m48062(__this, ___index, ___count, method) (( void (*) (List_1_t7362 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48062_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Reverse()
extern "C" void List_1_Reverse_m48063_gshared (List_1_t7362 * __this, const MethodInfo* method);
#define List_1_Reverse_m48063(__this, method) (( void (*) (List_1_t7362 *, const MethodInfo*))List_1_Reverse_m48063_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort()
extern "C" void List_1_Sort_m48064_gshared (List_1_t7362 * __this, const MethodInfo* method);
#define List_1_Sort_m48064(__this, method) (( void (*) (List_1_t7362 *, const MethodInfo*))List_1_Sort_m48064_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m48065_gshared (List_1_t7362 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m48065(__this, ___comparer, method) (( void (*) (List_1_t7362 *, Object_t*, const MethodInfo*))List_1_Sort_m48065_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m48066_gshared (List_1_t7362 * __this, Comparison_1_t7372 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m48066(__this, ___comparison, method) (( void (*) (List_1_t7362 *, Comparison_1_t7372 *, const MethodInfo*))List_1_Sort_m48066_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7361* List_1_ToArray_m48067_gshared (List_1_t7362 * __this, const MethodInfo* method);
#define List_1_ToArray_m48067(__this, method) (( KeyValuePair_2U5BU5D_t7361* (*) (List_1_t7362 *, const MethodInfo*))List_1_ToArray_m48067_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::TrimExcess()
extern "C" void List_1_TrimExcess_m48068_gshared (List_1_t7362 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m48068(__this, method) (( void (*) (List_1_t7362 *, const MethodInfo*))List_1_TrimExcess_m48068_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m48069_gshared (List_1_t7362 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m48069(__this, method) (( int32_t (*) (List_1_t7362 *, const MethodInfo*))List_1_get_Capacity_m48069_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m48070_gshared (List_1_t7362 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m48070(__this, ___value, method) (( void (*) (List_1_t7362 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48070_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Count()
extern "C" int32_t List_1_get_Count_m48071_gshared (List_1_t7362 * __this, const MethodInfo* method);
#define List_1_get_Count_m48071(__this, method) (( int32_t (*) (List_1_t7362 *, const MethodInfo*))List_1_get_Count_m48071_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7192  List_1_get_Item_m48072_gshared (List_1_t7362 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m48072(__this, ___index, method) (( KeyValuePair_2_t7192  (*) (List_1_t7362 *, int32_t, const MethodInfo*))List_1_get_Item_m48072_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m48073_gshared (List_1_t7362 * __this, int32_t ___index, KeyValuePair_2_t7192  ___value, const MethodInfo* method);
#define List_1_set_Item_m48073(__this, ___index, ___value, method) (( void (*) (List_1_t7362 *, int32_t, KeyValuePair_2_t7192 , const MethodInfo*))List_1_set_Item_m48073_gshared)(__this, ___index, ___value, method)
