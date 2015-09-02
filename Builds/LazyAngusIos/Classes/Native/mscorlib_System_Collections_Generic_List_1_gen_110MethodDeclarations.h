#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct List_1_t7931;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerable_1_t7311;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t7930;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t7312;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct ICollection_1_t9449;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct ReadOnlyCollection_1_t7934;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Predicate_1_t7938;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IComparer_1_t9450;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Comparison_1_t7941;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_93.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor()
extern "C" void List_1__ctor_m55000_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1__ctor_m55000(__this, method) (( void (*) (List_1_t7931 *, const MethodInfo*))List_1__ctor_m55000_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m55001_gshared (List_1_t7931 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m55001(__this, ___collection, method) (( void (*) (List_1_t7931 *, Object_t*, const MethodInfo*))List_1__ctor_m55001_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m55002_gshared (List_1_t7931 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m55002(__this, ___capacity, method) (( void (*) (List_1_t7931 *, int32_t, const MethodInfo*))List_1__ctor_m55002_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m55003_gshared (List_1_t7931 * __this, KeyValuePair_2U5BU5D_t7930* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m55003(__this, ___data, ___size, method) (( void (*) (List_1_t7931 *, KeyValuePair_2U5BU5D_t7930*, int32_t, const MethodInfo*))List_1__ctor_m55003_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.cctor()
extern "C" void List_1__cctor_m55004_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m55004(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m55004_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55005_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55005(__this, method) (( Object_t* (*) (List_1_t7931 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55005_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m55006_gshared (List_1_t7931 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m55006(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7931 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m55006_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m55007_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m55007(__this, method) (( Object_t * (*) (List_1_t7931 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m55007_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m55008_gshared (List_1_t7931 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m55008(__this, ___item, method) (( int32_t (*) (List_1_t7931 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m55008_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m55009_gshared (List_1_t7931 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m55009(__this, ___item, method) (( bool (*) (List_1_t7931 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m55009_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m55010_gshared (List_1_t7931 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m55010(__this, ___item, method) (( int32_t (*) (List_1_t7931 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m55010_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m55011_gshared (List_1_t7931 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m55011(__this, ___index, ___item, method) (( void (*) (List_1_t7931 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m55011_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m55012_gshared (List_1_t7931 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m55012(__this, ___item, method) (( void (*) (List_1_t7931 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m55012_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55013_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55013(__this, method) (( bool (*) (List_1_t7931 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55013_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m55014_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m55014(__this, method) (( bool (*) (List_1_t7931 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m55014_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m55015_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m55015(__this, method) (( Object_t * (*) (List_1_t7931 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m55015_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m55016_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m55016(__this, method) (( bool (*) (List_1_t7931 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m55016_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m55017_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m55017(__this, method) (( bool (*) (List_1_t7931 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m55017_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m55018_gshared (List_1_t7931 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m55018(__this, ___index, method) (( Object_t * (*) (List_1_t7931 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m55018_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m55019_gshared (List_1_t7931 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m55019(__this, ___index, ___value, method) (( void (*) (List_1_t7931 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m55019_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Add(T)
extern "C" void List_1_Add_m55020_gshared (List_1_t7931 * __this, KeyValuePair_2_t7036  ___item, const MethodInfo* method);
#define List_1_Add_m55020(__this, ___item, method) (( void (*) (List_1_t7931 *, KeyValuePair_2_t7036 , const MethodInfo*))List_1_Add_m55020_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m55021_gshared (List_1_t7931 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m55021(__this, ___newCount, method) (( void (*) (List_1_t7931 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m55021_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m55022_gshared (List_1_t7931 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m55022(__this, ___idx, ___count, method) (( void (*) (List_1_t7931 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m55022_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m55023_gshared (List_1_t7931 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m55023(__this, ___collection, method) (( void (*) (List_1_t7931 *, Object_t*, const MethodInfo*))List_1_AddCollection_m55023_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m55024_gshared (List_1_t7931 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m55024(__this, ___enumerable, method) (( void (*) (List_1_t7931 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m55024_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m55025_gshared (List_1_t7931 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m55025(__this, ___collection, method) (( void (*) (List_1_t7931 *, Object_t*, const MethodInfo*))List_1_AddRange_m55025_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7934 * List_1_AsReadOnly_m55026_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m55026(__this, method) (( ReadOnlyCollection_1_t7934 * (*) (List_1_t7931 *, const MethodInfo*))List_1_AsReadOnly_m55026_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Clear()
extern "C" void List_1_Clear_m55027_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_Clear_m55027(__this, method) (( void (*) (List_1_t7931 *, const MethodInfo*))List_1_Clear_m55027_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Contains(T)
extern "C" bool List_1_Contains_m55028_gshared (List_1_t7931 * __this, KeyValuePair_2_t7036  ___item, const MethodInfo* method);
#define List_1_Contains_m55028(__this, ___item, method) (( bool (*) (List_1_t7931 *, KeyValuePair_2_t7036 , const MethodInfo*))List_1_Contains_m55028_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m55029_gshared (List_1_t7931 * __this, KeyValuePair_2U5BU5D_t7930* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m55029(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7931 *, KeyValuePair_2U5BU5D_t7930*, int32_t, const MethodInfo*))List_1_CopyTo_m55029_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7036  List_1_Find_m55030_gshared (List_1_t7931 * __this, Predicate_1_t7938 * ___match, const MethodInfo* method);
#define List_1_Find_m55030(__this, ___match, method) (( KeyValuePair_2_t7036  (*) (List_1_t7931 *, Predicate_1_t7938 *, const MethodInfo*))List_1_Find_m55030_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m55031_gshared (Object_t * __this /* static, unused */, Predicate_1_t7938 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m55031(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7938 *, const MethodInfo*))List_1_CheckMatch_m55031_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m55032_gshared (List_1_t7931 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7938 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m55032(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7931 *, int32_t, int32_t, Predicate_1_t7938 *, const MethodInfo*))List_1_GetIndex_m55032_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetEnumerator()
extern "C" Enumerator_t7932  List_1_GetEnumerator_m55033_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m55033(__this, method) (( Enumerator_t7932  (*) (List_1_t7931 *, const MethodInfo*))List_1_GetEnumerator_m55033_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7931 * List_1_GetRange_m55034_gshared (List_1_t7931 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m55034(__this, ___index, ___count, method) (( List_1_t7931 * (*) (List_1_t7931 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m55034_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m55035_gshared (List_1_t7931 * __this, KeyValuePair_2_t7036  ___item, const MethodInfo* method);
#define List_1_IndexOf_m55035(__this, ___item, method) (( int32_t (*) (List_1_t7931 *, KeyValuePair_2_t7036 , const MethodInfo*))List_1_IndexOf_m55035_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m55036_gshared (List_1_t7931 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m55036(__this, ___start, ___delta, method) (( void (*) (List_1_t7931 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m55036_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m55037_gshared (List_1_t7931 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m55037(__this, ___index, method) (( void (*) (List_1_t7931 *, int32_t, const MethodInfo*))List_1_CheckIndex_m55037_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m55038_gshared (List_1_t7931 * __this, int32_t ___index, KeyValuePair_2_t7036  ___item, const MethodInfo* method);
#define List_1_Insert_m55038(__this, ___index, ___item, method) (( void (*) (List_1_t7931 *, int32_t, KeyValuePair_2_t7036 , const MethodInfo*))List_1_Insert_m55038_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m55039_gshared (List_1_t7931 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m55039(__this, ___collection, method) (( void (*) (List_1_t7931 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m55039_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m55040_gshared (List_1_t7931 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m55040(__this, ___index, ___collection, method) (( void (*) (List_1_t7931 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m55040_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m55041_gshared (List_1_t7931 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m55041(__this, ___index, ___collection, method) (( void (*) (List_1_t7931 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m55041_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m55042_gshared (List_1_t7931 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m55042(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7931 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m55042_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Remove(T)
extern "C" bool List_1_Remove_m55043_gshared (List_1_t7931 * __this, KeyValuePair_2_t7036  ___item, const MethodInfo* method);
#define List_1_Remove_m55043(__this, ___item, method) (( bool (*) (List_1_t7931 *, KeyValuePair_2_t7036 , const MethodInfo*))List_1_Remove_m55043_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m55044_gshared (List_1_t7931 * __this, Predicate_1_t7938 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m55044(__this, ___match, method) (( int32_t (*) (List_1_t7931 *, Predicate_1_t7938 *, const MethodInfo*))List_1_RemoveAll_m55044_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m55045_gshared (List_1_t7931 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m55045(__this, ___index, method) (( void (*) (List_1_t7931 *, int32_t, const MethodInfo*))List_1_RemoveAt_m55045_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m55046_gshared (List_1_t7931 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m55046(__this, ___index, ___count, method) (( void (*) (List_1_t7931 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m55046_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Reverse()
extern "C" void List_1_Reverse_m55047_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_Reverse_m55047(__this, method) (( void (*) (List_1_t7931 *, const MethodInfo*))List_1_Reverse_m55047_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort()
extern "C" void List_1_Sort_m55048_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_Sort_m55048(__this, method) (( void (*) (List_1_t7931 *, const MethodInfo*))List_1_Sort_m55048_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m55049_gshared (List_1_t7931 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m55049(__this, ___comparer, method) (( void (*) (List_1_t7931 *, Object_t*, const MethodInfo*))List_1_Sort_m55049_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m55050_gshared (List_1_t7931 * __this, Comparison_1_t7941 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m55050(__this, ___comparison, method) (( void (*) (List_1_t7931 *, Comparison_1_t7941 *, const MethodInfo*))List_1_Sort_m55050_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7930* List_1_ToArray_m55051_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_ToArray_m55051(__this, method) (( KeyValuePair_2U5BU5D_t7930* (*) (List_1_t7931 *, const MethodInfo*))List_1_ToArray_m55051_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::TrimExcess()
extern "C" void List_1_TrimExcess_m55052_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m55052(__this, method) (( void (*) (List_1_t7931 *, const MethodInfo*))List_1_TrimExcess_m55052_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m55053_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m55053(__this, method) (( int32_t (*) (List_1_t7931 *, const MethodInfo*))List_1_get_Capacity_m55053_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m55054_gshared (List_1_t7931 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m55054(__this, ___value, method) (( void (*) (List_1_t7931 *, int32_t, const MethodInfo*))List_1_set_Capacity_m55054_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Count()
extern "C" int32_t List_1_get_Count_m55055_gshared (List_1_t7931 * __this, const MethodInfo* method);
#define List_1_get_Count_m55055(__this, method) (( int32_t (*) (List_1_t7931 *, const MethodInfo*))List_1_get_Count_m55055_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7036  List_1_get_Item_m55056_gshared (List_1_t7931 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m55056(__this, ___index, method) (( KeyValuePair_2_t7036  (*) (List_1_t7931 *, int32_t, const MethodInfo*))List_1_get_Item_m55056_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m55057_gshared (List_1_t7931 * __this, int32_t ___index, KeyValuePair_2_t7036  ___value, const MethodInfo* method);
#define List_1_set_Item_m55057(__this, ___index, ___value, method) (( void (*) (List_1_t7931 *, int32_t, KeyValuePair_2_t7036 , const MethodInfo*))List_1_set_Item_m55057_gshared)(__this, ___index, ___value, method)
