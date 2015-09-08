#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.SByte>
struct List_1_t7000;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.SByte>
struct IEnumerable_1_t6892;
// System.SByte[]
struct SByteU5BU5D_t5373;
// System.Collections.Generic.IEnumerator`1<System.SByte>
struct IEnumerator_1_t6893;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9838;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.SByte>
struct ReadOnlyCollection_1_t7002;
// System.Predicate`1<System.SByte>
struct Predicate_1_t7007;
// System.Collections.Generic.IComparer`1<System.SByte>
struct IComparer_1_t5758;
// System.Comparison`1<System.SByte>
struct Comparison_1_t7011;
// System.Collections.Generic.List`1/Enumerator<System.SByte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_62.h"

// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor()
extern "C" void List_1__ctor_m41164_gshared (List_1_t7000 * __this, const MethodInfo* method);
#define List_1__ctor_m41164(__this, method) (( void (*) (List_1_t7000 *, const MethodInfo*))List_1__ctor_m41164_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m41165_gshared (List_1_t7000 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m41165(__this, ___collection, method) (( void (*) (List_1_t7000 *, Object_t*, const MethodInfo*))List_1__ctor_m41165_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m41166_gshared (List_1_t7000 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m41166(__this, ___capacity, method) (( void (*) (List_1_t7000 *, int32_t, const MethodInfo*))List_1__ctor_m41166_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m41167_gshared (List_1_t7000 * __this, SByteU5BU5D_t5373* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m41167(__this, ___data, ___size, method) (( void (*) (List_1_t7000 *, SByteU5BU5D_t5373*, int32_t, const MethodInfo*))List_1__ctor_m41167_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.cctor()
extern "C" void List_1__cctor_m41168_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m41168(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m41168_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.SByte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41169_gshared (List_1_t7000 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41169(__this, method) (( Object_t* (*) (List_1_t7000 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41169_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m41170_gshared (List_1_t7000 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m41170(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7000 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m41170_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m41171_gshared (List_1_t7000 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m41171(__this, method) (( Object_t * (*) (List_1_t7000 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m41171_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m41172_gshared (List_1_t7000 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m41172(__this, ___item, method) (( int32_t (*) (List_1_t7000 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m41172_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m41173_gshared (List_1_t7000 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m41173(__this, ___item, method) (( bool (*) (List_1_t7000 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m41173_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m41174_gshared (List_1_t7000 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m41174(__this, ___item, method) (( int32_t (*) (List_1_t7000 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m41174_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m41175_gshared (List_1_t7000 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m41175(__this, ___index, ___item, method) (( void (*) (List_1_t7000 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m41175_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m41176_gshared (List_1_t7000 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m41176(__this, ___item, method) (( void (*) (List_1_t7000 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m41176_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41177_gshared (List_1_t7000 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41177(__this, method) (( bool (*) (List_1_t7000 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41177_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m41178_gshared (List_1_t7000 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m41178(__this, method) (( bool (*) (List_1_t7000 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m41178_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m41179_gshared (List_1_t7000 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m41179(__this, method) (( Object_t * (*) (List_1_t7000 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m41179_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m41180_gshared (List_1_t7000 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m41180(__this, method) (( bool (*) (List_1_t7000 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m41180_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m41181_gshared (List_1_t7000 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m41181(__this, method) (( bool (*) (List_1_t7000 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m41181_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m41182_gshared (List_1_t7000 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m41182(__this, ___index, method) (( Object_t * (*) (List_1_t7000 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m41182_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m41183_gshared (List_1_t7000 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m41183(__this, ___index, ___value, method) (( void (*) (List_1_t7000 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m41183_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Add(T)
extern "C" void List_1_Add_m41184_gshared (List_1_t7000 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Add_m41184(__this, ___item, method) (( void (*) (List_1_t7000 *, int8_t, const MethodInfo*))List_1_Add_m41184_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m41185_gshared (List_1_t7000 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m41185(__this, ___newCount, method) (( void (*) (List_1_t7000 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m41185_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m41186_gshared (List_1_t7000 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m41186(__this, ___idx, ___count, method) (( void (*) (List_1_t7000 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m41186_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m41187_gshared (List_1_t7000 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m41187(__this, ___collection, method) (( void (*) (List_1_t7000 *, Object_t*, const MethodInfo*))List_1_AddCollection_m41187_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m41188_gshared (List_1_t7000 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m41188(__this, ___enumerable, method) (( void (*) (List_1_t7000 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m41188_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m41189_gshared (List_1_t7000 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m41189(__this, ___collection, method) (( void (*) (List_1_t7000 *, Object_t*, const MethodInfo*))List_1_AddRange_m41189_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.SByte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7002 * List_1_AsReadOnly_m41190_gshared (List_1_t7000 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m41190(__this, method) (( ReadOnlyCollection_1_t7002 * (*) (List_1_t7000 *, const MethodInfo*))List_1_AsReadOnly_m41190_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Clear()
extern "C" void List_1_Clear_m41191_gshared (List_1_t7000 * __this, const MethodInfo* method);
#define List_1_Clear_m41191(__this, method) (( void (*) (List_1_t7000 *, const MethodInfo*))List_1_Clear_m41191_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::Contains(T)
extern "C" bool List_1_Contains_m41192_gshared (List_1_t7000 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Contains_m41192(__this, ___item, method) (( bool (*) (List_1_t7000 *, int8_t, const MethodInfo*))List_1_Contains_m41192_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m41193_gshared (List_1_t7000 * __this, SByteU5BU5D_t5373* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m41193(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7000 *, SByteU5BU5D_t5373*, int32_t, const MethodInfo*))List_1_CopyTo_m41193_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.SByte>::Find(System.Predicate`1<T>)
extern "C" int8_t List_1_Find_m41194_gshared (List_1_t7000 * __this, Predicate_1_t7007 * ___match, const MethodInfo* method);
#define List_1_Find_m41194(__this, ___match, method) (( int8_t (*) (List_1_t7000 *, Predicate_1_t7007 *, const MethodInfo*))List_1_Find_m41194_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m41195_gshared (Object_t * __this /* static, unused */, Predicate_1_t7007 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m41195(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7007 *, const MethodInfo*))List_1_CheckMatch_m41195_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m41196_gshared (List_1_t7000 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7007 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m41196(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7000 *, int32_t, int32_t, Predicate_1_t7007 *, const MethodInfo*))List_1_GetIndex_m41196_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.SByte>::GetEnumerator()
extern "C" Enumerator_t7001  List_1_GetEnumerator_m41197_gshared (List_1_t7000 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m41197(__this, method) (( Enumerator_t7001  (*) (List_1_t7000 *, const MethodInfo*))List_1_GetEnumerator_m41197_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.SByte>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7000 * List_1_GetRange_m41198_gshared (List_1_t7000 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m41198(__this, ___index, ___count, method) (( List_1_t7000 * (*) (List_1_t7000 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m41198_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m41199_gshared (List_1_t7000 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m41199(__this, ___item, method) (( int32_t (*) (List_1_t7000 *, int8_t, const MethodInfo*))List_1_IndexOf_m41199_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m41200_gshared (List_1_t7000 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m41200(__this, ___start, ___delta, method) (( void (*) (List_1_t7000 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m41200_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m41201_gshared (List_1_t7000 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m41201(__this, ___index, method) (( void (*) (List_1_t7000 *, int32_t, const MethodInfo*))List_1_CheckIndex_m41201_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m41202_gshared (List_1_t7000 * __this, int32_t ___index, int8_t ___item, const MethodInfo* method);
#define List_1_Insert_m41202(__this, ___index, ___item, method) (( void (*) (List_1_t7000 *, int32_t, int8_t, const MethodInfo*))List_1_Insert_m41202_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m41203_gshared (List_1_t7000 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m41203(__this, ___collection, method) (( void (*) (List_1_t7000 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m41203_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m41204_gshared (List_1_t7000 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m41204(__this, ___index, ___collection, method) (( void (*) (List_1_t7000 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m41204_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m41205_gshared (List_1_t7000 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m41205(__this, ___index, ___collection, method) (( void (*) (List_1_t7000 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m41205_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m41206_gshared (List_1_t7000 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m41206(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7000 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m41206_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::Remove(T)
extern "C" bool List_1_Remove_m41207_gshared (List_1_t7000 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Remove_m41207(__this, ___item, method) (( bool (*) (List_1_t7000 *, int8_t, const MethodInfo*))List_1_Remove_m41207_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m41208_gshared (List_1_t7000 * __this, Predicate_1_t7007 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m41208(__this, ___match, method) (( int32_t (*) (List_1_t7000 *, Predicate_1_t7007 *, const MethodInfo*))List_1_RemoveAll_m41208_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m41209_gshared (List_1_t7000 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m41209(__this, ___index, method) (( void (*) (List_1_t7000 *, int32_t, const MethodInfo*))List_1_RemoveAt_m41209_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m41210_gshared (List_1_t7000 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m41210(__this, ___index, ___count, method) (( void (*) (List_1_t7000 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m41210_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Reverse()
extern "C" void List_1_Reverse_m41211_gshared (List_1_t7000 * __this, const MethodInfo* method);
#define List_1_Reverse_m41211(__this, method) (( void (*) (List_1_t7000 *, const MethodInfo*))List_1_Reverse_m41211_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort()
extern "C" void List_1_Sort_m41212_gshared (List_1_t7000 * __this, const MethodInfo* method);
#define List_1_Sort_m41212(__this, method) (( void (*) (List_1_t7000 *, const MethodInfo*))List_1_Sort_m41212_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m41213_gshared (List_1_t7000 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m41213(__this, ___comparer, method) (( void (*) (List_1_t7000 *, Object_t*, const MethodInfo*))List_1_Sort_m41213_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m41214_gshared (List_1_t7000 * __this, Comparison_1_t7011 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m41214(__this, ___comparison, method) (( void (*) (List_1_t7000 *, Comparison_1_t7011 *, const MethodInfo*))List_1_Sort_m41214_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.SByte>::ToArray()
extern "C" SByteU5BU5D_t5373* List_1_ToArray_m41215_gshared (List_1_t7000 * __this, const MethodInfo* method);
#define List_1_ToArray_m41215(__this, method) (( SByteU5BU5D_t5373* (*) (List_1_t7000 *, const MethodInfo*))List_1_ToArray_m41215_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::TrimExcess()
extern "C" void List_1_TrimExcess_m41216_gshared (List_1_t7000 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m41216(__this, method) (( void (*) (List_1_t7000 *, const MethodInfo*))List_1_TrimExcess_m41216_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m41217_gshared (List_1_t7000 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m41217(__this, method) (( int32_t (*) (List_1_t7000 *, const MethodInfo*))List_1_get_Capacity_m41217_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m41218_gshared (List_1_t7000 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m41218(__this, ___value, method) (( void (*) (List_1_t7000 *, int32_t, const MethodInfo*))List_1_set_Capacity_m41218_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::get_Count()
extern "C" int32_t List_1_get_Count_m41219_gshared (List_1_t7000 * __this, const MethodInfo* method);
#define List_1_get_Count_m41219(__this, method) (( int32_t (*) (List_1_t7000 *, const MethodInfo*))List_1_get_Count_m41219_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.SByte>::get_Item(System.Int32)
extern "C" int8_t List_1_get_Item_m41220_gshared (List_1_t7000 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m41220(__this, ___index, method) (( int8_t (*) (List_1_t7000 *, int32_t, const MethodInfo*))List_1_get_Item_m41220_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m41221_gshared (List_1_t7000 * __this, int32_t ___index, int8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m41221(__this, ___index, ___value, method) (( void (*) (List_1_t7000 *, int32_t, int8_t, const MethodInfo*))List_1_set_Item_m41221_gshared)(__this, ___index, ___value, method)
