#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct List_1_t7687;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerable_1_t7247;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7686;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t7248;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct ICollection_1_t9383;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct ReadOnlyCollection_1_t7690;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Predicate_1_t7694;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IComparer_1_t9384;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Comparison_1_t7697;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_84.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor()
extern "C" void List_1__ctor_m51904_gshared (List_1_t7687 * __this, const MethodInfo* method);
#define List_1__ctor_m51904(__this, method) (( void (*) (List_1_t7687 *, const MethodInfo*))List_1__ctor_m51904_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m51905_gshared (List_1_t7687 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m51905(__this, ___collection, method) (( void (*) (List_1_t7687 *, Object_t*, const MethodInfo*))List_1__ctor_m51905_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m51906_gshared (List_1_t7687 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m51906(__this, ___capacity, method) (( void (*) (List_1_t7687 *, int32_t, const MethodInfo*))List_1__ctor_m51906_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m51907_gshared (List_1_t7687 * __this, KeyValuePair_2U5BU5D_t7686* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m51907(__this, ___data, ___size, method) (( void (*) (List_1_t7687 *, KeyValuePair_2U5BU5D_t7686*, int32_t, const MethodInfo*))List_1__ctor_m51907_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.cctor()
extern "C" void List_1__cctor_m51908_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m51908(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51908_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51909_gshared (List_1_t7687 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51909(__this, method) (( Object_t* (*) (List_1_t7687 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51909_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m51910_gshared (List_1_t7687 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m51910(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7687 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51910_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m51911_gshared (List_1_t7687 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m51911(__this, method) (( Object_t * (*) (List_1_t7687 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m51911_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m51912_gshared (List_1_t7687 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m51912(__this, ___item, method) (( int32_t (*) (List_1_t7687 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m51912_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m51913_gshared (List_1_t7687 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m51913(__this, ___item, method) (( bool (*) (List_1_t7687 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m51913_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m51914_gshared (List_1_t7687 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m51914(__this, ___item, method) (( int32_t (*) (List_1_t7687 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m51914_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m51915_gshared (List_1_t7687 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m51915(__this, ___index, ___item, method) (( void (*) (List_1_t7687 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m51915_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m51916_gshared (List_1_t7687 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m51916(__this, ___item, method) (( void (*) (List_1_t7687 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m51916_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51917_gshared (List_1_t7687 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51917(__this, method) (( bool (*) (List_1_t7687 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51917_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m51918_gshared (List_1_t7687 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m51918(__this, method) (( bool (*) (List_1_t7687 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m51918_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m51919_gshared (List_1_t7687 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m51919(__this, method) (( Object_t * (*) (List_1_t7687 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m51919_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m51920_gshared (List_1_t7687 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m51920(__this, method) (( bool (*) (List_1_t7687 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m51920_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m51921_gshared (List_1_t7687 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m51921(__this, method) (( bool (*) (List_1_t7687 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m51921_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m51922_gshared (List_1_t7687 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m51922(__this, ___index, method) (( Object_t * (*) (List_1_t7687 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m51922_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m51923_gshared (List_1_t7687 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m51923(__this, ___index, ___value, method) (( void (*) (List_1_t7687 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m51923_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Add(T)
extern "C" void List_1_Add_m51924_gshared (List_1_t7687 * __this, KeyValuePair_2_t7243  ___item, const MethodInfo* method);
#define List_1_Add_m51924(__this, ___item, method) (( void (*) (List_1_t7687 *, KeyValuePair_2_t7243 , const MethodInfo*))List_1_Add_m51924_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m51925_gshared (List_1_t7687 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m51925(__this, ___newCount, method) (( void (*) (List_1_t7687 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m51925_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m51926_gshared (List_1_t7687 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m51926(__this, ___idx, ___count, method) (( void (*) (List_1_t7687 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m51926_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m51927_gshared (List_1_t7687 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m51927(__this, ___collection, method) (( void (*) (List_1_t7687 *, Object_t*, const MethodInfo*))List_1_AddCollection_m51927_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m51928_gshared (List_1_t7687 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m51928(__this, ___enumerable, method) (( void (*) (List_1_t7687 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m51928_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m51929_gshared (List_1_t7687 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m51929(__this, ___collection, method) (( void (*) (List_1_t7687 *, Object_t*, const MethodInfo*))List_1_AddRange_m51929_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7690 * List_1_AsReadOnly_m51930_gshared (List_1_t7687 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m51930(__this, method) (( ReadOnlyCollection_1_t7690 * (*) (List_1_t7687 *, const MethodInfo*))List_1_AsReadOnly_m51930_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Clear()
extern "C" void List_1_Clear_m51931_gshared (List_1_t7687 * __this, const MethodInfo* method);
#define List_1_Clear_m51931(__this, method) (( void (*) (List_1_t7687 *, const MethodInfo*))List_1_Clear_m51931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Contains(T)
extern "C" bool List_1_Contains_m51932_gshared (List_1_t7687 * __this, KeyValuePair_2_t7243  ___item, const MethodInfo* method);
#define List_1_Contains_m51932(__this, ___item, method) (( bool (*) (List_1_t7687 *, KeyValuePair_2_t7243 , const MethodInfo*))List_1_Contains_m51932_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m51933_gshared (List_1_t7687 * __this, KeyValuePair_2U5BU5D_t7686* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m51933(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7687 *, KeyValuePair_2U5BU5D_t7686*, int32_t, const MethodInfo*))List_1_CopyTo_m51933_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7243  List_1_Find_m51934_gshared (List_1_t7687 * __this, Predicate_1_t7694 * ___match, const MethodInfo* method);
#define List_1_Find_m51934(__this, ___match, method) (( KeyValuePair_2_t7243  (*) (List_1_t7687 *, Predicate_1_t7694 *, const MethodInfo*))List_1_Find_m51934_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m51935_gshared (Object_t * __this /* static, unused */, Predicate_1_t7694 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m51935(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7694 *, const MethodInfo*))List_1_CheckMatch_m51935_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m51936_gshared (List_1_t7687 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7694 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m51936(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7687 *, int32_t, int32_t, Predicate_1_t7694 *, const MethodInfo*))List_1_GetIndex_m51936_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetEnumerator()
extern "C" Enumerator_t7688  List_1_GetEnumerator_m51937_gshared (List_1_t7687 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m51937(__this, method) (( Enumerator_t7688  (*) (List_1_t7687 *, const MethodInfo*))List_1_GetEnumerator_m51937_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7687 * List_1_GetRange_m51938_gshared (List_1_t7687 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m51938(__this, ___index, ___count, method) (( List_1_t7687 * (*) (List_1_t7687 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m51938_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m51939_gshared (List_1_t7687 * __this, KeyValuePair_2_t7243  ___item, const MethodInfo* method);
#define List_1_IndexOf_m51939(__this, ___item, method) (( int32_t (*) (List_1_t7687 *, KeyValuePair_2_t7243 , const MethodInfo*))List_1_IndexOf_m51939_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m51940_gshared (List_1_t7687 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m51940(__this, ___start, ___delta, method) (( void (*) (List_1_t7687 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m51940_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m51941_gshared (List_1_t7687 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m51941(__this, ___index, method) (( void (*) (List_1_t7687 *, int32_t, const MethodInfo*))List_1_CheckIndex_m51941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m51942_gshared (List_1_t7687 * __this, int32_t ___index, KeyValuePair_2_t7243  ___item, const MethodInfo* method);
#define List_1_Insert_m51942(__this, ___index, ___item, method) (( void (*) (List_1_t7687 *, int32_t, KeyValuePair_2_t7243 , const MethodInfo*))List_1_Insert_m51942_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m51943_gshared (List_1_t7687 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m51943(__this, ___collection, method) (( void (*) (List_1_t7687 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m51943_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m51944_gshared (List_1_t7687 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m51944(__this, ___index, ___collection, method) (( void (*) (List_1_t7687 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m51944_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m51945_gshared (List_1_t7687 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m51945(__this, ___index, ___collection, method) (( void (*) (List_1_t7687 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m51945_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m51946_gshared (List_1_t7687 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m51946(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7687 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m51946_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Remove(T)
extern "C" bool List_1_Remove_m51947_gshared (List_1_t7687 * __this, KeyValuePair_2_t7243  ___item, const MethodInfo* method);
#define List_1_Remove_m51947(__this, ___item, method) (( bool (*) (List_1_t7687 *, KeyValuePair_2_t7243 , const MethodInfo*))List_1_Remove_m51947_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m51948_gshared (List_1_t7687 * __this, Predicate_1_t7694 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m51948(__this, ___match, method) (( int32_t (*) (List_1_t7687 *, Predicate_1_t7694 *, const MethodInfo*))List_1_RemoveAll_m51948_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m51949_gshared (List_1_t7687 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m51949(__this, ___index, method) (( void (*) (List_1_t7687 *, int32_t, const MethodInfo*))List_1_RemoveAt_m51949_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m51950_gshared (List_1_t7687 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m51950(__this, ___index, ___count, method) (( void (*) (List_1_t7687 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m51950_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Reverse()
extern "C" void List_1_Reverse_m51951_gshared (List_1_t7687 * __this, const MethodInfo* method);
#define List_1_Reverse_m51951(__this, method) (( void (*) (List_1_t7687 *, const MethodInfo*))List_1_Reverse_m51951_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort()
extern "C" void List_1_Sort_m51952_gshared (List_1_t7687 * __this, const MethodInfo* method);
#define List_1_Sort_m51952(__this, method) (( void (*) (List_1_t7687 *, const MethodInfo*))List_1_Sort_m51952_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m51953_gshared (List_1_t7687 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m51953(__this, ___comparer, method) (( void (*) (List_1_t7687 *, Object_t*, const MethodInfo*))List_1_Sort_m51953_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m51954_gshared (List_1_t7687 * __this, Comparison_1_t7697 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m51954(__this, ___comparison, method) (( void (*) (List_1_t7687 *, Comparison_1_t7697 *, const MethodInfo*))List_1_Sort_m51954_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7686* List_1_ToArray_m51955_gshared (List_1_t7687 * __this, const MethodInfo* method);
#define List_1_ToArray_m51955(__this, method) (( KeyValuePair_2U5BU5D_t7686* (*) (List_1_t7687 *, const MethodInfo*))List_1_ToArray_m51955_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::TrimExcess()
extern "C" void List_1_TrimExcess_m51956_gshared (List_1_t7687 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m51956(__this, method) (( void (*) (List_1_t7687 *, const MethodInfo*))List_1_TrimExcess_m51956_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m51957_gshared (List_1_t7687 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m51957(__this, method) (( int32_t (*) (List_1_t7687 *, const MethodInfo*))List_1_get_Capacity_m51957_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m51958_gshared (List_1_t7687 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m51958(__this, ___value, method) (( void (*) (List_1_t7687 *, int32_t, const MethodInfo*))List_1_set_Capacity_m51958_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Count()
extern "C" int32_t List_1_get_Count_m51959_gshared (List_1_t7687 * __this, const MethodInfo* method);
#define List_1_get_Count_m51959(__this, method) (( int32_t (*) (List_1_t7687 *, const MethodInfo*))List_1_get_Count_m51959_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7243  List_1_get_Item_m51960_gshared (List_1_t7687 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m51960(__this, ___index, method) (( KeyValuePair_2_t7243  (*) (List_1_t7687 *, int32_t, const MethodInfo*))List_1_get_Item_m51960_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m51961_gshared (List_1_t7687 * __this, int32_t ___index, KeyValuePair_2_t7243  ___value, const MethodInfo* method);
#define List_1_set_Item_m51961(__this, ___index, ___value, method) (( void (*) (List_1_t7687 *, int32_t, KeyValuePair_2_t7243 , const MethodInfo*))List_1_set_Item_m51961_gshared)(__this, ___index, ___value, method)
