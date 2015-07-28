#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t629;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t652;
// System.Object[]
struct ObjectU5BU5D_t627;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t105;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1162;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1124;
// System.Predicate`1<System.Object>
struct Predicate_1_t5372;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t5595;
// System.Comparison`1<System.Object>
struct Comparison_1_t5378;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3419_gshared (List_1_t629 * __this, const MethodInfo* method);
#define List_1__ctor_m3419(__this, method) (( void (*) (List_1_t629 *, const MethodInfo*))List_1__ctor_m3419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m7152_gshared (List_1_t629 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m7152(__this, ___collection, method) (( void (*) (List_1_t629 *, Object_t*, const MethodInfo*))List_1__ctor_m7152_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m21248_gshared (List_1_t629 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m21248(__this, ___capacity, method) (( void (*) (List_1_t629 *, int32_t, const MethodInfo*))List_1__ctor_m21248_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m21250_gshared (List_1_t629 * __this, ObjectU5BU5D_t627* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m21250(__this, ___data, ___size, method) (( void (*) (List_1_t629 *, ObjectU5BU5D_t627*, int32_t, const MethodInfo*))List_1__ctor_m21250_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m21252_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m21252(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m21252_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10041_gshared (List_1_t629 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10041(__this, method) (( Object_t* (*) (List_1_t629 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10041_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10024_gshared (List_1_t629 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10024(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t629 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10024_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10020_gshared (List_1_t629 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10020(__this, method) (( Object_t * (*) (List_1_t629 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10020_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10029_gshared (List_1_t629 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10029(__this, ___item, method) (( int32_t (*) (List_1_t629 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10029_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10031_gshared (List_1_t629 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10031(__this, ___item, method) (( bool (*) (List_1_t629 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10031_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10032_gshared (List_1_t629 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10032(__this, ___item, method) (( int32_t (*) (List_1_t629 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10032_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10033_gshared (List_1_t629 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10033(__this, ___index, ___item, method) (( void (*) (List_1_t629 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10033_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10034_gshared (List_1_t629 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10034(__this, ___item, method) (( void (*) (List_1_t629 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10034_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10036_gshared (List_1_t629 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10036(__this, method) (( bool (*) (List_1_t629 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10036_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10022_gshared (List_1_t629 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10022(__this, method) (( bool (*) (List_1_t629 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10022_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10023_gshared (List_1_t629 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10023(__this, method) (( Object_t * (*) (List_1_t629 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10023_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10025_gshared (List_1_t629 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10025(__this, method) (( bool (*) (List_1_t629 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10025_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10026_gshared (List_1_t629 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10026(__this, method) (( bool (*) (List_1_t629 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10026_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10027_gshared (List_1_t629 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10027(__this, ___index, method) (( Object_t * (*) (List_1_t629 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10027_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10028_gshared (List_1_t629 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10028(__this, ___index, ___value, method) (( void (*) (List_1_t629 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10028_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10037_gshared (List_1_t629 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10037(__this, ___item, method) (( void (*) (List_1_t629 *, Object_t *, const MethodInfo*))List_1_Add_m10037_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21270_gshared (List_1_t629 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21270(__this, ___newCount, method) (( void (*) (List_1_t629 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21270_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m21272_gshared (List_1_t629 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m21272(__this, ___idx, ___count, method) (( void (*) (List_1_t629 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m21272_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21274_gshared (List_1_t629 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21274(__this, ___collection, method) (( void (*) (List_1_t629 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21276_gshared (List_1_t629 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21276(__this, ___enumerable, method) (( void (*) (List_1_t629 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21276_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m21278_gshared (List_1_t629 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m21278(__this, ___collection, method) (( void (*) (List_1_t629 *, Object_t*, const MethodInfo*))List_1_AddRange_m21278_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1124 * List_1_AsReadOnly_m21280_gshared (List_1_t629 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m21280(__this, method) (( ReadOnlyCollection_1_t1124 * (*) (List_1_t629 *, const MethodInfo*))List_1_AsReadOnly_m21280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10030_gshared (List_1_t629 * __this, const MethodInfo* method);
#define List_1_Clear_m10030(__this, method) (( void (*) (List_1_t629 *, const MethodInfo*))List_1_Clear_m10030_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10038_gshared (List_1_t629 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10038(__this, ___item, method) (( bool (*) (List_1_t629 *, Object_t *, const MethodInfo*))List_1_Contains_m10038_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10039_gshared (List_1_t629 * __this, ObjectU5BU5D_t627* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10039(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t629 *, ObjectU5BU5D_t627*, int32_t, const MethodInfo*))List_1_CopyTo_m10039_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m21285_gshared (List_1_t629 * __this, Predicate_1_t5372 * ___match, const MethodInfo* method);
#define List_1_Find_m21285(__this, ___match, method) (( Object_t * (*) (List_1_t629 *, Predicate_1_t5372 *, const MethodInfo*))List_1_Find_m21285_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m21287_gshared (Object_t * __this /* static, unused */, Predicate_1_t5372 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m21287(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5372 *, const MethodInfo*))List_1_CheckMatch_m21287_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m21289_gshared (List_1_t629 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5372 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m21289(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t629 *, int32_t, int32_t, Predicate_1_t5372 *, const MethodInfo*))List_1_GetIndex_m21289_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t689  List_1_GetEnumerator_m3575_gshared (List_1_t629 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m3575(__this, method) (( Enumerator_t689  (*) (List_1_t629 *, const MethodInfo*))List_1_GetEnumerator_m3575_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t629 * List_1_GetRange_m21291_gshared (List_1_t629 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m21291(__this, ___index, ___count, method) (( List_1_t629 * (*) (List_1_t629 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m21291_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10042_gshared (List_1_t629 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10042(__this, ___item, method) (( int32_t (*) (List_1_t629 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10042_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21294_gshared (List_1_t629 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21294(__this, ___start, ___delta, method) (( void (*) (List_1_t629 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21294_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21296_gshared (List_1_t629 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21296(__this, ___index, method) (( void (*) (List_1_t629 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21296_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10043_gshared (List_1_t629 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10043(__this, ___index, ___item, method) (( void (*) (List_1_t629 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10043_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21299_gshared (List_1_t629 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21299(__this, ___collection, method) (( void (*) (List_1_t629 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21299_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m21301_gshared (List_1_t629 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m21301(__this, ___index, ___collection, method) (( void (*) (List_1_t629 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m21301_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m21303_gshared (List_1_t629 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m21303(__this, ___index, ___collection, method) (( void (*) (List_1_t629 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m21303_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m21305_gshared (List_1_t629 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m21305(__this, ___index, ___enumerable, method) (( void (*) (List_1_t629 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m21305_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10040_gshared (List_1_t629 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10040(__this, ___item, method) (( bool (*) (List_1_t629 *, Object_t *, const MethodInfo*))List_1_Remove_m10040_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m21308_gshared (List_1_t629 * __this, Predicate_1_t5372 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m21308(__this, ___match, method) (( int32_t (*) (List_1_t629 *, Predicate_1_t5372 *, const MethodInfo*))List_1_RemoveAll_m21308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10035_gshared (List_1_t629 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10035(__this, ___index, method) (( void (*) (List_1_t629 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10035_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m21311_gshared (List_1_t629 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m21311(__this, ___index, ___count, method) (( void (*) (List_1_t629 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m21311_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m21313_gshared (List_1_t629 * __this, const MethodInfo* method);
#define List_1_Reverse_m21313(__this, method) (( void (*) (List_1_t629 *, const MethodInfo*))List_1_Reverse_m21313_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m21315_gshared (List_1_t629 * __this, const MethodInfo* method);
#define List_1_Sort_m21315(__this, method) (( void (*) (List_1_t629 *, const MethodInfo*))List_1_Sort_m21315_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m21317_gshared (List_1_t629 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m21317(__this, ___comparer, method) (( void (*) (List_1_t629 *, Object_t*, const MethodInfo*))List_1_Sort_m21317_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21319_gshared (List_1_t629 * __this, Comparison_1_t5378 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21319(__this, ___comparison, method) (( void (*) (List_1_t629 *, Comparison_1_t5378 *, const MethodInfo*))List_1_Sort_m21319_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t627* List_1_ToArray_m21321_gshared (List_1_t629 * __this, const MethodInfo* method);
#define List_1_ToArray_m21321(__this, method) (( ObjectU5BU5D_t627* (*) (List_1_t629 *, const MethodInfo*))List_1_ToArray_m21321_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m21323_gshared (List_1_t629 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m21323(__this, method) (( void (*) (List_1_t629 *, const MethodInfo*))List_1_TrimExcess_m21323_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21325_gshared (List_1_t629 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21325(__this, method) (( int32_t (*) (List_1_t629 *, const MethodInfo*))List_1_get_Capacity_m21325_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21327_gshared (List_1_t629 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21327(__this, ___value, method) (( void (*) (List_1_t629 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21327_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10021_gshared (List_1_t629 * __this, const MethodInfo* method);
#define List_1_get_Count_m10021(__this, method) (( int32_t (*) (List_1_t629 *, const MethodInfo*))List_1_get_Count_m10021_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10044_gshared (List_1_t629 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10044(__this, ___index, method) (( Object_t * (*) (List_1_t629 *, int32_t, const MethodInfo*))List_1_get_Item_m10044_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10045_gshared (List_1_t629 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10045(__this, ___index, ___value, method) (( void (*) (List_1_t629 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10045_gshared)(__this, ___index, ___value, method)
