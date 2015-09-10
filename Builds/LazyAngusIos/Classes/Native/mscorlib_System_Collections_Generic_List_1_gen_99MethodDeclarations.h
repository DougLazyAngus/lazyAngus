#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct List_1_t8076;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerable_1_t7802;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8075;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t7803;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct ICollection_1_t10016;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct ReadOnlyCollection_1_t8079;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Predicate_1_t8083;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IComparer_1_t10017;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Comparison_1_t8086;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_82.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor()
extern "C" void List_1__ctor_m54370_gshared (List_1_t8076 * __this, const MethodInfo* method);
#define List_1__ctor_m54370(__this, method) (( void (*) (List_1_t8076 *, const MethodInfo*))List_1__ctor_m54370_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m54371_gshared (List_1_t8076 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m54371(__this, ___collection, method) (( void (*) (List_1_t8076 *, Object_t*, const MethodInfo*))List_1__ctor_m54371_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m54372_gshared (List_1_t8076 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m54372(__this, ___capacity, method) (( void (*) (List_1_t8076 *, int32_t, const MethodInfo*))List_1__ctor_m54372_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m54373_gshared (List_1_t8076 * __this, KeyValuePair_2U5BU5D_t8075* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m54373(__this, ___data, ___size, method) (( void (*) (List_1_t8076 *, KeyValuePair_2U5BU5D_t8075*, int32_t, const MethodInfo*))List_1__ctor_m54373_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.cctor()
extern "C" void List_1__cctor_m54374_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m54374(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m54374_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54375_gshared (List_1_t8076 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54375(__this, method) (( Object_t* (*) (List_1_t8076 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54375_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m54376_gshared (List_1_t8076 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m54376(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8076 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m54376_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m54377_gshared (List_1_t8076 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m54377(__this, method) (( Object_t * (*) (List_1_t8076 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m54377_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m54378_gshared (List_1_t8076 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m54378(__this, ___item, method) (( int32_t (*) (List_1_t8076 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m54378_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m54379_gshared (List_1_t8076 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m54379(__this, ___item, method) (( bool (*) (List_1_t8076 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m54379_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m54380_gshared (List_1_t8076 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m54380(__this, ___item, method) (( int32_t (*) (List_1_t8076 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m54380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m54381_gshared (List_1_t8076 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m54381(__this, ___index, ___item, method) (( void (*) (List_1_t8076 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m54381_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m54382_gshared (List_1_t8076 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m54382(__this, ___item, method) (( void (*) (List_1_t8076 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m54382_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54383_gshared (List_1_t8076 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54383(__this, method) (( bool (*) (List_1_t8076 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54383_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m54384_gshared (List_1_t8076 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m54384(__this, method) (( bool (*) (List_1_t8076 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m54384_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m54385_gshared (List_1_t8076 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m54385(__this, method) (( Object_t * (*) (List_1_t8076 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m54385_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m54386_gshared (List_1_t8076 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m54386(__this, method) (( bool (*) (List_1_t8076 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m54386_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m54387_gshared (List_1_t8076 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m54387(__this, method) (( bool (*) (List_1_t8076 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m54387_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m54388_gshared (List_1_t8076 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m54388(__this, ___index, method) (( Object_t * (*) (List_1_t8076 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m54388_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m54389_gshared (List_1_t8076 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m54389(__this, ___index, ___value, method) (( void (*) (List_1_t8076 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m54389_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Add(T)
extern "C" void List_1_Add_m54390_gshared (List_1_t8076 * __this, KeyValuePair_2_t7798  ___item, const MethodInfo* method);
#define List_1_Add_m54390(__this, ___item, method) (( void (*) (List_1_t8076 *, KeyValuePair_2_t7798 , const MethodInfo*))List_1_Add_m54390_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m54391_gshared (List_1_t8076 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m54391(__this, ___newCount, method) (( void (*) (List_1_t8076 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m54391_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m54392_gshared (List_1_t8076 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m54392(__this, ___idx, ___count, method) (( void (*) (List_1_t8076 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m54392_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m54393_gshared (List_1_t8076 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m54393(__this, ___collection, method) (( void (*) (List_1_t8076 *, Object_t*, const MethodInfo*))List_1_AddCollection_m54393_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m54394_gshared (List_1_t8076 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m54394(__this, ___enumerable, method) (( void (*) (List_1_t8076 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m54394_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m54395_gshared (List_1_t8076 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m54395(__this, ___collection, method) (( void (*) (List_1_t8076 *, Object_t*, const MethodInfo*))List_1_AddRange_m54395_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8079 * List_1_AsReadOnly_m54396_gshared (List_1_t8076 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m54396(__this, method) (( ReadOnlyCollection_1_t8079 * (*) (List_1_t8076 *, const MethodInfo*))List_1_AsReadOnly_m54396_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Clear()
extern "C" void List_1_Clear_m54397_gshared (List_1_t8076 * __this, const MethodInfo* method);
#define List_1_Clear_m54397(__this, method) (( void (*) (List_1_t8076 *, const MethodInfo*))List_1_Clear_m54397_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Contains(T)
extern "C" bool List_1_Contains_m54398_gshared (List_1_t8076 * __this, KeyValuePair_2_t7798  ___item, const MethodInfo* method);
#define List_1_Contains_m54398(__this, ___item, method) (( bool (*) (List_1_t8076 *, KeyValuePair_2_t7798 , const MethodInfo*))List_1_Contains_m54398_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m54399_gshared (List_1_t8076 * __this, KeyValuePair_2U5BU5D_t8075* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m54399(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8076 *, KeyValuePair_2U5BU5D_t8075*, int32_t, const MethodInfo*))List_1_CopyTo_m54399_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7798  List_1_Find_m54400_gshared (List_1_t8076 * __this, Predicate_1_t8083 * ___match, const MethodInfo* method);
#define List_1_Find_m54400(__this, ___match, method) (( KeyValuePair_2_t7798  (*) (List_1_t8076 *, Predicate_1_t8083 *, const MethodInfo*))List_1_Find_m54400_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m54401_gshared (Object_t * __this /* static, unused */, Predicate_1_t8083 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m54401(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8083 *, const MethodInfo*))List_1_CheckMatch_m54401_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m54402_gshared (List_1_t8076 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8083 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m54402(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8076 *, int32_t, int32_t, Predicate_1_t8083 *, const MethodInfo*))List_1_GetIndex_m54402_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetEnumerator()
extern "C" Enumerator_t8077  List_1_GetEnumerator_m54403_gshared (List_1_t8076 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m54403(__this, method) (( Enumerator_t8077  (*) (List_1_t8076 *, const MethodInfo*))List_1_GetEnumerator_m54403_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8076 * List_1_GetRange_m54404_gshared (List_1_t8076 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m54404(__this, ___index, ___count, method) (( List_1_t8076 * (*) (List_1_t8076 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m54404_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m54405_gshared (List_1_t8076 * __this, KeyValuePair_2_t7798  ___item, const MethodInfo* method);
#define List_1_IndexOf_m54405(__this, ___item, method) (( int32_t (*) (List_1_t8076 *, KeyValuePair_2_t7798 , const MethodInfo*))List_1_IndexOf_m54405_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m54406_gshared (List_1_t8076 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m54406(__this, ___start, ___delta, method) (( void (*) (List_1_t8076 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m54406_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m54407_gshared (List_1_t8076 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m54407(__this, ___index, method) (( void (*) (List_1_t8076 *, int32_t, const MethodInfo*))List_1_CheckIndex_m54407_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m54408_gshared (List_1_t8076 * __this, int32_t ___index, KeyValuePair_2_t7798  ___item, const MethodInfo* method);
#define List_1_Insert_m54408(__this, ___index, ___item, method) (( void (*) (List_1_t8076 *, int32_t, KeyValuePair_2_t7798 , const MethodInfo*))List_1_Insert_m54408_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m54409_gshared (List_1_t8076 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m54409(__this, ___collection, method) (( void (*) (List_1_t8076 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m54409_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m54410_gshared (List_1_t8076 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m54410(__this, ___index, ___collection, method) (( void (*) (List_1_t8076 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m54410_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m54411_gshared (List_1_t8076 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m54411(__this, ___index, ___collection, method) (( void (*) (List_1_t8076 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m54411_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m54412_gshared (List_1_t8076 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m54412(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8076 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m54412_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Remove(T)
extern "C" bool List_1_Remove_m54413_gshared (List_1_t8076 * __this, KeyValuePair_2_t7798  ___item, const MethodInfo* method);
#define List_1_Remove_m54413(__this, ___item, method) (( bool (*) (List_1_t8076 *, KeyValuePair_2_t7798 , const MethodInfo*))List_1_Remove_m54413_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m54414_gshared (List_1_t8076 * __this, Predicate_1_t8083 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m54414(__this, ___match, method) (( int32_t (*) (List_1_t8076 *, Predicate_1_t8083 *, const MethodInfo*))List_1_RemoveAll_m54414_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m54415_gshared (List_1_t8076 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m54415(__this, ___index, method) (( void (*) (List_1_t8076 *, int32_t, const MethodInfo*))List_1_RemoveAt_m54415_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m54416_gshared (List_1_t8076 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m54416(__this, ___index, ___count, method) (( void (*) (List_1_t8076 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m54416_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Reverse()
extern "C" void List_1_Reverse_m54417_gshared (List_1_t8076 * __this, const MethodInfo* method);
#define List_1_Reverse_m54417(__this, method) (( void (*) (List_1_t8076 *, const MethodInfo*))List_1_Reverse_m54417_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort()
extern "C" void List_1_Sort_m54418_gshared (List_1_t8076 * __this, const MethodInfo* method);
#define List_1_Sort_m54418(__this, method) (( void (*) (List_1_t8076 *, const MethodInfo*))List_1_Sort_m54418_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m54419_gshared (List_1_t8076 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m54419(__this, ___comparer, method) (( void (*) (List_1_t8076 *, Object_t*, const MethodInfo*))List_1_Sort_m54419_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m54420_gshared (List_1_t8076 * __this, Comparison_1_t8086 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m54420(__this, ___comparison, method) (( void (*) (List_1_t8076 *, Comparison_1_t8086 *, const MethodInfo*))List_1_Sort_m54420_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8075* List_1_ToArray_m54421_gshared (List_1_t8076 * __this, const MethodInfo* method);
#define List_1_ToArray_m54421(__this, method) (( KeyValuePair_2U5BU5D_t8075* (*) (List_1_t8076 *, const MethodInfo*))List_1_ToArray_m54421_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::TrimExcess()
extern "C" void List_1_TrimExcess_m54422_gshared (List_1_t8076 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m54422(__this, method) (( void (*) (List_1_t8076 *, const MethodInfo*))List_1_TrimExcess_m54422_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m54423_gshared (List_1_t8076 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m54423(__this, method) (( int32_t (*) (List_1_t8076 *, const MethodInfo*))List_1_get_Capacity_m54423_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m54424_gshared (List_1_t8076 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m54424(__this, ___value, method) (( void (*) (List_1_t8076 *, int32_t, const MethodInfo*))List_1_set_Capacity_m54424_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Count()
extern "C" int32_t List_1_get_Count_m54425_gshared (List_1_t8076 * __this, const MethodInfo* method);
#define List_1_get_Count_m54425(__this, method) (( int32_t (*) (List_1_t8076 *, const MethodInfo*))List_1_get_Count_m54425_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7798  List_1_get_Item_m54426_gshared (List_1_t8076 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m54426(__this, ___index, method) (( KeyValuePair_2_t7798  (*) (List_1_t8076 *, int32_t, const MethodInfo*))List_1_get_Item_m54426_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m54427_gshared (List_1_t8076 * __this, int32_t ___index, KeyValuePair_2_t7798  ___value, const MethodInfo* method);
#define List_1_set_Item_m54427(__this, ___index, ___value, method) (( void (*) (List_1_t8076 *, int32_t, KeyValuePair_2_t7798 , const MethodInfo*))List_1_set_Item_m54427_gshared)(__this, ___index, ___value, method)
