#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct List_1_t7606;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerable_1_t7166;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7605;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t7167;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct ICollection_1_t9283;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct ReadOnlyCollection_1_t7609;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Predicate_1_t7613;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IComparer_1_t9284;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Comparison_1_t7616;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_81.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor()
extern "C" void List_1__ctor_m51157_gshared (List_1_t7606 * __this, const MethodInfo* method);
#define List_1__ctor_m51157(__this, method) (( void (*) (List_1_t7606 *, const MethodInfo*))List_1__ctor_m51157_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m51158_gshared (List_1_t7606 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m51158(__this, ___collection, method) (( void (*) (List_1_t7606 *, Object_t*, const MethodInfo*))List_1__ctor_m51158_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m51159_gshared (List_1_t7606 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m51159(__this, ___capacity, method) (( void (*) (List_1_t7606 *, int32_t, const MethodInfo*))List_1__ctor_m51159_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m51160_gshared (List_1_t7606 * __this, KeyValuePair_2U5BU5D_t7605* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m51160(__this, ___data, ___size, method) (( void (*) (List_1_t7606 *, KeyValuePair_2U5BU5D_t7605*, int32_t, const MethodInfo*))List_1__ctor_m51160_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.cctor()
extern "C" void List_1__cctor_m51161_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m51161(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51161_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51162_gshared (List_1_t7606 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51162(__this, method) (( Object_t* (*) (List_1_t7606 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51162_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m51163_gshared (List_1_t7606 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m51163(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7606 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51163_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m51164_gshared (List_1_t7606 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m51164(__this, method) (( Object_t * (*) (List_1_t7606 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m51164_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m51165_gshared (List_1_t7606 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m51165(__this, ___item, method) (( int32_t (*) (List_1_t7606 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m51165_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m51166_gshared (List_1_t7606 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m51166(__this, ___item, method) (( bool (*) (List_1_t7606 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m51166_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m51167_gshared (List_1_t7606 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m51167(__this, ___item, method) (( int32_t (*) (List_1_t7606 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m51167_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m51168_gshared (List_1_t7606 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m51168(__this, ___index, ___item, method) (( void (*) (List_1_t7606 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m51168_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m51169_gshared (List_1_t7606 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m51169(__this, ___item, method) (( void (*) (List_1_t7606 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m51169_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51170_gshared (List_1_t7606 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51170(__this, method) (( bool (*) (List_1_t7606 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51170_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m51171_gshared (List_1_t7606 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m51171(__this, method) (( bool (*) (List_1_t7606 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m51171_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m51172_gshared (List_1_t7606 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m51172(__this, method) (( Object_t * (*) (List_1_t7606 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m51172_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m51173_gshared (List_1_t7606 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m51173(__this, method) (( bool (*) (List_1_t7606 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m51173_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m51174_gshared (List_1_t7606 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m51174(__this, method) (( bool (*) (List_1_t7606 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m51174_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m51175_gshared (List_1_t7606 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m51175(__this, ___index, method) (( Object_t * (*) (List_1_t7606 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m51175_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m51176_gshared (List_1_t7606 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m51176(__this, ___index, ___value, method) (( void (*) (List_1_t7606 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m51176_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Add(T)
extern "C" void List_1_Add_m51177_gshared (List_1_t7606 * __this, KeyValuePair_2_t7162  ___item, const MethodInfo* method);
#define List_1_Add_m51177(__this, ___item, method) (( void (*) (List_1_t7606 *, KeyValuePair_2_t7162 , const MethodInfo*))List_1_Add_m51177_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m51178_gshared (List_1_t7606 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m51178(__this, ___newCount, method) (( void (*) (List_1_t7606 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m51178_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m51179_gshared (List_1_t7606 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m51179(__this, ___idx, ___count, method) (( void (*) (List_1_t7606 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m51179_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m51180_gshared (List_1_t7606 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m51180(__this, ___collection, method) (( void (*) (List_1_t7606 *, Object_t*, const MethodInfo*))List_1_AddCollection_m51180_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m51181_gshared (List_1_t7606 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m51181(__this, ___enumerable, method) (( void (*) (List_1_t7606 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m51181_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m51182_gshared (List_1_t7606 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m51182(__this, ___collection, method) (( void (*) (List_1_t7606 *, Object_t*, const MethodInfo*))List_1_AddRange_m51182_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7609 * List_1_AsReadOnly_m51183_gshared (List_1_t7606 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m51183(__this, method) (( ReadOnlyCollection_1_t7609 * (*) (List_1_t7606 *, const MethodInfo*))List_1_AsReadOnly_m51183_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Clear()
extern "C" void List_1_Clear_m51184_gshared (List_1_t7606 * __this, const MethodInfo* method);
#define List_1_Clear_m51184(__this, method) (( void (*) (List_1_t7606 *, const MethodInfo*))List_1_Clear_m51184_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Contains(T)
extern "C" bool List_1_Contains_m51185_gshared (List_1_t7606 * __this, KeyValuePair_2_t7162  ___item, const MethodInfo* method);
#define List_1_Contains_m51185(__this, ___item, method) (( bool (*) (List_1_t7606 *, KeyValuePair_2_t7162 , const MethodInfo*))List_1_Contains_m51185_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m51186_gshared (List_1_t7606 * __this, KeyValuePair_2U5BU5D_t7605* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m51186(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7606 *, KeyValuePair_2U5BU5D_t7605*, int32_t, const MethodInfo*))List_1_CopyTo_m51186_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7162  List_1_Find_m51187_gshared (List_1_t7606 * __this, Predicate_1_t7613 * ___match, const MethodInfo* method);
#define List_1_Find_m51187(__this, ___match, method) (( KeyValuePair_2_t7162  (*) (List_1_t7606 *, Predicate_1_t7613 *, const MethodInfo*))List_1_Find_m51187_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m51188_gshared (Object_t * __this /* static, unused */, Predicate_1_t7613 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m51188(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7613 *, const MethodInfo*))List_1_CheckMatch_m51188_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m51189_gshared (List_1_t7606 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7613 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m51189(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7606 *, int32_t, int32_t, Predicate_1_t7613 *, const MethodInfo*))List_1_GetIndex_m51189_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetEnumerator()
extern "C" Enumerator_t7607  List_1_GetEnumerator_m51190_gshared (List_1_t7606 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m51190(__this, method) (( Enumerator_t7607  (*) (List_1_t7606 *, const MethodInfo*))List_1_GetEnumerator_m51190_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7606 * List_1_GetRange_m51191_gshared (List_1_t7606 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m51191(__this, ___index, ___count, method) (( List_1_t7606 * (*) (List_1_t7606 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m51191_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m51192_gshared (List_1_t7606 * __this, KeyValuePair_2_t7162  ___item, const MethodInfo* method);
#define List_1_IndexOf_m51192(__this, ___item, method) (( int32_t (*) (List_1_t7606 *, KeyValuePair_2_t7162 , const MethodInfo*))List_1_IndexOf_m51192_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m51193_gshared (List_1_t7606 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m51193(__this, ___start, ___delta, method) (( void (*) (List_1_t7606 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m51193_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m51194_gshared (List_1_t7606 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m51194(__this, ___index, method) (( void (*) (List_1_t7606 *, int32_t, const MethodInfo*))List_1_CheckIndex_m51194_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m51195_gshared (List_1_t7606 * __this, int32_t ___index, KeyValuePair_2_t7162  ___item, const MethodInfo* method);
#define List_1_Insert_m51195(__this, ___index, ___item, method) (( void (*) (List_1_t7606 *, int32_t, KeyValuePair_2_t7162 , const MethodInfo*))List_1_Insert_m51195_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m51196_gshared (List_1_t7606 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m51196(__this, ___collection, method) (( void (*) (List_1_t7606 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m51196_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m51197_gshared (List_1_t7606 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m51197(__this, ___index, ___collection, method) (( void (*) (List_1_t7606 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m51197_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m51198_gshared (List_1_t7606 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m51198(__this, ___index, ___collection, method) (( void (*) (List_1_t7606 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m51198_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m51199_gshared (List_1_t7606 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m51199(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7606 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m51199_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Remove(T)
extern "C" bool List_1_Remove_m51200_gshared (List_1_t7606 * __this, KeyValuePair_2_t7162  ___item, const MethodInfo* method);
#define List_1_Remove_m51200(__this, ___item, method) (( bool (*) (List_1_t7606 *, KeyValuePair_2_t7162 , const MethodInfo*))List_1_Remove_m51200_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m51201_gshared (List_1_t7606 * __this, Predicate_1_t7613 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m51201(__this, ___match, method) (( int32_t (*) (List_1_t7606 *, Predicate_1_t7613 *, const MethodInfo*))List_1_RemoveAll_m51201_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m51202_gshared (List_1_t7606 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m51202(__this, ___index, method) (( void (*) (List_1_t7606 *, int32_t, const MethodInfo*))List_1_RemoveAt_m51202_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m51203_gshared (List_1_t7606 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m51203(__this, ___index, ___count, method) (( void (*) (List_1_t7606 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m51203_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Reverse()
extern "C" void List_1_Reverse_m51204_gshared (List_1_t7606 * __this, const MethodInfo* method);
#define List_1_Reverse_m51204(__this, method) (( void (*) (List_1_t7606 *, const MethodInfo*))List_1_Reverse_m51204_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort()
extern "C" void List_1_Sort_m51205_gshared (List_1_t7606 * __this, const MethodInfo* method);
#define List_1_Sort_m51205(__this, method) (( void (*) (List_1_t7606 *, const MethodInfo*))List_1_Sort_m51205_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m51206_gshared (List_1_t7606 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m51206(__this, ___comparer, method) (( void (*) (List_1_t7606 *, Object_t*, const MethodInfo*))List_1_Sort_m51206_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m51207_gshared (List_1_t7606 * __this, Comparison_1_t7616 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m51207(__this, ___comparison, method) (( void (*) (List_1_t7606 *, Comparison_1_t7616 *, const MethodInfo*))List_1_Sort_m51207_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7605* List_1_ToArray_m51208_gshared (List_1_t7606 * __this, const MethodInfo* method);
#define List_1_ToArray_m51208(__this, method) (( KeyValuePair_2U5BU5D_t7605* (*) (List_1_t7606 *, const MethodInfo*))List_1_ToArray_m51208_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::TrimExcess()
extern "C" void List_1_TrimExcess_m51209_gshared (List_1_t7606 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m51209(__this, method) (( void (*) (List_1_t7606 *, const MethodInfo*))List_1_TrimExcess_m51209_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m51210_gshared (List_1_t7606 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m51210(__this, method) (( int32_t (*) (List_1_t7606 *, const MethodInfo*))List_1_get_Capacity_m51210_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m51211_gshared (List_1_t7606 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m51211(__this, ___value, method) (( void (*) (List_1_t7606 *, int32_t, const MethodInfo*))List_1_set_Capacity_m51211_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Count()
extern "C" int32_t List_1_get_Count_m51212_gshared (List_1_t7606 * __this, const MethodInfo* method);
#define List_1_get_Count_m51212(__this, method) (( int32_t (*) (List_1_t7606 *, const MethodInfo*))List_1_get_Count_m51212_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7162  List_1_get_Item_m51213_gshared (List_1_t7606 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m51213(__this, ___index, method) (( KeyValuePair_2_t7162  (*) (List_1_t7606 *, int32_t, const MethodInfo*))List_1_get_Item_m51213_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m51214_gshared (List_1_t7606 * __this, int32_t ___index, KeyValuePair_2_t7162  ___value, const MethodInfo* method);
#define List_1_set_Item_m51214(__this, ___index, ___value, method) (( void (*) (List_1_t7606 *, int32_t, KeyValuePair_2_t7162 , const MethodInfo*))List_1_set_Item_m51214_gshared)(__this, ___index, ___value, method)
