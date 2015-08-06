#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.DateTime>
struct List_1_t6767;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.DateTime>
struct IEnumerable_1_t6761;
// System.DateTime[]
struct DateTimeU5BU5D_t4849;
// System.Collections.Generic.IEnumerator`1<System.DateTime>
struct IEnumerator_1_t6762;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9116;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.DateTime>
struct ReadOnlyCollection_1_t6769;
// System.Predicate`1<System.DateTime>
struct Predicate_1_t6773;
// System.Collections.Generic.IComparer`1<System.DateTime>
struct IComparer_1_t9117;
// System.Comparison`1<System.DateTime>
struct Comparison_1_t6776;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.List`1/Enumerator<System.DateTime>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_62.h"

// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor()
extern "C" void List_1__ctor_m40999_gshared (List_1_t6767 * __this, const MethodInfo* method);
#define List_1__ctor_m40999(__this, method) (( void (*) (List_1_t6767 *, const MethodInfo*))List_1__ctor_m40999_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m41000_gshared (List_1_t6767 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m41000(__this, ___collection, method) (( void (*) (List_1_t6767 *, Object_t*, const MethodInfo*))List_1__ctor_m41000_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(System.Int32)
extern "C" void List_1__ctor_m41001_gshared (List_1_t6767 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m41001(__this, ___capacity, method) (( void (*) (List_1_t6767 *, int32_t, const MethodInfo*))List_1__ctor_m41001_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m41002_gshared (List_1_t6767 * __this, DateTimeU5BU5D_t4849* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m41002(__this, ___data, ___size, method) (( void (*) (List_1_t6767 *, DateTimeU5BU5D_t4849*, int32_t, const MethodInfo*))List_1__ctor_m41002_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::.cctor()
extern "C" void List_1__cctor_m41003_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m41003(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m41003_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.DateTime>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41004_gshared (List_1_t6767 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41004(__this, method) (( Object_t* (*) (List_1_t6767 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41004_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m41005_gshared (List_1_t6767 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m41005(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6767 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m41005_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m41006_gshared (List_1_t6767 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m41006(__this, method) (( Object_t * (*) (List_1_t6767 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m41006_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m41007_gshared (List_1_t6767 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m41007(__this, ___item, method) (( int32_t (*) (List_1_t6767 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m41007_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m41008_gshared (List_1_t6767 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m41008(__this, ___item, method) (( bool (*) (List_1_t6767 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m41008_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m41009_gshared (List_1_t6767 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m41009(__this, ___item, method) (( int32_t (*) (List_1_t6767 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m41009_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m41010_gshared (List_1_t6767 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m41010(__this, ___index, ___item, method) (( void (*) (List_1_t6767 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m41010_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m41011_gshared (List_1_t6767 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m41011(__this, ___item, method) (( void (*) (List_1_t6767 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m41011_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41012_gshared (List_1_t6767 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41012(__this, method) (( bool (*) (List_1_t6767 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41012_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m41013_gshared (List_1_t6767 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m41013(__this, method) (( bool (*) (List_1_t6767 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m41013_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m41014_gshared (List_1_t6767 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m41014(__this, method) (( Object_t * (*) (List_1_t6767 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m41014_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m41015_gshared (List_1_t6767 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m41015(__this, method) (( bool (*) (List_1_t6767 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m41015_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m41016_gshared (List_1_t6767 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m41016(__this, method) (( bool (*) (List_1_t6767 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m41016_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m41017_gshared (List_1_t6767 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m41017(__this, ___index, method) (( Object_t * (*) (List_1_t6767 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m41017_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m41018_gshared (List_1_t6767 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m41018(__this, ___index, ___value, method) (( void (*) (List_1_t6767 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m41018_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Add(T)
extern "C" void List_1_Add_m41019_gshared (List_1_t6767 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Add_m41019(__this, ___item, method) (( void (*) (List_1_t6767 *, DateTime_t287 , const MethodInfo*))List_1_Add_m41019_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m41020_gshared (List_1_t6767 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m41020(__this, ___newCount, method) (( void (*) (List_1_t6767 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m41020_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m41021_gshared (List_1_t6767 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m41021(__this, ___idx, ___count, method) (( void (*) (List_1_t6767 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m41021_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m41022_gshared (List_1_t6767 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m41022(__this, ___collection, method) (( void (*) (List_1_t6767 *, Object_t*, const MethodInfo*))List_1_AddCollection_m41022_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m41023_gshared (List_1_t6767 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m41023(__this, ___enumerable, method) (( void (*) (List_1_t6767 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m41023_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m41024_gshared (List_1_t6767 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m41024(__this, ___collection, method) (( void (*) (List_1_t6767 *, Object_t*, const MethodInfo*))List_1_AddRange_m41024_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.DateTime>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6769 * List_1_AsReadOnly_m41025_gshared (List_1_t6767 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m41025(__this, method) (( ReadOnlyCollection_1_t6769 * (*) (List_1_t6767 *, const MethodInfo*))List_1_AsReadOnly_m41025_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Clear()
extern "C" void List_1_Clear_m41026_gshared (List_1_t6767 * __this, const MethodInfo* method);
#define List_1_Clear_m41026(__this, method) (( void (*) (List_1_t6767 *, const MethodInfo*))List_1_Clear_m41026_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::Contains(T)
extern "C" bool List_1_Contains_m41027_gshared (List_1_t6767 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Contains_m41027(__this, ___item, method) (( bool (*) (List_1_t6767 *, DateTime_t287 , const MethodInfo*))List_1_Contains_m41027_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m41028_gshared (List_1_t6767 * __this, DateTimeU5BU5D_t4849* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m41028(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6767 *, DateTimeU5BU5D_t4849*, int32_t, const MethodInfo*))List_1_CopyTo_m41028_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.DateTime>::Find(System.Predicate`1<T>)
extern "C" DateTime_t287  List_1_Find_m41029_gshared (List_1_t6767 * __this, Predicate_1_t6773 * ___match, const MethodInfo* method);
#define List_1_Find_m41029(__this, ___match, method) (( DateTime_t287  (*) (List_1_t6767 *, Predicate_1_t6773 *, const MethodInfo*))List_1_Find_m41029_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m41030_gshared (Object_t * __this /* static, unused */, Predicate_1_t6773 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m41030(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6773 *, const MethodInfo*))List_1_CheckMatch_m41030_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m41031_gshared (List_1_t6767 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6773 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m41031(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6767 *, int32_t, int32_t, Predicate_1_t6773 *, const MethodInfo*))List_1_GetIndex_m41031_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.DateTime>::GetEnumerator()
extern "C" Enumerator_t6768  List_1_GetEnumerator_m41032_gshared (List_1_t6767 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m41032(__this, method) (( Enumerator_t6768  (*) (List_1_t6767 *, const MethodInfo*))List_1_GetEnumerator_m41032_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.DateTime>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6767 * List_1_GetRange_m41033_gshared (List_1_t6767 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m41033(__this, ___index, ___count, method) (( List_1_t6767 * (*) (List_1_t6767 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m41033_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m41034_gshared (List_1_t6767 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_IndexOf_m41034(__this, ___item, method) (( int32_t (*) (List_1_t6767 *, DateTime_t287 , const MethodInfo*))List_1_IndexOf_m41034_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m41035_gshared (List_1_t6767 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m41035(__this, ___start, ___delta, method) (( void (*) (List_1_t6767 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m41035_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m41036_gshared (List_1_t6767 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m41036(__this, ___index, method) (( void (*) (List_1_t6767 *, int32_t, const MethodInfo*))List_1_CheckIndex_m41036_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m41037_gshared (List_1_t6767 * __this, int32_t ___index, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Insert_m41037(__this, ___index, ___item, method) (( void (*) (List_1_t6767 *, int32_t, DateTime_t287 , const MethodInfo*))List_1_Insert_m41037_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m41038_gshared (List_1_t6767 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m41038(__this, ___collection, method) (( void (*) (List_1_t6767 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m41038_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m41039_gshared (List_1_t6767 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m41039(__this, ___index, ___collection, method) (( void (*) (List_1_t6767 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m41039_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m41040_gshared (List_1_t6767 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m41040(__this, ___index, ___collection, method) (( void (*) (List_1_t6767 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m41040_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m41041_gshared (List_1_t6767 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m41041(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6767 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m41041_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.DateTime>::Remove(T)
extern "C" bool List_1_Remove_m41042_gshared (List_1_t6767 * __this, DateTime_t287  ___item, const MethodInfo* method);
#define List_1_Remove_m41042(__this, ___item, method) (( bool (*) (List_1_t6767 *, DateTime_t287 , const MethodInfo*))List_1_Remove_m41042_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m41043_gshared (List_1_t6767 * __this, Predicate_1_t6773 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m41043(__this, ___match, method) (( int32_t (*) (List_1_t6767 *, Predicate_1_t6773 *, const MethodInfo*))List_1_RemoveAll_m41043_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m41044_gshared (List_1_t6767 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m41044(__this, ___index, method) (( void (*) (List_1_t6767 *, int32_t, const MethodInfo*))List_1_RemoveAt_m41044_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m41045_gshared (List_1_t6767 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m41045(__this, ___index, ___count, method) (( void (*) (List_1_t6767 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m41045_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Reverse()
extern "C" void List_1_Reverse_m41046_gshared (List_1_t6767 * __this, const MethodInfo* method);
#define List_1_Reverse_m41046(__this, method) (( void (*) (List_1_t6767 *, const MethodInfo*))List_1_Reverse_m41046_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort()
extern "C" void List_1_Sort_m41047_gshared (List_1_t6767 * __this, const MethodInfo* method);
#define List_1_Sort_m41047(__this, method) (( void (*) (List_1_t6767 *, const MethodInfo*))List_1_Sort_m41047_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m41048_gshared (List_1_t6767 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m41048(__this, ___comparer, method) (( void (*) (List_1_t6767 *, Object_t*, const MethodInfo*))List_1_Sort_m41048_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m41049_gshared (List_1_t6767 * __this, Comparison_1_t6776 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m41049(__this, ___comparison, method) (( void (*) (List_1_t6767 *, Comparison_1_t6776 *, const MethodInfo*))List_1_Sort_m41049_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.DateTime>::ToArray()
extern "C" DateTimeU5BU5D_t4849* List_1_ToArray_m41050_gshared (List_1_t6767 * __this, const MethodInfo* method);
#define List_1_ToArray_m41050(__this, method) (( DateTimeU5BU5D_t4849* (*) (List_1_t6767 *, const MethodInfo*))List_1_ToArray_m41050_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::TrimExcess()
extern "C" void List_1_TrimExcess_m41051_gshared (List_1_t6767 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m41051(__this, method) (( void (*) (List_1_t6767 *, const MethodInfo*))List_1_TrimExcess_m41051_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m41052_gshared (List_1_t6767 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m41052(__this, method) (( int32_t (*) (List_1_t6767 *, const MethodInfo*))List_1_get_Capacity_m41052_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m41053_gshared (List_1_t6767 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m41053(__this, ___value, method) (( void (*) (List_1_t6767 *, int32_t, const MethodInfo*))List_1_set_Capacity_m41053_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.DateTime>::get_Count()
extern "C" int32_t List_1_get_Count_m41054_gshared (List_1_t6767 * __this, const MethodInfo* method);
#define List_1_get_Count_m41054(__this, method) (( int32_t (*) (List_1_t6767 *, const MethodInfo*))List_1_get_Count_m41054_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.DateTime>::get_Item(System.Int32)
extern "C" DateTime_t287  List_1_get_Item_m41055_gshared (List_1_t6767 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m41055(__this, ___index, method) (( DateTime_t287  (*) (List_1_t6767 *, int32_t, const MethodInfo*))List_1_get_Item_m41055_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.DateTime>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m41056_gshared (List_1_t6767 * __this, int32_t ___index, DateTime_t287  ___value, const MethodInfo* method);
#define List_1_set_Item_m41056(__this, ___index, ___value, method) (( void (*) (List_1_t6767 *, int32_t, DateTime_t287 , const MethodInfo*))List_1_set_Item_m41056_gshared)(__this, ___index, ___value, method)
