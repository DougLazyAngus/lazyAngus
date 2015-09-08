#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct List_1_t7862;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerable_1_t7762;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7861;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7763;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ICollection_1_t9994;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ReadOnlyCollection_1_t7865;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Predicate_1_t7869;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IComparer_1_t9995;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Comparison_1_t7872;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_76.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor()
extern "C" void List_1__ctor_m51690_gshared (List_1_t7862 * __this, const MethodInfo* method);
#define List_1__ctor_m51690(__this, method) (( void (*) (List_1_t7862 *, const MethodInfo*))List_1__ctor_m51690_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m51691_gshared (List_1_t7862 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m51691(__this, ___collection, method) (( void (*) (List_1_t7862 *, Object_t*, const MethodInfo*))List_1__ctor_m51691_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m51692_gshared (List_1_t7862 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m51692(__this, ___capacity, method) (( void (*) (List_1_t7862 *, int32_t, const MethodInfo*))List_1__ctor_m51692_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m51693_gshared (List_1_t7862 * __this, KeyValuePair_2U5BU5D_t7861* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m51693(__this, ___data, ___size, method) (( void (*) (List_1_t7862 *, KeyValuePair_2U5BU5D_t7861*, int32_t, const MethodInfo*))List_1__ctor_m51693_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.cctor()
extern "C" void List_1__cctor_m51694_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m51694(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m51694_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51695_gshared (List_1_t7862 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51695(__this, method) (( Object_t* (*) (List_1_t7862 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m51695_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m51696_gshared (List_1_t7862 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m51696(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7862 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m51696_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m51697_gshared (List_1_t7862 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m51697(__this, method) (( Object_t * (*) (List_1_t7862 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m51697_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m51698_gshared (List_1_t7862 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m51698(__this, ___item, method) (( int32_t (*) (List_1_t7862 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m51698_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m51699_gshared (List_1_t7862 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m51699(__this, ___item, method) (( bool (*) (List_1_t7862 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m51699_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m51700_gshared (List_1_t7862 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m51700(__this, ___item, method) (( int32_t (*) (List_1_t7862 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m51700_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m51701_gshared (List_1_t7862 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m51701(__this, ___index, ___item, method) (( void (*) (List_1_t7862 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m51701_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m51702_gshared (List_1_t7862 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m51702(__this, ___item, method) (( void (*) (List_1_t7862 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m51702_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51703_gshared (List_1_t7862 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51703(__this, method) (( bool (*) (List_1_t7862 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m51703_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m51704_gshared (List_1_t7862 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m51704(__this, method) (( bool (*) (List_1_t7862 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m51704_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m51705_gshared (List_1_t7862 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m51705(__this, method) (( Object_t * (*) (List_1_t7862 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m51705_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m51706_gshared (List_1_t7862 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m51706(__this, method) (( bool (*) (List_1_t7862 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m51706_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m51707_gshared (List_1_t7862 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m51707(__this, method) (( bool (*) (List_1_t7862 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m51707_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m51708_gshared (List_1_t7862 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m51708(__this, ___index, method) (( Object_t * (*) (List_1_t7862 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m51708_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m51709_gshared (List_1_t7862 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m51709(__this, ___index, ___value, method) (( void (*) (List_1_t7862 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m51709_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Add(T)
extern "C" void List_1_Add_m51710_gshared (List_1_t7862 * __this, KeyValuePair_2_t6757  ___item, const MethodInfo* method);
#define List_1_Add_m51710(__this, ___item, method) (( void (*) (List_1_t7862 *, KeyValuePair_2_t6757 , const MethodInfo*))List_1_Add_m51710_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m51711_gshared (List_1_t7862 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m51711(__this, ___newCount, method) (( void (*) (List_1_t7862 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m51711_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m51712_gshared (List_1_t7862 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m51712(__this, ___idx, ___count, method) (( void (*) (List_1_t7862 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m51712_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m51713_gshared (List_1_t7862 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m51713(__this, ___collection, method) (( void (*) (List_1_t7862 *, Object_t*, const MethodInfo*))List_1_AddCollection_m51713_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m51714_gshared (List_1_t7862 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m51714(__this, ___enumerable, method) (( void (*) (List_1_t7862 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m51714_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m51715_gshared (List_1_t7862 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m51715(__this, ___collection, method) (( void (*) (List_1_t7862 *, Object_t*, const MethodInfo*))List_1_AddRange_m51715_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7865 * List_1_AsReadOnly_m51716_gshared (List_1_t7862 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m51716(__this, method) (( ReadOnlyCollection_1_t7865 * (*) (List_1_t7862 *, const MethodInfo*))List_1_AsReadOnly_m51716_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Clear()
extern "C" void List_1_Clear_m51717_gshared (List_1_t7862 * __this, const MethodInfo* method);
#define List_1_Clear_m51717(__this, method) (( void (*) (List_1_t7862 *, const MethodInfo*))List_1_Clear_m51717_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Contains(T)
extern "C" bool List_1_Contains_m51718_gshared (List_1_t7862 * __this, KeyValuePair_2_t6757  ___item, const MethodInfo* method);
#define List_1_Contains_m51718(__this, ___item, method) (( bool (*) (List_1_t7862 *, KeyValuePair_2_t6757 , const MethodInfo*))List_1_Contains_m51718_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m51719_gshared (List_1_t7862 * __this, KeyValuePair_2U5BU5D_t7861* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m51719(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7862 *, KeyValuePair_2U5BU5D_t7861*, int32_t, const MethodInfo*))List_1_CopyTo_m51719_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6757  List_1_Find_m51720_gshared (List_1_t7862 * __this, Predicate_1_t7869 * ___match, const MethodInfo* method);
#define List_1_Find_m51720(__this, ___match, method) (( KeyValuePair_2_t6757  (*) (List_1_t7862 *, Predicate_1_t7869 *, const MethodInfo*))List_1_Find_m51720_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m51721_gshared (Object_t * __this /* static, unused */, Predicate_1_t7869 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m51721(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7869 *, const MethodInfo*))List_1_CheckMatch_m51721_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m51722_gshared (List_1_t7862 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7869 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m51722(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7862 *, int32_t, int32_t, Predicate_1_t7869 *, const MethodInfo*))List_1_GetIndex_m51722_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetEnumerator()
extern "C" Enumerator_t7863  List_1_GetEnumerator_m51723_gshared (List_1_t7862 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m51723(__this, method) (( Enumerator_t7863  (*) (List_1_t7862 *, const MethodInfo*))List_1_GetEnumerator_m51723_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7862 * List_1_GetRange_m51724_gshared (List_1_t7862 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m51724(__this, ___index, ___count, method) (( List_1_t7862 * (*) (List_1_t7862 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m51724_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m51725_gshared (List_1_t7862 * __this, KeyValuePair_2_t6757  ___item, const MethodInfo* method);
#define List_1_IndexOf_m51725(__this, ___item, method) (( int32_t (*) (List_1_t7862 *, KeyValuePair_2_t6757 , const MethodInfo*))List_1_IndexOf_m51725_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m51726_gshared (List_1_t7862 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m51726(__this, ___start, ___delta, method) (( void (*) (List_1_t7862 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m51726_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m51727_gshared (List_1_t7862 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m51727(__this, ___index, method) (( void (*) (List_1_t7862 *, int32_t, const MethodInfo*))List_1_CheckIndex_m51727_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m51728_gshared (List_1_t7862 * __this, int32_t ___index, KeyValuePair_2_t6757  ___item, const MethodInfo* method);
#define List_1_Insert_m51728(__this, ___index, ___item, method) (( void (*) (List_1_t7862 *, int32_t, KeyValuePair_2_t6757 , const MethodInfo*))List_1_Insert_m51728_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m51729_gshared (List_1_t7862 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m51729(__this, ___collection, method) (( void (*) (List_1_t7862 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m51729_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m51730_gshared (List_1_t7862 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m51730(__this, ___index, ___collection, method) (( void (*) (List_1_t7862 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m51730_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m51731_gshared (List_1_t7862 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m51731(__this, ___index, ___collection, method) (( void (*) (List_1_t7862 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m51731_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m51732_gshared (List_1_t7862 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m51732(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7862 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m51732_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Remove(T)
extern "C" bool List_1_Remove_m51733_gshared (List_1_t7862 * __this, KeyValuePair_2_t6757  ___item, const MethodInfo* method);
#define List_1_Remove_m51733(__this, ___item, method) (( bool (*) (List_1_t7862 *, KeyValuePair_2_t6757 , const MethodInfo*))List_1_Remove_m51733_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m51734_gshared (List_1_t7862 * __this, Predicate_1_t7869 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m51734(__this, ___match, method) (( int32_t (*) (List_1_t7862 *, Predicate_1_t7869 *, const MethodInfo*))List_1_RemoveAll_m51734_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m51735_gshared (List_1_t7862 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m51735(__this, ___index, method) (( void (*) (List_1_t7862 *, int32_t, const MethodInfo*))List_1_RemoveAt_m51735_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m51736_gshared (List_1_t7862 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m51736(__this, ___index, ___count, method) (( void (*) (List_1_t7862 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m51736_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Reverse()
extern "C" void List_1_Reverse_m51737_gshared (List_1_t7862 * __this, const MethodInfo* method);
#define List_1_Reverse_m51737(__this, method) (( void (*) (List_1_t7862 *, const MethodInfo*))List_1_Reverse_m51737_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort()
extern "C" void List_1_Sort_m51738_gshared (List_1_t7862 * __this, const MethodInfo* method);
#define List_1_Sort_m51738(__this, method) (( void (*) (List_1_t7862 *, const MethodInfo*))List_1_Sort_m51738_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m51739_gshared (List_1_t7862 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m51739(__this, ___comparer, method) (( void (*) (List_1_t7862 *, Object_t*, const MethodInfo*))List_1_Sort_m51739_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m51740_gshared (List_1_t7862 * __this, Comparison_1_t7872 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m51740(__this, ___comparison, method) (( void (*) (List_1_t7862 *, Comparison_1_t7872 *, const MethodInfo*))List_1_Sort_m51740_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7861* List_1_ToArray_m51741_gshared (List_1_t7862 * __this, const MethodInfo* method);
#define List_1_ToArray_m51741(__this, method) (( KeyValuePair_2U5BU5D_t7861* (*) (List_1_t7862 *, const MethodInfo*))List_1_ToArray_m51741_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::TrimExcess()
extern "C" void List_1_TrimExcess_m51742_gshared (List_1_t7862 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m51742(__this, method) (( void (*) (List_1_t7862 *, const MethodInfo*))List_1_TrimExcess_m51742_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m51743_gshared (List_1_t7862 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m51743(__this, method) (( int32_t (*) (List_1_t7862 *, const MethodInfo*))List_1_get_Capacity_m51743_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m51744_gshared (List_1_t7862 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m51744(__this, ___value, method) (( void (*) (List_1_t7862 *, int32_t, const MethodInfo*))List_1_set_Capacity_m51744_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Count()
extern "C" int32_t List_1_get_Count_m51745_gshared (List_1_t7862 * __this, const MethodInfo* method);
#define List_1_get_Count_m51745(__this, method) (( int32_t (*) (List_1_t7862 *, const MethodInfo*))List_1_get_Count_m51745_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6757  List_1_get_Item_m51746_gshared (List_1_t7862 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m51746(__this, ___index, method) (( KeyValuePair_2_t6757  (*) (List_1_t7862 *, int32_t, const MethodInfo*))List_1_get_Item_m51746_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m51747_gshared (List_1_t7862 * __this, int32_t ___index, KeyValuePair_2_t6757  ___value, const MethodInfo* method);
#define List_1_set_Item_m51747(__this, ___index, ___value, method) (( void (*) (List_1_t7862 *, int32_t, KeyValuePair_2_t6757 , const MethodInfo*))List_1_set_Item_m51747_gshared)(__this, ___index, ___value, method)
