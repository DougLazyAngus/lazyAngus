#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t6613;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t71;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t6612;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t6005;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t9720;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t6616;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t6620;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t9721;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t6623;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_55.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m36142_gshared (List_1_t6613 * __this, const MethodInfo* method);
#define List_1__ctor_m36142(__this, method) (( void (*) (List_1_t6613 *, const MethodInfo*))List_1__ctor_m36142_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m36143_gshared (List_1_t6613 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m36143(__this, ___collection, method) (( void (*) (List_1_t6613 *, Object_t*, const MethodInfo*))List_1__ctor_m36143_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m36144_gshared (List_1_t6613 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m36144(__this, ___capacity, method) (( void (*) (List_1_t6613 *, int32_t, const MethodInfo*))List_1__ctor_m36144_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m36145_gshared (List_1_t6613 * __this, KeyValuePair_2U5BU5D_t6612* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m36145(__this, ___data, ___size, method) (( void (*) (List_1_t6613 *, KeyValuePair_2U5BU5D_t6612*, int32_t, const MethodInfo*))List_1__ctor_m36145_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m36146_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m36146(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m36146_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36147_gshared (List_1_t6613 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36147(__this, method) (( Object_t* (*) (List_1_t6613 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36147_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m36148_gshared (List_1_t6613 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m36148(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6613 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m36148_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m36149_gshared (List_1_t6613 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m36149(__this, method) (( Object_t * (*) (List_1_t6613 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m36149_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m36150_gshared (List_1_t6613 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m36150(__this, ___item, method) (( int32_t (*) (List_1_t6613 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m36150_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m36151_gshared (List_1_t6613 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m36151(__this, ___item, method) (( bool (*) (List_1_t6613 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m36151_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m36152_gshared (List_1_t6613 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m36152(__this, ___item, method) (( int32_t (*) (List_1_t6613 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m36152_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m36153_gshared (List_1_t6613 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m36153(__this, ___index, ___item, method) (( void (*) (List_1_t6613 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m36153_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m36154_gshared (List_1_t6613 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m36154(__this, ___item, method) (( void (*) (List_1_t6613 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m36154_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36155_gshared (List_1_t6613 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36155(__this, method) (( bool (*) (List_1_t6613 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36155_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m36156_gshared (List_1_t6613 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m36156(__this, method) (( bool (*) (List_1_t6613 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m36156_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m36157_gshared (List_1_t6613 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m36157(__this, method) (( Object_t * (*) (List_1_t6613 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m36157_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m36158_gshared (List_1_t6613 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m36158(__this, method) (( bool (*) (List_1_t6613 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m36158_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m36159_gshared (List_1_t6613 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m36159(__this, method) (( bool (*) (List_1_t6613 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m36159_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m36160_gshared (List_1_t6613 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m36160(__this, ___index, method) (( Object_t * (*) (List_1_t6613 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m36160_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m36161_gshared (List_1_t6613 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m36161(__this, ___index, ___value, method) (( void (*) (List_1_t6613 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m36161_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m36162_gshared (List_1_t6613 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Add_m36162(__this, ___item, method) (( void (*) (List_1_t6613 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Add_m36162_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m36163_gshared (List_1_t6613 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m36163(__this, ___newCount, method) (( void (*) (List_1_t6613 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m36163_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m36164_gshared (List_1_t6613 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m36164(__this, ___idx, ___count, method) (( void (*) (List_1_t6613 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m36164_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m36165_gshared (List_1_t6613 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m36165(__this, ___collection, method) (( void (*) (List_1_t6613 *, Object_t*, const MethodInfo*))List_1_AddCollection_m36165_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m36166_gshared (List_1_t6613 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m36166(__this, ___enumerable, method) (( void (*) (List_1_t6613 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m36166_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m36167_gshared (List_1_t6613 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m36167(__this, ___collection, method) (( void (*) (List_1_t6613 *, Object_t*, const MethodInfo*))List_1_AddRange_m36167_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6616 * List_1_AsReadOnly_m36168_gshared (List_1_t6613 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m36168(__this, method) (( ReadOnlyCollection_1_t6616 * (*) (List_1_t6613 *, const MethodInfo*))List_1_AsReadOnly_m36168_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m36169_gshared (List_1_t6613 * __this, const MethodInfo* method);
#define List_1_Clear_m36169(__this, method) (( void (*) (List_1_t6613 *, const MethodInfo*))List_1_Clear_m36169_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m36170_gshared (List_1_t6613 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Contains_m36170(__this, ___item, method) (( bool (*) (List_1_t6613 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Contains_m36170_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m36171_gshared (List_1_t6613 * __this, KeyValuePair_2U5BU5D_t6612* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m36171(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6613 *, KeyValuePair_2U5BU5D_t6612*, int32_t, const MethodInfo*))List_1_CopyTo_m36171_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t70  List_1_Find_m36172_gshared (List_1_t6613 * __this, Predicate_1_t6620 * ___match, const MethodInfo* method);
#define List_1_Find_m36172(__this, ___match, method) (( KeyValuePair_2_t70  (*) (List_1_t6613 *, Predicate_1_t6620 *, const MethodInfo*))List_1_Find_m36172_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m36173_gshared (Object_t * __this /* static, unused */, Predicate_1_t6620 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m36173(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6620 *, const MethodInfo*))List_1_CheckMatch_m36173_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m36174_gshared (List_1_t6613 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6620 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m36174(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6613 *, int32_t, int32_t, Predicate_1_t6620 *, const MethodInfo*))List_1_GetIndex_m36174_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t6614  List_1_GetEnumerator_m36175_gshared (List_1_t6613 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m36175(__this, method) (( Enumerator_t6614  (*) (List_1_t6613 *, const MethodInfo*))List_1_GetEnumerator_m36175_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6613 * List_1_GetRange_m36176_gshared (List_1_t6613 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m36176(__this, ___index, ___count, method) (( List_1_t6613 * (*) (List_1_t6613 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m36176_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m36177_gshared (List_1_t6613 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_IndexOf_m36177(__this, ___item, method) (( int32_t (*) (List_1_t6613 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_IndexOf_m36177_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m36178_gshared (List_1_t6613 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m36178(__this, ___start, ___delta, method) (( void (*) (List_1_t6613 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m36178_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m36179_gshared (List_1_t6613 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m36179(__this, ___index, method) (( void (*) (List_1_t6613 *, int32_t, const MethodInfo*))List_1_CheckIndex_m36179_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m36180_gshared (List_1_t6613 * __this, int32_t ___index, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Insert_m36180(__this, ___index, ___item, method) (( void (*) (List_1_t6613 *, int32_t, KeyValuePair_2_t70 , const MethodInfo*))List_1_Insert_m36180_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m36181_gshared (List_1_t6613 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m36181(__this, ___collection, method) (( void (*) (List_1_t6613 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m36181_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m36182_gshared (List_1_t6613 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m36182(__this, ___index, ___collection, method) (( void (*) (List_1_t6613 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m36182_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m36183_gshared (List_1_t6613 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m36183(__this, ___index, ___collection, method) (( void (*) (List_1_t6613 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m36183_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m36184_gshared (List_1_t6613 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m36184(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6613 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m36184_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m36185_gshared (List_1_t6613 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Remove_m36185(__this, ___item, method) (( bool (*) (List_1_t6613 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Remove_m36185_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m36186_gshared (List_1_t6613 * __this, Predicate_1_t6620 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m36186(__this, ___match, method) (( int32_t (*) (List_1_t6613 *, Predicate_1_t6620 *, const MethodInfo*))List_1_RemoveAll_m36186_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m36187_gshared (List_1_t6613 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m36187(__this, ___index, method) (( void (*) (List_1_t6613 *, int32_t, const MethodInfo*))List_1_RemoveAt_m36187_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m36188_gshared (List_1_t6613 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m36188(__this, ___index, ___count, method) (( void (*) (List_1_t6613 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m36188_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m36189_gshared (List_1_t6613 * __this, const MethodInfo* method);
#define List_1_Reverse_m36189(__this, method) (( void (*) (List_1_t6613 *, const MethodInfo*))List_1_Reverse_m36189_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m36190_gshared (List_1_t6613 * __this, const MethodInfo* method);
#define List_1_Sort_m36190(__this, method) (( void (*) (List_1_t6613 *, const MethodInfo*))List_1_Sort_m36190_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m36191_gshared (List_1_t6613 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m36191(__this, ___comparer, method) (( void (*) (List_1_t6613 *, Object_t*, const MethodInfo*))List_1_Sort_m36191_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m36192_gshared (List_1_t6613 * __this, Comparison_1_t6623 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m36192(__this, ___comparison, method) (( void (*) (List_1_t6613 *, Comparison_1_t6623 *, const MethodInfo*))List_1_Sort_m36192_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t6612* List_1_ToArray_m36193_gshared (List_1_t6613 * __this, const MethodInfo* method);
#define List_1_ToArray_m36193(__this, method) (( KeyValuePair_2U5BU5D_t6612* (*) (List_1_t6613 *, const MethodInfo*))List_1_ToArray_m36193_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m36194_gshared (List_1_t6613 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m36194(__this, method) (( void (*) (List_1_t6613 *, const MethodInfo*))List_1_TrimExcess_m36194_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m36195_gshared (List_1_t6613 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m36195(__this, method) (( int32_t (*) (List_1_t6613 *, const MethodInfo*))List_1_get_Capacity_m36195_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m36196_gshared (List_1_t6613 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m36196(__this, ___value, method) (( void (*) (List_1_t6613 *, int32_t, const MethodInfo*))List_1_set_Capacity_m36196_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m36197_gshared (List_1_t6613 * __this, const MethodInfo* method);
#define List_1_get_Count_m36197(__this, method) (( int32_t (*) (List_1_t6613 *, const MethodInfo*))List_1_get_Count_m36197_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t70  List_1_get_Item_m36198_gshared (List_1_t6613 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m36198(__this, ___index, method) (( KeyValuePair_2_t70  (*) (List_1_t6613 *, int32_t, const MethodInfo*))List_1_get_Item_m36198_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m36199_gshared (List_1_t6613 * __this, int32_t ___index, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define List_1_set_Item_m36199(__this, ___index, ___value, method) (( void (*) (List_1_t6613 *, int32_t, KeyValuePair_2_t70 , const MethodInfo*))List_1_set_Item_m36199_gshared)(__this, ___index, ___value, method)
