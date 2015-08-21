#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Parse.ParseGeoPoint>
struct List_1_t6864;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<Parse.ParseGeoPoint>
struct IEnumerable_1_t6857;
// Parse.ParseGeoPoint[]
struct ParseGeoPointU5BU5D_t6863;
// System.Collections.Generic.IEnumerator`1<Parse.ParseGeoPoint>
struct IEnumerator_1_t6858;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9217;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Parse.ParseGeoPoint>
struct ReadOnlyCollection_1_t6866;
// System.Predicate`1<Parse.ParseGeoPoint>
struct Predicate_1_t6870;
// System.Collections.Generic.IComparer`1<Parse.ParseGeoPoint>
struct IComparer_1_t9218;
// System.Comparison`1<Parse.ParseGeoPoint>
struct Comparison_1_t6873;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.List`1/Enumerator<Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_67.h"

// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor()
extern "C" void List_1__ctor_m42034_gshared (List_1_t6864 * __this, const MethodInfo* method);
#define List_1__ctor_m42034(__this, method) (( void (*) (List_1_t6864 *, const MethodInfo*))List_1__ctor_m42034_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m42035_gshared (List_1_t6864 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m42035(__this, ___collection, method) (( void (*) (List_1_t6864 *, Object_t*, const MethodInfo*))List_1__ctor_m42035_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(System.Int32)
extern "C" void List_1__ctor_m42036_gshared (List_1_t6864 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m42036(__this, ___capacity, method) (( void (*) (List_1_t6864 *, int32_t, const MethodInfo*))List_1__ctor_m42036_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m42037_gshared (List_1_t6864 * __this, ParseGeoPointU5BU5D_t6863* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m42037(__this, ___data, ___size, method) (( void (*) (List_1_t6864 *, ParseGeoPointU5BU5D_t6863*, int32_t, const MethodInfo*))List_1__ctor_m42037_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.cctor()
extern "C" void List_1__cctor_m42038_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m42038(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m42038_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42039_gshared (List_1_t6864 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42039(__this, method) (( Object_t* (*) (List_1_t6864 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42039_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m42040_gshared (List_1_t6864 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m42040(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6864 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m42040_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m42041_gshared (List_1_t6864 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m42041(__this, method) (( Object_t * (*) (List_1_t6864 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m42041_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m42042_gshared (List_1_t6864 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m42042(__this, ___item, method) (( int32_t (*) (List_1_t6864 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m42042_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m42043_gshared (List_1_t6864 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m42043(__this, ___item, method) (( bool (*) (List_1_t6864 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m42043_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m42044_gshared (List_1_t6864 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m42044(__this, ___item, method) (( int32_t (*) (List_1_t6864 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m42044_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m42045_gshared (List_1_t6864 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m42045(__this, ___index, ___item, method) (( void (*) (List_1_t6864 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m42045_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m42046_gshared (List_1_t6864 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m42046(__this, ___item, method) (( void (*) (List_1_t6864 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m42046_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42047_gshared (List_1_t6864 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42047(__this, method) (( bool (*) (List_1_t6864 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42047_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m42048_gshared (List_1_t6864 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m42048(__this, method) (( bool (*) (List_1_t6864 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m42048_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m42049_gshared (List_1_t6864 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m42049(__this, method) (( Object_t * (*) (List_1_t6864 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m42049_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m42050_gshared (List_1_t6864 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m42050(__this, method) (( bool (*) (List_1_t6864 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m42050_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m42051_gshared (List_1_t6864 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m42051(__this, method) (( bool (*) (List_1_t6864 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m42051_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m42052_gshared (List_1_t6864 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m42052(__this, ___index, method) (( Object_t * (*) (List_1_t6864 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m42052_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m42053_gshared (List_1_t6864 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m42053(__this, ___index, ___value, method) (( void (*) (List_1_t6864 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m42053_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Add(T)
extern "C" void List_1_Add_m42054_gshared (List_1_t6864 * __this, ParseGeoPoint_t1245  ___item, const MethodInfo* method);
#define List_1_Add_m42054(__this, ___item, method) (( void (*) (List_1_t6864 *, ParseGeoPoint_t1245 , const MethodInfo*))List_1_Add_m42054_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m42055_gshared (List_1_t6864 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m42055(__this, ___newCount, method) (( void (*) (List_1_t6864 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m42055_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m42056_gshared (List_1_t6864 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m42056(__this, ___idx, ___count, method) (( void (*) (List_1_t6864 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m42056_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m42057_gshared (List_1_t6864 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m42057(__this, ___collection, method) (( void (*) (List_1_t6864 *, Object_t*, const MethodInfo*))List_1_AddCollection_m42057_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m42058_gshared (List_1_t6864 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m42058(__this, ___enumerable, method) (( void (*) (List_1_t6864 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m42058_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m42059_gshared (List_1_t6864 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m42059(__this, ___collection, method) (( void (*) (List_1_t6864 *, Object_t*, const MethodInfo*))List_1_AddRange_m42059_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6866 * List_1_AsReadOnly_m42060_gshared (List_1_t6864 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m42060(__this, method) (( ReadOnlyCollection_1_t6866 * (*) (List_1_t6864 *, const MethodInfo*))List_1_AsReadOnly_m42060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Clear()
extern "C" void List_1_Clear_m42061_gshared (List_1_t6864 * __this, const MethodInfo* method);
#define List_1_Clear_m42061(__this, method) (( void (*) (List_1_t6864 *, const MethodInfo*))List_1_Clear_m42061_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Contains(T)
extern "C" bool List_1_Contains_m42062_gshared (List_1_t6864 * __this, ParseGeoPoint_t1245  ___item, const MethodInfo* method);
#define List_1_Contains_m42062(__this, ___item, method) (( bool (*) (List_1_t6864 *, ParseGeoPoint_t1245 , const MethodInfo*))List_1_Contains_m42062_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m42063_gshared (List_1_t6864 * __this, ParseGeoPointU5BU5D_t6863* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m42063(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6864 *, ParseGeoPointU5BU5D_t6863*, int32_t, const MethodInfo*))List_1_CopyTo_m42063_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Find(System.Predicate`1<T>)
extern "C" ParseGeoPoint_t1245  List_1_Find_m42064_gshared (List_1_t6864 * __this, Predicate_1_t6870 * ___match, const MethodInfo* method);
#define List_1_Find_m42064(__this, ___match, method) (( ParseGeoPoint_t1245  (*) (List_1_t6864 *, Predicate_1_t6870 *, const MethodInfo*))List_1_Find_m42064_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m42065_gshared (Object_t * __this /* static, unused */, Predicate_1_t6870 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m42065(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6870 *, const MethodInfo*))List_1_CheckMatch_m42065_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m42066_gshared (List_1_t6864 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6870 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m42066(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6864 *, int32_t, int32_t, Predicate_1_t6870 *, const MethodInfo*))List_1_GetIndex_m42066_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t6865  List_1_GetEnumerator_m42067_gshared (List_1_t6864 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m42067(__this, method) (( Enumerator_t6865  (*) (List_1_t6864 *, const MethodInfo*))List_1_GetEnumerator_m42067_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6864 * List_1_GetRange_m42068_gshared (List_1_t6864 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m42068(__this, ___index, ___count, method) (( List_1_t6864 * (*) (List_1_t6864 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m42068_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m42069_gshared (List_1_t6864 * __this, ParseGeoPoint_t1245  ___item, const MethodInfo* method);
#define List_1_IndexOf_m42069(__this, ___item, method) (( int32_t (*) (List_1_t6864 *, ParseGeoPoint_t1245 , const MethodInfo*))List_1_IndexOf_m42069_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m42070_gshared (List_1_t6864 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m42070(__this, ___start, ___delta, method) (( void (*) (List_1_t6864 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m42070_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m42071_gshared (List_1_t6864 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m42071(__this, ___index, method) (( void (*) (List_1_t6864 *, int32_t, const MethodInfo*))List_1_CheckIndex_m42071_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m42072_gshared (List_1_t6864 * __this, int32_t ___index, ParseGeoPoint_t1245  ___item, const MethodInfo* method);
#define List_1_Insert_m42072(__this, ___index, ___item, method) (( void (*) (List_1_t6864 *, int32_t, ParseGeoPoint_t1245 , const MethodInfo*))List_1_Insert_m42072_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m42073_gshared (List_1_t6864 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m42073(__this, ___collection, method) (( void (*) (List_1_t6864 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m42073_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m42074_gshared (List_1_t6864 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m42074(__this, ___index, ___collection, method) (( void (*) (List_1_t6864 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m42074_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m42075_gshared (List_1_t6864 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m42075(__this, ___index, ___collection, method) (( void (*) (List_1_t6864 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m42075_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m42076_gshared (List_1_t6864 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m42076(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6864 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m42076_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Remove(T)
extern "C" bool List_1_Remove_m42077_gshared (List_1_t6864 * __this, ParseGeoPoint_t1245  ___item, const MethodInfo* method);
#define List_1_Remove_m42077(__this, ___item, method) (( bool (*) (List_1_t6864 *, ParseGeoPoint_t1245 , const MethodInfo*))List_1_Remove_m42077_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m42078_gshared (List_1_t6864 * __this, Predicate_1_t6870 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m42078(__this, ___match, method) (( int32_t (*) (List_1_t6864 *, Predicate_1_t6870 *, const MethodInfo*))List_1_RemoveAll_m42078_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m42079_gshared (List_1_t6864 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m42079(__this, ___index, method) (( void (*) (List_1_t6864 *, int32_t, const MethodInfo*))List_1_RemoveAt_m42079_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m42080_gshared (List_1_t6864 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m42080(__this, ___index, ___count, method) (( void (*) (List_1_t6864 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m42080_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Reverse()
extern "C" void List_1_Reverse_m42081_gshared (List_1_t6864 * __this, const MethodInfo* method);
#define List_1_Reverse_m42081(__this, method) (( void (*) (List_1_t6864 *, const MethodInfo*))List_1_Reverse_m42081_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort()
extern "C" void List_1_Sort_m42082_gshared (List_1_t6864 * __this, const MethodInfo* method);
#define List_1_Sort_m42082(__this, method) (( void (*) (List_1_t6864 *, const MethodInfo*))List_1_Sort_m42082_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m42083_gshared (List_1_t6864 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m42083(__this, ___comparer, method) (( void (*) (List_1_t6864 *, Object_t*, const MethodInfo*))List_1_Sort_m42083_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m42084_gshared (List_1_t6864 * __this, Comparison_1_t6873 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m42084(__this, ___comparison, method) (( void (*) (List_1_t6864 *, Comparison_1_t6873 *, const MethodInfo*))List_1_Sort_m42084_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Parse.ParseGeoPoint>::ToArray()
extern "C" ParseGeoPointU5BU5D_t6863* List_1_ToArray_m42085_gshared (List_1_t6864 * __this, const MethodInfo* method);
#define List_1_ToArray_m42085(__this, method) (( ParseGeoPointU5BU5D_t6863* (*) (List_1_t6864 *, const MethodInfo*))List_1_ToArray_m42085_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::TrimExcess()
extern "C" void List_1_TrimExcess_m42086_gshared (List_1_t6864 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m42086(__this, method) (( void (*) (List_1_t6864 *, const MethodInfo*))List_1_TrimExcess_m42086_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m42087_gshared (List_1_t6864 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m42087(__this, method) (( int32_t (*) (List_1_t6864 *, const MethodInfo*))List_1_get_Capacity_m42087_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m42088_gshared (List_1_t6864 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m42088(__this, ___value, method) (( void (*) (List_1_t6864 *, int32_t, const MethodInfo*))List_1_set_Capacity_m42088_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t List_1_get_Count_m42089_gshared (List_1_t6864 * __this, const MethodInfo* method);
#define List_1_get_Count_m42089(__this, method) (( int32_t (*) (List_1_t6864 *, const MethodInfo*))List_1_get_Count_m42089_gshared)(__this, method)
// T System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Item(System.Int32)
extern "C" ParseGeoPoint_t1245  List_1_get_Item_m42090_gshared (List_1_t6864 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m42090(__this, ___index, method) (( ParseGeoPoint_t1245  (*) (List_1_t6864 *, int32_t, const MethodInfo*))List_1_get_Item_m42090_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m42091_gshared (List_1_t6864 * __this, int32_t ___index, ParseGeoPoint_t1245  ___value, const MethodInfo* method);
#define List_1_set_Item_m42091(__this, ___index, ___value, method) (( void (*) (List_1_t6864 *, int32_t, ParseGeoPoint_t1245 , const MethodInfo*))List_1_set_Item_m42091_gshared)(__this, ___index, ___value, method)
