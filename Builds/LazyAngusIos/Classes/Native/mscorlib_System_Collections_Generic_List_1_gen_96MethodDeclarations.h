#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct List_1_t7463;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IEnumerable_1_t7243;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7462;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IEnumerator_1_t7244;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct ICollection_1_t9411;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct ReadOnlyCollection_1_t7466;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Predicate_1_t7470;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IComparer_1_t9412;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Comparison_1_t7473;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_79.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor()
extern "C" void List_1__ctor_m49249_gshared (List_1_t7463 * __this, const MethodInfo* method);
#define List_1__ctor_m49249(__this, method) (( void (*) (List_1_t7463 *, const MethodInfo*))List_1__ctor_m49249_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m49250_gshared (List_1_t7463 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m49250(__this, ___collection, method) (( void (*) (List_1_t7463 *, Object_t*, const MethodInfo*))List_1__ctor_m49250_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m49251_gshared (List_1_t7463 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m49251(__this, ___capacity, method) (( void (*) (List_1_t7463 *, int32_t, const MethodInfo*))List_1__ctor_m49251_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m49252_gshared (List_1_t7463 * __this, KeyValuePair_2U5BU5D_t7462* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m49252(__this, ___data, ___size, method) (( void (*) (List_1_t7463 *, KeyValuePair_2U5BU5D_t7462*, int32_t, const MethodInfo*))List_1__ctor_m49252_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.cctor()
extern "C" void List_1__cctor_m49253_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m49253(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m49253_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49254_gshared (List_1_t7463 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49254(__this, method) (( Object_t* (*) (List_1_t7463 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m49254_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m49255_gshared (List_1_t7463 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m49255(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7463 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m49255_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m49256_gshared (List_1_t7463 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m49256(__this, method) (( Object_t * (*) (List_1_t7463 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m49256_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m49257_gshared (List_1_t7463 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m49257(__this, ___item, method) (( int32_t (*) (List_1_t7463 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m49257_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m49258_gshared (List_1_t7463 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m49258(__this, ___item, method) (( bool (*) (List_1_t7463 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m49258_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m49259_gshared (List_1_t7463 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m49259(__this, ___item, method) (( int32_t (*) (List_1_t7463 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m49259_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m49260_gshared (List_1_t7463 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m49260(__this, ___index, ___item, method) (( void (*) (List_1_t7463 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m49260_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m49261_gshared (List_1_t7463 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m49261(__this, ___item, method) (( void (*) (List_1_t7463 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m49261_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49262_gshared (List_1_t7463 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49262(__this, method) (( bool (*) (List_1_t7463 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49262_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m49263_gshared (List_1_t7463 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m49263(__this, method) (( bool (*) (List_1_t7463 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m49263_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m49264_gshared (List_1_t7463 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m49264(__this, method) (( Object_t * (*) (List_1_t7463 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m49264_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m49265_gshared (List_1_t7463 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m49265(__this, method) (( bool (*) (List_1_t7463 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m49265_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m49266_gshared (List_1_t7463 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m49266(__this, method) (( bool (*) (List_1_t7463 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m49266_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m49267_gshared (List_1_t7463 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m49267(__this, ___index, method) (( Object_t * (*) (List_1_t7463 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m49267_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m49268_gshared (List_1_t7463 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m49268(__this, ___index, ___value, method) (( void (*) (List_1_t7463 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m49268_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Add(T)
extern "C" void List_1_Add_m49269_gshared (List_1_t7463 * __this, KeyValuePair_2_t7239  ___item, const MethodInfo* method);
#define List_1_Add_m49269(__this, ___item, method) (( void (*) (List_1_t7463 *, KeyValuePair_2_t7239 , const MethodInfo*))List_1_Add_m49269_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m49270_gshared (List_1_t7463 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m49270(__this, ___newCount, method) (( void (*) (List_1_t7463 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m49270_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m49271_gshared (List_1_t7463 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m49271(__this, ___idx, ___count, method) (( void (*) (List_1_t7463 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m49271_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m49272_gshared (List_1_t7463 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m49272(__this, ___collection, method) (( void (*) (List_1_t7463 *, Object_t*, const MethodInfo*))List_1_AddCollection_m49272_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m49273_gshared (List_1_t7463 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m49273(__this, ___enumerable, method) (( void (*) (List_1_t7463 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m49273_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m49274_gshared (List_1_t7463 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m49274(__this, ___collection, method) (( void (*) (List_1_t7463 *, Object_t*, const MethodInfo*))List_1_AddRange_m49274_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7466 * List_1_AsReadOnly_m49275_gshared (List_1_t7463 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m49275(__this, method) (( ReadOnlyCollection_1_t7466 * (*) (List_1_t7463 *, const MethodInfo*))List_1_AsReadOnly_m49275_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Clear()
extern "C" void List_1_Clear_m49276_gshared (List_1_t7463 * __this, const MethodInfo* method);
#define List_1_Clear_m49276(__this, method) (( void (*) (List_1_t7463 *, const MethodInfo*))List_1_Clear_m49276_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Contains(T)
extern "C" bool List_1_Contains_m49277_gshared (List_1_t7463 * __this, KeyValuePair_2_t7239  ___item, const MethodInfo* method);
#define List_1_Contains_m49277(__this, ___item, method) (( bool (*) (List_1_t7463 *, KeyValuePair_2_t7239 , const MethodInfo*))List_1_Contains_m49277_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m49278_gshared (List_1_t7463 * __this, KeyValuePair_2U5BU5D_t7462* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m49278(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7463 *, KeyValuePair_2U5BU5D_t7462*, int32_t, const MethodInfo*))List_1_CopyTo_m49278_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7239  List_1_Find_m49279_gshared (List_1_t7463 * __this, Predicate_1_t7470 * ___match, const MethodInfo* method);
#define List_1_Find_m49279(__this, ___match, method) (( KeyValuePair_2_t7239  (*) (List_1_t7463 *, Predicate_1_t7470 *, const MethodInfo*))List_1_Find_m49279_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m49280_gshared (Object_t * __this /* static, unused */, Predicate_1_t7470 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m49280(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7470 *, const MethodInfo*))List_1_CheckMatch_m49280_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m49281_gshared (List_1_t7463 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7470 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m49281(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7463 *, int32_t, int32_t, Predicate_1_t7470 *, const MethodInfo*))List_1_GetIndex_m49281_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetEnumerator()
extern "C" Enumerator_t7464  List_1_GetEnumerator_m49282_gshared (List_1_t7463 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m49282(__this, method) (( Enumerator_t7464  (*) (List_1_t7463 *, const MethodInfo*))List_1_GetEnumerator_m49282_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7463 * List_1_GetRange_m49283_gshared (List_1_t7463 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m49283(__this, ___index, ___count, method) (( List_1_t7463 * (*) (List_1_t7463 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m49283_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m49284_gshared (List_1_t7463 * __this, KeyValuePair_2_t7239  ___item, const MethodInfo* method);
#define List_1_IndexOf_m49284(__this, ___item, method) (( int32_t (*) (List_1_t7463 *, KeyValuePair_2_t7239 , const MethodInfo*))List_1_IndexOf_m49284_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m49285_gshared (List_1_t7463 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m49285(__this, ___start, ___delta, method) (( void (*) (List_1_t7463 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m49285_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m49286_gshared (List_1_t7463 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m49286(__this, ___index, method) (( void (*) (List_1_t7463 *, int32_t, const MethodInfo*))List_1_CheckIndex_m49286_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m49287_gshared (List_1_t7463 * __this, int32_t ___index, KeyValuePair_2_t7239  ___item, const MethodInfo* method);
#define List_1_Insert_m49287(__this, ___index, ___item, method) (( void (*) (List_1_t7463 *, int32_t, KeyValuePair_2_t7239 , const MethodInfo*))List_1_Insert_m49287_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m49288_gshared (List_1_t7463 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m49288(__this, ___collection, method) (( void (*) (List_1_t7463 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m49288_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m49289_gshared (List_1_t7463 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m49289(__this, ___index, ___collection, method) (( void (*) (List_1_t7463 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m49289_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m49290_gshared (List_1_t7463 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m49290(__this, ___index, ___collection, method) (( void (*) (List_1_t7463 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m49290_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m49291_gshared (List_1_t7463 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m49291(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7463 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m49291_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Remove(T)
extern "C" bool List_1_Remove_m49292_gshared (List_1_t7463 * __this, KeyValuePair_2_t7239  ___item, const MethodInfo* method);
#define List_1_Remove_m49292(__this, ___item, method) (( bool (*) (List_1_t7463 *, KeyValuePair_2_t7239 , const MethodInfo*))List_1_Remove_m49292_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m49293_gshared (List_1_t7463 * __this, Predicate_1_t7470 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m49293(__this, ___match, method) (( int32_t (*) (List_1_t7463 *, Predicate_1_t7470 *, const MethodInfo*))List_1_RemoveAll_m49293_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m49294_gshared (List_1_t7463 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m49294(__this, ___index, method) (( void (*) (List_1_t7463 *, int32_t, const MethodInfo*))List_1_RemoveAt_m49294_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m49295_gshared (List_1_t7463 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m49295(__this, ___index, ___count, method) (( void (*) (List_1_t7463 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m49295_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Reverse()
extern "C" void List_1_Reverse_m49296_gshared (List_1_t7463 * __this, const MethodInfo* method);
#define List_1_Reverse_m49296(__this, method) (( void (*) (List_1_t7463 *, const MethodInfo*))List_1_Reverse_m49296_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort()
extern "C" void List_1_Sort_m49297_gshared (List_1_t7463 * __this, const MethodInfo* method);
#define List_1_Sort_m49297(__this, method) (( void (*) (List_1_t7463 *, const MethodInfo*))List_1_Sort_m49297_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m49298_gshared (List_1_t7463 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m49298(__this, ___comparer, method) (( void (*) (List_1_t7463 *, Object_t*, const MethodInfo*))List_1_Sort_m49298_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m49299_gshared (List_1_t7463 * __this, Comparison_1_t7473 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m49299(__this, ___comparison, method) (( void (*) (List_1_t7463 *, Comparison_1_t7473 *, const MethodInfo*))List_1_Sort_m49299_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7462* List_1_ToArray_m49300_gshared (List_1_t7463 * __this, const MethodInfo* method);
#define List_1_ToArray_m49300(__this, method) (( KeyValuePair_2U5BU5D_t7462* (*) (List_1_t7463 *, const MethodInfo*))List_1_ToArray_m49300_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::TrimExcess()
extern "C" void List_1_TrimExcess_m49301_gshared (List_1_t7463 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m49301(__this, method) (( void (*) (List_1_t7463 *, const MethodInfo*))List_1_TrimExcess_m49301_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m49302_gshared (List_1_t7463 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m49302(__this, method) (( int32_t (*) (List_1_t7463 *, const MethodInfo*))List_1_get_Capacity_m49302_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m49303_gshared (List_1_t7463 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m49303(__this, ___value, method) (( void (*) (List_1_t7463 *, int32_t, const MethodInfo*))List_1_set_Capacity_m49303_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Count()
extern "C" int32_t List_1_get_Count_m49304_gshared (List_1_t7463 * __this, const MethodInfo* method);
#define List_1_get_Count_m49304(__this, method) (( int32_t (*) (List_1_t7463 *, const MethodInfo*))List_1_get_Count_m49304_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7239  List_1_get_Item_m49305_gshared (List_1_t7463 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m49305(__this, ___index, method) (( KeyValuePair_2_t7239  (*) (List_1_t7463 *, int32_t, const MethodInfo*))List_1_get_Item_m49305_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m49306_gshared (List_1_t7463 * __this, int32_t ___index, KeyValuePair_2_t7239  ___value, const MethodInfo* method);
#define List_1_set_Item_m49306(__this, ___index, ___value, method) (( void (*) (List_1_t7463 *, int32_t, KeyValuePair_2_t7239 , const MethodInfo*))List_1_set_Item_m49306_gshared)(__this, ___index, ___value, method)
