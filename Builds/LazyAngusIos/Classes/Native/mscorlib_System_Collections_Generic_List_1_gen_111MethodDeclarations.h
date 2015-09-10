#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct List_1_t8479;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerable_1_t7859;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t8478;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t7860;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct ICollection_1_t10049;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct ReadOnlyCollection_1_t8482;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Predicate_1_t8486;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IComparer_1_t10050;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Comparison_1_t8489;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_94.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor()
extern "C" void List_1__ctor_m59344_gshared (List_1_t8479 * __this, const MethodInfo* method);
#define List_1__ctor_m59344(__this, method) (( void (*) (List_1_t8479 *, const MethodInfo*))List_1__ctor_m59344_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m59345_gshared (List_1_t8479 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m59345(__this, ___collection, method) (( void (*) (List_1_t8479 *, Object_t*, const MethodInfo*))List_1__ctor_m59345_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m59346_gshared (List_1_t8479 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m59346(__this, ___capacity, method) (( void (*) (List_1_t8479 *, int32_t, const MethodInfo*))List_1__ctor_m59346_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m59347_gshared (List_1_t8479 * __this, KeyValuePair_2U5BU5D_t8478* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m59347(__this, ___data, ___size, method) (( void (*) (List_1_t8479 *, KeyValuePair_2U5BU5D_t8478*, int32_t, const MethodInfo*))List_1__ctor_m59347_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.cctor()
extern "C" void List_1__cctor_m59348_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m59348(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m59348_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59349_gshared (List_1_t8479 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59349(__this, method) (( Object_t* (*) (List_1_t8479 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m59349_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m59350_gshared (List_1_t8479 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m59350(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8479 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m59350_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m59351_gshared (List_1_t8479 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m59351(__this, method) (( Object_t * (*) (List_1_t8479 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m59351_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m59352_gshared (List_1_t8479 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m59352(__this, ___item, method) (( int32_t (*) (List_1_t8479 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m59352_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m59353_gshared (List_1_t8479 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m59353(__this, ___item, method) (( bool (*) (List_1_t8479 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m59353_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m59354_gshared (List_1_t8479 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m59354(__this, ___item, method) (( int32_t (*) (List_1_t8479 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m59354_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m59355_gshared (List_1_t8479 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m59355(__this, ___index, ___item, method) (( void (*) (List_1_t8479 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m59355_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m59356_gshared (List_1_t8479 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m59356(__this, ___item, method) (( void (*) (List_1_t8479 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m59356_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59357_gshared (List_1_t8479 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59357(__this, method) (( bool (*) (List_1_t8479 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m59357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m59358_gshared (List_1_t8479 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m59358(__this, method) (( bool (*) (List_1_t8479 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m59358_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m59359_gshared (List_1_t8479 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m59359(__this, method) (( Object_t * (*) (List_1_t8479 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m59359_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m59360_gshared (List_1_t8479 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m59360(__this, method) (( bool (*) (List_1_t8479 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m59360_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m59361_gshared (List_1_t8479 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m59361(__this, method) (( bool (*) (List_1_t8479 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m59361_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m59362_gshared (List_1_t8479 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m59362(__this, ___index, method) (( Object_t * (*) (List_1_t8479 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m59362_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m59363_gshared (List_1_t8479 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m59363(__this, ___index, ___value, method) (( void (*) (List_1_t8479 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m59363_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Add(T)
extern "C" void List_1_Add_m59364_gshared (List_1_t8479 * __this, KeyValuePair_2_t7584  ___item, const MethodInfo* method);
#define List_1_Add_m59364(__this, ___item, method) (( void (*) (List_1_t8479 *, KeyValuePair_2_t7584 , const MethodInfo*))List_1_Add_m59364_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m59365_gshared (List_1_t8479 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m59365(__this, ___newCount, method) (( void (*) (List_1_t8479 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m59365_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m59366_gshared (List_1_t8479 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m59366(__this, ___idx, ___count, method) (( void (*) (List_1_t8479 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m59366_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m59367_gshared (List_1_t8479 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m59367(__this, ___collection, method) (( void (*) (List_1_t8479 *, Object_t*, const MethodInfo*))List_1_AddCollection_m59367_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m59368_gshared (List_1_t8479 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m59368(__this, ___enumerable, method) (( void (*) (List_1_t8479 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m59368_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m59369_gshared (List_1_t8479 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m59369(__this, ___collection, method) (( void (*) (List_1_t8479 *, Object_t*, const MethodInfo*))List_1_AddRange_m59369_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8482 * List_1_AsReadOnly_m59370_gshared (List_1_t8479 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m59370(__this, method) (( ReadOnlyCollection_1_t8482 * (*) (List_1_t8479 *, const MethodInfo*))List_1_AsReadOnly_m59370_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Clear()
extern "C" void List_1_Clear_m59371_gshared (List_1_t8479 * __this, const MethodInfo* method);
#define List_1_Clear_m59371(__this, method) (( void (*) (List_1_t8479 *, const MethodInfo*))List_1_Clear_m59371_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Contains(T)
extern "C" bool List_1_Contains_m59372_gshared (List_1_t8479 * __this, KeyValuePair_2_t7584  ___item, const MethodInfo* method);
#define List_1_Contains_m59372(__this, ___item, method) (( bool (*) (List_1_t8479 *, KeyValuePair_2_t7584 , const MethodInfo*))List_1_Contains_m59372_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m59373_gshared (List_1_t8479 * __this, KeyValuePair_2U5BU5D_t8478* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m59373(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8479 *, KeyValuePair_2U5BU5D_t8478*, int32_t, const MethodInfo*))List_1_CopyTo_m59373_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7584  List_1_Find_m59374_gshared (List_1_t8479 * __this, Predicate_1_t8486 * ___match, const MethodInfo* method);
#define List_1_Find_m59374(__this, ___match, method) (( KeyValuePair_2_t7584  (*) (List_1_t8479 *, Predicate_1_t8486 *, const MethodInfo*))List_1_Find_m59374_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m59375_gshared (Object_t * __this /* static, unused */, Predicate_1_t8486 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m59375(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8486 *, const MethodInfo*))List_1_CheckMatch_m59375_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m59376_gshared (List_1_t8479 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8486 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m59376(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8479 *, int32_t, int32_t, Predicate_1_t8486 *, const MethodInfo*))List_1_GetIndex_m59376_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetEnumerator()
extern "C" Enumerator_t8480  List_1_GetEnumerator_m59377_gshared (List_1_t8479 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m59377(__this, method) (( Enumerator_t8480  (*) (List_1_t8479 *, const MethodInfo*))List_1_GetEnumerator_m59377_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8479 * List_1_GetRange_m59378_gshared (List_1_t8479 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m59378(__this, ___index, ___count, method) (( List_1_t8479 * (*) (List_1_t8479 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m59378_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m59379_gshared (List_1_t8479 * __this, KeyValuePair_2_t7584  ___item, const MethodInfo* method);
#define List_1_IndexOf_m59379(__this, ___item, method) (( int32_t (*) (List_1_t8479 *, KeyValuePair_2_t7584 , const MethodInfo*))List_1_IndexOf_m59379_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m59380_gshared (List_1_t8479 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m59380(__this, ___start, ___delta, method) (( void (*) (List_1_t8479 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m59380_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m59381_gshared (List_1_t8479 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m59381(__this, ___index, method) (( void (*) (List_1_t8479 *, int32_t, const MethodInfo*))List_1_CheckIndex_m59381_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m59382_gshared (List_1_t8479 * __this, int32_t ___index, KeyValuePair_2_t7584  ___item, const MethodInfo* method);
#define List_1_Insert_m59382(__this, ___index, ___item, method) (( void (*) (List_1_t8479 *, int32_t, KeyValuePair_2_t7584 , const MethodInfo*))List_1_Insert_m59382_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m59383_gshared (List_1_t8479 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m59383(__this, ___collection, method) (( void (*) (List_1_t8479 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m59383_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m59384_gshared (List_1_t8479 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m59384(__this, ___index, ___collection, method) (( void (*) (List_1_t8479 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m59384_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m59385_gshared (List_1_t8479 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m59385(__this, ___index, ___collection, method) (( void (*) (List_1_t8479 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m59385_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m59386_gshared (List_1_t8479 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m59386(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8479 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m59386_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Remove(T)
extern "C" bool List_1_Remove_m59387_gshared (List_1_t8479 * __this, KeyValuePair_2_t7584  ___item, const MethodInfo* method);
#define List_1_Remove_m59387(__this, ___item, method) (( bool (*) (List_1_t8479 *, KeyValuePair_2_t7584 , const MethodInfo*))List_1_Remove_m59387_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m59388_gshared (List_1_t8479 * __this, Predicate_1_t8486 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m59388(__this, ___match, method) (( int32_t (*) (List_1_t8479 *, Predicate_1_t8486 *, const MethodInfo*))List_1_RemoveAll_m59388_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m59389_gshared (List_1_t8479 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m59389(__this, ___index, method) (( void (*) (List_1_t8479 *, int32_t, const MethodInfo*))List_1_RemoveAt_m59389_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m59390_gshared (List_1_t8479 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m59390(__this, ___index, ___count, method) (( void (*) (List_1_t8479 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m59390_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Reverse()
extern "C" void List_1_Reverse_m59391_gshared (List_1_t8479 * __this, const MethodInfo* method);
#define List_1_Reverse_m59391(__this, method) (( void (*) (List_1_t8479 *, const MethodInfo*))List_1_Reverse_m59391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort()
extern "C" void List_1_Sort_m59392_gshared (List_1_t8479 * __this, const MethodInfo* method);
#define List_1_Sort_m59392(__this, method) (( void (*) (List_1_t8479 *, const MethodInfo*))List_1_Sort_m59392_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m59393_gshared (List_1_t8479 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m59393(__this, ___comparer, method) (( void (*) (List_1_t8479 *, Object_t*, const MethodInfo*))List_1_Sort_m59393_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m59394_gshared (List_1_t8479 * __this, Comparison_1_t8489 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m59394(__this, ___comparison, method) (( void (*) (List_1_t8479 *, Comparison_1_t8489 *, const MethodInfo*))List_1_Sort_m59394_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8478* List_1_ToArray_m59395_gshared (List_1_t8479 * __this, const MethodInfo* method);
#define List_1_ToArray_m59395(__this, method) (( KeyValuePair_2U5BU5D_t8478* (*) (List_1_t8479 *, const MethodInfo*))List_1_ToArray_m59395_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::TrimExcess()
extern "C" void List_1_TrimExcess_m59396_gshared (List_1_t8479 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m59396(__this, method) (( void (*) (List_1_t8479 *, const MethodInfo*))List_1_TrimExcess_m59396_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m59397_gshared (List_1_t8479 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m59397(__this, method) (( int32_t (*) (List_1_t8479 *, const MethodInfo*))List_1_get_Capacity_m59397_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m59398_gshared (List_1_t8479 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m59398(__this, ___value, method) (( void (*) (List_1_t8479 *, int32_t, const MethodInfo*))List_1_set_Capacity_m59398_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Count()
extern "C" int32_t List_1_get_Count_m59399_gshared (List_1_t8479 * __this, const MethodInfo* method);
#define List_1_get_Count_m59399(__this, method) (( int32_t (*) (List_1_t8479 *, const MethodInfo*))List_1_get_Count_m59399_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7584  List_1_get_Item_m59400_gshared (List_1_t8479 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m59400(__this, ___index, method) (( KeyValuePair_2_t7584  (*) (List_1_t8479 *, int32_t, const MethodInfo*))List_1_get_Item_m59400_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m59401_gshared (List_1_t8479 * __this, int32_t ___index, KeyValuePair_2_t7584  ___value, const MethodInfo* method);
#define List_1_set_Item_m59401(__this, ___index, ___value, method) (( void (*) (List_1_t8479 *, int32_t, KeyValuePair_2_t7584 , const MethodInfo*))List_1_set_Item_m59401_gshared)(__this, ___index, ___value, method)
