#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct List_1_t7788;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IEnumerable_1_t7294;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7787;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IEnumerator_1_t7295;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct ICollection_1_t9436;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct ReadOnlyCollection_1_t7791;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Predicate_1_t7795;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IComparer_1_t9437;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Comparison_1_t7798;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_89.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor()
extern "C" void List_1__ctor_m53134_gshared (List_1_t7788 * __this, const MethodInfo* method);
#define List_1__ctor_m53134(__this, method) (( void (*) (List_1_t7788 *, const MethodInfo*))List_1__ctor_m53134_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m53135_gshared (List_1_t7788 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m53135(__this, ___collection, method) (( void (*) (List_1_t7788 *, Object_t*, const MethodInfo*))List_1__ctor_m53135_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m53136_gshared (List_1_t7788 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m53136(__this, ___capacity, method) (( void (*) (List_1_t7788 *, int32_t, const MethodInfo*))List_1__ctor_m53136_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m53137_gshared (List_1_t7788 * __this, KeyValuePair_2U5BU5D_t7787* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m53137(__this, ___data, ___size, method) (( void (*) (List_1_t7788 *, KeyValuePair_2U5BU5D_t7787*, int32_t, const MethodInfo*))List_1__ctor_m53137_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.cctor()
extern "C" void List_1__cctor_m53138_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m53138(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m53138_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53139_gshared (List_1_t7788 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53139(__this, method) (( Object_t* (*) (List_1_t7788 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53139_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m53140_gshared (List_1_t7788 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m53140(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7788 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m53140_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m53141_gshared (List_1_t7788 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m53141(__this, method) (( Object_t * (*) (List_1_t7788 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m53141_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m53142_gshared (List_1_t7788 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m53142(__this, ___item, method) (( int32_t (*) (List_1_t7788 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m53142_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m53143_gshared (List_1_t7788 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m53143(__this, ___item, method) (( bool (*) (List_1_t7788 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m53143_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m53144_gshared (List_1_t7788 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m53144(__this, ___item, method) (( int32_t (*) (List_1_t7788 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m53144_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m53145_gshared (List_1_t7788 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m53145(__this, ___index, ___item, method) (( void (*) (List_1_t7788 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m53145_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m53146_gshared (List_1_t7788 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m53146(__this, ___item, method) (( void (*) (List_1_t7788 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m53146_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53147_gshared (List_1_t7788 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53147(__this, method) (( bool (*) (List_1_t7788 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53147_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m53148_gshared (List_1_t7788 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m53148(__this, method) (( bool (*) (List_1_t7788 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m53148_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m53149_gshared (List_1_t7788 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m53149(__this, method) (( Object_t * (*) (List_1_t7788 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m53149_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m53150_gshared (List_1_t7788 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m53150(__this, method) (( bool (*) (List_1_t7788 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m53150_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m53151_gshared (List_1_t7788 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m53151(__this, method) (( bool (*) (List_1_t7788 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m53151_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m53152_gshared (List_1_t7788 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m53152(__this, ___index, method) (( Object_t * (*) (List_1_t7788 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m53152_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m53153_gshared (List_1_t7788 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m53153(__this, ___index, ___value, method) (( void (*) (List_1_t7788 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m53153_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Add(T)
extern "C" void List_1_Add_m53154_gshared (List_1_t7788 * __this, KeyValuePair_2_t7290  ___item, const MethodInfo* method);
#define List_1_Add_m53154(__this, ___item, method) (( void (*) (List_1_t7788 *, KeyValuePair_2_t7290 , const MethodInfo*))List_1_Add_m53154_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m53155_gshared (List_1_t7788 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m53155(__this, ___newCount, method) (( void (*) (List_1_t7788 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m53155_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m53156_gshared (List_1_t7788 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m53156(__this, ___idx, ___count, method) (( void (*) (List_1_t7788 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m53156_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m53157_gshared (List_1_t7788 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m53157(__this, ___collection, method) (( void (*) (List_1_t7788 *, Object_t*, const MethodInfo*))List_1_AddCollection_m53157_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m53158_gshared (List_1_t7788 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m53158(__this, ___enumerable, method) (( void (*) (List_1_t7788 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m53158_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m53159_gshared (List_1_t7788 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m53159(__this, ___collection, method) (( void (*) (List_1_t7788 *, Object_t*, const MethodInfo*))List_1_AddRange_m53159_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7791 * List_1_AsReadOnly_m53160_gshared (List_1_t7788 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m53160(__this, method) (( ReadOnlyCollection_1_t7791 * (*) (List_1_t7788 *, const MethodInfo*))List_1_AsReadOnly_m53160_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Clear()
extern "C" void List_1_Clear_m53161_gshared (List_1_t7788 * __this, const MethodInfo* method);
#define List_1_Clear_m53161(__this, method) (( void (*) (List_1_t7788 *, const MethodInfo*))List_1_Clear_m53161_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Contains(T)
extern "C" bool List_1_Contains_m53162_gshared (List_1_t7788 * __this, KeyValuePair_2_t7290  ___item, const MethodInfo* method);
#define List_1_Contains_m53162(__this, ___item, method) (( bool (*) (List_1_t7788 *, KeyValuePair_2_t7290 , const MethodInfo*))List_1_Contains_m53162_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m53163_gshared (List_1_t7788 * __this, KeyValuePair_2U5BU5D_t7787* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m53163(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7788 *, KeyValuePair_2U5BU5D_t7787*, int32_t, const MethodInfo*))List_1_CopyTo_m53163_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7290  List_1_Find_m53164_gshared (List_1_t7788 * __this, Predicate_1_t7795 * ___match, const MethodInfo* method);
#define List_1_Find_m53164(__this, ___match, method) (( KeyValuePair_2_t7290  (*) (List_1_t7788 *, Predicate_1_t7795 *, const MethodInfo*))List_1_Find_m53164_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m53165_gshared (Object_t * __this /* static, unused */, Predicate_1_t7795 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m53165(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7795 *, const MethodInfo*))List_1_CheckMatch_m53165_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m53166_gshared (List_1_t7788 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7795 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m53166(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7788 *, int32_t, int32_t, Predicate_1_t7795 *, const MethodInfo*))List_1_GetIndex_m53166_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetEnumerator()
extern "C" Enumerator_t7789  List_1_GetEnumerator_m53167_gshared (List_1_t7788 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m53167(__this, method) (( Enumerator_t7789  (*) (List_1_t7788 *, const MethodInfo*))List_1_GetEnumerator_m53167_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7788 * List_1_GetRange_m53168_gshared (List_1_t7788 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m53168(__this, ___index, ___count, method) (( List_1_t7788 * (*) (List_1_t7788 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m53168_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m53169_gshared (List_1_t7788 * __this, KeyValuePair_2_t7290  ___item, const MethodInfo* method);
#define List_1_IndexOf_m53169(__this, ___item, method) (( int32_t (*) (List_1_t7788 *, KeyValuePair_2_t7290 , const MethodInfo*))List_1_IndexOf_m53169_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m53170_gshared (List_1_t7788 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m53170(__this, ___start, ___delta, method) (( void (*) (List_1_t7788 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m53170_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m53171_gshared (List_1_t7788 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m53171(__this, ___index, method) (( void (*) (List_1_t7788 *, int32_t, const MethodInfo*))List_1_CheckIndex_m53171_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m53172_gshared (List_1_t7788 * __this, int32_t ___index, KeyValuePair_2_t7290  ___item, const MethodInfo* method);
#define List_1_Insert_m53172(__this, ___index, ___item, method) (( void (*) (List_1_t7788 *, int32_t, KeyValuePair_2_t7290 , const MethodInfo*))List_1_Insert_m53172_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m53173_gshared (List_1_t7788 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m53173(__this, ___collection, method) (( void (*) (List_1_t7788 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m53173_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m53174_gshared (List_1_t7788 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m53174(__this, ___index, ___collection, method) (( void (*) (List_1_t7788 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m53174_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m53175_gshared (List_1_t7788 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m53175(__this, ___index, ___collection, method) (( void (*) (List_1_t7788 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m53175_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m53176_gshared (List_1_t7788 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m53176(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7788 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m53176_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Remove(T)
extern "C" bool List_1_Remove_m53177_gshared (List_1_t7788 * __this, KeyValuePair_2_t7290  ___item, const MethodInfo* method);
#define List_1_Remove_m53177(__this, ___item, method) (( bool (*) (List_1_t7788 *, KeyValuePair_2_t7290 , const MethodInfo*))List_1_Remove_m53177_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m53178_gshared (List_1_t7788 * __this, Predicate_1_t7795 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m53178(__this, ___match, method) (( int32_t (*) (List_1_t7788 *, Predicate_1_t7795 *, const MethodInfo*))List_1_RemoveAll_m53178_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m53179_gshared (List_1_t7788 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m53179(__this, ___index, method) (( void (*) (List_1_t7788 *, int32_t, const MethodInfo*))List_1_RemoveAt_m53179_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m53180_gshared (List_1_t7788 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m53180(__this, ___index, ___count, method) (( void (*) (List_1_t7788 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m53180_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Reverse()
extern "C" void List_1_Reverse_m53181_gshared (List_1_t7788 * __this, const MethodInfo* method);
#define List_1_Reverse_m53181(__this, method) (( void (*) (List_1_t7788 *, const MethodInfo*))List_1_Reverse_m53181_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort()
extern "C" void List_1_Sort_m53182_gshared (List_1_t7788 * __this, const MethodInfo* method);
#define List_1_Sort_m53182(__this, method) (( void (*) (List_1_t7788 *, const MethodInfo*))List_1_Sort_m53182_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m53183_gshared (List_1_t7788 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m53183(__this, ___comparer, method) (( void (*) (List_1_t7788 *, Object_t*, const MethodInfo*))List_1_Sort_m53183_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m53184_gshared (List_1_t7788 * __this, Comparison_1_t7798 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m53184(__this, ___comparison, method) (( void (*) (List_1_t7788 *, Comparison_1_t7798 *, const MethodInfo*))List_1_Sort_m53184_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7787* List_1_ToArray_m53185_gshared (List_1_t7788 * __this, const MethodInfo* method);
#define List_1_ToArray_m53185(__this, method) (( KeyValuePair_2U5BU5D_t7787* (*) (List_1_t7788 *, const MethodInfo*))List_1_ToArray_m53185_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::TrimExcess()
extern "C" void List_1_TrimExcess_m53186_gshared (List_1_t7788 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m53186(__this, method) (( void (*) (List_1_t7788 *, const MethodInfo*))List_1_TrimExcess_m53186_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m53187_gshared (List_1_t7788 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m53187(__this, method) (( int32_t (*) (List_1_t7788 *, const MethodInfo*))List_1_get_Capacity_m53187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m53188_gshared (List_1_t7788 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m53188(__this, ___value, method) (( void (*) (List_1_t7788 *, int32_t, const MethodInfo*))List_1_set_Capacity_m53188_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Count()
extern "C" int32_t List_1_get_Count_m53189_gshared (List_1_t7788 * __this, const MethodInfo* method);
#define List_1_get_Count_m53189(__this, method) (( int32_t (*) (List_1_t7788 *, const MethodInfo*))List_1_get_Count_m53189_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7290  List_1_get_Item_m53190_gshared (List_1_t7788 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m53190(__this, ___index, method) (( KeyValuePair_2_t7290  (*) (List_1_t7788 *, int32_t, const MethodInfo*))List_1_get_Item_m53190_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m53191_gshared (List_1_t7788 * __this, int32_t ___index, KeyValuePair_2_t7290  ___value, const MethodInfo* method);
#define List_1_set_Item_m53191(__this, ___index, ___value, method) (( void (*) (List_1_t7788 *, int32_t, KeyValuePair_2_t7290 , const MethodInfo*))List_1_set_Item_m53191_gshared)(__this, ___index, ___value, method)
