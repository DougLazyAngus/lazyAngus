#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Net.Cookie>
struct List_1_t1519;
// System.Object
struct Object_t;
// System.Net.Cookie
struct Cookie_t1517;
// System.Collections.Generic.IEnumerable`1<System.Net.Cookie>
struct IEnumerable_1_t4587;
// System.Collections.Generic.IEnumerator`1<System.Net.Cookie>
struct IEnumerator_1_t4588;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Net.Cookie>
struct ICollection_1_t4589;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Net.Cookie>
struct ReadOnlyCollection_1_t4032;
// System.Net.Cookie[]
struct CookieU5BU5D_t4031;
// System.Predicate`1<System.Net.Cookie>
struct Predicate_1_t4033;
// System.Collections.Generic.IComparer`1<System.Net.Cookie>
struct IComparer_1_t1881;
// System.Comparison`1<System.Net.Cookie>
struct Comparison_1_t4034;
// System.Collections.Generic.List`1/Enumerator<System.Net.Cookie>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m8800(__this, method) (( void (*) (List_1_t1519 *, const MethodInfo*))List_1__ctor_m2643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27239(__this, ___collection, method) (( void (*) (List_1_t1519 *, Object_t*, const MethodInfo*))List_1__ctor_m16852_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.ctor(System.Int32)
#define List_1__ctor_m27240(__this, ___capacity, method) (( void (*) (List_1_t1519 *, int32_t, const MethodInfo*))List_1__ctor_m16854_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::.cctor()
#define List_1__cctor_m27241(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16856_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27242(__this, method) (( Object_t* (*) (List_1_t1519 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6876_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27243(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1519 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m6859_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27244(__this, method) (( Object_t * (*) (List_1_t1519 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m6855_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27245(__this, ___item, method) (( int32_t (*) (List_1_t1519 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m6864_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27246(__this, ___item, method) (( bool (*) (List_1_t1519 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m6866_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27247(__this, ___item, method) (( int32_t (*) (List_1_t1519 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m6867_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27248(__this, ___index, ___item, method) (( void (*) (List_1_t1519 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m6868_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27249(__this, ___item, method) (( void (*) (List_1_t1519 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m6869_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27250(__this, method) (( bool (*) (List_1_t1519 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6871_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27251(__this, method) (( bool (*) (List_1_t1519 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m6857_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27252(__this, method) (( Object_t * (*) (List_1_t1519 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m6858_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27253(__this, method) (( bool (*) (List_1_t1519 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m6860_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27254(__this, method) (( bool (*) (List_1_t1519 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m6861_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27255(__this, ___index, method) (( Object_t * (*) (List_1_t1519 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m6862_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27256(__this, ___index, ___value, method) (( void (*) (List_1_t1519 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m6863_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Add(T)
#define List_1_Add_m27257(__this, ___item, method) (( void (*) (List_1_t1519 *, Cookie_t1517 *, const MethodInfo*))List_1_Add_m6872_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27258(__this, ___newCount, method) (( void (*) (List_1_t1519 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16874_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27259(__this, ___collection, method) (( void (*) (List_1_t1519 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16876_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27260(__this, ___enumerable, method) (( void (*) (List_1_t1519 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16878_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27261(__this, ___collection, method) (( void (*) (List_1_t1519 *, Object_t*, const MethodInfo*))List_1_AddRange_m16880_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Net.Cookie>::AsReadOnly()
#define List_1_AsReadOnly_m27262(__this, method) (( ReadOnlyCollection_1_t4032 * (*) (List_1_t1519 *, const MethodInfo*))List_1_AsReadOnly_m16882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Clear()
#define List_1_Clear_m27263(__this, method) (( void (*) (List_1_t1519 *, const MethodInfo*))List_1_Clear_m6865_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Contains(T)
#define List_1_Contains_m27264(__this, ___item, method) (( bool (*) (List_1_t1519 *, Cookie_t1517 *, const MethodInfo*))List_1_Contains_m6873_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27265(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1519 *, CookieU5BU5D_t4031*, int32_t, const MethodInfo*))List_1_CopyTo_m6874_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::Find(System.Predicate`1<T>)
#define List_1_Find_m27266(__this, ___match, method) (( Cookie_t1517 * (*) (List_1_t1519 *, Predicate_1_t4033 *, const MethodInfo*))List_1_Find_m16887_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27267(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4033 *, const MethodInfo*))List_1_CheckMatch_m16889_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27268(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1519 *, int32_t, int32_t, Predicate_1_t4033 *, const MethodInfo*))List_1_GetIndex_m16891_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Net.Cookie>::GetEnumerator()
#define List_1_GetEnumerator_m8801(__this, method) (( Enumerator_t1749  (*) (List_1_t1519 *, const MethodInfo*))List_1_GetEnumerator_m2746_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::IndexOf(T)
#define List_1_IndexOf_m27269(__this, ___item, method) (( int32_t (*) (List_1_t1519 *, Cookie_t1517 *, const MethodInfo*))List_1_IndexOf_m6877_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27270(__this, ___start, ___delta, method) (( void (*) (List_1_t1519 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16894_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27271(__this, ___index, method) (( void (*) (List_1_t1519 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16896_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Insert(System.Int32,T)
#define List_1_Insert_m27272(__this, ___index, ___item, method) (( void (*) (List_1_t1519 *, int32_t, Cookie_t1517 *, const MethodInfo*))List_1_Insert_m6878_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27273(__this, ___collection, method) (( void (*) (List_1_t1519 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16899_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Net.Cookie>::Remove(T)
#define List_1_Remove_m27274(__this, ___item, method) (( bool (*) (List_1_t1519 *, Cookie_t1517 *, const MethodInfo*))List_1_Remove_m6875_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27275(__this, ___match, method) (( int32_t (*) (List_1_t1519 *, Predicate_1_t4033 *, const MethodInfo*))List_1_RemoveAll_m16902_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27276(__this, ___index, method) (( void (*) (List_1_t1519 *, int32_t, const MethodInfo*))List_1_RemoveAt_m6870_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Reverse()
#define List_1_Reverse_m27277(__this, method) (( void (*) (List_1_t1519 *, const MethodInfo*))List_1_Reverse_m16905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort()
#define List_1_Sort_m27278(__this, method) (( void (*) (List_1_t1519 *, const MethodInfo*))List_1_Sort_m16907_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m8802(__this, ___comparer, method) (( void (*) (List_1_t1519 *, Object_t*, const MethodInfo*))List_1_Sort_m16909_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27279(__this, ___comparison, method) (( void (*) (List_1_t1519 *, Comparison_1_t4034 *, const MethodInfo*))List_1_Sort_m16911_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Net.Cookie>::ToArray()
#define List_1_ToArray_m27280(__this, method) (( CookieU5BU5D_t4031* (*) (List_1_t1519 *, const MethodInfo*))List_1_ToArray_m16913_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::TrimExcess()
#define List_1_TrimExcess_m27281(__this, method) (( void (*) (List_1_t1519 *, const MethodInfo*))List_1_TrimExcess_m16915_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Capacity()
#define List_1_get_Capacity_m27282(__this, method) (( int32_t (*) (List_1_t1519 *, const MethodInfo*))List_1_get_Capacity_m16917_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27283(__this, ___value, method) (( void (*) (List_1_t1519 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16919_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Net.Cookie>::get_Count()
#define List_1_get_Count_m27284(__this, method) (( int32_t (*) (List_1_t1519 *, const MethodInfo*))List_1_get_Count_m6856_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Net.Cookie>::get_Item(System.Int32)
#define List_1_get_Item_m27285(__this, ___index, method) (( Cookie_t1517 * (*) (List_1_t1519 *, int32_t, const MethodInfo*))List_1_get_Item_m6879_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Net.Cookie>::set_Item(System.Int32,T)
#define List_1_set_Item_m27286(__this, ___index, ___value, method) (( void (*) (List_1_t1519 *, int32_t, Cookie_t1517 *, const MethodInfo*))List_1_set_Item_m6880_gshared)(__this, ___index, ___value, method)
