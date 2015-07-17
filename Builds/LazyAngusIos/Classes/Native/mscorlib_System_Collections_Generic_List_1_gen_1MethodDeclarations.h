#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t73;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t604;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t4228;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1289;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t3412;
// System.String[]
struct StringU5BU5D_t45;
// System.Predicate`1<System.String>
struct Predicate_1_t3413;
// System.Collections.Generic.IComparer`1<System.String>
struct IComparer_1_t3352;
// System.Comparison`1<System.String>
struct Comparison_1_t3414;
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m3103(__this, method) (( void (*) (List_1_t73 *, const MethodInfo*))List_1__ctor_m3108_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m3269(__this, ___collection, method) (( void (*) (List_1_t73 *, Object_t*, const MethodInfo*))List_1__ctor_m17389_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
#define List_1__ctor_m3471(__this, ___capacity, method) (( void (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1__ctor_m17391_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.String>::.cctor()
#define List_1__cctor_m18024(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17393_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18025(__this, method) (( Object_t* (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7415_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m18026(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t73 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7398_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18027(__this, method) (( Object_t * (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7394_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m18028(__this, ___item, method) (( int32_t (*) (List_1_t73 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m7403_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m18029(__this, ___item, method) (( bool (*) (List_1_t73 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m7405_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m18030(__this, ___item, method) (( int32_t (*) (List_1_t73 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m7406_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m18031(__this, ___index, ___item, method) (( void (*) (List_1_t73 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m7407_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m18032(__this, ___item, method) (( void (*) (List_1_t73 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m7408_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18033(__this, method) (( bool (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7410_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18034(__this, method) (( bool (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7396_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m18035(__this, method) (( Object_t * (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7397_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m18036(__this, method) (( bool (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7399_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m18037(__this, method) (( bool (*) (List_1_t73 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7400_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m18038(__this, ___index, method) (( Object_t * (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m7401_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m18039(__this, ___index, ___value, method) (( void (*) (List_1_t73 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m7402_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
#define List_1_Add_m18040(__this, ___item, method) (( void (*) (List_1_t73 *, String_t*, const MethodInfo*))List_1_Add_m7411_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m18041(__this, ___newCount, method) (( void (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17411_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m18042(__this, ___collection, method) (( void (*) (List_1_t73 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17413_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m18043(__this, ___enumerable, method) (( void (*) (List_1_t73 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17415_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m18044(__this, ___collection, method) (( void (*) (List_1_t73 *, Object_t*, const MethodInfo*))List_1_AddRange_m17417_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.String>::AsReadOnly()
#define List_1_AsReadOnly_m18045(__this, method) (( ReadOnlyCollection_1_t3412 * (*) (List_1_t73 *, const MethodInfo*))List_1_AsReadOnly_m17419_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
#define List_1_Clear_m18046(__this, method) (( void (*) (List_1_t73 *, const MethodInfo*))List_1_Clear_m7404_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
#define List_1_Contains_m18047(__this, ___item, method) (( bool (*) (List_1_t73 *, String_t*, const MethodInfo*))List_1_Contains_m7412_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m18048(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t73 *, StringU5BU5D_t45*, int32_t, const MethodInfo*))List_1_CopyTo_m7413_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.String>::Find(System.Predicate`1<T>)
#define List_1_Find_m18049(__this, ___match, method) (( String_t* (*) (List_1_t73 *, Predicate_1_t3413 *, const MethodInfo*))List_1_Find_m17424_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m18050(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3413 *, const MethodInfo*))List_1_CheckMatch_m17426_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m18051(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t73 *, int32_t, int32_t, Predicate_1_t3413 *, const MethodInfo*))List_1_GetIndex_m17428_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m3219(__this, method) (( Enumerator_t632  (*) (List_1_t73 *, const MethodInfo*))List_1_GetEnumerator_m3266_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
#define List_1_IndexOf_m18052(__this, ___item, method) (( int32_t (*) (List_1_t73 *, String_t*, const MethodInfo*))List_1_IndexOf_m7416_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m18053(__this, ___start, ___delta, method) (( void (*) (List_1_t73 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17431_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m18054(__this, ___index, method) (( void (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17433_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,T)
#define List_1_Insert_m18055(__this, ___index, ___item, method) (( void (*) (List_1_t73 *, int32_t, String_t*, const MethodInfo*))List_1_Insert_m7417_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m18056(__this, ___collection, method) (( void (*) (List_1_t73 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17436_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
#define List_1_Remove_m18057(__this, ___item, method) (( bool (*) (List_1_t73 *, String_t*, const MethodInfo*))List_1_Remove_m7414_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m18058(__this, ___match, method) (( int32_t (*) (List_1_t73 *, Predicate_1_t3413 *, const MethodInfo*))List_1_RemoveAll_m17439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m18059(__this, ___index, method) (( void (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_RemoveAt_m7409_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Reverse()
#define List_1_Reverse_m18060(__this, method) (( void (*) (List_1_t73 *, const MethodInfo*))List_1_Reverse_m17442_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Sort()
#define List_1_Sort_m18061(__this, method) (( void (*) (List_1_t73 *, const MethodInfo*))List_1_Sort_m17444_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m18062(__this, ___comparer, method) (( void (*) (List_1_t73 *, Object_t*, const MethodInfo*))List_1_Sort_m17446_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.String>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m18063(__this, ___comparison, method) (( void (*) (List_1_t73 *, Comparison_1_t3414 *, const MethodInfo*))List_1_Sort_m17448_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
#define List_1_ToArray_m3171(__this, method) (( StringU5BU5D_t45* (*) (List_1_t73 *, const MethodInfo*))List_1_ToArray_m17450_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::TrimExcess()
#define List_1_TrimExcess_m18064(__this, method) (( void (*) (List_1_t73 *, const MethodInfo*))List_1_TrimExcess_m17452_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Capacity()
#define List_1_get_Capacity_m18065(__this, method) (( int32_t (*) (List_1_t73 *, const MethodInfo*))List_1_get_Capacity_m17454_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m18066(__this, ___value, method) (( void (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17456_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m18067(__this, method) (( int32_t (*) (List_1_t73 *, const MethodInfo*))List_1_get_Count_m7395_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
#define List_1_get_Item_m18068(__this, ___index, method) (( String_t* (*) (List_1_t73 *, int32_t, const MethodInfo*))List_1_get_Item_m7418_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,T)
#define List_1_set_Item_m18069(__this, ___index, ___value, method) (( void (*) (List_1_t73 *, int32_t, String_t*, const MethodInfo*))List_1_set_Item_m7419_gshared)(__this, ___index, ___value, method)
