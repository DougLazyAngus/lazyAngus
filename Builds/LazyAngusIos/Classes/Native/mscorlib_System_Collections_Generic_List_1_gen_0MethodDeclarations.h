#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t640;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t662;
// System.Object[]
struct ObjectU5BU5D_t638;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1172;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1134;
// System.Predicate`1<System.Object>
struct Predicate_1_t5383;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t5606;
// System.Comparison`1<System.Object>
struct Comparison_1_t5389;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3486_gshared (List_1_t640 * __this, const MethodInfo* method);
#define List_1__ctor_m3486(__this, method) (( void (*) (List_1_t640 *, const MethodInfo*))List_1__ctor_m3486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m7226_gshared (List_1_t640 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m7226(__this, ___collection, method) (( void (*) (List_1_t640 *, Object_t*, const MethodInfo*))List_1__ctor_m7226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m21326_gshared (List_1_t640 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m21326(__this, ___capacity, method) (( void (*) (List_1_t640 *, int32_t, const MethodInfo*))List_1__ctor_m21326_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m21328_gshared (List_1_t640 * __this, ObjectU5BU5D_t638* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m21328(__this, ___data, ___size, method) (( void (*) (List_1_t640 *, ObjectU5BU5D_t638*, int32_t, const MethodInfo*))List_1__ctor_m21328_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m21330_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21330(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21330_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10119_gshared (List_1_t640 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10119(__this, method) (( Object_t* (*) (List_1_t640 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10102_gshared (List_1_t640 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10102(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t640 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10102_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10098_gshared (List_1_t640 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10098(__this, method) (( Object_t * (*) (List_1_t640 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10098_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10107_gshared (List_1_t640 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10107(__this, ___item, method) (( int32_t (*) (List_1_t640 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10107_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10109_gshared (List_1_t640 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10109(__this, ___item, method) (( bool (*) (List_1_t640 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10109_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10110_gshared (List_1_t640 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10110(__this, ___item, method) (( int32_t (*) (List_1_t640 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10111_gshared (List_1_t640 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10111(__this, ___index, ___item, method) (( void (*) (List_1_t640 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10111_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10112_gshared (List_1_t640 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10112(__this, ___item, method) (( void (*) (List_1_t640 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10112_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10114_gshared (List_1_t640 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10114(__this, method) (( bool (*) (List_1_t640 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10100_gshared (List_1_t640 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10100(__this, method) (( bool (*) (List_1_t640 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10100_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10101_gshared (List_1_t640 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10101(__this, method) (( Object_t * (*) (List_1_t640 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10103_gshared (List_1_t640 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10103(__this, method) (( bool (*) (List_1_t640 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10104_gshared (List_1_t640 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10104(__this, method) (( bool (*) (List_1_t640 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10105_gshared (List_1_t640 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10105(__this, ___index, method) (( Object_t * (*) (List_1_t640 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10105_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10106_gshared (List_1_t640 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10106(__this, ___index, ___value, method) (( void (*) (List_1_t640 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10106_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10115_gshared (List_1_t640 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10115(__this, ___item, method) (( void (*) (List_1_t640 *, Object_t *, const MethodInfo*))List_1_Add_m10115_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21348_gshared (List_1_t640 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21348(__this, ___newCount, method) (( void (*) (List_1_t640 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21348_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m21350_gshared (List_1_t640 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m21350(__this, ___idx, ___count, method) (( void (*) (List_1_t640 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21350_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21352_gshared (List_1_t640 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21352(__this, ___collection, method) (( void (*) (List_1_t640 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21352_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21354_gshared (List_1_t640 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21354(__this, ___enumerable, method) (( void (*) (List_1_t640 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21354_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m21356_gshared (List_1_t640 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m21356(__this, ___collection, method) (( void (*) (List_1_t640 *, Object_t*, const MethodInfo*))List_1_AddRange_m21356_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1134 * List_1_AsReadOnly_m21358_gshared (List_1_t640 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m21358(__this, method) (( ReadOnlyCollection_1_t1134 * (*) (List_1_t640 *, const MethodInfo*))List_1_AsReadOnly_m21358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10108_gshared (List_1_t640 * __this, const MethodInfo* method);
#define List_1_Clear_m10108(__this, method) (( void (*) (List_1_t640 *, const MethodInfo*))List_1_Clear_m10108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10116_gshared (List_1_t640 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10116(__this, ___item, method) (( bool (*) (List_1_t640 *, Object_t *, const MethodInfo*))List_1_Contains_m10116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10117_gshared (List_1_t640 * __this, ObjectU5BU5D_t638* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10117(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t640 *, ObjectU5BU5D_t638*, int32_t, const MethodInfo*))List_1_CopyTo_m10117_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m21363_gshared (List_1_t640 * __this, Predicate_1_t5383 * ___match, const MethodInfo* method);
#define List_1_Find_m21363(__this, ___match, method) (( Object_t * (*) (List_1_t640 *, Predicate_1_t5383 *, const MethodInfo*))List_1_Find_m21363_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m21365_gshared (Object_t * __this /* static, unused */, Predicate_1_t5383 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m21365(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5383 *, const MethodInfo*))List_1_CheckMatch_m21365_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m21367_gshared (List_1_t640 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5383 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m21367(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t640 *, int32_t, int32_t, Predicate_1_t5383 *, const MethodInfo*))List_1_GetIndex_m21367_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t699  List_1_GetEnumerator_m3642_gshared (List_1_t640 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m3642(__this, method) (( Enumerator_t699  (*) (List_1_t640 *, const MethodInfo*))List_1_GetEnumerator_m3642_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t640 * List_1_GetRange_m21369_gshared (List_1_t640 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m21369(__this, ___index, ___count, method) (( List_1_t640 * (*) (List_1_t640 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21369_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10120_gshared (List_1_t640 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10120(__this, ___item, method) (( int32_t (*) (List_1_t640 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10120_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21372_gshared (List_1_t640 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21372(__this, ___start, ___delta, method) (( void (*) (List_1_t640 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21372_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21374_gshared (List_1_t640 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21374(__this, ___index, method) (( void (*) (List_1_t640 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21374_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10121_gshared (List_1_t640 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10121(__this, ___index, ___item, method) (( void (*) (List_1_t640 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10121_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21377_gshared (List_1_t640 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21377(__this, ___collection, method) (( void (*) (List_1_t640 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21377_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m21379_gshared (List_1_t640 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m21379(__this, ___index, ___collection, method) (( void (*) (List_1_t640 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21379_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m21381_gshared (List_1_t640 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m21381(__this, ___index, ___collection, method) (( void (*) (List_1_t640 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21381_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m21383_gshared (List_1_t640 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m21383(__this, ___index, ___enumerable, method) (( void (*) (List_1_t640 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21383_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10118_gshared (List_1_t640 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10118(__this, ___item, method) (( bool (*) (List_1_t640 *, Object_t *, const MethodInfo*))List_1_Remove_m10118_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m21386_gshared (List_1_t640 * __this, Predicate_1_t5383 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m21386(__this, ___match, method) (( int32_t (*) (List_1_t640 *, Predicate_1_t5383 *, const MethodInfo*))List_1_RemoveAll_m21386_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10113_gshared (List_1_t640 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10113(__this, ___index, method) (( void (*) (List_1_t640 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10113_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m21389_gshared (List_1_t640 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m21389(__this, ___index, ___count, method) (( void (*) (List_1_t640 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21389_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m21391_gshared (List_1_t640 * __this, const MethodInfo* method);
#define List_1_Reverse_m21391(__this, method) (( void (*) (List_1_t640 *, const MethodInfo*))List_1_Reverse_m21391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m21393_gshared (List_1_t640 * __this, const MethodInfo* method);
#define List_1_Sort_m21393(__this, method) (( void (*) (List_1_t640 *, const MethodInfo*))List_1_Sort_m21393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m21395_gshared (List_1_t640 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m21395(__this, ___comparer, method) (( void (*) (List_1_t640 *, Object_t*, const MethodInfo*))List_1_Sort_m21395_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21397_gshared (List_1_t640 * __this, Comparison_1_t5389 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21397(__this, ___comparison, method) (( void (*) (List_1_t640 *, Comparison_1_t5389 *, const MethodInfo*))List_1_Sort_m21397_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t638* List_1_ToArray_m21399_gshared (List_1_t640 * __this, const MethodInfo* method);
#define List_1_ToArray_m21399(__this, method) (( ObjectU5BU5D_t638* (*) (List_1_t640 *, const MethodInfo*))List_1_ToArray_m21399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m21401_gshared (List_1_t640 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m21401(__this, method) (( void (*) (List_1_t640 *, const MethodInfo*))List_1_TrimExcess_m21401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21403_gshared (List_1_t640 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21403(__this, method) (( int32_t (*) (List_1_t640 *, const MethodInfo*))List_1_get_Capacity_m21403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21405_gshared (List_1_t640 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21405(__this, ___value, method) (( void (*) (List_1_t640 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21405_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10099_gshared (List_1_t640 * __this, const MethodInfo* method);
#define List_1_get_Count_m10099(__this, method) (( int32_t (*) (List_1_t640 *, const MethodInfo*))List_1_get_Count_m10099_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10122_gshared (List_1_t640 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10122(__this, ___index, method) (( Object_t * (*) (List_1_t640 *, int32_t, const MethodInfo*))List_1_get_Item_m10122_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10123_gshared (List_1_t640 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10123(__this, ___index, ___value, method) (( void (*) (List_1_t640 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10123_gshared)(__this, ___index, ___value, method)
