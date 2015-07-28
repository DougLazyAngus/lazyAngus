#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t6610;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt64>
struct IEnumerable_1_t6270;
// System.UInt64[]
struct UInt64U5BU5D_t4655;
// System.Collections.Generic.IEnumerator`1<System.UInt64>
struct IEnumerator_1_t6271;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9103;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt64>
struct ReadOnlyCollection_1_t6612;
// System.Predicate`1<System.UInt64>
struct Predicate_1_t6617;
// System.Collections.Generic.IComparer`1<System.UInt64>
struct IComparer_1_t9104;
// System.Comparison`1<System.UInt64>
struct Comparison_1_t6621;
// System.Collections.Generic.List`1/Enumerator<System.UInt64>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_60.h"

// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor()
extern "C" void List_1__ctor_m39016_gshared (List_1_t6610 * __this, const MethodInfo* method);
#define List_1__ctor_m39016(__this, method) (( void (*) (List_1_t6610 *, const MethodInfo*))List_1__ctor_m39016_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m39017_gshared (List_1_t6610 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m39017(__this, ___collection, method) (( void (*) (List_1_t6610 *, Object_t*, const MethodInfo*))List_1__ctor_m39017_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(System.Int32)
extern "C" void List_1__ctor_m39018_gshared (List_1_t6610 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m39018(__this, ___capacity, method) (( void (*) (List_1_t6610 *, int32_t, const MethodInfo*))List_1__ctor_m39018_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m39019_gshared (List_1_t6610 * __this, UInt64U5BU5D_t4655* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m39019(__this, ___data, ___size, method) (( void (*) (List_1_t6610 *, UInt64U5BU5D_t4655*, int32_t, const MethodInfo*))List_1__ctor_m39019_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.cctor()
extern "C" void List_1__cctor_m39020_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m39020(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m39020_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt64>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39021_gshared (List_1_t6610 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39021(__this, method) (( Object_t* (*) (List_1_t6610 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39021_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m39022_gshared (List_1_t6610 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m39022(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6610 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m39022_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m39023_gshared (List_1_t6610 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39023(__this, method) (( Object_t * (*) (List_1_t6610 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m39023_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m39024_gshared (List_1_t6610 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m39024(__this, ___item, method) (( int32_t (*) (List_1_t6610 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m39024_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m39025_gshared (List_1_t6610 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m39025(__this, ___item, method) (( bool (*) (List_1_t6610 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m39025_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m39026_gshared (List_1_t6610 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m39026(__this, ___item, method) (( int32_t (*) (List_1_t6610 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m39026_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m39027_gshared (List_1_t6610 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m39027(__this, ___index, ___item, method) (( void (*) (List_1_t6610 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m39027_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m39028_gshared (List_1_t6610 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m39028(__this, ___item, method) (( void (*) (List_1_t6610 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m39028_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39029_gshared (List_1_t6610 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39029(__this, method) (( bool (*) (List_1_t6610 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39029_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m39030_gshared (List_1_t6610 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39030(__this, method) (( bool (*) (List_1_t6610 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m39030_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m39031_gshared (List_1_t6610 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m39031(__this, method) (( Object_t * (*) (List_1_t6610 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m39031_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m39032_gshared (List_1_t6610 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m39032(__this, method) (( bool (*) (List_1_t6610 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m39032_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m39033_gshared (List_1_t6610 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m39033(__this, method) (( bool (*) (List_1_t6610 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m39033_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m39034_gshared (List_1_t6610 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m39034(__this, ___index, method) (( Object_t * (*) (List_1_t6610 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m39034_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m39035_gshared (List_1_t6610 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m39035(__this, ___index, ___value, method) (( void (*) (List_1_t6610 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m39035_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Add(T)
extern "C" void List_1_Add_m39036_gshared (List_1_t6610 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Add_m39036(__this, ___item, method) (( void (*) (List_1_t6610 *, uint64_t, const MethodInfo*))List_1_Add_m39036_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m39037_gshared (List_1_t6610 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m39037(__this, ___newCount, method) (( void (*) (List_1_t6610 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m39037_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m39038_gshared (List_1_t6610 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m39038(__this, ___idx, ___count, method) (( void (*) (List_1_t6610 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m39038_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m39039_gshared (List_1_t6610 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m39039(__this, ___collection, method) (( void (*) (List_1_t6610 *, Object_t*, const MethodInfo*))List_1_AddCollection_m39039_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m39040_gshared (List_1_t6610 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m39040(__this, ___enumerable, method) (( void (*) (List_1_t6610 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m39040_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m39041_gshared (List_1_t6610 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m39041(__this, ___collection, method) (( void (*) (List_1_t6610 *, Object_t*, const MethodInfo*))List_1_AddRange_m39041_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt64>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6612 * List_1_AsReadOnly_m39042_gshared (List_1_t6610 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m39042(__this, method) (( ReadOnlyCollection_1_t6612 * (*) (List_1_t6610 *, const MethodInfo*))List_1_AsReadOnly_m39042_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Clear()
extern "C" void List_1_Clear_m39043_gshared (List_1_t6610 * __this, const MethodInfo* method);
#define List_1_Clear_m39043(__this, method) (( void (*) (List_1_t6610 *, const MethodInfo*))List_1_Clear_m39043_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::Contains(T)
extern "C" bool List_1_Contains_m39044_gshared (List_1_t6610 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Contains_m39044(__this, ___item, method) (( bool (*) (List_1_t6610 *, uint64_t, const MethodInfo*))List_1_Contains_m39044_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m39045_gshared (List_1_t6610 * __this, UInt64U5BU5D_t4655* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m39045(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6610 *, UInt64U5BU5D_t4655*, int32_t, const MethodInfo*))List_1_CopyTo_m39045_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt64>::Find(System.Predicate`1<T>)
extern "C" uint64_t List_1_Find_m39046_gshared (List_1_t6610 * __this, Predicate_1_t6617 * ___match, const MethodInfo* method);
#define List_1_Find_m39046(__this, ___match, method) (( uint64_t (*) (List_1_t6610 *, Predicate_1_t6617 *, const MethodInfo*))List_1_Find_m39046_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m39047_gshared (Object_t * __this /* static, unused */, Predicate_1_t6617 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m39047(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6617 *, const MethodInfo*))List_1_CheckMatch_m39047_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m39048_gshared (List_1_t6610 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6617 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m39048(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6610 *, int32_t, int32_t, Predicate_1_t6617 *, const MethodInfo*))List_1_GetIndex_m39048_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt64>::GetEnumerator()
extern "C" Enumerator_t6611  List_1_GetEnumerator_m39049_gshared (List_1_t6610 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m39049(__this, method) (( Enumerator_t6611  (*) (List_1_t6610 *, const MethodInfo*))List_1_GetEnumerator_m39049_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt64>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6610 * List_1_GetRange_m39050_gshared (List_1_t6610 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m39050(__this, ___index, ___count, method) (( List_1_t6610 * (*) (List_1_t6610 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m39050_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m39051_gshared (List_1_t6610 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m39051(__this, ___item, method) (( int32_t (*) (List_1_t6610 *, uint64_t, const MethodInfo*))List_1_IndexOf_m39051_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m39052_gshared (List_1_t6610 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m39052(__this, ___start, ___delta, method) (( void (*) (List_1_t6610 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m39052_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m39053_gshared (List_1_t6610 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m39053(__this, ___index, method) (( void (*) (List_1_t6610 *, int32_t, const MethodInfo*))List_1_CheckIndex_m39053_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m39054_gshared (List_1_t6610 * __this, int32_t ___index, uint64_t ___item, const MethodInfo* method);
#define List_1_Insert_m39054(__this, ___index, ___item, method) (( void (*) (List_1_t6610 *, int32_t, uint64_t, const MethodInfo*))List_1_Insert_m39054_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m39055_gshared (List_1_t6610 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m39055(__this, ___collection, method) (( void (*) (List_1_t6610 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m39055_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m39056_gshared (List_1_t6610 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m39056(__this, ___index, ___collection, method) (( void (*) (List_1_t6610 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m39056_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m39057_gshared (List_1_t6610 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m39057(__this, ___index, ___collection, method) (( void (*) (List_1_t6610 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m39057_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m39058_gshared (List_1_t6610 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m39058(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6610 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m39058_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::Remove(T)
extern "C" bool List_1_Remove_m39059_gshared (List_1_t6610 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Remove_m39059(__this, ___item, method) (( bool (*) (List_1_t6610 *, uint64_t, const MethodInfo*))List_1_Remove_m39059_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m39060_gshared (List_1_t6610 * __this, Predicate_1_t6617 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m39060(__this, ___match, method) (( int32_t (*) (List_1_t6610 *, Predicate_1_t6617 *, const MethodInfo*))List_1_RemoveAll_m39060_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m39061_gshared (List_1_t6610 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m39061(__this, ___index, method) (( void (*) (List_1_t6610 *, int32_t, const MethodInfo*))List_1_RemoveAt_m39061_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m39062_gshared (List_1_t6610 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m39062(__this, ___index, ___count, method) (( void (*) (List_1_t6610 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m39062_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Reverse()
extern "C" void List_1_Reverse_m39063_gshared (List_1_t6610 * __this, const MethodInfo* method);
#define List_1_Reverse_m39063(__this, method) (( void (*) (List_1_t6610 *, const MethodInfo*))List_1_Reverse_m39063_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort()
extern "C" void List_1_Sort_m39064_gshared (List_1_t6610 * __this, const MethodInfo* method);
#define List_1_Sort_m39064(__this, method) (( void (*) (List_1_t6610 *, const MethodInfo*))List_1_Sort_m39064_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m39065_gshared (List_1_t6610 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m39065(__this, ___comparer, method) (( void (*) (List_1_t6610 *, Object_t*, const MethodInfo*))List_1_Sort_m39065_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m39066_gshared (List_1_t6610 * __this, Comparison_1_t6621 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m39066(__this, ___comparison, method) (( void (*) (List_1_t6610 *, Comparison_1_t6621 *, const MethodInfo*))List_1_Sort_m39066_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt64>::ToArray()
extern "C" UInt64U5BU5D_t4655* List_1_ToArray_m39067_gshared (List_1_t6610 * __this, const MethodInfo* method);
#define List_1_ToArray_m39067(__this, method) (( UInt64U5BU5D_t4655* (*) (List_1_t6610 *, const MethodInfo*))List_1_ToArray_m39067_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::TrimExcess()
extern "C" void List_1_TrimExcess_m39068_gshared (List_1_t6610 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m39068(__this, method) (( void (*) (List_1_t6610 *, const MethodInfo*))List_1_TrimExcess_m39068_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m39069_gshared (List_1_t6610 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m39069(__this, method) (( int32_t (*) (List_1_t6610 *, const MethodInfo*))List_1_get_Capacity_m39069_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m39070_gshared (List_1_t6610 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m39070(__this, ___value, method) (( void (*) (List_1_t6610 *, int32_t, const MethodInfo*))List_1_set_Capacity_m39070_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::get_Count()
extern "C" int32_t List_1_get_Count_m39071_gshared (List_1_t6610 * __this, const MethodInfo* method);
#define List_1_get_Count_m39071(__this, method) (( int32_t (*) (List_1_t6610 *, const MethodInfo*))List_1_get_Count_m39071_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt64>::get_Item(System.Int32)
extern "C" uint64_t List_1_get_Item_m39072_gshared (List_1_t6610 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m39072(__this, ___index, method) (( uint64_t (*) (List_1_t6610 *, int32_t, const MethodInfo*))List_1_get_Item_m39072_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m39073_gshared (List_1_t6610 * __this, int32_t ___index, uint64_t ___value, const MethodInfo* method);
#define List_1_set_Item_m39073(__this, ___index, ___value, method) (( void (*) (List_1_t6610 *, int32_t, uint64_t, const MethodInfo*))List_1_set_Item_m39073_gshared)(__this, ___index, ___value, method)
