#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt16>
struct List_1_t6523;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt16>
struct IEnumerable_1_t6334;
// System.UInt16[]
struct UInt16U5BU5D_t4058;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t6335;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9207;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt16>
struct ReadOnlyCollection_1_t6525;
// System.Predicate`1<System.UInt16>
struct Predicate_1_t6530;
// System.Collections.Generic.IComparer`1<System.UInt16>
struct IComparer_1_t9208;
// System.Comparison`1<System.UInt16>
struct Comparison_1_t6534;
// System.Collections.Generic.List`1/Enumerator<System.UInt16>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_61.h"

// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor()
extern "C" void List_1__ctor_m37692_gshared (List_1_t6523 * __this, const MethodInfo* method);
#define List_1__ctor_m37692(__this, method) (( void (*) (List_1_t6523 *, const MethodInfo*))List_1__ctor_m37692_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m37693_gshared (List_1_t6523 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m37693(__this, ___collection, method) (( void (*) (List_1_t6523 *, Object_t*, const MethodInfo*))List_1__ctor_m37693_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Int32)
extern "C" void List_1__ctor_m37694_gshared (List_1_t6523 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m37694(__this, ___capacity, method) (( void (*) (List_1_t6523 *, int32_t, const MethodInfo*))List_1__ctor_m37694_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m37695_gshared (List_1_t6523 * __this, UInt16U5BU5D_t4058* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m37695(__this, ___data, ___size, method) (( void (*) (List_1_t6523 *, UInt16U5BU5D_t4058*, int32_t, const MethodInfo*))List_1__ctor_m37695_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.cctor()
extern "C" void List_1__cctor_m37696_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m37696(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m37696_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37697_gshared (List_1_t6523 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37697(__this, method) (( Object_t* (*) (List_1_t6523 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37697_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m37698_gshared (List_1_t6523 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m37698(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6523 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m37698_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m37699_gshared (List_1_t6523 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m37699(__this, method) (( Object_t * (*) (List_1_t6523 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m37699_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m37700_gshared (List_1_t6523 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m37700(__this, ___item, method) (( int32_t (*) (List_1_t6523 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m37700_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m37701_gshared (List_1_t6523 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m37701(__this, ___item, method) (( bool (*) (List_1_t6523 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m37701_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m37702_gshared (List_1_t6523 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m37702(__this, ___item, method) (( int32_t (*) (List_1_t6523 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m37702_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m37703_gshared (List_1_t6523 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m37703(__this, ___index, ___item, method) (( void (*) (List_1_t6523 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m37703_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m37704_gshared (List_1_t6523 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m37704(__this, ___item, method) (( void (*) (List_1_t6523 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m37704_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37705_gshared (List_1_t6523 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37705(__this, method) (( bool (*) (List_1_t6523 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37705_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m37706_gshared (List_1_t6523 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m37706(__this, method) (( bool (*) (List_1_t6523 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m37706_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m37707_gshared (List_1_t6523 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m37707(__this, method) (( Object_t * (*) (List_1_t6523 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m37707_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m37708_gshared (List_1_t6523 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m37708(__this, method) (( bool (*) (List_1_t6523 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m37708_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m37709_gshared (List_1_t6523 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m37709(__this, method) (( bool (*) (List_1_t6523 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m37709_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m37710_gshared (List_1_t6523 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m37710(__this, ___index, method) (( Object_t * (*) (List_1_t6523 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m37710_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m37711_gshared (List_1_t6523 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m37711(__this, ___index, ___value, method) (( void (*) (List_1_t6523 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m37711_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Add(T)
extern "C" void List_1_Add_m37712_gshared (List_1_t6523 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Add_m37712(__this, ___item, method) (( void (*) (List_1_t6523 *, uint16_t, const MethodInfo*))List_1_Add_m37712_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m37713_gshared (List_1_t6523 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m37713(__this, ___newCount, method) (( void (*) (List_1_t6523 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m37713_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m37714_gshared (List_1_t6523 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m37714(__this, ___idx, ___count, method) (( void (*) (List_1_t6523 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m37714_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m37715_gshared (List_1_t6523 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m37715(__this, ___collection, method) (( void (*) (List_1_t6523 *, Object_t*, const MethodInfo*))List_1_AddCollection_m37715_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m37716_gshared (List_1_t6523 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m37716(__this, ___enumerable, method) (( void (*) (List_1_t6523 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m37716_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m37717_gshared (List_1_t6523 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m37717(__this, ___collection, method) (( void (*) (List_1_t6523 *, Object_t*, const MethodInfo*))List_1_AddRange_m37717_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt16>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6525 * List_1_AsReadOnly_m37718_gshared (List_1_t6523 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m37718(__this, method) (( ReadOnlyCollection_1_t6525 * (*) (List_1_t6523 *, const MethodInfo*))List_1_AsReadOnly_m37718_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Clear()
extern "C" void List_1_Clear_m37719_gshared (List_1_t6523 * __this, const MethodInfo* method);
#define List_1_Clear_m37719(__this, method) (( void (*) (List_1_t6523 *, const MethodInfo*))List_1_Clear_m37719_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Contains(T)
extern "C" bool List_1_Contains_m37720_gshared (List_1_t6523 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Contains_m37720(__this, ___item, method) (( bool (*) (List_1_t6523 *, uint16_t, const MethodInfo*))List_1_Contains_m37720_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m37721_gshared (List_1_t6523 * __this, UInt16U5BU5D_t4058* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m37721(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6523 *, UInt16U5BU5D_t4058*, int32_t, const MethodInfo*))List_1_CopyTo_m37721_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt16>::Find(System.Predicate`1<T>)
extern "C" uint16_t List_1_Find_m37722_gshared (List_1_t6523 * __this, Predicate_1_t6530 * ___match, const MethodInfo* method);
#define List_1_Find_m37722(__this, ___match, method) (( uint16_t (*) (List_1_t6523 *, Predicate_1_t6530 *, const MethodInfo*))List_1_Find_m37722_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m37723_gshared (Object_t * __this /* static, unused */, Predicate_1_t6530 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m37723(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6530 *, const MethodInfo*))List_1_CheckMatch_m37723_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m37724_gshared (List_1_t6523 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6530 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m37724(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6523 *, int32_t, int32_t, Predicate_1_t6530 *, const MethodInfo*))List_1_GetIndex_m37724_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt16>::GetEnumerator()
extern "C" Enumerator_t6524  List_1_GetEnumerator_m37725_gshared (List_1_t6523 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m37725(__this, method) (( Enumerator_t6524  (*) (List_1_t6523 *, const MethodInfo*))List_1_GetEnumerator_m37725_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt16>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6523 * List_1_GetRange_m37726_gshared (List_1_t6523 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m37726(__this, ___index, ___count, method) (( List_1_t6523 * (*) (List_1_t6523 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m37726_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m37727_gshared (List_1_t6523 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m37727(__this, ___item, method) (( int32_t (*) (List_1_t6523 *, uint16_t, const MethodInfo*))List_1_IndexOf_m37727_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m37728_gshared (List_1_t6523 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m37728(__this, ___start, ___delta, method) (( void (*) (List_1_t6523 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m37728_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m37729_gshared (List_1_t6523 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m37729(__this, ___index, method) (( void (*) (List_1_t6523 *, int32_t, const MethodInfo*))List_1_CheckIndex_m37729_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m37730_gshared (List_1_t6523 * __this, int32_t ___index, uint16_t ___item, const MethodInfo* method);
#define List_1_Insert_m37730(__this, ___index, ___item, method) (( void (*) (List_1_t6523 *, int32_t, uint16_t, const MethodInfo*))List_1_Insert_m37730_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m37731_gshared (List_1_t6523 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m37731(__this, ___collection, method) (( void (*) (List_1_t6523 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m37731_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m37732_gshared (List_1_t6523 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m37732(__this, ___index, ___collection, method) (( void (*) (List_1_t6523 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m37732_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m37733_gshared (List_1_t6523 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m37733(__this, ___index, ___collection, method) (( void (*) (List_1_t6523 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m37733_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m37734_gshared (List_1_t6523 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m37734(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6523 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m37734_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Remove(T)
extern "C" bool List_1_Remove_m37735_gshared (List_1_t6523 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Remove_m37735(__this, ___item, method) (( bool (*) (List_1_t6523 *, uint16_t, const MethodInfo*))List_1_Remove_m37735_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m37736_gshared (List_1_t6523 * __this, Predicate_1_t6530 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m37736(__this, ___match, method) (( int32_t (*) (List_1_t6523 *, Predicate_1_t6530 *, const MethodInfo*))List_1_RemoveAll_m37736_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m37737_gshared (List_1_t6523 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m37737(__this, ___index, method) (( void (*) (List_1_t6523 *, int32_t, const MethodInfo*))List_1_RemoveAt_m37737_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m37738_gshared (List_1_t6523 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m37738(__this, ___index, ___count, method) (( void (*) (List_1_t6523 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m37738_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Reverse()
extern "C" void List_1_Reverse_m37739_gshared (List_1_t6523 * __this, const MethodInfo* method);
#define List_1_Reverse_m37739(__this, method) (( void (*) (List_1_t6523 *, const MethodInfo*))List_1_Reverse_m37739_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort()
extern "C" void List_1_Sort_m37740_gshared (List_1_t6523 * __this, const MethodInfo* method);
#define List_1_Sort_m37740(__this, method) (( void (*) (List_1_t6523 *, const MethodInfo*))List_1_Sort_m37740_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m37741_gshared (List_1_t6523 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m37741(__this, ___comparer, method) (( void (*) (List_1_t6523 *, Object_t*, const MethodInfo*))List_1_Sort_m37741_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m37742_gshared (List_1_t6523 * __this, Comparison_1_t6534 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m37742(__this, ___comparison, method) (( void (*) (List_1_t6523 *, Comparison_1_t6534 *, const MethodInfo*))List_1_Sort_m37742_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt16>::ToArray()
extern "C" UInt16U5BU5D_t4058* List_1_ToArray_m37743_gshared (List_1_t6523 * __this, const MethodInfo* method);
#define List_1_ToArray_m37743(__this, method) (( UInt16U5BU5D_t4058* (*) (List_1_t6523 *, const MethodInfo*))List_1_ToArray_m37743_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::TrimExcess()
extern "C" void List_1_TrimExcess_m37744_gshared (List_1_t6523 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m37744(__this, method) (( void (*) (List_1_t6523 *, const MethodInfo*))List_1_TrimExcess_m37744_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m37745_gshared (List_1_t6523 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m37745(__this, method) (( int32_t (*) (List_1_t6523 *, const MethodInfo*))List_1_get_Capacity_m37745_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m37746_gshared (List_1_t6523 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m37746(__this, ___value, method) (( void (*) (List_1_t6523 *, int32_t, const MethodInfo*))List_1_set_Capacity_m37746_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Count()
extern "C" int32_t List_1_get_Count_m37747_gshared (List_1_t6523 * __this, const MethodInfo* method);
#define List_1_get_Count_m37747(__this, method) (( int32_t (*) (List_1_t6523 *, const MethodInfo*))List_1_get_Count_m37747_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt16>::get_Item(System.Int32)
extern "C" uint16_t List_1_get_Item_m37748_gshared (List_1_t6523 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m37748(__this, ___index, method) (( uint16_t (*) (List_1_t6523 *, int32_t, const MethodInfo*))List_1_get_Item_m37748_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m37749_gshared (List_1_t6523 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method);
#define List_1_set_Item_m37749(__this, ___index, ___value, method) (( void (*) (List_1_t6523 *, int32_t, uint16_t, const MethodInfo*))List_1_set_Item_m37749_gshared)(__this, ___index, ___value, method)
