#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct List_1_t7292;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerable_1_t7126;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7291;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerator_1_t7127;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct ICollection_1_t9269;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct ReadOnlyCollection_1_t7295;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Predicate_1_t7299;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IComparer_1_t9270;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Comparison_1_t7302;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_71.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor()
extern "C" void List_1__ctor_m47347_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1__ctor_m47347(__this, method) (( void (*) (List_1_t7292 *, const MethodInfo*))List_1__ctor_m47347_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m47348_gshared (List_1_t7292 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m47348(__this, ___collection, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1__ctor_m47348_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m47349_gshared (List_1_t7292 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m47349(__this, ___capacity, method) (( void (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1__ctor_m47349_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m47350_gshared (List_1_t7292 * __this, KeyValuePair_2U5BU5D_t7291* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m47350(__this, ___data, ___size, method) (( void (*) (List_1_t7292 *, KeyValuePair_2U5BU5D_t7291*, int32_t, const MethodInfo*))List_1__ctor_m47350_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.cctor()
extern "C" void List_1__cctor_m47351_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m47351(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m47351_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47352_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47352(__this, method) (( Object_t* (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47352_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m47353_gshared (List_1_t7292 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m47353(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7292 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m47353_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m47354_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m47354(__this, method) (( Object_t * (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m47354_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m47355_gshared (List_1_t7292 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m47355(__this, ___item, method) (( int32_t (*) (List_1_t7292 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m47355_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m47356_gshared (List_1_t7292 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m47356(__this, ___item, method) (( bool (*) (List_1_t7292 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m47356_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m47357_gshared (List_1_t7292 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m47357(__this, ___item, method) (( int32_t (*) (List_1_t7292 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m47357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m47358_gshared (List_1_t7292 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m47358(__this, ___index, ___item, method) (( void (*) (List_1_t7292 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m47358_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m47359_gshared (List_1_t7292 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m47359(__this, ___item, method) (( void (*) (List_1_t7292 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m47359_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47360_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47360(__this, method) (( bool (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47360_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m47361_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m47361(__this, method) (( bool (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m47361_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m47362_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m47362(__this, method) (( Object_t * (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m47362_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m47363_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m47363(__this, method) (( bool (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m47363_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m47364_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m47364(__this, method) (( bool (*) (List_1_t7292 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m47364_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m47365_gshared (List_1_t7292 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m47365(__this, ___index, method) (( Object_t * (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m47365_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m47366_gshared (List_1_t7292 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m47366(__this, ___index, ___value, method) (( void (*) (List_1_t7292 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m47366_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Add(T)
extern "C" void List_1_Add_m47367_gshared (List_1_t7292 * __this, KeyValuePair_2_t7122  ___item, const MethodInfo* method);
#define List_1_Add_m47367(__this, ___item, method) (( void (*) (List_1_t7292 *, KeyValuePair_2_t7122 , const MethodInfo*))List_1_Add_m47367_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m47368_gshared (List_1_t7292 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m47368(__this, ___newCount, method) (( void (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m47368_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m47369_gshared (List_1_t7292 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m47369(__this, ___idx, ___count, method) (( void (*) (List_1_t7292 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m47369_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m47370_gshared (List_1_t7292 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m47370(__this, ___collection, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1_AddCollection_m47370_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m47371_gshared (List_1_t7292 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m47371(__this, ___enumerable, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m47371_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m47372_gshared (List_1_t7292 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m47372(__this, ___collection, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1_AddRange_m47372_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7295 * List_1_AsReadOnly_m47373_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m47373(__this, method) (( ReadOnlyCollection_1_t7295 * (*) (List_1_t7292 *, const MethodInfo*))List_1_AsReadOnly_m47373_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Clear()
extern "C" void List_1_Clear_m47374_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_Clear_m47374(__this, method) (( void (*) (List_1_t7292 *, const MethodInfo*))List_1_Clear_m47374_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Contains(T)
extern "C" bool List_1_Contains_m47375_gshared (List_1_t7292 * __this, KeyValuePair_2_t7122  ___item, const MethodInfo* method);
#define List_1_Contains_m47375(__this, ___item, method) (( bool (*) (List_1_t7292 *, KeyValuePair_2_t7122 , const MethodInfo*))List_1_Contains_m47375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m47376_gshared (List_1_t7292 * __this, KeyValuePair_2U5BU5D_t7291* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m47376(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7292 *, KeyValuePair_2U5BU5D_t7291*, int32_t, const MethodInfo*))List_1_CopyTo_m47376_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7122  List_1_Find_m47377_gshared (List_1_t7292 * __this, Predicate_1_t7299 * ___match, const MethodInfo* method);
#define List_1_Find_m47377(__this, ___match, method) (( KeyValuePair_2_t7122  (*) (List_1_t7292 *, Predicate_1_t7299 *, const MethodInfo*))List_1_Find_m47377_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m47378_gshared (Object_t * __this /* static, unused */, Predicate_1_t7299 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m47378(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7299 *, const MethodInfo*))List_1_CheckMatch_m47378_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m47379_gshared (List_1_t7292 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7299 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m47379(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7292 *, int32_t, int32_t, Predicate_1_t7299 *, const MethodInfo*))List_1_GetIndex_m47379_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetEnumerator()
extern "C" Enumerator_t7293  List_1_GetEnumerator_m47380_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m47380(__this, method) (( Enumerator_t7293  (*) (List_1_t7292 *, const MethodInfo*))List_1_GetEnumerator_m47380_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7292 * List_1_GetRange_m47381_gshared (List_1_t7292 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m47381(__this, ___index, ___count, method) (( List_1_t7292 * (*) (List_1_t7292 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m47381_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m47382_gshared (List_1_t7292 * __this, KeyValuePair_2_t7122  ___item, const MethodInfo* method);
#define List_1_IndexOf_m47382(__this, ___item, method) (( int32_t (*) (List_1_t7292 *, KeyValuePair_2_t7122 , const MethodInfo*))List_1_IndexOf_m47382_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m47383_gshared (List_1_t7292 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m47383(__this, ___start, ___delta, method) (( void (*) (List_1_t7292 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m47383_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m47384_gshared (List_1_t7292 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m47384(__this, ___index, method) (( void (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_CheckIndex_m47384_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m47385_gshared (List_1_t7292 * __this, int32_t ___index, KeyValuePair_2_t7122  ___item, const MethodInfo* method);
#define List_1_Insert_m47385(__this, ___index, ___item, method) (( void (*) (List_1_t7292 *, int32_t, KeyValuePair_2_t7122 , const MethodInfo*))List_1_Insert_m47385_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m47386_gshared (List_1_t7292 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m47386(__this, ___collection, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m47386_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m47387_gshared (List_1_t7292 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m47387(__this, ___index, ___collection, method) (( void (*) (List_1_t7292 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m47387_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m47388_gshared (List_1_t7292 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m47388(__this, ___index, ___collection, method) (( void (*) (List_1_t7292 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m47388_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m47389_gshared (List_1_t7292 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m47389(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7292 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m47389_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Remove(T)
extern "C" bool List_1_Remove_m47390_gshared (List_1_t7292 * __this, KeyValuePair_2_t7122  ___item, const MethodInfo* method);
#define List_1_Remove_m47390(__this, ___item, method) (( bool (*) (List_1_t7292 *, KeyValuePair_2_t7122 , const MethodInfo*))List_1_Remove_m47390_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m47391_gshared (List_1_t7292 * __this, Predicate_1_t7299 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m47391(__this, ___match, method) (( int32_t (*) (List_1_t7292 *, Predicate_1_t7299 *, const MethodInfo*))List_1_RemoveAll_m47391_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m47392_gshared (List_1_t7292 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m47392(__this, ___index, method) (( void (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_RemoveAt_m47392_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m47393_gshared (List_1_t7292 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m47393(__this, ___index, ___count, method) (( void (*) (List_1_t7292 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m47393_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Reverse()
extern "C" void List_1_Reverse_m47394_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_Reverse_m47394(__this, method) (( void (*) (List_1_t7292 *, const MethodInfo*))List_1_Reverse_m47394_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort()
extern "C" void List_1_Sort_m47395_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_Sort_m47395(__this, method) (( void (*) (List_1_t7292 *, const MethodInfo*))List_1_Sort_m47395_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m47396_gshared (List_1_t7292 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m47396(__this, ___comparer, method) (( void (*) (List_1_t7292 *, Object_t*, const MethodInfo*))List_1_Sort_m47396_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m47397_gshared (List_1_t7292 * __this, Comparison_1_t7302 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m47397(__this, ___comparison, method) (( void (*) (List_1_t7292 *, Comparison_1_t7302 *, const MethodInfo*))List_1_Sort_m47397_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7291* List_1_ToArray_m47398_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_ToArray_m47398(__this, method) (( KeyValuePair_2U5BU5D_t7291* (*) (List_1_t7292 *, const MethodInfo*))List_1_ToArray_m47398_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::TrimExcess()
extern "C" void List_1_TrimExcess_m47399_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m47399(__this, method) (( void (*) (List_1_t7292 *, const MethodInfo*))List_1_TrimExcess_m47399_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m47400_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m47400(__this, method) (( int32_t (*) (List_1_t7292 *, const MethodInfo*))List_1_get_Capacity_m47400_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m47401_gshared (List_1_t7292 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m47401(__this, ___value, method) (( void (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_set_Capacity_m47401_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Count()
extern "C" int32_t List_1_get_Count_m47402_gshared (List_1_t7292 * __this, const MethodInfo* method);
#define List_1_get_Count_m47402(__this, method) (( int32_t (*) (List_1_t7292 *, const MethodInfo*))List_1_get_Count_m47402_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7122  List_1_get_Item_m47403_gshared (List_1_t7292 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m47403(__this, ___index, method) (( KeyValuePair_2_t7122  (*) (List_1_t7292 *, int32_t, const MethodInfo*))List_1_get_Item_m47403_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m47404_gshared (List_1_t7292 * __this, int32_t ___index, KeyValuePair_2_t7122  ___value, const MethodInfo* method);
#define List_1_set_Item_m47404(__this, ___index, ___value, method) (( void (*) (List_1_t7292 *, int32_t, KeyValuePair_2_t7122 , const MethodInfo*))List_1_set_Item_m47404_gshared)(__this, ___index, ___value, method)
