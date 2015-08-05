#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct List_1_t7357;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IEnumerable_1_t7137;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7356;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IEnumerator_1_t7138;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct ICollection_1_t9274;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct ReadOnlyCollection_1_t7360;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Predicate_1_t7364;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IComparer_1_t9275;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Comparison_1_t7367;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_73.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor()
extern "C" void List_1__ctor_m48127_gshared (List_1_t7357 * __this, const MethodInfo* method);
#define List_1__ctor_m48127(__this, method) (( void (*) (List_1_t7357 *, const MethodInfo*))List_1__ctor_m48127_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m48128_gshared (List_1_t7357 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m48128(__this, ___collection, method) (( void (*) (List_1_t7357 *, Object_t*, const MethodInfo*))List_1__ctor_m48128_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m48129_gshared (List_1_t7357 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m48129(__this, ___capacity, method) (( void (*) (List_1_t7357 *, int32_t, const MethodInfo*))List_1__ctor_m48129_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m48130_gshared (List_1_t7357 * __this, KeyValuePair_2U5BU5D_t7356* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m48130(__this, ___data, ___size, method) (( void (*) (List_1_t7357 *, KeyValuePair_2U5BU5D_t7356*, int32_t, const MethodInfo*))List_1__ctor_m48130_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.cctor()
extern "C" void List_1__cctor_m48131_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m48131(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48131_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48132_gshared (List_1_t7357 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48132(__this, method) (( Object_t* (*) (List_1_t7357 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48132_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m48133_gshared (List_1_t7357 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m48133(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7357 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48133_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m48134_gshared (List_1_t7357 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m48134(__this, method) (( Object_t * (*) (List_1_t7357 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48134_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m48135_gshared (List_1_t7357 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m48135(__this, ___item, method) (( int32_t (*) (List_1_t7357 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48135_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m48136_gshared (List_1_t7357 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m48136(__this, ___item, method) (( bool (*) (List_1_t7357 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48136_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m48137_gshared (List_1_t7357 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m48137(__this, ___item, method) (( int32_t (*) (List_1_t7357 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48137_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m48138_gshared (List_1_t7357 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m48138(__this, ___index, ___item, method) (( void (*) (List_1_t7357 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48138_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m48139_gshared (List_1_t7357 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m48139(__this, ___item, method) (( void (*) (List_1_t7357 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48139_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48140_gshared (List_1_t7357 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48140(__this, method) (( bool (*) (List_1_t7357 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48140_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m48141_gshared (List_1_t7357 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m48141(__this, method) (( bool (*) (List_1_t7357 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48141_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m48142_gshared (List_1_t7357 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m48142(__this, method) (( Object_t * (*) (List_1_t7357 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48142_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m48143_gshared (List_1_t7357 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m48143(__this, method) (( bool (*) (List_1_t7357 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48143_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m48144_gshared (List_1_t7357 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m48144(__this, method) (( bool (*) (List_1_t7357 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48144_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m48145_gshared (List_1_t7357 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m48145(__this, ___index, method) (( Object_t * (*) (List_1_t7357 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48145_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m48146_gshared (List_1_t7357 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m48146(__this, ___index, ___value, method) (( void (*) (List_1_t7357 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48146_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Add(T)
extern "C" void List_1_Add_m48147_gshared (List_1_t7357 * __this, KeyValuePair_2_t7133  ___item, const MethodInfo* method);
#define List_1_Add_m48147(__this, ___item, method) (( void (*) (List_1_t7357 *, KeyValuePair_2_t7133 , const MethodInfo*))List_1_Add_m48147_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m48148_gshared (List_1_t7357 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m48148(__this, ___newCount, method) (( void (*) (List_1_t7357 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48148_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m48149_gshared (List_1_t7357 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m48149(__this, ___idx, ___count, method) (( void (*) (List_1_t7357 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48149_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m48150_gshared (List_1_t7357 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m48150(__this, ___collection, method) (( void (*) (List_1_t7357 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48150_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m48151_gshared (List_1_t7357 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m48151(__this, ___enumerable, method) (( void (*) (List_1_t7357 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48151_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m48152_gshared (List_1_t7357 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m48152(__this, ___collection, method) (( void (*) (List_1_t7357 *, Object_t*, const MethodInfo*))List_1_AddRange_m48152_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7360 * List_1_AsReadOnly_m48153_gshared (List_1_t7357 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m48153(__this, method) (( ReadOnlyCollection_1_t7360 * (*) (List_1_t7357 *, const MethodInfo*))List_1_AsReadOnly_m48153_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Clear()
extern "C" void List_1_Clear_m48154_gshared (List_1_t7357 * __this, const MethodInfo* method);
#define List_1_Clear_m48154(__this, method) (( void (*) (List_1_t7357 *, const MethodInfo*))List_1_Clear_m48154_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Contains(T)
extern "C" bool List_1_Contains_m48155_gshared (List_1_t7357 * __this, KeyValuePair_2_t7133  ___item, const MethodInfo* method);
#define List_1_Contains_m48155(__this, ___item, method) (( bool (*) (List_1_t7357 *, KeyValuePair_2_t7133 , const MethodInfo*))List_1_Contains_m48155_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m48156_gshared (List_1_t7357 * __this, KeyValuePair_2U5BU5D_t7356* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m48156(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7357 *, KeyValuePair_2U5BU5D_t7356*, int32_t, const MethodInfo*))List_1_CopyTo_m48156_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7133  List_1_Find_m48157_gshared (List_1_t7357 * __this, Predicate_1_t7364 * ___match, const MethodInfo* method);
#define List_1_Find_m48157(__this, ___match, method) (( KeyValuePair_2_t7133  (*) (List_1_t7357 *, Predicate_1_t7364 *, const MethodInfo*))List_1_Find_m48157_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m48158_gshared (Object_t * __this /* static, unused */, Predicate_1_t7364 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m48158(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7364 *, const MethodInfo*))List_1_CheckMatch_m48158_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m48159_gshared (List_1_t7357 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7364 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m48159(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7357 *, int32_t, int32_t, Predicate_1_t7364 *, const MethodInfo*))List_1_GetIndex_m48159_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetEnumerator()
extern "C" Enumerator_t7358  List_1_GetEnumerator_m48160_gshared (List_1_t7357 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m48160(__this, method) (( Enumerator_t7358  (*) (List_1_t7357 *, const MethodInfo*))List_1_GetEnumerator_m48160_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7357 * List_1_GetRange_m48161_gshared (List_1_t7357 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m48161(__this, ___index, ___count, method) (( List_1_t7357 * (*) (List_1_t7357 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48161_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m48162_gshared (List_1_t7357 * __this, KeyValuePair_2_t7133  ___item, const MethodInfo* method);
#define List_1_IndexOf_m48162(__this, ___item, method) (( int32_t (*) (List_1_t7357 *, KeyValuePair_2_t7133 , const MethodInfo*))List_1_IndexOf_m48162_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m48163_gshared (List_1_t7357 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m48163(__this, ___start, ___delta, method) (( void (*) (List_1_t7357 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48163_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m48164_gshared (List_1_t7357 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m48164(__this, ___index, method) (( void (*) (List_1_t7357 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48164_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m48165_gshared (List_1_t7357 * __this, int32_t ___index, KeyValuePair_2_t7133  ___item, const MethodInfo* method);
#define List_1_Insert_m48165(__this, ___index, ___item, method) (( void (*) (List_1_t7357 *, int32_t, KeyValuePair_2_t7133 , const MethodInfo*))List_1_Insert_m48165_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m48166_gshared (List_1_t7357 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m48166(__this, ___collection, method) (( void (*) (List_1_t7357 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m48167_gshared (List_1_t7357 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m48167(__this, ___index, ___collection, method) (( void (*) (List_1_t7357 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48167_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m48168_gshared (List_1_t7357 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m48168(__this, ___index, ___collection, method) (( void (*) (List_1_t7357 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48168_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m48169_gshared (List_1_t7357 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m48169(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7357 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48169_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Remove(T)
extern "C" bool List_1_Remove_m48170_gshared (List_1_t7357 * __this, KeyValuePair_2_t7133  ___item, const MethodInfo* method);
#define List_1_Remove_m48170(__this, ___item, method) (( bool (*) (List_1_t7357 *, KeyValuePair_2_t7133 , const MethodInfo*))List_1_Remove_m48170_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m48171_gshared (List_1_t7357 * __this, Predicate_1_t7364 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m48171(__this, ___match, method) (( int32_t (*) (List_1_t7357 *, Predicate_1_t7364 *, const MethodInfo*))List_1_RemoveAll_m48171_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m48172_gshared (List_1_t7357 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m48172(__this, ___index, method) (( void (*) (List_1_t7357 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48172_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m48173_gshared (List_1_t7357 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m48173(__this, ___index, ___count, method) (( void (*) (List_1_t7357 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48173_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Reverse()
extern "C" void List_1_Reverse_m48174_gshared (List_1_t7357 * __this, const MethodInfo* method);
#define List_1_Reverse_m48174(__this, method) (( void (*) (List_1_t7357 *, const MethodInfo*))List_1_Reverse_m48174_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort()
extern "C" void List_1_Sort_m48175_gshared (List_1_t7357 * __this, const MethodInfo* method);
#define List_1_Sort_m48175(__this, method) (( void (*) (List_1_t7357 *, const MethodInfo*))List_1_Sort_m48175_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m48176_gshared (List_1_t7357 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m48176(__this, ___comparer, method) (( void (*) (List_1_t7357 *, Object_t*, const MethodInfo*))List_1_Sort_m48176_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m48177_gshared (List_1_t7357 * __this, Comparison_1_t7367 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m48177(__this, ___comparison, method) (( void (*) (List_1_t7357 *, Comparison_1_t7367 *, const MethodInfo*))List_1_Sort_m48177_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7356* List_1_ToArray_m48178_gshared (List_1_t7357 * __this, const MethodInfo* method);
#define List_1_ToArray_m48178(__this, method) (( KeyValuePair_2U5BU5D_t7356* (*) (List_1_t7357 *, const MethodInfo*))List_1_ToArray_m48178_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::TrimExcess()
extern "C" void List_1_TrimExcess_m48179_gshared (List_1_t7357 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m48179(__this, method) (( void (*) (List_1_t7357 *, const MethodInfo*))List_1_TrimExcess_m48179_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m48180_gshared (List_1_t7357 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m48180(__this, method) (( int32_t (*) (List_1_t7357 *, const MethodInfo*))List_1_get_Capacity_m48180_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m48181_gshared (List_1_t7357 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m48181(__this, ___value, method) (( void (*) (List_1_t7357 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48181_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Count()
extern "C" int32_t List_1_get_Count_m48182_gshared (List_1_t7357 * __this, const MethodInfo* method);
#define List_1_get_Count_m48182(__this, method) (( int32_t (*) (List_1_t7357 *, const MethodInfo*))List_1_get_Count_m48182_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7133  List_1_get_Item_m48183_gshared (List_1_t7357 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m48183(__this, ___index, method) (( KeyValuePair_2_t7133  (*) (List_1_t7357 *, int32_t, const MethodInfo*))List_1_get_Item_m48183_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m48184_gshared (List_1_t7357 * __this, int32_t ___index, KeyValuePair_2_t7133  ___value, const MethodInfo* method);
#define List_1_set_Item_m48184(__this, ___index, ___value, method) (( void (*) (List_1_t7357 *, int32_t, KeyValuePair_2_t7133 , const MethodInfo*))List_1_set_Item_m48184_gshared)(__this, ___index, ___value, method)
