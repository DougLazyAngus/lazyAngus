#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int64>
struct List_1_t7216;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int64>
struct IEnumerable_1_t6913;
// System.Int64[]
struct Int64U5BU5D_t4562;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6914;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9707;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int64>
struct ReadOnlyCollection_1_t7218;
// System.Predicate`1<System.Int64>
struct Predicate_1_t7220;
// System.Collections.Generic.IComparer`1<System.Int64>
struct IComparer_1_t5757;
// System.Comparison`1<System.Int64>
struct Comparison_1_t7224;
// System.Collections.Generic.List`1/Enumerator<System.Int64>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_66.h"

// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor()
extern "C" void List_1__ctor_m43892_gshared (List_1_t7216 * __this, const MethodInfo* method);
#define List_1__ctor_m43892(__this, method) (( void (*) (List_1_t7216 *, const MethodInfo*))List_1__ctor_m43892_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m43893_gshared (List_1_t7216 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m43893(__this, ___collection, method) (( void (*) (List_1_t7216 *, Object_t*, const MethodInfo*))List_1__ctor_m43893_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(System.Int32)
extern "C" void List_1__ctor_m43894_gshared (List_1_t7216 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m43894(__this, ___capacity, method) (( void (*) (List_1_t7216 *, int32_t, const MethodInfo*))List_1__ctor_m43894_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m43895_gshared (List_1_t7216 * __this, Int64U5BU5D_t4562* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m43895(__this, ___data, ___size, method) (( void (*) (List_1_t7216 *, Int64U5BU5D_t4562*, int32_t, const MethodInfo*))List_1__ctor_m43895_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.cctor()
extern "C" void List_1__cctor_m43896_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m43896(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m43896_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43897_gshared (List_1_t7216 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43897(__this, method) (( Object_t* (*) (List_1_t7216 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43897_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m43898_gshared (List_1_t7216 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m43898(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7216 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m43898_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m43899_gshared (List_1_t7216 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m43899(__this, method) (( Object_t * (*) (List_1_t7216 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m43899_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m43900_gshared (List_1_t7216 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m43900(__this, ___item, method) (( int32_t (*) (List_1_t7216 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m43900_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m43901_gshared (List_1_t7216 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m43901(__this, ___item, method) (( bool (*) (List_1_t7216 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m43901_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m43902_gshared (List_1_t7216 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m43902(__this, ___item, method) (( int32_t (*) (List_1_t7216 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m43902_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m43903_gshared (List_1_t7216 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m43903(__this, ___index, ___item, method) (( void (*) (List_1_t7216 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m43903_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m43904_gshared (List_1_t7216 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m43904(__this, ___item, method) (( void (*) (List_1_t7216 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m43904_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43905_gshared (List_1_t7216 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43905(__this, method) (( bool (*) (List_1_t7216 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43905_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m43906_gshared (List_1_t7216 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m43906(__this, method) (( bool (*) (List_1_t7216 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m43906_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m43907_gshared (List_1_t7216 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m43907(__this, method) (( Object_t * (*) (List_1_t7216 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m43907_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m43908_gshared (List_1_t7216 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m43908(__this, method) (( bool (*) (List_1_t7216 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m43908_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m43909_gshared (List_1_t7216 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m43909(__this, method) (( bool (*) (List_1_t7216 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m43909_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m43910_gshared (List_1_t7216 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m43910(__this, ___index, method) (( Object_t * (*) (List_1_t7216 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m43910_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m43911_gshared (List_1_t7216 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m43911(__this, ___index, ___value, method) (( void (*) (List_1_t7216 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m43911_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Add(T)
extern "C" void List_1_Add_m43912_gshared (List_1_t7216 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Add_m43912(__this, ___item, method) (( void (*) (List_1_t7216 *, int64_t, const MethodInfo*))List_1_Add_m43912_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m43913_gshared (List_1_t7216 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m43913(__this, ___newCount, method) (( void (*) (List_1_t7216 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m43913_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m43914_gshared (List_1_t7216 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m43914(__this, ___idx, ___count, method) (( void (*) (List_1_t7216 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m43914_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m43915_gshared (List_1_t7216 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m43915(__this, ___collection, method) (( void (*) (List_1_t7216 *, Object_t*, const MethodInfo*))List_1_AddCollection_m43915_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m43916_gshared (List_1_t7216 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m43916(__this, ___enumerable, method) (( void (*) (List_1_t7216 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m43916_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m43917_gshared (List_1_t7216 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m43917(__this, ___collection, method) (( void (*) (List_1_t7216 *, Object_t*, const MethodInfo*))List_1_AddRange_m43917_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int64>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7218 * List_1_AsReadOnly_m43918_gshared (List_1_t7216 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m43918(__this, method) (( ReadOnlyCollection_1_t7218 * (*) (List_1_t7216 *, const MethodInfo*))List_1_AsReadOnly_m43918_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Clear()
extern "C" void List_1_Clear_m43919_gshared (List_1_t7216 * __this, const MethodInfo* method);
#define List_1_Clear_m43919(__this, method) (( void (*) (List_1_t7216 *, const MethodInfo*))List_1_Clear_m43919_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Contains(T)
extern "C" bool List_1_Contains_m43920_gshared (List_1_t7216 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Contains_m43920(__this, ___item, method) (( bool (*) (List_1_t7216 *, int64_t, const MethodInfo*))List_1_Contains_m43920_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m43921_gshared (List_1_t7216 * __this, Int64U5BU5D_t4562* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m43921(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7216 *, Int64U5BU5D_t4562*, int32_t, const MethodInfo*))List_1_CopyTo_m43921_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int64>::Find(System.Predicate`1<T>)
extern "C" int64_t List_1_Find_m43922_gshared (List_1_t7216 * __this, Predicate_1_t7220 * ___match, const MethodInfo* method);
#define List_1_Find_m43922(__this, ___match, method) (( int64_t (*) (List_1_t7216 *, Predicate_1_t7220 *, const MethodInfo*))List_1_Find_m43922_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m43923_gshared (Object_t * __this /* static, unused */, Predicate_1_t7220 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m43923(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7220 *, const MethodInfo*))List_1_CheckMatch_m43923_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m43924_gshared (List_1_t7216 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7220 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m43924(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7216 *, int32_t, int32_t, Predicate_1_t7220 *, const MethodInfo*))List_1_GetIndex_m43924_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int64>::GetEnumerator()
extern "C" Enumerator_t7217  List_1_GetEnumerator_m43925_gshared (List_1_t7216 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m43925(__this, method) (( Enumerator_t7217  (*) (List_1_t7216 *, const MethodInfo*))List_1_GetEnumerator_m43925_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int64>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7216 * List_1_GetRange_m43926_gshared (List_1_t7216 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m43926(__this, ___index, ___count, method) (( List_1_t7216 * (*) (List_1_t7216 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m43926_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m43927_gshared (List_1_t7216 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m43927(__this, ___item, method) (( int32_t (*) (List_1_t7216 *, int64_t, const MethodInfo*))List_1_IndexOf_m43927_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m43928_gshared (List_1_t7216 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m43928(__this, ___start, ___delta, method) (( void (*) (List_1_t7216 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m43928_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m43929_gshared (List_1_t7216 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m43929(__this, ___index, method) (( void (*) (List_1_t7216 *, int32_t, const MethodInfo*))List_1_CheckIndex_m43929_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m43930_gshared (List_1_t7216 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define List_1_Insert_m43930(__this, ___index, ___item, method) (( void (*) (List_1_t7216 *, int32_t, int64_t, const MethodInfo*))List_1_Insert_m43930_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m43931_gshared (List_1_t7216 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m43931(__this, ___collection, method) (( void (*) (List_1_t7216 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m43931_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m43932_gshared (List_1_t7216 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m43932(__this, ___index, ___collection, method) (( void (*) (List_1_t7216 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m43932_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m43933_gshared (List_1_t7216 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m43933(__this, ___index, ___collection, method) (( void (*) (List_1_t7216 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m43933_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m43934_gshared (List_1_t7216 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m43934(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7216 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m43934_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Remove(T)
extern "C" bool List_1_Remove_m43935_gshared (List_1_t7216 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Remove_m43935(__this, ___item, method) (( bool (*) (List_1_t7216 *, int64_t, const MethodInfo*))List_1_Remove_m43935_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m43936_gshared (List_1_t7216 * __this, Predicate_1_t7220 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m43936(__this, ___match, method) (( int32_t (*) (List_1_t7216 *, Predicate_1_t7220 *, const MethodInfo*))List_1_RemoveAll_m43936_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m43937_gshared (List_1_t7216 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m43937(__this, ___index, method) (( void (*) (List_1_t7216 *, int32_t, const MethodInfo*))List_1_RemoveAt_m43937_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m43938_gshared (List_1_t7216 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m43938(__this, ___index, ___count, method) (( void (*) (List_1_t7216 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m43938_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Reverse()
extern "C" void List_1_Reverse_m43939_gshared (List_1_t7216 * __this, const MethodInfo* method);
#define List_1_Reverse_m43939(__this, method) (( void (*) (List_1_t7216 *, const MethodInfo*))List_1_Reverse_m43939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort()
extern "C" void List_1_Sort_m43940_gshared (List_1_t7216 * __this, const MethodInfo* method);
#define List_1_Sort_m43940(__this, method) (( void (*) (List_1_t7216 *, const MethodInfo*))List_1_Sort_m43940_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m43941_gshared (List_1_t7216 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m43941(__this, ___comparer, method) (( void (*) (List_1_t7216 *, Object_t*, const MethodInfo*))List_1_Sort_m43941_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m43942_gshared (List_1_t7216 * __this, Comparison_1_t7224 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m43942(__this, ___comparison, method) (( void (*) (List_1_t7216 *, Comparison_1_t7224 *, const MethodInfo*))List_1_Sort_m43942_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int64>::ToArray()
extern "C" Int64U5BU5D_t4562* List_1_ToArray_m43943_gshared (List_1_t7216 * __this, const MethodInfo* method);
#define List_1_ToArray_m43943(__this, method) (( Int64U5BU5D_t4562* (*) (List_1_t7216 *, const MethodInfo*))List_1_ToArray_m43943_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::TrimExcess()
extern "C" void List_1_TrimExcess_m43944_gshared (List_1_t7216 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m43944(__this, method) (( void (*) (List_1_t7216 *, const MethodInfo*))List_1_TrimExcess_m43944_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m43945_gshared (List_1_t7216 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m43945(__this, method) (( int32_t (*) (List_1_t7216 *, const MethodInfo*))List_1_get_Capacity_m43945_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m43946_gshared (List_1_t7216 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m43946(__this, ___value, method) (( void (*) (List_1_t7216 *, int32_t, const MethodInfo*))List_1_set_Capacity_m43946_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Count()
extern "C" int32_t List_1_get_Count_m43947_gshared (List_1_t7216 * __this, const MethodInfo* method);
#define List_1_get_Count_m43947(__this, method) (( int32_t (*) (List_1_t7216 *, const MethodInfo*))List_1_get_Count_m43947_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int64>::get_Item(System.Int32)
extern "C" int64_t List_1_get_Item_m43948_gshared (List_1_t7216 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m43948(__this, ___index, method) (( int64_t (*) (List_1_t7216 *, int32_t, const MethodInfo*))List_1_get_Item_m43948_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m43949_gshared (List_1_t7216 * __this, int32_t ___index, int64_t ___value, const MethodInfo* method);
#define List_1_set_Item_m43949(__this, ___index, ___value, method) (( void (*) (List_1_t7216 *, int32_t, int64_t, const MethodInfo*))List_1_set_Item_m43949_gshared)(__this, ___index, ___value, method)
