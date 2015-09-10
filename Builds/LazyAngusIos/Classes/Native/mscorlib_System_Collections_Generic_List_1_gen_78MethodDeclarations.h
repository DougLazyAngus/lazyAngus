#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t6951;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t6892;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6893;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9778;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t6953;
// System.Predicate`1<System.Byte>
struct Predicate_1_t6955;
// System.Collections.Generic.IComparer`1<System.Byte>
struct IComparer_1_t9844;
// System.Comparison`1<System.Byte>
struct Comparison_1_t6959;
// System.Collections.Generic.List`1/Enumerator<System.Byte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_61.h"

// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
extern "C" void List_1__ctor_m40409_gshared (List_1_t6951 * __this, const MethodInfo* method);
#define List_1__ctor_m40409(__this, method) (( void (*) (List_1_t6951 *, const MethodInfo*))List_1__ctor_m40409_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m40410_gshared (List_1_t6951 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m40410(__this, ___collection, method) (( void (*) (List_1_t6951 *, Object_t*, const MethodInfo*))List_1__ctor_m40410_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m40411_gshared (List_1_t6951 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m40411(__this, ___capacity, method) (( void (*) (List_1_t6951 *, int32_t, const MethodInfo*))List_1__ctor_m40411_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m40412_gshared (List_1_t6951 * __this, ByteU5BU5D_t66* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m40412(__this, ___data, ___size, method) (( void (*) (List_1_t6951 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))List_1__ctor_m40412_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.cctor()
extern "C" void List_1__cctor_m40413_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m40413(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m40413_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40414_gshared (List_1_t6951 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40414(__this, method) (( Object_t* (*) (List_1_t6951 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40414_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m40415_gshared (List_1_t6951 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m40415(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6951 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m40415_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m40416_gshared (List_1_t6951 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m40416(__this, method) (( Object_t * (*) (List_1_t6951 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m40416_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m40417_gshared (List_1_t6951 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m40417(__this, ___item, method) (( int32_t (*) (List_1_t6951 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m40417_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m40418_gshared (List_1_t6951 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m40418(__this, ___item, method) (( bool (*) (List_1_t6951 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m40418_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m40419_gshared (List_1_t6951 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m40419(__this, ___item, method) (( int32_t (*) (List_1_t6951 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m40419_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m40420_gshared (List_1_t6951 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m40420(__this, ___index, ___item, method) (( void (*) (List_1_t6951 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m40420_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m40421_gshared (List_1_t6951 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m40421(__this, ___item, method) (( void (*) (List_1_t6951 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m40421_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40422_gshared (List_1_t6951 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40422(__this, method) (( bool (*) (List_1_t6951 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40422_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m40423_gshared (List_1_t6951 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m40423(__this, method) (( bool (*) (List_1_t6951 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m40423_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m40424_gshared (List_1_t6951 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m40424(__this, method) (( Object_t * (*) (List_1_t6951 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m40424_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m40425_gshared (List_1_t6951 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m40425(__this, method) (( bool (*) (List_1_t6951 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m40425_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m40426_gshared (List_1_t6951 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m40426(__this, method) (( bool (*) (List_1_t6951 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m40426_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m40427_gshared (List_1_t6951 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m40427(__this, ___index, method) (( Object_t * (*) (List_1_t6951 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m40427_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m40428_gshared (List_1_t6951 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m40428(__this, ___index, ___value, method) (( void (*) (List_1_t6951 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m40428_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
extern "C" void List_1_Add_m40429_gshared (List_1_t6951 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Add_m40429(__this, ___item, method) (( void (*) (List_1_t6951 *, uint8_t, const MethodInfo*))List_1_Add_m40429_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m40430_gshared (List_1_t6951 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m40430(__this, ___newCount, method) (( void (*) (List_1_t6951 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m40430_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m40431_gshared (List_1_t6951 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m40431(__this, ___idx, ___count, method) (( void (*) (List_1_t6951 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m40431_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m40432_gshared (List_1_t6951 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m40432(__this, ___collection, method) (( void (*) (List_1_t6951 *, Object_t*, const MethodInfo*))List_1_AddCollection_m40432_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m40433_gshared (List_1_t6951 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m40433(__this, ___enumerable, method) (( void (*) (List_1_t6951 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m40433_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m40434_gshared (List_1_t6951 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m40434(__this, ___collection, method) (( void (*) (List_1_t6951 *, Object_t*, const MethodInfo*))List_1_AddRange_m40434_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6953 * List_1_AsReadOnly_m40435_gshared (List_1_t6951 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m40435(__this, method) (( ReadOnlyCollection_1_t6953 * (*) (List_1_t6951 *, const MethodInfo*))List_1_AsReadOnly_m40435_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
extern "C" void List_1_Clear_m40436_gshared (List_1_t6951 * __this, const MethodInfo* method);
#define List_1_Clear_m40436(__this, method) (( void (*) (List_1_t6951 *, const MethodInfo*))List_1_Clear_m40436_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Contains(T)
extern "C" bool List_1_Contains_m40437_gshared (List_1_t6951 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Contains_m40437(__this, ___item, method) (( bool (*) (List_1_t6951 *, uint8_t, const MethodInfo*))List_1_Contains_m40437_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m40438_gshared (List_1_t6951 * __this, ByteU5BU5D_t66* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m40438(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6951 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))List_1_CopyTo_m40438_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte>::Find(System.Predicate`1<T>)
extern "C" uint8_t List_1_Find_m40439_gshared (List_1_t6951 * __this, Predicate_1_t6955 * ___match, const MethodInfo* method);
#define List_1_Find_m40439(__this, ___match, method) (( uint8_t (*) (List_1_t6951 *, Predicate_1_t6955 *, const MethodInfo*))List_1_Find_m40439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m40440_gshared (Object_t * __this /* static, unused */, Predicate_1_t6955 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m40440(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6955 *, const MethodInfo*))List_1_CheckMatch_m40440_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m40441_gshared (List_1_t6951 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6955 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m40441(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6951 *, int32_t, int32_t, Predicate_1_t6955 *, const MethodInfo*))List_1_GetIndex_m40441_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
extern "C" Enumerator_t6952  List_1_GetEnumerator_m40442_gshared (List_1_t6951 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m40442(__this, method) (( Enumerator_t6952  (*) (List_1_t6951 *, const MethodInfo*))List_1_GetEnumerator_m40442_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6951 * List_1_GetRange_m40443_gshared (List_1_t6951 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m40443(__this, ___index, ___count, method) (( List_1_t6951 * (*) (List_1_t6951 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m40443_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m40444_gshared (List_1_t6951 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m40444(__this, ___item, method) (( int32_t (*) (List_1_t6951 *, uint8_t, const MethodInfo*))List_1_IndexOf_m40444_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m40445_gshared (List_1_t6951 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m40445(__this, ___start, ___delta, method) (( void (*) (List_1_t6951 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m40445_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m40446_gshared (List_1_t6951 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m40446(__this, ___index, method) (( void (*) (List_1_t6951 *, int32_t, const MethodInfo*))List_1_CheckIndex_m40446_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m40447_gshared (List_1_t6951 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define List_1_Insert_m40447(__this, ___index, ___item, method) (( void (*) (List_1_t6951 *, int32_t, uint8_t, const MethodInfo*))List_1_Insert_m40447_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m40448_gshared (List_1_t6951 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m40448(__this, ___collection, method) (( void (*) (List_1_t6951 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m40448_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m40449_gshared (List_1_t6951 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m40449(__this, ___index, ___collection, method) (( void (*) (List_1_t6951 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m40449_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m40450_gshared (List_1_t6951 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m40450(__this, ___index, ___collection, method) (( void (*) (List_1_t6951 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m40450_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m40451_gshared (List_1_t6951 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m40451(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6951 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m40451_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Remove(T)
extern "C" bool List_1_Remove_m40452_gshared (List_1_t6951 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Remove_m40452(__this, ___item, method) (( bool (*) (List_1_t6951 *, uint8_t, const MethodInfo*))List_1_Remove_m40452_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m40453_gshared (List_1_t6951 * __this, Predicate_1_t6955 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m40453(__this, ___match, method) (( int32_t (*) (List_1_t6951 *, Predicate_1_t6955 *, const MethodInfo*))List_1_RemoveAll_m40453_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m40454_gshared (List_1_t6951 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m40454(__this, ___index, method) (( void (*) (List_1_t6951 *, int32_t, const MethodInfo*))List_1_RemoveAt_m40454_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m40455_gshared (List_1_t6951 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m40455(__this, ___index, ___count, method) (( void (*) (List_1_t6951 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m40455_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
extern "C" void List_1_Reverse_m40456_gshared (List_1_t6951 * __this, const MethodInfo* method);
#define List_1_Reverse_m40456(__this, method) (( void (*) (List_1_t6951 *, const MethodInfo*))List_1_Reverse_m40456_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort()
extern "C" void List_1_Sort_m40457_gshared (List_1_t6951 * __this, const MethodInfo* method);
#define List_1_Sort_m40457(__this, method) (( void (*) (List_1_t6951 *, const MethodInfo*))List_1_Sort_m40457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m40458_gshared (List_1_t6951 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m40458(__this, ___comparer, method) (( void (*) (List_1_t6951 *, Object_t*, const MethodInfo*))List_1_Sort_m40458_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m40459_gshared (List_1_t6951 * __this, Comparison_1_t6959 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m40459(__this, ___comparison, method) (( void (*) (List_1_t6951 *, Comparison_1_t6959 *, const MethodInfo*))List_1_Sort_m40459_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
extern "C" ByteU5BU5D_t66* List_1_ToArray_m40460_gshared (List_1_t6951 * __this, const MethodInfo* method);
#define List_1_ToArray_m40460(__this, method) (( ByteU5BU5D_t66* (*) (List_1_t6951 *, const MethodInfo*))List_1_ToArray_m40460_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::TrimExcess()
extern "C" void List_1_TrimExcess_m40461_gshared (List_1_t6951 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m40461(__this, method) (( void (*) (List_1_t6951 *, const MethodInfo*))List_1_TrimExcess_m40461_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m40462_gshared (List_1_t6951 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m40462(__this, method) (( int32_t (*) (List_1_t6951 *, const MethodInfo*))List_1_get_Capacity_m40462_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m40463_gshared (List_1_t6951 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m40463(__this, ___value, method) (( void (*) (List_1_t6951 *, int32_t, const MethodInfo*))List_1_set_Capacity_m40463_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
extern "C" int32_t List_1_get_Count_m40464_gshared (List_1_t6951 * __this, const MethodInfo* method);
#define List_1_get_Count_m40464(__this, method) (( int32_t (*) (List_1_t6951 *, const MethodInfo*))List_1_get_Count_m40464_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t List_1_get_Item_m40465_gshared (List_1_t6951 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m40465(__this, ___index, method) (( uint8_t (*) (List_1_t6951 *, int32_t, const MethodInfo*))List_1_get_Item_m40465_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m40466_gshared (List_1_t6951 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m40466(__this, ___index, ___value, method) (( void (*) (List_1_t6951 *, int32_t, uint8_t, const MethodInfo*))List_1_set_Item_m40466_gshared)(__this, ___index, ___value, method)
