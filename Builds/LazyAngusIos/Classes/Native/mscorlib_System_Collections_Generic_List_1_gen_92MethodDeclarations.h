#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct List_1_t7321;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerable_1_t7221;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7320;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7222;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ICollection_1_t9401;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ReadOnlyCollection_1_t7324;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Predicate_1_t7328;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IComparer_1_t9402;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Comparison_1_t7331;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_75.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor()
extern "C" void List_1__ctor_m47403_gshared (List_1_t7321 * __this, const MethodInfo* method);
#define List_1__ctor_m47403(__this, method) (( void (*) (List_1_t7321 *, const MethodInfo*))List_1__ctor_m47403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m47404_gshared (List_1_t7321 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m47404(__this, ___collection, method) (( void (*) (List_1_t7321 *, Object_t*, const MethodInfo*))List_1__ctor_m47404_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m47405_gshared (List_1_t7321 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m47405(__this, ___capacity, method) (( void (*) (List_1_t7321 *, int32_t, const MethodInfo*))List_1__ctor_m47405_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m47406_gshared (List_1_t7321 * __this, KeyValuePair_2U5BU5D_t7320* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m47406(__this, ___data, ___size, method) (( void (*) (List_1_t7321 *, KeyValuePair_2U5BU5D_t7320*, int32_t, const MethodInfo*))List_1__ctor_m47406_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.cctor()
extern "C" void List_1__cctor_m47407_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m47407(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m47407_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47408_gshared (List_1_t7321 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47408(__this, method) (( Object_t* (*) (List_1_t7321 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47408_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m47409_gshared (List_1_t7321 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m47409(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7321 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m47409_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m47410_gshared (List_1_t7321 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m47410(__this, method) (( Object_t * (*) (List_1_t7321 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m47410_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m47411_gshared (List_1_t7321 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m47411(__this, ___item, method) (( int32_t (*) (List_1_t7321 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m47411_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m47412_gshared (List_1_t7321 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m47412(__this, ___item, method) (( bool (*) (List_1_t7321 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m47412_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m47413_gshared (List_1_t7321 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m47413(__this, ___item, method) (( int32_t (*) (List_1_t7321 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m47413_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m47414_gshared (List_1_t7321 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m47414(__this, ___index, ___item, method) (( void (*) (List_1_t7321 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m47414_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m47415_gshared (List_1_t7321 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m47415(__this, ___item, method) (( void (*) (List_1_t7321 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m47415_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47416_gshared (List_1_t7321 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47416(__this, method) (( bool (*) (List_1_t7321 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47416_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m47417_gshared (List_1_t7321 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m47417(__this, method) (( bool (*) (List_1_t7321 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m47417_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m47418_gshared (List_1_t7321 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m47418(__this, method) (( Object_t * (*) (List_1_t7321 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m47418_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m47419_gshared (List_1_t7321 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m47419(__this, method) (( bool (*) (List_1_t7321 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m47419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m47420_gshared (List_1_t7321 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m47420(__this, method) (( bool (*) (List_1_t7321 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m47420_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m47421_gshared (List_1_t7321 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m47421(__this, ___index, method) (( Object_t * (*) (List_1_t7321 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m47421_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m47422_gshared (List_1_t7321 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m47422(__this, ___index, ___value, method) (( void (*) (List_1_t7321 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m47422_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Add(T)
extern "C" void List_1_Add_m47423_gshared (List_1_t7321 * __this, KeyValuePair_2_t6218  ___item, const MethodInfo* method);
#define List_1_Add_m47423(__this, ___item, method) (( void (*) (List_1_t7321 *, KeyValuePair_2_t6218 , const MethodInfo*))List_1_Add_m47423_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m47424_gshared (List_1_t7321 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m47424(__this, ___newCount, method) (( void (*) (List_1_t7321 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m47424_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m47425_gshared (List_1_t7321 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m47425(__this, ___idx, ___count, method) (( void (*) (List_1_t7321 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m47425_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m47426_gshared (List_1_t7321 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m47426(__this, ___collection, method) (( void (*) (List_1_t7321 *, Object_t*, const MethodInfo*))List_1_AddCollection_m47426_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m47427_gshared (List_1_t7321 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m47427(__this, ___enumerable, method) (( void (*) (List_1_t7321 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m47427_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m47428_gshared (List_1_t7321 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m47428(__this, ___collection, method) (( void (*) (List_1_t7321 *, Object_t*, const MethodInfo*))List_1_AddRange_m47428_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7324 * List_1_AsReadOnly_m47429_gshared (List_1_t7321 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m47429(__this, method) (( ReadOnlyCollection_1_t7324 * (*) (List_1_t7321 *, const MethodInfo*))List_1_AsReadOnly_m47429_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Clear()
extern "C" void List_1_Clear_m47430_gshared (List_1_t7321 * __this, const MethodInfo* method);
#define List_1_Clear_m47430(__this, method) (( void (*) (List_1_t7321 *, const MethodInfo*))List_1_Clear_m47430_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Contains(T)
extern "C" bool List_1_Contains_m47431_gshared (List_1_t7321 * __this, KeyValuePair_2_t6218  ___item, const MethodInfo* method);
#define List_1_Contains_m47431(__this, ___item, method) (( bool (*) (List_1_t7321 *, KeyValuePair_2_t6218 , const MethodInfo*))List_1_Contains_m47431_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m47432_gshared (List_1_t7321 * __this, KeyValuePair_2U5BU5D_t7320* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m47432(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7321 *, KeyValuePair_2U5BU5D_t7320*, int32_t, const MethodInfo*))List_1_CopyTo_m47432_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6218  List_1_Find_m47433_gshared (List_1_t7321 * __this, Predicate_1_t7328 * ___match, const MethodInfo* method);
#define List_1_Find_m47433(__this, ___match, method) (( KeyValuePair_2_t6218  (*) (List_1_t7321 *, Predicate_1_t7328 *, const MethodInfo*))List_1_Find_m47433_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m47434_gshared (Object_t * __this /* static, unused */, Predicate_1_t7328 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m47434(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7328 *, const MethodInfo*))List_1_CheckMatch_m47434_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m47435_gshared (List_1_t7321 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7328 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m47435(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7321 *, int32_t, int32_t, Predicate_1_t7328 *, const MethodInfo*))List_1_GetIndex_m47435_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetEnumerator()
extern "C" Enumerator_t7322  List_1_GetEnumerator_m47436_gshared (List_1_t7321 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m47436(__this, method) (( Enumerator_t7322  (*) (List_1_t7321 *, const MethodInfo*))List_1_GetEnumerator_m47436_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7321 * List_1_GetRange_m47437_gshared (List_1_t7321 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m47437(__this, ___index, ___count, method) (( List_1_t7321 * (*) (List_1_t7321 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m47437_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m47438_gshared (List_1_t7321 * __this, KeyValuePair_2_t6218  ___item, const MethodInfo* method);
#define List_1_IndexOf_m47438(__this, ___item, method) (( int32_t (*) (List_1_t7321 *, KeyValuePair_2_t6218 , const MethodInfo*))List_1_IndexOf_m47438_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m47439_gshared (List_1_t7321 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m47439(__this, ___start, ___delta, method) (( void (*) (List_1_t7321 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m47439_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m47440_gshared (List_1_t7321 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m47440(__this, ___index, method) (( void (*) (List_1_t7321 *, int32_t, const MethodInfo*))List_1_CheckIndex_m47440_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m47441_gshared (List_1_t7321 * __this, int32_t ___index, KeyValuePair_2_t6218  ___item, const MethodInfo* method);
#define List_1_Insert_m47441(__this, ___index, ___item, method) (( void (*) (List_1_t7321 *, int32_t, KeyValuePair_2_t6218 , const MethodInfo*))List_1_Insert_m47441_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m47442_gshared (List_1_t7321 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m47442(__this, ___collection, method) (( void (*) (List_1_t7321 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m47442_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m47443_gshared (List_1_t7321 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m47443(__this, ___index, ___collection, method) (( void (*) (List_1_t7321 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m47443_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m47444_gshared (List_1_t7321 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m47444(__this, ___index, ___collection, method) (( void (*) (List_1_t7321 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m47444_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m47445_gshared (List_1_t7321 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m47445(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7321 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m47445_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Remove(T)
extern "C" bool List_1_Remove_m47446_gshared (List_1_t7321 * __this, KeyValuePair_2_t6218  ___item, const MethodInfo* method);
#define List_1_Remove_m47446(__this, ___item, method) (( bool (*) (List_1_t7321 *, KeyValuePair_2_t6218 , const MethodInfo*))List_1_Remove_m47446_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m47447_gshared (List_1_t7321 * __this, Predicate_1_t7328 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m47447(__this, ___match, method) (( int32_t (*) (List_1_t7321 *, Predicate_1_t7328 *, const MethodInfo*))List_1_RemoveAll_m47447_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m47448_gshared (List_1_t7321 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m47448(__this, ___index, method) (( void (*) (List_1_t7321 *, int32_t, const MethodInfo*))List_1_RemoveAt_m47448_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m47449_gshared (List_1_t7321 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m47449(__this, ___index, ___count, method) (( void (*) (List_1_t7321 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m47449_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Reverse()
extern "C" void List_1_Reverse_m47450_gshared (List_1_t7321 * __this, const MethodInfo* method);
#define List_1_Reverse_m47450(__this, method) (( void (*) (List_1_t7321 *, const MethodInfo*))List_1_Reverse_m47450_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort()
extern "C" void List_1_Sort_m47451_gshared (List_1_t7321 * __this, const MethodInfo* method);
#define List_1_Sort_m47451(__this, method) (( void (*) (List_1_t7321 *, const MethodInfo*))List_1_Sort_m47451_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m47452_gshared (List_1_t7321 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m47452(__this, ___comparer, method) (( void (*) (List_1_t7321 *, Object_t*, const MethodInfo*))List_1_Sort_m47452_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m47453_gshared (List_1_t7321 * __this, Comparison_1_t7331 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m47453(__this, ___comparison, method) (( void (*) (List_1_t7321 *, Comparison_1_t7331 *, const MethodInfo*))List_1_Sort_m47453_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7320* List_1_ToArray_m47454_gshared (List_1_t7321 * __this, const MethodInfo* method);
#define List_1_ToArray_m47454(__this, method) (( KeyValuePair_2U5BU5D_t7320* (*) (List_1_t7321 *, const MethodInfo*))List_1_ToArray_m47454_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::TrimExcess()
extern "C" void List_1_TrimExcess_m47455_gshared (List_1_t7321 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m47455(__this, method) (( void (*) (List_1_t7321 *, const MethodInfo*))List_1_TrimExcess_m47455_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m47456_gshared (List_1_t7321 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m47456(__this, method) (( int32_t (*) (List_1_t7321 *, const MethodInfo*))List_1_get_Capacity_m47456_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m47457_gshared (List_1_t7321 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m47457(__this, ___value, method) (( void (*) (List_1_t7321 *, int32_t, const MethodInfo*))List_1_set_Capacity_m47457_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Count()
extern "C" int32_t List_1_get_Count_m47458_gshared (List_1_t7321 * __this, const MethodInfo* method);
#define List_1_get_Count_m47458(__this, method) (( int32_t (*) (List_1_t7321 *, const MethodInfo*))List_1_get_Count_m47458_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6218  List_1_get_Item_m47459_gshared (List_1_t7321 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m47459(__this, ___index, method) (( KeyValuePair_2_t6218  (*) (List_1_t7321 *, int32_t, const MethodInfo*))List_1_get_Item_m47459_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m47460_gshared (List_1_t7321 * __this, int32_t ___index, KeyValuePair_2_t6218  ___value, const MethodInfo* method);
#define List_1_set_Item_m47460(__this, ___index, ___value, method) (( void (*) (List_1_t7321 *, int32_t, KeyValuePair_2_t6218 , const MethodInfo*))List_1_set_Item_m47460_gshared)(__this, ___index, ___value, method)
