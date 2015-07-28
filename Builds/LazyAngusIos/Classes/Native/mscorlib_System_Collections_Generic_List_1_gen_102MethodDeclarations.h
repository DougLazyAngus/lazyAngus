#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct List_1_t7749;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerable_1_t7187;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t7748;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t7188;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ICollection_1_t9296;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ReadOnlyCollection_1_t7752;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Predicate_1_t7756;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IComparer_1_t9297;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Comparison_1_t7759;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_85.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor()
extern "C" void List_1__ctor_m53023_gshared (List_1_t7749 * __this, const MethodInfo* method);
#define List_1__ctor_m53023(__this, method) (( void (*) (List_1_t7749 *, const MethodInfo*))List_1__ctor_m53023_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m53024_gshared (List_1_t7749 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m53024(__this, ___collection, method) (( void (*) (List_1_t7749 *, Object_t*, const MethodInfo*))List_1__ctor_m53024_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m53025_gshared (List_1_t7749 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m53025(__this, ___capacity, method) (( void (*) (List_1_t7749 *, int32_t, const MethodInfo*))List_1__ctor_m53025_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m53026_gshared (List_1_t7749 * __this, KeyValuePair_2U5BU5D_t7748* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m53026(__this, ___data, ___size, method) (( void (*) (List_1_t7749 *, KeyValuePair_2U5BU5D_t7748*, int32_t, const MethodInfo*))List_1__ctor_m53026_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.cctor()
extern "C" void List_1__cctor_m53027_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m53027(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m53027_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53028_gshared (List_1_t7749 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53028(__this, method) (( Object_t* (*) (List_1_t7749 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53028_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m53029_gshared (List_1_t7749 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m53029(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7749 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m53029_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m53030_gshared (List_1_t7749 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m53030(__this, method) (( Object_t * (*) (List_1_t7749 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m53030_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m53031_gshared (List_1_t7749 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m53031(__this, ___item, method) (( int32_t (*) (List_1_t7749 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m53031_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m53032_gshared (List_1_t7749 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m53032(__this, ___item, method) (( bool (*) (List_1_t7749 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m53032_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m53033_gshared (List_1_t7749 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m53033(__this, ___item, method) (( int32_t (*) (List_1_t7749 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m53033_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m53034_gshared (List_1_t7749 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m53034(__this, ___index, ___item, method) (( void (*) (List_1_t7749 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m53034_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m53035_gshared (List_1_t7749 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m53035(__this, ___item, method) (( void (*) (List_1_t7749 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m53035_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53036_gshared (List_1_t7749 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53036(__this, method) (( bool (*) (List_1_t7749 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53036_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m53037_gshared (List_1_t7749 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m53037(__this, method) (( bool (*) (List_1_t7749 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m53037_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m53038_gshared (List_1_t7749 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m53038(__this, method) (( Object_t * (*) (List_1_t7749 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m53038_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m53039_gshared (List_1_t7749 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m53039(__this, method) (( bool (*) (List_1_t7749 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m53039_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m53040_gshared (List_1_t7749 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m53040(__this, method) (( bool (*) (List_1_t7749 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m53040_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m53041_gshared (List_1_t7749 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m53041(__this, ___index, method) (( Object_t * (*) (List_1_t7749 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m53041_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m53042_gshared (List_1_t7749 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m53042(__this, ___index, ___value, method) (( void (*) (List_1_t7749 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m53042_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Add(T)
extern "C" void List_1_Add_m53043_gshared (List_1_t7749 * __this, KeyValuePair_2_t6925  ___item, const MethodInfo* method);
#define List_1_Add_m53043(__this, ___item, method) (( void (*) (List_1_t7749 *, KeyValuePair_2_t6925 , const MethodInfo*))List_1_Add_m53043_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m53044_gshared (List_1_t7749 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m53044(__this, ___newCount, method) (( void (*) (List_1_t7749 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m53044_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m53045_gshared (List_1_t7749 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m53045(__this, ___idx, ___count, method) (( void (*) (List_1_t7749 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m53045_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m53046_gshared (List_1_t7749 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m53046(__this, ___collection, method) (( void (*) (List_1_t7749 *, Object_t*, const MethodInfo*))List_1_AddCollection_m53046_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m53047_gshared (List_1_t7749 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m53047(__this, ___enumerable, method) (( void (*) (List_1_t7749 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m53047_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m53048_gshared (List_1_t7749 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m53048(__this, ___collection, method) (( void (*) (List_1_t7749 *, Object_t*, const MethodInfo*))List_1_AddRange_m53048_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7752 * List_1_AsReadOnly_m53049_gshared (List_1_t7749 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m53049(__this, method) (( ReadOnlyCollection_1_t7752 * (*) (List_1_t7749 *, const MethodInfo*))List_1_AsReadOnly_m53049_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Clear()
extern "C" void List_1_Clear_m53050_gshared (List_1_t7749 * __this, const MethodInfo* method);
#define List_1_Clear_m53050(__this, method) (( void (*) (List_1_t7749 *, const MethodInfo*))List_1_Clear_m53050_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Contains(T)
extern "C" bool List_1_Contains_m53051_gshared (List_1_t7749 * __this, KeyValuePair_2_t6925  ___item, const MethodInfo* method);
#define List_1_Contains_m53051(__this, ___item, method) (( bool (*) (List_1_t7749 *, KeyValuePair_2_t6925 , const MethodInfo*))List_1_Contains_m53051_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m53052_gshared (List_1_t7749 * __this, KeyValuePair_2U5BU5D_t7748* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m53052(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7749 *, KeyValuePair_2U5BU5D_t7748*, int32_t, const MethodInfo*))List_1_CopyTo_m53052_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6925  List_1_Find_m53053_gshared (List_1_t7749 * __this, Predicate_1_t7756 * ___match, const MethodInfo* method);
#define List_1_Find_m53053(__this, ___match, method) (( KeyValuePair_2_t6925  (*) (List_1_t7749 *, Predicate_1_t7756 *, const MethodInfo*))List_1_Find_m53053_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m53054_gshared (Object_t * __this /* static, unused */, Predicate_1_t7756 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m53054(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7756 *, const MethodInfo*))List_1_CheckMatch_m53054_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m53055_gshared (List_1_t7749 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7756 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m53055(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7749 *, int32_t, int32_t, Predicate_1_t7756 *, const MethodInfo*))List_1_GetIndex_m53055_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetEnumerator()
extern "C" Enumerator_t7750  List_1_GetEnumerator_m53056_gshared (List_1_t7749 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m53056(__this, method) (( Enumerator_t7750  (*) (List_1_t7749 *, const MethodInfo*))List_1_GetEnumerator_m53056_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7749 * List_1_GetRange_m53057_gshared (List_1_t7749 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m53057(__this, ___index, ___count, method) (( List_1_t7749 * (*) (List_1_t7749 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m53057_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m53058_gshared (List_1_t7749 * __this, KeyValuePair_2_t6925  ___item, const MethodInfo* method);
#define List_1_IndexOf_m53058(__this, ___item, method) (( int32_t (*) (List_1_t7749 *, KeyValuePair_2_t6925 , const MethodInfo*))List_1_IndexOf_m53058_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m53059_gshared (List_1_t7749 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m53059(__this, ___start, ___delta, method) (( void (*) (List_1_t7749 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m53059_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m53060_gshared (List_1_t7749 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m53060(__this, ___index, method) (( void (*) (List_1_t7749 *, int32_t, const MethodInfo*))List_1_CheckIndex_m53060_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m53061_gshared (List_1_t7749 * __this, int32_t ___index, KeyValuePair_2_t6925  ___item, const MethodInfo* method);
#define List_1_Insert_m53061(__this, ___index, ___item, method) (( void (*) (List_1_t7749 *, int32_t, KeyValuePair_2_t6925 , const MethodInfo*))List_1_Insert_m53061_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m53062_gshared (List_1_t7749 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m53062(__this, ___collection, method) (( void (*) (List_1_t7749 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m53062_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m53063_gshared (List_1_t7749 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m53063(__this, ___index, ___collection, method) (( void (*) (List_1_t7749 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m53063_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m53064_gshared (List_1_t7749 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m53064(__this, ___index, ___collection, method) (( void (*) (List_1_t7749 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m53064_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m53065_gshared (List_1_t7749 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m53065(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7749 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m53065_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Remove(T)
extern "C" bool List_1_Remove_m53066_gshared (List_1_t7749 * __this, KeyValuePair_2_t6925  ___item, const MethodInfo* method);
#define List_1_Remove_m53066(__this, ___item, method) (( bool (*) (List_1_t7749 *, KeyValuePair_2_t6925 , const MethodInfo*))List_1_Remove_m53066_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m53067_gshared (List_1_t7749 * __this, Predicate_1_t7756 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m53067(__this, ___match, method) (( int32_t (*) (List_1_t7749 *, Predicate_1_t7756 *, const MethodInfo*))List_1_RemoveAll_m53067_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m53068_gshared (List_1_t7749 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m53068(__this, ___index, method) (( void (*) (List_1_t7749 *, int32_t, const MethodInfo*))List_1_RemoveAt_m53068_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m53069_gshared (List_1_t7749 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m53069(__this, ___index, ___count, method) (( void (*) (List_1_t7749 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m53069_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Reverse()
extern "C" void List_1_Reverse_m53070_gshared (List_1_t7749 * __this, const MethodInfo* method);
#define List_1_Reverse_m53070(__this, method) (( void (*) (List_1_t7749 *, const MethodInfo*))List_1_Reverse_m53070_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort()
extern "C" void List_1_Sort_m53071_gshared (List_1_t7749 * __this, const MethodInfo* method);
#define List_1_Sort_m53071(__this, method) (( void (*) (List_1_t7749 *, const MethodInfo*))List_1_Sort_m53071_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m53072_gshared (List_1_t7749 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m53072(__this, ___comparer, method) (( void (*) (List_1_t7749 *, Object_t*, const MethodInfo*))List_1_Sort_m53072_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m53073_gshared (List_1_t7749 * __this, Comparison_1_t7759 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m53073(__this, ___comparison, method) (( void (*) (List_1_t7749 *, Comparison_1_t7759 *, const MethodInfo*))List_1_Sort_m53073_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7748* List_1_ToArray_m53074_gshared (List_1_t7749 * __this, const MethodInfo* method);
#define List_1_ToArray_m53074(__this, method) (( KeyValuePair_2U5BU5D_t7748* (*) (List_1_t7749 *, const MethodInfo*))List_1_ToArray_m53074_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::TrimExcess()
extern "C" void List_1_TrimExcess_m53075_gshared (List_1_t7749 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m53075(__this, method) (( void (*) (List_1_t7749 *, const MethodInfo*))List_1_TrimExcess_m53075_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m53076_gshared (List_1_t7749 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m53076(__this, method) (( int32_t (*) (List_1_t7749 *, const MethodInfo*))List_1_get_Capacity_m53076_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m53077_gshared (List_1_t7749 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m53077(__this, ___value, method) (( void (*) (List_1_t7749 *, int32_t, const MethodInfo*))List_1_set_Capacity_m53077_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Count()
extern "C" int32_t List_1_get_Count_m53078_gshared (List_1_t7749 * __this, const MethodInfo* method);
#define List_1_get_Count_m53078(__this, method) (( int32_t (*) (List_1_t7749 *, const MethodInfo*))List_1_get_Count_m53078_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6925  List_1_get_Item_m53079_gshared (List_1_t7749 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m53079(__this, ___index, method) (( KeyValuePair_2_t6925  (*) (List_1_t7749 *, int32_t, const MethodInfo*))List_1_get_Item_m53079_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m53080_gshared (List_1_t7749 * __this, int32_t ___index, KeyValuePair_2_t6925  ___value, const MethodInfo* method);
#define List_1_set_Item_m53080(__this, ___index, ___value, method) (( void (*) (List_1_t7749 *, int32_t, KeyValuePair_2_t6925 , const MethodInfo*))List_1_set_Item_m53080_gshared)(__this, ___index, ___value, method)
