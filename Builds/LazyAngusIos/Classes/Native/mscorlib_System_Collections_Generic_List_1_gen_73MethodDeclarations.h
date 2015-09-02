#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t6074;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t71;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t6073;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5468;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t9127;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t6077;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t6081;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IComparer_1_t9128;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t6084;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_54.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m31887_gshared (List_1_t6074 * __this, const MethodInfo* method);
#define List_1__ctor_m31887(__this, method) (( void (*) (List_1_t6074 *, const MethodInfo*))List_1__ctor_m31887_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m31888_gshared (List_1_t6074 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m31888(__this, ___collection, method) (( void (*) (List_1_t6074 *, Object_t*, const MethodInfo*))List_1__ctor_m31888_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m31889_gshared (List_1_t6074 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m31889(__this, ___capacity, method) (( void (*) (List_1_t6074 *, int32_t, const MethodInfo*))List_1__ctor_m31889_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m31890_gshared (List_1_t6074 * __this, KeyValuePair_2U5BU5D_t6073* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m31890(__this, ___data, ___size, method) (( void (*) (List_1_t6074 *, KeyValuePair_2U5BU5D_t6073*, int32_t, const MethodInfo*))List_1__ctor_m31890_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m31891_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m31891(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m31891_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31892_gshared (List_1_t6074 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31892(__this, method) (( Object_t* (*) (List_1_t6074 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31892_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m31893_gshared (List_1_t6074 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m31893(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6074 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m31893_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m31894_gshared (List_1_t6074 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m31894(__this, method) (( Object_t * (*) (List_1_t6074 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m31894_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m31895_gshared (List_1_t6074 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m31895(__this, ___item, method) (( int32_t (*) (List_1_t6074 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m31895_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m31896_gshared (List_1_t6074 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m31896(__this, ___item, method) (( bool (*) (List_1_t6074 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m31896_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m31897_gshared (List_1_t6074 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m31897(__this, ___item, method) (( int32_t (*) (List_1_t6074 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m31897_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m31898_gshared (List_1_t6074 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m31898(__this, ___index, ___item, method) (( void (*) (List_1_t6074 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m31898_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m31899_gshared (List_1_t6074 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m31899(__this, ___item, method) (( void (*) (List_1_t6074 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m31899_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31900_gshared (List_1_t6074 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31900(__this, method) (( bool (*) (List_1_t6074 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31900_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m31901_gshared (List_1_t6074 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m31901(__this, method) (( bool (*) (List_1_t6074 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m31901_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m31902_gshared (List_1_t6074 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m31902(__this, method) (( Object_t * (*) (List_1_t6074 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m31902_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m31903_gshared (List_1_t6074 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m31903(__this, method) (( bool (*) (List_1_t6074 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m31903_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m31904_gshared (List_1_t6074 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m31904(__this, method) (( bool (*) (List_1_t6074 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m31904_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m31905_gshared (List_1_t6074 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m31905(__this, ___index, method) (( Object_t * (*) (List_1_t6074 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m31905_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m31906_gshared (List_1_t6074 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m31906(__this, ___index, ___value, method) (( void (*) (List_1_t6074 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m31906_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m31907_gshared (List_1_t6074 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Add_m31907(__this, ___item, method) (( void (*) (List_1_t6074 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Add_m31907_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m31908_gshared (List_1_t6074 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m31908(__this, ___newCount, method) (( void (*) (List_1_t6074 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m31908_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m31909_gshared (List_1_t6074 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m31909(__this, ___idx, ___count, method) (( void (*) (List_1_t6074 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m31909_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m31910_gshared (List_1_t6074 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m31910(__this, ___collection, method) (( void (*) (List_1_t6074 *, Object_t*, const MethodInfo*))List_1_AddCollection_m31910_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m31911_gshared (List_1_t6074 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m31911(__this, ___enumerable, method) (( void (*) (List_1_t6074 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m31911_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m31912_gshared (List_1_t6074 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m31912(__this, ___collection, method) (( void (*) (List_1_t6074 *, Object_t*, const MethodInfo*))List_1_AddRange_m31912_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6077 * List_1_AsReadOnly_m31913_gshared (List_1_t6074 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m31913(__this, method) (( ReadOnlyCollection_1_t6077 * (*) (List_1_t6074 *, const MethodInfo*))List_1_AsReadOnly_m31913_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m31914_gshared (List_1_t6074 * __this, const MethodInfo* method);
#define List_1_Clear_m31914(__this, method) (( void (*) (List_1_t6074 *, const MethodInfo*))List_1_Clear_m31914_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m31915_gshared (List_1_t6074 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Contains_m31915(__this, ___item, method) (( bool (*) (List_1_t6074 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Contains_m31915_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m31916_gshared (List_1_t6074 * __this, KeyValuePair_2U5BU5D_t6073* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m31916(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6074 *, KeyValuePair_2U5BU5D_t6073*, int32_t, const MethodInfo*))List_1_CopyTo_m31916_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t70  List_1_Find_m31917_gshared (List_1_t6074 * __this, Predicate_1_t6081 * ___match, const MethodInfo* method);
#define List_1_Find_m31917(__this, ___match, method) (( KeyValuePair_2_t70  (*) (List_1_t6074 *, Predicate_1_t6081 *, const MethodInfo*))List_1_Find_m31917_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m31918_gshared (Object_t * __this /* static, unused */, Predicate_1_t6081 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m31918(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6081 *, const MethodInfo*))List_1_CheckMatch_m31918_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m31919_gshared (List_1_t6074 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6081 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m31919(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6074 *, int32_t, int32_t, Predicate_1_t6081 *, const MethodInfo*))List_1_GetIndex_m31919_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t6075  List_1_GetEnumerator_m31920_gshared (List_1_t6074 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m31920(__this, method) (( Enumerator_t6075  (*) (List_1_t6074 *, const MethodInfo*))List_1_GetEnumerator_m31920_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6074 * List_1_GetRange_m31921_gshared (List_1_t6074 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m31921(__this, ___index, ___count, method) (( List_1_t6074 * (*) (List_1_t6074 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m31921_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m31922_gshared (List_1_t6074 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_IndexOf_m31922(__this, ___item, method) (( int32_t (*) (List_1_t6074 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_IndexOf_m31922_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m31923_gshared (List_1_t6074 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m31923(__this, ___start, ___delta, method) (( void (*) (List_1_t6074 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m31923_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m31924_gshared (List_1_t6074 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m31924(__this, ___index, method) (( void (*) (List_1_t6074 *, int32_t, const MethodInfo*))List_1_CheckIndex_m31924_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m31925_gshared (List_1_t6074 * __this, int32_t ___index, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Insert_m31925(__this, ___index, ___item, method) (( void (*) (List_1_t6074 *, int32_t, KeyValuePair_2_t70 , const MethodInfo*))List_1_Insert_m31925_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m31926_gshared (List_1_t6074 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m31926(__this, ___collection, method) (( void (*) (List_1_t6074 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m31926_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m31927_gshared (List_1_t6074 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m31927(__this, ___index, ___collection, method) (( void (*) (List_1_t6074 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m31927_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m31928_gshared (List_1_t6074 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m31928(__this, ___index, ___collection, method) (( void (*) (List_1_t6074 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m31928_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m31929_gshared (List_1_t6074 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m31929(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6074 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m31929_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m31930_gshared (List_1_t6074 * __this, KeyValuePair_2_t70  ___item, const MethodInfo* method);
#define List_1_Remove_m31930(__this, ___item, method) (( bool (*) (List_1_t6074 *, KeyValuePair_2_t70 , const MethodInfo*))List_1_Remove_m31930_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m31931_gshared (List_1_t6074 * __this, Predicate_1_t6081 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m31931(__this, ___match, method) (( int32_t (*) (List_1_t6074 *, Predicate_1_t6081 *, const MethodInfo*))List_1_RemoveAll_m31931_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m31932_gshared (List_1_t6074 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m31932(__this, ___index, method) (( void (*) (List_1_t6074 *, int32_t, const MethodInfo*))List_1_RemoveAt_m31932_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m31933_gshared (List_1_t6074 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m31933(__this, ___index, ___count, method) (( void (*) (List_1_t6074 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m31933_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m31934_gshared (List_1_t6074 * __this, const MethodInfo* method);
#define List_1_Reverse_m31934(__this, method) (( void (*) (List_1_t6074 *, const MethodInfo*))List_1_Reverse_m31934_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m31935_gshared (List_1_t6074 * __this, const MethodInfo* method);
#define List_1_Sort_m31935(__this, method) (( void (*) (List_1_t6074 *, const MethodInfo*))List_1_Sort_m31935_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m31936_gshared (List_1_t6074 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m31936(__this, ___comparer, method) (( void (*) (List_1_t6074 *, Object_t*, const MethodInfo*))List_1_Sort_m31936_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m31937_gshared (List_1_t6074 * __this, Comparison_1_t6084 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m31937(__this, ___comparison, method) (( void (*) (List_1_t6074 *, Comparison_1_t6084 *, const MethodInfo*))List_1_Sort_m31937_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t6073* List_1_ToArray_m31938_gshared (List_1_t6074 * __this, const MethodInfo* method);
#define List_1_ToArray_m31938(__this, method) (( KeyValuePair_2U5BU5D_t6073* (*) (List_1_t6074 *, const MethodInfo*))List_1_ToArray_m31938_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m31939_gshared (List_1_t6074 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m31939(__this, method) (( void (*) (List_1_t6074 *, const MethodInfo*))List_1_TrimExcess_m31939_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m31940_gshared (List_1_t6074 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m31940(__this, method) (( int32_t (*) (List_1_t6074 *, const MethodInfo*))List_1_get_Capacity_m31940_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m31941_gshared (List_1_t6074 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m31941(__this, ___value, method) (( void (*) (List_1_t6074 *, int32_t, const MethodInfo*))List_1_set_Capacity_m31941_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m31942_gshared (List_1_t6074 * __this, const MethodInfo* method);
#define List_1_get_Count_m31942(__this, method) (( int32_t (*) (List_1_t6074 *, const MethodInfo*))List_1_get_Count_m31942_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t70  List_1_get_Item_m31943_gshared (List_1_t6074 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m31943(__this, ___index, method) (( KeyValuePair_2_t70  (*) (List_1_t6074 *, int32_t, const MethodInfo*))List_1_get_Item_m31943_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m31944_gshared (List_1_t6074 * __this, int32_t ___index, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define List_1_set_Item_m31944(__this, ___index, ___value, method) (( void (*) (List_1_t6074 *, int32_t, KeyValuePair_2_t70 , const MethodInfo*))List_1_set_Item_m31944_gshared)(__this, ___index, ___value, method)
