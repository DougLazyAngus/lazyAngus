#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct List_1_t7629;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IEnumerable_1_t7243;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7628;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IEnumerator_1_t7244;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct ICollection_1_t9389;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct ReadOnlyCollection_1_t7632;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Predicate_1_t7636;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IComparer_1_t9390;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Comparison_1_t7639;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_83.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor()
extern "C" void List_1__ctor_m51248_gshared (List_1_t7629 * __this, const MethodInfo* method);
#define List_1__ctor_m51248(__this, method) (( void (*) (List_1_t7629 *, const MethodInfo*))List_1__ctor_m51248_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m51249_gshared (List_1_t7629 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m51249(__this, ___collection, method) (( void (*) (List_1_t7629 *, Object_t*, const MethodInfo*))List_1__ctor_m51249_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m51250_gshared (List_1_t7629 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m51250(__this, ___capacity, method) (( void (*) (List_1_t7629 *, int32_t, const MethodInfo*))List_1__ctor_m51250_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m51251_gshared (List_1_t7629 * __this, KeyValuePair_2U5BU5D_t7628* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m51251(__this, ___data, ___size, method) (( void (*) (List_1_t7629 *, KeyValuePair_2U5BU5D_t7628*, int32_t, const MethodInfo*))List_1__ctor_m51251_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.cctor()
extern "C" void List_1__cctor_m51252_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m51252(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51252_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51253_gshared (List_1_t7629 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51253(__this, method) (( Object_t* (*) (List_1_t7629 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51253_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m51254_gshared (List_1_t7629 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m51254(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7629 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51254_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m51255_gshared (List_1_t7629 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m51255(__this, method) (( Object_t * (*) (List_1_t7629 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m51255_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m51256_gshared (List_1_t7629 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m51256(__this, ___item, method) (( int32_t (*) (List_1_t7629 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m51256_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m51257_gshared (List_1_t7629 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m51257(__this, ___item, method) (( bool (*) (List_1_t7629 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m51257_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m51258_gshared (List_1_t7629 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m51258(__this, ___item, method) (( int32_t (*) (List_1_t7629 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m51258_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m51259_gshared (List_1_t7629 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m51259(__this, ___index, ___item, method) (( void (*) (List_1_t7629 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m51259_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m51260_gshared (List_1_t7629 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m51260(__this, ___item, method) (( void (*) (List_1_t7629 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m51260_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51261_gshared (List_1_t7629 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51261(__this, method) (( bool (*) (List_1_t7629 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51261_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m51262_gshared (List_1_t7629 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m51262(__this, method) (( bool (*) (List_1_t7629 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m51262_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m51263_gshared (List_1_t7629 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m51263(__this, method) (( Object_t * (*) (List_1_t7629 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m51263_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m51264_gshared (List_1_t7629 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m51264(__this, method) (( bool (*) (List_1_t7629 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m51264_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m51265_gshared (List_1_t7629 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m51265(__this, method) (( bool (*) (List_1_t7629 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m51265_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m51266_gshared (List_1_t7629 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m51266(__this, ___index, method) (( Object_t * (*) (List_1_t7629 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m51266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m51267_gshared (List_1_t7629 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m51267(__this, ___index, ___value, method) (( void (*) (List_1_t7629 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m51267_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Add(T)
extern "C" void List_1_Add_m51268_gshared (List_1_t7629 * __this, KeyValuePair_2_t7239  ___item, const MethodInfo* method);
#define List_1_Add_m51268(__this, ___item, method) (( void (*) (List_1_t7629 *, KeyValuePair_2_t7239 , const MethodInfo*))List_1_Add_m51268_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m51269_gshared (List_1_t7629 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m51269(__this, ___newCount, method) (( void (*) (List_1_t7629 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m51269_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m51270_gshared (List_1_t7629 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m51270(__this, ___idx, ___count, method) (( void (*) (List_1_t7629 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m51270_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m51271_gshared (List_1_t7629 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m51271(__this, ___collection, method) (( void (*) (List_1_t7629 *, Object_t*, const MethodInfo*))List_1_AddCollection_m51271_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m51272_gshared (List_1_t7629 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m51272(__this, ___enumerable, method) (( void (*) (List_1_t7629 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m51272_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m51273_gshared (List_1_t7629 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m51273(__this, ___collection, method) (( void (*) (List_1_t7629 *, Object_t*, const MethodInfo*))List_1_AddRange_m51273_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7632 * List_1_AsReadOnly_m51274_gshared (List_1_t7629 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m51274(__this, method) (( ReadOnlyCollection_1_t7632 * (*) (List_1_t7629 *, const MethodInfo*))List_1_AsReadOnly_m51274_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Clear()
extern "C" void List_1_Clear_m51275_gshared (List_1_t7629 * __this, const MethodInfo* method);
#define List_1_Clear_m51275(__this, method) (( void (*) (List_1_t7629 *, const MethodInfo*))List_1_Clear_m51275_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Contains(T)
extern "C" bool List_1_Contains_m51276_gshared (List_1_t7629 * __this, KeyValuePair_2_t7239  ___item, const MethodInfo* method);
#define List_1_Contains_m51276(__this, ___item, method) (( bool (*) (List_1_t7629 *, KeyValuePair_2_t7239 , const MethodInfo*))List_1_Contains_m51276_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m51277_gshared (List_1_t7629 * __this, KeyValuePair_2U5BU5D_t7628* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m51277(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7629 *, KeyValuePair_2U5BU5D_t7628*, int32_t, const MethodInfo*))List_1_CopyTo_m51277_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7239  List_1_Find_m51278_gshared (List_1_t7629 * __this, Predicate_1_t7636 * ___match, const MethodInfo* method);
#define List_1_Find_m51278(__this, ___match, method) (( KeyValuePair_2_t7239  (*) (List_1_t7629 *, Predicate_1_t7636 *, const MethodInfo*))List_1_Find_m51278_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m51279_gshared (Object_t * __this /* static, unused */, Predicate_1_t7636 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m51279(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7636 *, const MethodInfo*))List_1_CheckMatch_m51279_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m51280_gshared (List_1_t7629 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7636 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m51280(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7629 *, int32_t, int32_t, Predicate_1_t7636 *, const MethodInfo*))List_1_GetIndex_m51280_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetEnumerator()
extern "C" Enumerator_t7630  List_1_GetEnumerator_m51281_gshared (List_1_t7629 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m51281(__this, method) (( Enumerator_t7630  (*) (List_1_t7629 *, const MethodInfo*))List_1_GetEnumerator_m51281_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7629 * List_1_GetRange_m51282_gshared (List_1_t7629 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m51282(__this, ___index, ___count, method) (( List_1_t7629 * (*) (List_1_t7629 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m51282_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m51283_gshared (List_1_t7629 * __this, KeyValuePair_2_t7239  ___item, const MethodInfo* method);
#define List_1_IndexOf_m51283(__this, ___item, method) (( int32_t (*) (List_1_t7629 *, KeyValuePair_2_t7239 , const MethodInfo*))List_1_IndexOf_m51283_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m51284_gshared (List_1_t7629 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m51284(__this, ___start, ___delta, method) (( void (*) (List_1_t7629 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m51284_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m51285_gshared (List_1_t7629 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m51285(__this, ___index, method) (( void (*) (List_1_t7629 *, int32_t, const MethodInfo*))List_1_CheckIndex_m51285_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m51286_gshared (List_1_t7629 * __this, int32_t ___index, KeyValuePair_2_t7239  ___item, const MethodInfo* method);
#define List_1_Insert_m51286(__this, ___index, ___item, method) (( void (*) (List_1_t7629 *, int32_t, KeyValuePair_2_t7239 , const MethodInfo*))List_1_Insert_m51286_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m51287_gshared (List_1_t7629 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m51287(__this, ___collection, method) (( void (*) (List_1_t7629 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m51287_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m51288_gshared (List_1_t7629 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m51288(__this, ___index, ___collection, method) (( void (*) (List_1_t7629 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m51288_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m51289_gshared (List_1_t7629 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m51289(__this, ___index, ___collection, method) (( void (*) (List_1_t7629 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m51289_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m51290_gshared (List_1_t7629 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m51290(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7629 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m51290_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Remove(T)
extern "C" bool List_1_Remove_m51291_gshared (List_1_t7629 * __this, KeyValuePair_2_t7239  ___item, const MethodInfo* method);
#define List_1_Remove_m51291(__this, ___item, method) (( bool (*) (List_1_t7629 *, KeyValuePair_2_t7239 , const MethodInfo*))List_1_Remove_m51291_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m51292_gshared (List_1_t7629 * __this, Predicate_1_t7636 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m51292(__this, ___match, method) (( int32_t (*) (List_1_t7629 *, Predicate_1_t7636 *, const MethodInfo*))List_1_RemoveAll_m51292_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m51293_gshared (List_1_t7629 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m51293(__this, ___index, method) (( void (*) (List_1_t7629 *, int32_t, const MethodInfo*))List_1_RemoveAt_m51293_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m51294_gshared (List_1_t7629 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m51294(__this, ___index, ___count, method) (( void (*) (List_1_t7629 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m51294_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Reverse()
extern "C" void List_1_Reverse_m51295_gshared (List_1_t7629 * __this, const MethodInfo* method);
#define List_1_Reverse_m51295(__this, method) (( void (*) (List_1_t7629 *, const MethodInfo*))List_1_Reverse_m51295_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort()
extern "C" void List_1_Sort_m51296_gshared (List_1_t7629 * __this, const MethodInfo* method);
#define List_1_Sort_m51296(__this, method) (( void (*) (List_1_t7629 *, const MethodInfo*))List_1_Sort_m51296_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m51297_gshared (List_1_t7629 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m51297(__this, ___comparer, method) (( void (*) (List_1_t7629 *, Object_t*, const MethodInfo*))List_1_Sort_m51297_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m51298_gshared (List_1_t7629 * __this, Comparison_1_t7639 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m51298(__this, ___comparison, method) (( void (*) (List_1_t7629 *, Comparison_1_t7639 *, const MethodInfo*))List_1_Sort_m51298_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7628* List_1_ToArray_m51299_gshared (List_1_t7629 * __this, const MethodInfo* method);
#define List_1_ToArray_m51299(__this, method) (( KeyValuePair_2U5BU5D_t7628* (*) (List_1_t7629 *, const MethodInfo*))List_1_ToArray_m51299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::TrimExcess()
extern "C" void List_1_TrimExcess_m51300_gshared (List_1_t7629 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m51300(__this, method) (( void (*) (List_1_t7629 *, const MethodInfo*))List_1_TrimExcess_m51300_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m51301_gshared (List_1_t7629 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m51301(__this, method) (( int32_t (*) (List_1_t7629 *, const MethodInfo*))List_1_get_Capacity_m51301_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m51302_gshared (List_1_t7629 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m51302(__this, ___value, method) (( void (*) (List_1_t7629 *, int32_t, const MethodInfo*))List_1_set_Capacity_m51302_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Count()
extern "C" int32_t List_1_get_Count_m51303_gshared (List_1_t7629 * __this, const MethodInfo* method);
#define List_1_get_Count_m51303(__this, method) (( int32_t (*) (List_1_t7629 *, const MethodInfo*))List_1_get_Count_m51303_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7239  List_1_get_Item_m51304_gshared (List_1_t7629 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m51304(__this, ___index, method) (( KeyValuePair_2_t7239  (*) (List_1_t7629 *, int32_t, const MethodInfo*))List_1_get_Item_m51304_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m51305_gshared (List_1_t7629 * __this, int32_t ___index, KeyValuePair_2_t7239  ___value, const MethodInfo* method);
#define List_1_set_Item_m51305(__this, ___index, ___value, method) (( void (*) (List_1_t7629 *, int32_t, KeyValuePair_2_t7239 , const MethodInfo*))List_1_set_Item_m51305_gshared)(__this, ___index, ___value, method)
