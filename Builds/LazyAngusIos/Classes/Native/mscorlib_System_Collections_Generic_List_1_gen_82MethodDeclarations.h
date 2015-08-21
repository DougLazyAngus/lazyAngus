#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Double>
struct List_1_t6755;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Double>
struct IEnumerable_1_t6363;
// System.Double[]
struct DoubleU5BU5D_t4871;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t6364;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9213;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Double>
struct ReadOnlyCollection_1_t6757;
// System.Predicate`1<System.Double>
struct Predicate_1_t6762;
// System.Collections.Generic.IComparer`1<System.Double>
struct IComparer_1_t9214;
// System.Comparison`1<System.Double>
struct Comparison_1_t6766;
// System.Collections.Generic.List`1/Enumerator<System.Double>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_65.h"

// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
extern "C" void List_1__ctor_m40694_gshared (List_1_t6755 * __this, const MethodInfo* method);
#define List_1__ctor_m40694(__this, method) (( void (*) (List_1_t6755 *, const MethodInfo*))List_1__ctor_m40694_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m40695_gshared (List_1_t6755 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m40695(__this, ___collection, method) (( void (*) (List_1_t6755 *, Object_t*, const MethodInfo*))List_1__ctor_m40695_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(System.Int32)
extern "C" void List_1__ctor_m40696_gshared (List_1_t6755 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m40696(__this, ___capacity, method) (( void (*) (List_1_t6755 *, int32_t, const MethodInfo*))List_1__ctor_m40696_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m40697_gshared (List_1_t6755 * __this, DoubleU5BU5D_t4871* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m40697(__this, ___data, ___size, method) (( void (*) (List_1_t6755 *, DoubleU5BU5D_t4871*, int32_t, const MethodInfo*))List_1__ctor_m40697_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.cctor()
extern "C" void List_1__cctor_m40698_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m40698(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m40698_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Double>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40699_gshared (List_1_t6755 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40699(__this, method) (( Object_t* (*) (List_1_t6755 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40699_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m40700_gshared (List_1_t6755 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m40700(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6755 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m40700_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m40701_gshared (List_1_t6755 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m40701(__this, method) (( Object_t * (*) (List_1_t6755 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m40701_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m40702_gshared (List_1_t6755 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m40702(__this, ___item, method) (( int32_t (*) (List_1_t6755 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m40702_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m40703_gshared (List_1_t6755 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m40703(__this, ___item, method) (( bool (*) (List_1_t6755 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m40703_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m40704_gshared (List_1_t6755 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m40704(__this, ___item, method) (( int32_t (*) (List_1_t6755 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m40704_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m40705_gshared (List_1_t6755 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m40705(__this, ___index, ___item, method) (( void (*) (List_1_t6755 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m40705_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m40706_gshared (List_1_t6755 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m40706(__this, ___item, method) (( void (*) (List_1_t6755 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m40706_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40707_gshared (List_1_t6755 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40707(__this, method) (( bool (*) (List_1_t6755 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40707_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m40708_gshared (List_1_t6755 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m40708(__this, method) (( bool (*) (List_1_t6755 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m40708_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m40709_gshared (List_1_t6755 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m40709(__this, method) (( Object_t * (*) (List_1_t6755 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m40709_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m40710_gshared (List_1_t6755 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m40710(__this, method) (( bool (*) (List_1_t6755 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m40710_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m40711_gshared (List_1_t6755 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m40711(__this, method) (( bool (*) (List_1_t6755 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m40711_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m40712_gshared (List_1_t6755 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m40712(__this, ___index, method) (( Object_t * (*) (List_1_t6755 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m40712_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m40713_gshared (List_1_t6755 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m40713(__this, ___index, ___value, method) (( void (*) (List_1_t6755 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m40713_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Add(T)
extern "C" void List_1_Add_m40714_gshared (List_1_t6755 * __this, double ___item, const MethodInfo* method);
#define List_1_Add_m40714(__this, ___item, method) (( void (*) (List_1_t6755 *, double, const MethodInfo*))List_1_Add_m40714_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m40715_gshared (List_1_t6755 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m40715(__this, ___newCount, method) (( void (*) (List_1_t6755 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m40715_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m40716_gshared (List_1_t6755 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m40716(__this, ___idx, ___count, method) (( void (*) (List_1_t6755 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m40716_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m40717_gshared (List_1_t6755 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m40717(__this, ___collection, method) (( void (*) (List_1_t6755 *, Object_t*, const MethodInfo*))List_1_AddCollection_m40717_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m40718_gshared (List_1_t6755 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m40718(__this, ___enumerable, method) (( void (*) (List_1_t6755 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m40718_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m40719_gshared (List_1_t6755 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m40719(__this, ___collection, method) (( void (*) (List_1_t6755 *, Object_t*, const MethodInfo*))List_1_AddRange_m40719_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Double>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6757 * List_1_AsReadOnly_m40720_gshared (List_1_t6755 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m40720(__this, method) (( ReadOnlyCollection_1_t6757 * (*) (List_1_t6755 *, const MethodInfo*))List_1_AsReadOnly_m40720_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Clear()
extern "C" void List_1_Clear_m40721_gshared (List_1_t6755 * __this, const MethodInfo* method);
#define List_1_Clear_m40721(__this, method) (( void (*) (List_1_t6755 *, const MethodInfo*))List_1_Clear_m40721_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::Contains(T)
extern "C" bool List_1_Contains_m40722_gshared (List_1_t6755 * __this, double ___item, const MethodInfo* method);
#define List_1_Contains_m40722(__this, ___item, method) (( bool (*) (List_1_t6755 *, double, const MethodInfo*))List_1_Contains_m40722_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m40723_gshared (List_1_t6755 * __this, DoubleU5BU5D_t4871* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m40723(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6755 *, DoubleU5BU5D_t4871*, int32_t, const MethodInfo*))List_1_CopyTo_m40723_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Double>::Find(System.Predicate`1<T>)
extern "C" double List_1_Find_m40724_gshared (List_1_t6755 * __this, Predicate_1_t6762 * ___match, const MethodInfo* method);
#define List_1_Find_m40724(__this, ___match, method) (( double (*) (List_1_t6755 *, Predicate_1_t6762 *, const MethodInfo*))List_1_Find_m40724_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m40725_gshared (Object_t * __this /* static, unused */, Predicate_1_t6762 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m40725(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6762 *, const MethodInfo*))List_1_CheckMatch_m40725_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m40726_gshared (List_1_t6755 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6762 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m40726(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6755 *, int32_t, int32_t, Predicate_1_t6762 *, const MethodInfo*))List_1_GetIndex_m40726_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Double>::GetEnumerator()
extern "C" Enumerator_t6756  List_1_GetEnumerator_m40727_gshared (List_1_t6755 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m40727(__this, method) (( Enumerator_t6756  (*) (List_1_t6755 *, const MethodInfo*))List_1_GetEnumerator_m40727_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Double>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6755 * List_1_GetRange_m40728_gshared (List_1_t6755 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m40728(__this, ___index, ___count, method) (( List_1_t6755 * (*) (List_1_t6755 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m40728_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m40729_gshared (List_1_t6755 * __this, double ___item, const MethodInfo* method);
#define List_1_IndexOf_m40729(__this, ___item, method) (( int32_t (*) (List_1_t6755 *, double, const MethodInfo*))List_1_IndexOf_m40729_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m40730_gshared (List_1_t6755 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m40730(__this, ___start, ___delta, method) (( void (*) (List_1_t6755 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m40730_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m40731_gshared (List_1_t6755 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m40731(__this, ___index, method) (( void (*) (List_1_t6755 *, int32_t, const MethodInfo*))List_1_CheckIndex_m40731_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m40732_gshared (List_1_t6755 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define List_1_Insert_m40732(__this, ___index, ___item, method) (( void (*) (List_1_t6755 *, int32_t, double, const MethodInfo*))List_1_Insert_m40732_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m40733_gshared (List_1_t6755 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m40733(__this, ___collection, method) (( void (*) (List_1_t6755 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m40733_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m40734_gshared (List_1_t6755 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m40734(__this, ___index, ___collection, method) (( void (*) (List_1_t6755 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m40734_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m40735_gshared (List_1_t6755 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m40735(__this, ___index, ___collection, method) (( void (*) (List_1_t6755 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m40735_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m40736_gshared (List_1_t6755 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m40736(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6755 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m40736_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::Remove(T)
extern "C" bool List_1_Remove_m40737_gshared (List_1_t6755 * __this, double ___item, const MethodInfo* method);
#define List_1_Remove_m40737(__this, ___item, method) (( bool (*) (List_1_t6755 *, double, const MethodInfo*))List_1_Remove_m40737_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m40738_gshared (List_1_t6755 * __this, Predicate_1_t6762 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m40738(__this, ___match, method) (( int32_t (*) (List_1_t6755 *, Predicate_1_t6762 *, const MethodInfo*))List_1_RemoveAll_m40738_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Double>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m40739_gshared (List_1_t6755 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m40739(__this, ___index, method) (( void (*) (List_1_t6755 *, int32_t, const MethodInfo*))List_1_RemoveAt_m40739_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m40740_gshared (List_1_t6755 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m40740(__this, ___index, ___count, method) (( void (*) (List_1_t6755 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m40740_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Reverse()
extern "C" void List_1_Reverse_m40741_gshared (List_1_t6755 * __this, const MethodInfo* method);
#define List_1_Reverse_m40741(__this, method) (( void (*) (List_1_t6755 *, const MethodInfo*))List_1_Reverse_m40741_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort()
extern "C" void List_1_Sort_m40742_gshared (List_1_t6755 * __this, const MethodInfo* method);
#define List_1_Sort_m40742(__this, method) (( void (*) (List_1_t6755 *, const MethodInfo*))List_1_Sort_m40742_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m40743_gshared (List_1_t6755 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m40743(__this, ___comparer, method) (( void (*) (List_1_t6755 *, Object_t*, const MethodInfo*))List_1_Sort_m40743_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m40744_gshared (List_1_t6755 * __this, Comparison_1_t6766 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m40744(__this, ___comparison, method) (( void (*) (List_1_t6755 *, Comparison_1_t6766 *, const MethodInfo*))List_1_Sort_m40744_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Double>::ToArray()
extern "C" DoubleU5BU5D_t4871* List_1_ToArray_m40745_gshared (List_1_t6755 * __this, const MethodInfo* method);
#define List_1_ToArray_m40745(__this, method) (( DoubleU5BU5D_t4871* (*) (List_1_t6755 *, const MethodInfo*))List_1_ToArray_m40745_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::TrimExcess()
extern "C" void List_1_TrimExcess_m40746_gshared (List_1_t6755 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m40746(__this, method) (( void (*) (List_1_t6755 *, const MethodInfo*))List_1_TrimExcess_m40746_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m40747_gshared (List_1_t6755 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m40747(__this, method) (( int32_t (*) (List_1_t6755 *, const MethodInfo*))List_1_get_Capacity_m40747_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m40748_gshared (List_1_t6755 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m40748(__this, ___value, method) (( void (*) (List_1_t6755 *, int32_t, const MethodInfo*))List_1_set_Capacity_m40748_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Count()
extern "C" int32_t List_1_get_Count_m40749_gshared (List_1_t6755 * __this, const MethodInfo* method);
#define List_1_get_Count_m40749(__this, method) (( int32_t (*) (List_1_t6755 *, const MethodInfo*))List_1_get_Count_m40749_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Double>::get_Item(System.Int32)
extern "C" double List_1_get_Item_m40750_gshared (List_1_t6755 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m40750(__this, ___index, method) (( double (*) (List_1_t6755 *, int32_t, const MethodInfo*))List_1_get_Item_m40750_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m40751_gshared (List_1_t6755 * __this, int32_t ___index, double ___value, const MethodInfo* method);
#define List_1_set_Item_m40751(__this, ___index, ___value, method) (( void (*) (List_1_t6755 *, int32_t, double, const MethodInfo*))List_1_set_Item_m40751_gshared)(__this, ___index, ___value, method)
