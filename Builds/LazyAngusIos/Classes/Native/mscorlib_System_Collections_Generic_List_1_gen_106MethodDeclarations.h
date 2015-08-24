#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct List_1_t7837;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerable_1_t7275;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t7836;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t7276;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ICollection_1_t9407;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct ReadOnlyCollection_1_t7840;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Predicate_1_t7844;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IComparer_1_t9408;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct Comparison_1_t7847;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_89.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor()
extern "C" void List_1__ctor_m53891_gshared (List_1_t7837 * __this, const MethodInfo* method);
#define List_1__ctor_m53891(__this, method) (( void (*) (List_1_t7837 *, const MethodInfo*))List_1__ctor_m53891_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m53892_gshared (List_1_t7837 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m53892(__this, ___collection, method) (( void (*) (List_1_t7837 *, Object_t*, const MethodInfo*))List_1__ctor_m53892_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m53893_gshared (List_1_t7837 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m53893(__this, ___capacity, method) (( void (*) (List_1_t7837 *, int32_t, const MethodInfo*))List_1__ctor_m53893_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m53894_gshared (List_1_t7837 * __this, KeyValuePair_2U5BU5D_t7836* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m53894(__this, ___data, ___size, method) (( void (*) (List_1_t7837 *, KeyValuePair_2U5BU5D_t7836*, int32_t, const MethodInfo*))List_1__ctor_m53894_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::.cctor()
extern "C" void List_1__cctor_m53895_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m53895(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m53895_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53896_gshared (List_1_t7837 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53896(__this, method) (( Object_t* (*) (List_1_t7837 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m53896_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m53897_gshared (List_1_t7837 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m53897(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7837 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m53897_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m53898_gshared (List_1_t7837 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m53898(__this, method) (( Object_t * (*) (List_1_t7837 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m53898_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m53899_gshared (List_1_t7837 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m53899(__this, ___item, method) (( int32_t (*) (List_1_t7837 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m53899_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m53900_gshared (List_1_t7837 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m53900(__this, ___item, method) (( bool (*) (List_1_t7837 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m53900_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m53901_gshared (List_1_t7837 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m53901(__this, ___item, method) (( int32_t (*) (List_1_t7837 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m53901_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m53902_gshared (List_1_t7837 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m53902(__this, ___index, ___item, method) (( void (*) (List_1_t7837 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m53902_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m53903_gshared (List_1_t7837 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m53903(__this, ___item, method) (( void (*) (List_1_t7837 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m53903_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53904_gshared (List_1_t7837 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53904(__this, method) (( bool (*) (List_1_t7837 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m53904_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m53905_gshared (List_1_t7837 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m53905(__this, method) (( bool (*) (List_1_t7837 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m53905_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m53906_gshared (List_1_t7837 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m53906(__this, method) (( Object_t * (*) (List_1_t7837 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m53906_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m53907_gshared (List_1_t7837 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m53907(__this, method) (( bool (*) (List_1_t7837 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m53907_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m53908_gshared (List_1_t7837 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m53908(__this, method) (( bool (*) (List_1_t7837 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m53908_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m53909_gshared (List_1_t7837 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m53909(__this, ___index, method) (( Object_t * (*) (List_1_t7837 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m53909_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m53910_gshared (List_1_t7837 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m53910(__this, ___index, ___value, method) (( void (*) (List_1_t7837 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m53910_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Add(T)
extern "C" void List_1_Add_m53911_gshared (List_1_t7837 * __this, KeyValuePair_2_t7013  ___item, const MethodInfo* method);
#define List_1_Add_m53911(__this, ___item, method) (( void (*) (List_1_t7837 *, KeyValuePair_2_t7013 , const MethodInfo*))List_1_Add_m53911_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m53912_gshared (List_1_t7837 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m53912(__this, ___newCount, method) (( void (*) (List_1_t7837 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m53912_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m53913_gshared (List_1_t7837 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m53913(__this, ___idx, ___count, method) (( void (*) (List_1_t7837 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m53913_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m53914_gshared (List_1_t7837 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m53914(__this, ___collection, method) (( void (*) (List_1_t7837 *, Object_t*, const MethodInfo*))List_1_AddCollection_m53914_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m53915_gshared (List_1_t7837 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m53915(__this, ___enumerable, method) (( void (*) (List_1_t7837 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m53915_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m53916_gshared (List_1_t7837 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m53916(__this, ___collection, method) (( void (*) (List_1_t7837 *, Object_t*, const MethodInfo*))List_1_AddRange_m53916_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7840 * List_1_AsReadOnly_m53917_gshared (List_1_t7837 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m53917(__this, method) (( ReadOnlyCollection_1_t7840 * (*) (List_1_t7837 *, const MethodInfo*))List_1_AsReadOnly_m53917_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Clear()
extern "C" void List_1_Clear_m53918_gshared (List_1_t7837 * __this, const MethodInfo* method);
#define List_1_Clear_m53918(__this, method) (( void (*) (List_1_t7837 *, const MethodInfo*))List_1_Clear_m53918_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Contains(T)
extern "C" bool List_1_Contains_m53919_gshared (List_1_t7837 * __this, KeyValuePair_2_t7013  ___item, const MethodInfo* method);
#define List_1_Contains_m53919(__this, ___item, method) (( bool (*) (List_1_t7837 *, KeyValuePair_2_t7013 , const MethodInfo*))List_1_Contains_m53919_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m53920_gshared (List_1_t7837 * __this, KeyValuePair_2U5BU5D_t7836* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m53920(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7837 *, KeyValuePair_2U5BU5D_t7836*, int32_t, const MethodInfo*))List_1_CopyTo_m53920_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7013  List_1_Find_m53921_gshared (List_1_t7837 * __this, Predicate_1_t7844 * ___match, const MethodInfo* method);
#define List_1_Find_m53921(__this, ___match, method) (( KeyValuePair_2_t7013  (*) (List_1_t7837 *, Predicate_1_t7844 *, const MethodInfo*))List_1_Find_m53921_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m53922_gshared (Object_t * __this /* static, unused */, Predicate_1_t7844 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m53922(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7844 *, const MethodInfo*))List_1_CheckMatch_m53922_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m53923_gshared (List_1_t7837 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7844 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m53923(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7837 *, int32_t, int32_t, Predicate_1_t7844 *, const MethodInfo*))List_1_GetIndex_m53923_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetEnumerator()
extern "C" Enumerator_t7838  List_1_GetEnumerator_m53924_gshared (List_1_t7837 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m53924(__this, method) (( Enumerator_t7838  (*) (List_1_t7837 *, const MethodInfo*))List_1_GetEnumerator_m53924_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7837 * List_1_GetRange_m53925_gshared (List_1_t7837 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m53925(__this, ___index, ___count, method) (( List_1_t7837 * (*) (List_1_t7837 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m53925_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m53926_gshared (List_1_t7837 * __this, KeyValuePair_2_t7013  ___item, const MethodInfo* method);
#define List_1_IndexOf_m53926(__this, ___item, method) (( int32_t (*) (List_1_t7837 *, KeyValuePair_2_t7013 , const MethodInfo*))List_1_IndexOf_m53926_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m53927_gshared (List_1_t7837 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m53927(__this, ___start, ___delta, method) (( void (*) (List_1_t7837 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m53927_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m53928_gshared (List_1_t7837 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m53928(__this, ___index, method) (( void (*) (List_1_t7837 *, int32_t, const MethodInfo*))List_1_CheckIndex_m53928_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m53929_gshared (List_1_t7837 * __this, int32_t ___index, KeyValuePair_2_t7013  ___item, const MethodInfo* method);
#define List_1_Insert_m53929(__this, ___index, ___item, method) (( void (*) (List_1_t7837 *, int32_t, KeyValuePair_2_t7013 , const MethodInfo*))List_1_Insert_m53929_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m53930_gshared (List_1_t7837 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m53930(__this, ___collection, method) (( void (*) (List_1_t7837 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m53930_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m53931_gshared (List_1_t7837 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m53931(__this, ___index, ___collection, method) (( void (*) (List_1_t7837 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m53931_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m53932_gshared (List_1_t7837 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m53932(__this, ___index, ___collection, method) (( void (*) (List_1_t7837 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m53932_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m53933_gshared (List_1_t7837 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m53933(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7837 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m53933_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Remove(T)
extern "C" bool List_1_Remove_m53934_gshared (List_1_t7837 * __this, KeyValuePair_2_t7013  ___item, const MethodInfo* method);
#define List_1_Remove_m53934(__this, ___item, method) (( bool (*) (List_1_t7837 *, KeyValuePair_2_t7013 , const MethodInfo*))List_1_Remove_m53934_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m53935_gshared (List_1_t7837 * __this, Predicate_1_t7844 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m53935(__this, ___match, method) (( int32_t (*) (List_1_t7837 *, Predicate_1_t7844 *, const MethodInfo*))List_1_RemoveAll_m53935_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m53936_gshared (List_1_t7837 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m53936(__this, ___index, method) (( void (*) (List_1_t7837 *, int32_t, const MethodInfo*))List_1_RemoveAt_m53936_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m53937_gshared (List_1_t7837 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m53937(__this, ___index, ___count, method) (( void (*) (List_1_t7837 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m53937_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Reverse()
extern "C" void List_1_Reverse_m53938_gshared (List_1_t7837 * __this, const MethodInfo* method);
#define List_1_Reverse_m53938(__this, method) (( void (*) (List_1_t7837 *, const MethodInfo*))List_1_Reverse_m53938_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort()
extern "C" void List_1_Sort_m53939_gshared (List_1_t7837 * __this, const MethodInfo* method);
#define List_1_Sort_m53939(__this, method) (( void (*) (List_1_t7837 *, const MethodInfo*))List_1_Sort_m53939_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m53940_gshared (List_1_t7837 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m53940(__this, ___comparer, method) (( void (*) (List_1_t7837 *, Object_t*, const MethodInfo*))List_1_Sort_m53940_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m53941_gshared (List_1_t7837 * __this, Comparison_1_t7847 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m53941(__this, ___comparison, method) (( void (*) (List_1_t7837 *, Comparison_1_t7847 *, const MethodInfo*))List_1_Sort_m53941_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7836* List_1_ToArray_m53942_gshared (List_1_t7837 * __this, const MethodInfo* method);
#define List_1_ToArray_m53942(__this, method) (( KeyValuePair_2U5BU5D_t7836* (*) (List_1_t7837 *, const MethodInfo*))List_1_ToArray_m53942_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::TrimExcess()
extern "C" void List_1_TrimExcess_m53943_gshared (List_1_t7837 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m53943(__this, method) (( void (*) (List_1_t7837 *, const MethodInfo*))List_1_TrimExcess_m53943_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m53944_gshared (List_1_t7837 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m53944(__this, method) (( int32_t (*) (List_1_t7837 *, const MethodInfo*))List_1_get_Capacity_m53944_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m53945_gshared (List_1_t7837 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m53945(__this, ___value, method) (( void (*) (List_1_t7837 *, int32_t, const MethodInfo*))List_1_set_Capacity_m53945_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Count()
extern "C" int32_t List_1_get_Count_m53946_gshared (List_1_t7837 * __this, const MethodInfo* method);
#define List_1_get_Count_m53946(__this, method) (( int32_t (*) (List_1_t7837 *, const MethodInfo*))List_1_get_Count_m53946_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7013  List_1_get_Item_m53947_gshared (List_1_t7837 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m53947(__this, ___index, method) (( KeyValuePair_2_t7013  (*) (List_1_t7837 *, int32_t, const MethodInfo*))List_1_get_Item_m53947_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m53948_gshared (List_1_t7837 * __this, int32_t ___index, KeyValuePair_2_t7013  ___value, const MethodInfo* method);
#define List_1_set_Item_m53948(__this, ___index, ___value, method) (( void (*) (List_1_t7837 *, int32_t, KeyValuePair_2_t7013 , const MethodInfo*))List_1_set_Item_m53948_gshared)(__this, ___index, ___value, method)
