#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct List_1_t7204;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerable_1_t7104;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7203;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ICollection_1_t9253;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ReadOnlyCollection_1_t7207;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Predicate_1_t7211;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IComparer_1_t9254;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Comparison_1_t7214;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_69.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor()
extern "C" void List_1__ctor_m46203_gshared (List_1_t7204 * __this, const MethodInfo* method);
#define List_1__ctor_m46203(__this, method) (( void (*) (List_1_t7204 *, const MethodInfo*))List_1__ctor_m46203_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m46204_gshared (List_1_t7204 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m46204(__this, ___collection, method) (( void (*) (List_1_t7204 *, Object_t*, const MethodInfo*))List_1__ctor_m46204_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m46205_gshared (List_1_t7204 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m46205(__this, ___capacity, method) (( void (*) (List_1_t7204 *, int32_t, const MethodInfo*))List_1__ctor_m46205_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m46206_gshared (List_1_t7204 * __this, KeyValuePair_2U5BU5D_t7203* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m46206(__this, ___data, ___size, method) (( void (*) (List_1_t7204 *, KeyValuePair_2U5BU5D_t7203*, int32_t, const MethodInfo*))List_1__ctor_m46206_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.cctor()
extern "C" void List_1__cctor_m46207_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m46207(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m46207_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46208_gshared (List_1_t7204 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46208(__this, method) (( Object_t* (*) (List_1_t7204 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46208_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m46209_gshared (List_1_t7204 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m46209(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7204 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m46209_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m46210_gshared (List_1_t7204 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m46210(__this, method) (( Object_t * (*) (List_1_t7204 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m46210_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m46211_gshared (List_1_t7204 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m46211(__this, ___item, method) (( int32_t (*) (List_1_t7204 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m46211_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m46212_gshared (List_1_t7204 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m46212(__this, ___item, method) (( bool (*) (List_1_t7204 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m46212_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m46213_gshared (List_1_t7204 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m46213(__this, ___item, method) (( int32_t (*) (List_1_t7204 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m46213_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m46214_gshared (List_1_t7204 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m46214(__this, ___index, ___item, method) (( void (*) (List_1_t7204 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m46214_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m46215_gshared (List_1_t7204 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m46215(__this, ___item, method) (( void (*) (List_1_t7204 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m46215_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46216_gshared (List_1_t7204 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46216(__this, method) (( bool (*) (List_1_t7204 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m46217_gshared (List_1_t7204 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m46217(__this, method) (( bool (*) (List_1_t7204 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m46217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m46218_gshared (List_1_t7204 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m46218(__this, method) (( Object_t * (*) (List_1_t7204 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m46218_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m46219_gshared (List_1_t7204 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m46219(__this, method) (( bool (*) (List_1_t7204 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m46219_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m46220_gshared (List_1_t7204 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m46220(__this, method) (( bool (*) (List_1_t7204 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m46220_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m46221_gshared (List_1_t7204 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m46221(__this, ___index, method) (( Object_t * (*) (List_1_t7204 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m46221_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m46222_gshared (List_1_t7204 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m46222(__this, ___index, ___value, method) (( void (*) (List_1_t7204 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m46222_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Add(T)
extern "C" void List_1_Add_m46223_gshared (List_1_t7204 * __this, KeyValuePair_2_t6100  ___item, const MethodInfo* method);
#define List_1_Add_m46223(__this, ___item, method) (( void (*) (List_1_t7204 *, KeyValuePair_2_t6100 , const MethodInfo*))List_1_Add_m46223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m46224_gshared (List_1_t7204 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m46224(__this, ___newCount, method) (( void (*) (List_1_t7204 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m46224_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m46225_gshared (List_1_t7204 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m46225(__this, ___idx, ___count, method) (( void (*) (List_1_t7204 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m46225_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m46226_gshared (List_1_t7204 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m46226(__this, ___collection, method) (( void (*) (List_1_t7204 *, Object_t*, const MethodInfo*))List_1_AddCollection_m46226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m46227_gshared (List_1_t7204 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m46227(__this, ___enumerable, method) (( void (*) (List_1_t7204 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m46227_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m46228_gshared (List_1_t7204 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m46228(__this, ___collection, method) (( void (*) (List_1_t7204 *, Object_t*, const MethodInfo*))List_1_AddRange_m46228_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7207 * List_1_AsReadOnly_m46229_gshared (List_1_t7204 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m46229(__this, method) (( ReadOnlyCollection_1_t7207 * (*) (List_1_t7204 *, const MethodInfo*))List_1_AsReadOnly_m46229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Clear()
extern "C" void List_1_Clear_m46230_gshared (List_1_t7204 * __this, const MethodInfo* method);
#define List_1_Clear_m46230(__this, method) (( void (*) (List_1_t7204 *, const MethodInfo*))List_1_Clear_m46230_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Contains(T)
extern "C" bool List_1_Contains_m46231_gshared (List_1_t7204 * __this, KeyValuePair_2_t6100  ___item, const MethodInfo* method);
#define List_1_Contains_m46231(__this, ___item, method) (( bool (*) (List_1_t7204 *, KeyValuePair_2_t6100 , const MethodInfo*))List_1_Contains_m46231_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m46232_gshared (List_1_t7204 * __this, KeyValuePair_2U5BU5D_t7203* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m46232(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7204 *, KeyValuePair_2U5BU5D_t7203*, int32_t, const MethodInfo*))List_1_CopyTo_m46232_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6100  List_1_Find_m46233_gshared (List_1_t7204 * __this, Predicate_1_t7211 * ___match, const MethodInfo* method);
#define List_1_Find_m46233(__this, ___match, method) (( KeyValuePair_2_t6100  (*) (List_1_t7204 *, Predicate_1_t7211 *, const MethodInfo*))List_1_Find_m46233_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m46234_gshared (Object_t * __this /* static, unused */, Predicate_1_t7211 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m46234(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7211 *, const MethodInfo*))List_1_CheckMatch_m46234_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m46235_gshared (List_1_t7204 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7211 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m46235(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7204 *, int32_t, int32_t, Predicate_1_t7211 *, const MethodInfo*))List_1_GetIndex_m46235_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetEnumerator()
extern "C" Enumerator_t7205  List_1_GetEnumerator_m46236_gshared (List_1_t7204 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m46236(__this, method) (( Enumerator_t7205  (*) (List_1_t7204 *, const MethodInfo*))List_1_GetEnumerator_m46236_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7204 * List_1_GetRange_m46237_gshared (List_1_t7204 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m46237(__this, ___index, ___count, method) (( List_1_t7204 * (*) (List_1_t7204 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m46237_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m46238_gshared (List_1_t7204 * __this, KeyValuePair_2_t6100  ___item, const MethodInfo* method);
#define List_1_IndexOf_m46238(__this, ___item, method) (( int32_t (*) (List_1_t7204 *, KeyValuePair_2_t6100 , const MethodInfo*))List_1_IndexOf_m46238_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m46239_gshared (List_1_t7204 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m46239(__this, ___start, ___delta, method) (( void (*) (List_1_t7204 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m46239_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m46240_gshared (List_1_t7204 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m46240(__this, ___index, method) (( void (*) (List_1_t7204 *, int32_t, const MethodInfo*))List_1_CheckIndex_m46240_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m46241_gshared (List_1_t7204 * __this, int32_t ___index, KeyValuePair_2_t6100  ___item, const MethodInfo* method);
#define List_1_Insert_m46241(__this, ___index, ___item, method) (( void (*) (List_1_t7204 *, int32_t, KeyValuePair_2_t6100 , const MethodInfo*))List_1_Insert_m46241_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m46242_gshared (List_1_t7204 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m46242(__this, ___collection, method) (( void (*) (List_1_t7204 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m46242_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m46243_gshared (List_1_t7204 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m46243(__this, ___index, ___collection, method) (( void (*) (List_1_t7204 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m46243_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m46244_gshared (List_1_t7204 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m46244(__this, ___index, ___collection, method) (( void (*) (List_1_t7204 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m46244_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m46245_gshared (List_1_t7204 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m46245(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7204 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m46245_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Remove(T)
extern "C" bool List_1_Remove_m46246_gshared (List_1_t7204 * __this, KeyValuePair_2_t6100  ___item, const MethodInfo* method);
#define List_1_Remove_m46246(__this, ___item, method) (( bool (*) (List_1_t7204 *, KeyValuePair_2_t6100 , const MethodInfo*))List_1_Remove_m46246_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m46247_gshared (List_1_t7204 * __this, Predicate_1_t7211 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m46247(__this, ___match, method) (( int32_t (*) (List_1_t7204 *, Predicate_1_t7211 *, const MethodInfo*))List_1_RemoveAll_m46247_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m46248_gshared (List_1_t7204 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m46248(__this, ___index, method) (( void (*) (List_1_t7204 *, int32_t, const MethodInfo*))List_1_RemoveAt_m46248_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m46249_gshared (List_1_t7204 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m46249(__this, ___index, ___count, method) (( void (*) (List_1_t7204 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m46249_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Reverse()
extern "C" void List_1_Reverse_m46250_gshared (List_1_t7204 * __this, const MethodInfo* method);
#define List_1_Reverse_m46250(__this, method) (( void (*) (List_1_t7204 *, const MethodInfo*))List_1_Reverse_m46250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort()
extern "C" void List_1_Sort_m46251_gshared (List_1_t7204 * __this, const MethodInfo* method);
#define List_1_Sort_m46251(__this, method) (( void (*) (List_1_t7204 *, const MethodInfo*))List_1_Sort_m46251_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m46252_gshared (List_1_t7204 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m46252(__this, ___comparer, method) (( void (*) (List_1_t7204 *, Object_t*, const MethodInfo*))List_1_Sort_m46252_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m46253_gshared (List_1_t7204 * __this, Comparison_1_t7214 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m46253(__this, ___comparison, method) (( void (*) (List_1_t7204 *, Comparison_1_t7214 *, const MethodInfo*))List_1_Sort_m46253_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7203* List_1_ToArray_m46254_gshared (List_1_t7204 * __this, const MethodInfo* method);
#define List_1_ToArray_m46254(__this, method) (( KeyValuePair_2U5BU5D_t7203* (*) (List_1_t7204 *, const MethodInfo*))List_1_ToArray_m46254_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::TrimExcess()
extern "C" void List_1_TrimExcess_m46255_gshared (List_1_t7204 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m46255(__this, method) (( void (*) (List_1_t7204 *, const MethodInfo*))List_1_TrimExcess_m46255_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m46256_gshared (List_1_t7204 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m46256(__this, method) (( int32_t (*) (List_1_t7204 *, const MethodInfo*))List_1_get_Capacity_m46256_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m46257_gshared (List_1_t7204 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m46257(__this, ___value, method) (( void (*) (List_1_t7204 *, int32_t, const MethodInfo*))List_1_set_Capacity_m46257_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Count()
extern "C" int32_t List_1_get_Count_m46258_gshared (List_1_t7204 * __this, const MethodInfo* method);
#define List_1_get_Count_m46258(__this, method) (( int32_t (*) (List_1_t7204 *, const MethodInfo*))List_1_get_Count_m46258_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6100  List_1_get_Item_m46259_gshared (List_1_t7204 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m46259(__this, ___index, method) (( KeyValuePair_2_t6100  (*) (List_1_t7204 *, int32_t, const MethodInfo*))List_1_get_Item_m46259_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m46260_gshared (List_1_t7204 * __this, int32_t ___index, KeyValuePair_2_t6100  ___value, const MethodInfo* method);
#define List_1_set_Item_m46260(__this, ___index, ___value, method) (( void (*) (List_1_t7204 *, int32_t, KeyValuePair_2_t6100 , const MethodInfo*))List_1_set_Item_m46260_gshared)(__this, ___index, ___value, method)
