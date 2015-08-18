#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct List_1_t7285;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerable_1_t7185;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7284;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7186;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ICollection_1_t9353;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ReadOnlyCollection_1_t7288;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Predicate_1_t7292;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IComparer_1_t9354;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Comparison_1_t7295;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_72.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor()
extern "C" void List_1__ctor_m46947_gshared (List_1_t7285 * __this, const MethodInfo* method);
#define List_1__ctor_m46947(__this, method) (( void (*) (List_1_t7285 *, const MethodInfo*))List_1__ctor_m46947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m46948_gshared (List_1_t7285 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m46948(__this, ___collection, method) (( void (*) (List_1_t7285 *, Object_t*, const MethodInfo*))List_1__ctor_m46948_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m46949_gshared (List_1_t7285 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m46949(__this, ___capacity, method) (( void (*) (List_1_t7285 *, int32_t, const MethodInfo*))List_1__ctor_m46949_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m46950_gshared (List_1_t7285 * __this, KeyValuePair_2U5BU5D_t7284* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m46950(__this, ___data, ___size, method) (( void (*) (List_1_t7285 *, KeyValuePair_2U5BU5D_t7284*, int32_t, const MethodInfo*))List_1__ctor_m46950_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.cctor()
extern "C" void List_1__cctor_m46951_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m46951(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m46951_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46952_gshared (List_1_t7285 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46952(__this, method) (( Object_t* (*) (List_1_t7285 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46952_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m46953_gshared (List_1_t7285 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m46953(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7285 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m46953_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m46954_gshared (List_1_t7285 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m46954(__this, method) (( Object_t * (*) (List_1_t7285 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m46954_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m46955_gshared (List_1_t7285 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m46955(__this, ___item, method) (( int32_t (*) (List_1_t7285 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m46955_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m46956_gshared (List_1_t7285 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m46956(__this, ___item, method) (( bool (*) (List_1_t7285 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m46956_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m46957_gshared (List_1_t7285 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m46957(__this, ___item, method) (( int32_t (*) (List_1_t7285 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m46957_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m46958_gshared (List_1_t7285 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m46958(__this, ___index, ___item, method) (( void (*) (List_1_t7285 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m46958_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m46959_gshared (List_1_t7285 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m46959(__this, ___item, method) (( void (*) (List_1_t7285 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m46959_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46960_gshared (List_1_t7285 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46960(__this, method) (( bool (*) (List_1_t7285 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46960_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m46961_gshared (List_1_t7285 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m46961(__this, method) (( bool (*) (List_1_t7285 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m46961_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m46962_gshared (List_1_t7285 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m46962(__this, method) (( Object_t * (*) (List_1_t7285 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m46962_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m46963_gshared (List_1_t7285 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m46963(__this, method) (( bool (*) (List_1_t7285 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m46963_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m46964_gshared (List_1_t7285 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m46964(__this, method) (( bool (*) (List_1_t7285 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m46964_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m46965_gshared (List_1_t7285 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m46965(__this, ___index, method) (( Object_t * (*) (List_1_t7285 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m46965_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m46966_gshared (List_1_t7285 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m46966(__this, ___index, ___value, method) (( void (*) (List_1_t7285 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m46966_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Add(T)
extern "C" void List_1_Add_m46967_gshared (List_1_t7285 * __this, KeyValuePair_2_t6182  ___item, const MethodInfo* method);
#define List_1_Add_m46967(__this, ___item, method) (( void (*) (List_1_t7285 *, KeyValuePair_2_t6182 , const MethodInfo*))List_1_Add_m46967_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m46968_gshared (List_1_t7285 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m46968(__this, ___newCount, method) (( void (*) (List_1_t7285 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m46968_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m46969_gshared (List_1_t7285 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m46969(__this, ___idx, ___count, method) (( void (*) (List_1_t7285 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m46969_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m46970_gshared (List_1_t7285 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m46970(__this, ___collection, method) (( void (*) (List_1_t7285 *, Object_t*, const MethodInfo*))List_1_AddCollection_m46970_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m46971_gshared (List_1_t7285 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m46971(__this, ___enumerable, method) (( void (*) (List_1_t7285 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m46971_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m46972_gshared (List_1_t7285 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m46972(__this, ___collection, method) (( void (*) (List_1_t7285 *, Object_t*, const MethodInfo*))List_1_AddRange_m46972_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7288 * List_1_AsReadOnly_m46973_gshared (List_1_t7285 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m46973(__this, method) (( ReadOnlyCollection_1_t7288 * (*) (List_1_t7285 *, const MethodInfo*))List_1_AsReadOnly_m46973_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Clear()
extern "C" void List_1_Clear_m46974_gshared (List_1_t7285 * __this, const MethodInfo* method);
#define List_1_Clear_m46974(__this, method) (( void (*) (List_1_t7285 *, const MethodInfo*))List_1_Clear_m46974_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Contains(T)
extern "C" bool List_1_Contains_m46975_gshared (List_1_t7285 * __this, KeyValuePair_2_t6182  ___item, const MethodInfo* method);
#define List_1_Contains_m46975(__this, ___item, method) (( bool (*) (List_1_t7285 *, KeyValuePair_2_t6182 , const MethodInfo*))List_1_Contains_m46975_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m46976_gshared (List_1_t7285 * __this, KeyValuePair_2U5BU5D_t7284* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m46976(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7285 *, KeyValuePair_2U5BU5D_t7284*, int32_t, const MethodInfo*))List_1_CopyTo_m46976_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6182  List_1_Find_m46977_gshared (List_1_t7285 * __this, Predicate_1_t7292 * ___match, const MethodInfo* method);
#define List_1_Find_m46977(__this, ___match, method) (( KeyValuePair_2_t6182  (*) (List_1_t7285 *, Predicate_1_t7292 *, const MethodInfo*))List_1_Find_m46977_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m46978_gshared (Object_t * __this /* static, unused */, Predicate_1_t7292 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m46978(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7292 *, const MethodInfo*))List_1_CheckMatch_m46978_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m46979_gshared (List_1_t7285 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7292 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m46979(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7285 *, int32_t, int32_t, Predicate_1_t7292 *, const MethodInfo*))List_1_GetIndex_m46979_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetEnumerator()
extern "C" Enumerator_t7286  List_1_GetEnumerator_m46980_gshared (List_1_t7285 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m46980(__this, method) (( Enumerator_t7286  (*) (List_1_t7285 *, const MethodInfo*))List_1_GetEnumerator_m46980_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7285 * List_1_GetRange_m46981_gshared (List_1_t7285 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m46981(__this, ___index, ___count, method) (( List_1_t7285 * (*) (List_1_t7285 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m46981_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m46982_gshared (List_1_t7285 * __this, KeyValuePair_2_t6182  ___item, const MethodInfo* method);
#define List_1_IndexOf_m46982(__this, ___item, method) (( int32_t (*) (List_1_t7285 *, KeyValuePair_2_t6182 , const MethodInfo*))List_1_IndexOf_m46982_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m46983_gshared (List_1_t7285 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m46983(__this, ___start, ___delta, method) (( void (*) (List_1_t7285 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m46983_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m46984_gshared (List_1_t7285 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m46984(__this, ___index, method) (( void (*) (List_1_t7285 *, int32_t, const MethodInfo*))List_1_CheckIndex_m46984_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m46985_gshared (List_1_t7285 * __this, int32_t ___index, KeyValuePair_2_t6182  ___item, const MethodInfo* method);
#define List_1_Insert_m46985(__this, ___index, ___item, method) (( void (*) (List_1_t7285 *, int32_t, KeyValuePair_2_t6182 , const MethodInfo*))List_1_Insert_m46985_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m46986_gshared (List_1_t7285 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m46986(__this, ___collection, method) (( void (*) (List_1_t7285 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m46986_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m46987_gshared (List_1_t7285 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m46987(__this, ___index, ___collection, method) (( void (*) (List_1_t7285 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m46987_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m46988_gshared (List_1_t7285 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m46988(__this, ___index, ___collection, method) (( void (*) (List_1_t7285 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m46988_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m46989_gshared (List_1_t7285 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m46989(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7285 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m46989_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Remove(T)
extern "C" bool List_1_Remove_m46990_gshared (List_1_t7285 * __this, KeyValuePair_2_t6182  ___item, const MethodInfo* method);
#define List_1_Remove_m46990(__this, ___item, method) (( bool (*) (List_1_t7285 *, KeyValuePair_2_t6182 , const MethodInfo*))List_1_Remove_m46990_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m46991_gshared (List_1_t7285 * __this, Predicate_1_t7292 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m46991(__this, ___match, method) (( int32_t (*) (List_1_t7285 *, Predicate_1_t7292 *, const MethodInfo*))List_1_RemoveAll_m46991_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m46992_gshared (List_1_t7285 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m46992(__this, ___index, method) (( void (*) (List_1_t7285 *, int32_t, const MethodInfo*))List_1_RemoveAt_m46992_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m46993_gshared (List_1_t7285 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m46993(__this, ___index, ___count, method) (( void (*) (List_1_t7285 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m46993_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Reverse()
extern "C" void List_1_Reverse_m46994_gshared (List_1_t7285 * __this, const MethodInfo* method);
#define List_1_Reverse_m46994(__this, method) (( void (*) (List_1_t7285 *, const MethodInfo*))List_1_Reverse_m46994_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort()
extern "C" void List_1_Sort_m46995_gshared (List_1_t7285 * __this, const MethodInfo* method);
#define List_1_Sort_m46995(__this, method) (( void (*) (List_1_t7285 *, const MethodInfo*))List_1_Sort_m46995_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m46996_gshared (List_1_t7285 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m46996(__this, ___comparer, method) (( void (*) (List_1_t7285 *, Object_t*, const MethodInfo*))List_1_Sort_m46996_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m46997_gshared (List_1_t7285 * __this, Comparison_1_t7295 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m46997(__this, ___comparison, method) (( void (*) (List_1_t7285 *, Comparison_1_t7295 *, const MethodInfo*))List_1_Sort_m46997_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7284* List_1_ToArray_m46998_gshared (List_1_t7285 * __this, const MethodInfo* method);
#define List_1_ToArray_m46998(__this, method) (( KeyValuePair_2U5BU5D_t7284* (*) (List_1_t7285 *, const MethodInfo*))List_1_ToArray_m46998_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::TrimExcess()
extern "C" void List_1_TrimExcess_m46999_gshared (List_1_t7285 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m46999(__this, method) (( void (*) (List_1_t7285 *, const MethodInfo*))List_1_TrimExcess_m46999_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m47000_gshared (List_1_t7285 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m47000(__this, method) (( int32_t (*) (List_1_t7285 *, const MethodInfo*))List_1_get_Capacity_m47000_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m47001_gshared (List_1_t7285 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m47001(__this, ___value, method) (( void (*) (List_1_t7285 *, int32_t, const MethodInfo*))List_1_set_Capacity_m47001_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Count()
extern "C" int32_t List_1_get_Count_m47002_gshared (List_1_t7285 * __this, const MethodInfo* method);
#define List_1_get_Count_m47002(__this, method) (( int32_t (*) (List_1_t7285 *, const MethodInfo*))List_1_get_Count_m47002_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6182  List_1_get_Item_m47003_gshared (List_1_t7285 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m47003(__this, ___index, method) (( KeyValuePair_2_t6182  (*) (List_1_t7285 *, int32_t, const MethodInfo*))List_1_get_Item_m47003_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m47004_gshared (List_1_t7285 * __this, int32_t ___index, KeyValuePair_2_t6182  ___value, const MethodInfo* method);
#define List_1_set_Item_m47004(__this, ___index, ___value, method) (( void (*) (List_1_t7285 *, int32_t, KeyValuePair_2_t6182 , const MethodInfo*))List_1_set_Item_m47004_gshared)(__this, ___index, ___value, method)
