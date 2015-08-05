#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct List_1_t7682;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IEnumerable_1_t7188;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7681;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IEnumerator_1_t7189;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct ICollection_1_t9299;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct ReadOnlyCollection_1_t7685;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Predicate_1_t7689;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IComparer_1_t9300;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Comparison_1_t7692;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_83.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor()
extern "C" void List_1__ctor_m52009_gshared (List_1_t7682 * __this, const MethodInfo* method);
#define List_1__ctor_m52009(__this, method) (( void (*) (List_1_t7682 *, const MethodInfo*))List_1__ctor_m52009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m52010_gshared (List_1_t7682 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m52010(__this, ___collection, method) (( void (*) (List_1_t7682 *, Object_t*, const MethodInfo*))List_1__ctor_m52010_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m52011_gshared (List_1_t7682 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m52011(__this, ___capacity, method) (( void (*) (List_1_t7682 *, int32_t, const MethodInfo*))List_1__ctor_m52011_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m52012_gshared (List_1_t7682 * __this, KeyValuePair_2U5BU5D_t7681* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m52012(__this, ___data, ___size, method) (( void (*) (List_1_t7682 *, KeyValuePair_2U5BU5D_t7681*, int32_t, const MethodInfo*))List_1__ctor_m52012_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.cctor()
extern "C" void List_1__cctor_m52013_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m52013(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m52013_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52014_gshared (List_1_t7682 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52014(__this, method) (( Object_t* (*) (List_1_t7682 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52014_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m52015_gshared (List_1_t7682 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m52015(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7682 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m52015_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m52016_gshared (List_1_t7682 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52016(__this, method) (( Object_t * (*) (List_1_t7682 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m52016_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m52017_gshared (List_1_t7682 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m52017(__this, ___item, method) (( int32_t (*) (List_1_t7682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m52017_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m52018_gshared (List_1_t7682 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m52018(__this, ___item, method) (( bool (*) (List_1_t7682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m52018_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m52019_gshared (List_1_t7682 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m52019(__this, ___item, method) (( int32_t (*) (List_1_t7682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m52019_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m52020_gshared (List_1_t7682 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m52020(__this, ___index, ___item, method) (( void (*) (List_1_t7682 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m52020_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m52021_gshared (List_1_t7682 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m52021(__this, ___item, method) (( void (*) (List_1_t7682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m52021_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52022_gshared (List_1_t7682 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52022(__this, method) (( bool (*) (List_1_t7682 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52022_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m52023_gshared (List_1_t7682 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52023(__this, method) (( bool (*) (List_1_t7682 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m52023_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m52024_gshared (List_1_t7682 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m52024(__this, method) (( Object_t * (*) (List_1_t7682 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m52024_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m52025_gshared (List_1_t7682 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m52025(__this, method) (( bool (*) (List_1_t7682 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m52025_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m52026_gshared (List_1_t7682 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m52026(__this, method) (( bool (*) (List_1_t7682 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m52026_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m52027_gshared (List_1_t7682 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m52027(__this, ___index, method) (( Object_t * (*) (List_1_t7682 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m52027_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m52028_gshared (List_1_t7682 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m52028(__this, ___index, ___value, method) (( void (*) (List_1_t7682 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m52028_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Add(T)
extern "C" void List_1_Add_m52029_gshared (List_1_t7682 * __this, KeyValuePair_2_t7184  ___item, const MethodInfo* method);
#define List_1_Add_m52029(__this, ___item, method) (( void (*) (List_1_t7682 *, KeyValuePair_2_t7184 , const MethodInfo*))List_1_Add_m52029_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m52030_gshared (List_1_t7682 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m52030(__this, ___newCount, method) (( void (*) (List_1_t7682 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m52030_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m52031_gshared (List_1_t7682 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m52031(__this, ___idx, ___count, method) (( void (*) (List_1_t7682 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m52031_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m52032_gshared (List_1_t7682 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m52032(__this, ___collection, method) (( void (*) (List_1_t7682 *, Object_t*, const MethodInfo*))List_1_AddCollection_m52032_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m52033_gshared (List_1_t7682 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m52033(__this, ___enumerable, method) (( void (*) (List_1_t7682 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m52033_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m52034_gshared (List_1_t7682 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m52034(__this, ___collection, method) (( void (*) (List_1_t7682 *, Object_t*, const MethodInfo*))List_1_AddRange_m52034_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7685 * List_1_AsReadOnly_m52035_gshared (List_1_t7682 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m52035(__this, method) (( ReadOnlyCollection_1_t7685 * (*) (List_1_t7682 *, const MethodInfo*))List_1_AsReadOnly_m52035_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Clear()
extern "C" void List_1_Clear_m52036_gshared (List_1_t7682 * __this, const MethodInfo* method);
#define List_1_Clear_m52036(__this, method) (( void (*) (List_1_t7682 *, const MethodInfo*))List_1_Clear_m52036_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Contains(T)
extern "C" bool List_1_Contains_m52037_gshared (List_1_t7682 * __this, KeyValuePair_2_t7184  ___item, const MethodInfo* method);
#define List_1_Contains_m52037(__this, ___item, method) (( bool (*) (List_1_t7682 *, KeyValuePair_2_t7184 , const MethodInfo*))List_1_Contains_m52037_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m52038_gshared (List_1_t7682 * __this, KeyValuePair_2U5BU5D_t7681* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m52038(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7682 *, KeyValuePair_2U5BU5D_t7681*, int32_t, const MethodInfo*))List_1_CopyTo_m52038_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7184  List_1_Find_m52039_gshared (List_1_t7682 * __this, Predicate_1_t7689 * ___match, const MethodInfo* method);
#define List_1_Find_m52039(__this, ___match, method) (( KeyValuePair_2_t7184  (*) (List_1_t7682 *, Predicate_1_t7689 *, const MethodInfo*))List_1_Find_m52039_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m52040_gshared (Object_t * __this /* static, unused */, Predicate_1_t7689 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m52040(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7689 *, const MethodInfo*))List_1_CheckMatch_m52040_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m52041_gshared (List_1_t7682 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7689 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m52041(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7682 *, int32_t, int32_t, Predicate_1_t7689 *, const MethodInfo*))List_1_GetIndex_m52041_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetEnumerator()
extern "C" Enumerator_t7683  List_1_GetEnumerator_m52042_gshared (List_1_t7682 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m52042(__this, method) (( Enumerator_t7683  (*) (List_1_t7682 *, const MethodInfo*))List_1_GetEnumerator_m52042_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7682 * List_1_GetRange_m52043_gshared (List_1_t7682 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m52043(__this, ___index, ___count, method) (( List_1_t7682 * (*) (List_1_t7682 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m52043_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m52044_gshared (List_1_t7682 * __this, KeyValuePair_2_t7184  ___item, const MethodInfo* method);
#define List_1_IndexOf_m52044(__this, ___item, method) (( int32_t (*) (List_1_t7682 *, KeyValuePair_2_t7184 , const MethodInfo*))List_1_IndexOf_m52044_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m52045_gshared (List_1_t7682 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m52045(__this, ___start, ___delta, method) (( void (*) (List_1_t7682 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m52045_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m52046_gshared (List_1_t7682 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m52046(__this, ___index, method) (( void (*) (List_1_t7682 *, int32_t, const MethodInfo*))List_1_CheckIndex_m52046_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m52047_gshared (List_1_t7682 * __this, int32_t ___index, KeyValuePair_2_t7184  ___item, const MethodInfo* method);
#define List_1_Insert_m52047(__this, ___index, ___item, method) (( void (*) (List_1_t7682 *, int32_t, KeyValuePair_2_t7184 , const MethodInfo*))List_1_Insert_m52047_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m52048_gshared (List_1_t7682 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m52048(__this, ___collection, method) (( void (*) (List_1_t7682 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m52048_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m52049_gshared (List_1_t7682 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m52049(__this, ___index, ___collection, method) (( void (*) (List_1_t7682 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m52049_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m52050_gshared (List_1_t7682 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m52050(__this, ___index, ___collection, method) (( void (*) (List_1_t7682 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m52050_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m52051_gshared (List_1_t7682 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m52051(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7682 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m52051_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Remove(T)
extern "C" bool List_1_Remove_m52052_gshared (List_1_t7682 * __this, KeyValuePair_2_t7184  ___item, const MethodInfo* method);
#define List_1_Remove_m52052(__this, ___item, method) (( bool (*) (List_1_t7682 *, KeyValuePair_2_t7184 , const MethodInfo*))List_1_Remove_m52052_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m52053_gshared (List_1_t7682 * __this, Predicate_1_t7689 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m52053(__this, ___match, method) (( int32_t (*) (List_1_t7682 *, Predicate_1_t7689 *, const MethodInfo*))List_1_RemoveAll_m52053_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m52054_gshared (List_1_t7682 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m52054(__this, ___index, method) (( void (*) (List_1_t7682 *, int32_t, const MethodInfo*))List_1_RemoveAt_m52054_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m52055_gshared (List_1_t7682 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m52055(__this, ___index, ___count, method) (( void (*) (List_1_t7682 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m52055_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Reverse()
extern "C" void List_1_Reverse_m52056_gshared (List_1_t7682 * __this, const MethodInfo* method);
#define List_1_Reverse_m52056(__this, method) (( void (*) (List_1_t7682 *, const MethodInfo*))List_1_Reverse_m52056_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort()
extern "C" void List_1_Sort_m52057_gshared (List_1_t7682 * __this, const MethodInfo* method);
#define List_1_Sort_m52057(__this, method) (( void (*) (List_1_t7682 *, const MethodInfo*))List_1_Sort_m52057_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m52058_gshared (List_1_t7682 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m52058(__this, ___comparer, method) (( void (*) (List_1_t7682 *, Object_t*, const MethodInfo*))List_1_Sort_m52058_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m52059_gshared (List_1_t7682 * __this, Comparison_1_t7692 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m52059(__this, ___comparison, method) (( void (*) (List_1_t7682 *, Comparison_1_t7692 *, const MethodInfo*))List_1_Sort_m52059_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7681* List_1_ToArray_m52060_gshared (List_1_t7682 * __this, const MethodInfo* method);
#define List_1_ToArray_m52060(__this, method) (( KeyValuePair_2U5BU5D_t7681* (*) (List_1_t7682 *, const MethodInfo*))List_1_ToArray_m52060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::TrimExcess()
extern "C" void List_1_TrimExcess_m52061_gshared (List_1_t7682 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m52061(__this, method) (( void (*) (List_1_t7682 *, const MethodInfo*))List_1_TrimExcess_m52061_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m52062_gshared (List_1_t7682 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m52062(__this, method) (( int32_t (*) (List_1_t7682 *, const MethodInfo*))List_1_get_Capacity_m52062_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m52063_gshared (List_1_t7682 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m52063(__this, ___value, method) (( void (*) (List_1_t7682 *, int32_t, const MethodInfo*))List_1_set_Capacity_m52063_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Count()
extern "C" int32_t List_1_get_Count_m52064_gshared (List_1_t7682 * __this, const MethodInfo* method);
#define List_1_get_Count_m52064(__this, method) (( int32_t (*) (List_1_t7682 *, const MethodInfo*))List_1_get_Count_m52064_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7184  List_1_get_Item_m52065_gshared (List_1_t7682 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m52065(__this, ___index, method) (( KeyValuePair_2_t7184  (*) (List_1_t7682 *, int32_t, const MethodInfo*))List_1_get_Item_m52065_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m52066_gshared (List_1_t7682 * __this, int32_t ___index, KeyValuePair_2_t7184  ___value, const MethodInfo* method);
#define List_1_set_Item_m52066(__this, ___index, ___value, method) (( void (*) (List_1_t7682 *, int32_t, KeyValuePair_2_t7184 , const MethodInfo*))List_1_set_Item_m52066_gshared)(__this, ___index, ___value, method)
