#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t798;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1478;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3363;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8713;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t5686;
// System.Predicate`1<System.Int32>
struct Predicate_1_t5688;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t5367;
// System.Comparison`1<System.Int32>
struct Comparison_1_t5692;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m4274_gshared (List_1_t798 * __this, const MethodInfo* method);
#define List_1__ctor_m4274(__this, method) (( void (*) (List_1_t798 *, const MethodInfo*))List_1__ctor_m4274_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m26477_gshared (List_1_t798 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m26477(__this, ___collection, method) (( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))List_1__ctor_m26477_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m26479_gshared (List_1_t798 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m26479(__this, ___capacity, method) (( void (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1__ctor_m26479_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m26481_gshared (List_1_t798 * __this, Int32U5BU5D_t484* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m26481(__this, ___data, ___size, method) (( void (*) (List_1_t798 *, Int32U5BU5D_t484*, int32_t, const MethodInfo*))List_1__ctor_m26481_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m26483_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m26483(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m26483_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26485_gshared (List_1_t798 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26485(__this, method) (( Object_t* (*) (List_1_t798 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26485_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m26487_gshared (List_1_t798 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m26487(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t798 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m26487_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m26489_gshared (List_1_t798 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26489(__this, method) (( Object_t * (*) (List_1_t798 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m26489_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m26491_gshared (List_1_t798 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m26491(__this, ___item, method) (( int32_t (*) (List_1_t798 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m26491_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m26493_gshared (List_1_t798 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m26493(__this, ___item, method) (( bool (*) (List_1_t798 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m26493_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m26495_gshared (List_1_t798 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m26495(__this, ___item, method) (( int32_t (*) (List_1_t798 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m26495_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m26497_gshared (List_1_t798 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m26497(__this, ___index, ___item, method) (( void (*) (List_1_t798 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m26497_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m26499_gshared (List_1_t798 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m26499(__this, ___item, method) (( void (*) (List_1_t798 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m26499_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26501_gshared (List_1_t798 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26501(__this, method) (( bool (*) (List_1_t798 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m26503_gshared (List_1_t798 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26503(__this, method) (( bool (*) (List_1_t798 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m26503_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m26505_gshared (List_1_t798 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m26505(__this, method) (( Object_t * (*) (List_1_t798 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m26505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m26507_gshared (List_1_t798 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m26507(__this, method) (( bool (*) (List_1_t798 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m26507_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m26509_gshared (List_1_t798 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m26509(__this, method) (( bool (*) (List_1_t798 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m26509_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m26511_gshared (List_1_t798 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m26511(__this, ___index, method) (( Object_t * (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m26511_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m26513_gshared (List_1_t798 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m26513(__this, ___index, ___value, method) (( void (*) (List_1_t798 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m26513_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m26515_gshared (List_1_t798 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m26515(__this, ___item, method) (( void (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_Add_m26515_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m26517_gshared (List_1_t798 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m26517(__this, ___newCount, method) (( void (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m26517_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m26519_gshared (List_1_t798 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m26519(__this, ___idx, ___count, method) (( void (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26519_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m26521_gshared (List_1_t798 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m26521(__this, ___collection, method) (( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26521_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m26523_gshared (List_1_t798 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m26523(__this, ___enumerable, method) (( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26523_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m26525_gshared (List_1_t798 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m26525(__this, ___collection, method) (( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))List_1_AddRange_m26525_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5686 * List_1_AsReadOnly_m26527_gshared (List_1_t798 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m26527(__this, method) (( ReadOnlyCollection_1_t5686 * (*) (List_1_t798 *, const MethodInfo*))List_1_AsReadOnly_m26527_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m26529_gshared (List_1_t798 * __this, const MethodInfo* method);
#define List_1_Clear_m26529(__this, method) (( void (*) (List_1_t798 *, const MethodInfo*))List_1_Clear_m26529_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m26531_gshared (List_1_t798 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m26531(__this, ___item, method) (( bool (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_Contains_m26531_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m26533_gshared (List_1_t798 * __this, Int32U5BU5D_t484* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m26533(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t798 *, Int32U5BU5D_t484*, int32_t, const MethodInfo*))List_1_CopyTo_m26533_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m26535_gshared (List_1_t798 * __this, Predicate_1_t5688 * ___match, const MethodInfo* method);
#define List_1_Find_m26535(__this, ___match, method) (( int32_t (*) (List_1_t798 *, Predicate_1_t5688 *, const MethodInfo*))List_1_Find_m26535_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m26537_gshared (Object_t * __this /* static, unused */, Predicate_1_t5688 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m26537(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5688 *, const MethodInfo*))List_1_CheckMatch_m26537_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m26539_gshared (List_1_t798 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5688 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m26539(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t798 *, int32_t, int32_t, Predicate_1_t5688 *, const MethodInfo*))List_1_GetIndex_m26539_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t5684  List_1_GetEnumerator_m26541_gshared (List_1_t798 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m26541(__this, method) (( Enumerator_t5684  (*) (List_1_t798 *, const MethodInfo*))List_1_GetEnumerator_m26541_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t798 * List_1_GetRange_m26543_gshared (List_1_t798 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m26543(__this, ___index, ___count, method) (( List_1_t798 * (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26543_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m26545_gshared (List_1_t798 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m26545(__this, ___item, method) (( int32_t (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_IndexOf_m26545_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m26547_gshared (List_1_t798 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m26547(__this, ___start, ___delta, method) (( void (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26547_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m26549_gshared (List_1_t798 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m26549(__this, ___index, method) (( void (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26549_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m26551_gshared (List_1_t798 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m26551(__this, ___index, ___item, method) (( void (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m26551_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m26553_gshared (List_1_t798 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m26553(__this, ___collection, method) (( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m26555_gshared (List_1_t798 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m26555(__this, ___index, ___collection, method) (( void (*) (List_1_t798 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m26557_gshared (List_1_t798 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m26557(__this, ___index, ___collection, method) (( void (*) (List_1_t798 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26557_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m26559_gshared (List_1_t798 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m26559(__this, ___index, ___enumerable, method) (( void (*) (List_1_t798 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26559_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m26561_gshared (List_1_t798 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m26561(__this, ___item, method) (( bool (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_Remove_m26561_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m26563_gshared (List_1_t798 * __this, Predicate_1_t5688 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m26563(__this, ___match, method) (( int32_t (*) (List_1_t798 *, Predicate_1_t5688 *, const MethodInfo*))List_1_RemoveAll_m26563_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m26565_gshared (List_1_t798 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m26565(__this, ___index, method) (( void (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_RemoveAt_m26565_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m26567_gshared (List_1_t798 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m26567(__this, ___index, ___count, method) (( void (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26567_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m26569_gshared (List_1_t798 * __this, const MethodInfo* method);
#define List_1_Reverse_m26569(__this, method) (( void (*) (List_1_t798 *, const MethodInfo*))List_1_Reverse_m26569_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m26571_gshared (List_1_t798 * __this, const MethodInfo* method);
#define List_1_Sort_m26571(__this, method) (( void (*) (List_1_t798 *, const MethodInfo*))List_1_Sort_m26571_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m26573_gshared (List_1_t798 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m26573(__this, ___comparer, method) (( void (*) (List_1_t798 *, Object_t*, const MethodInfo*))List_1_Sort_m26573_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m26575_gshared (List_1_t798 * __this, Comparison_1_t5692 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m26575(__this, ___comparison, method) (( void (*) (List_1_t798 *, Comparison_1_t5692 *, const MethodInfo*))List_1_Sort_m26575_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t484* List_1_ToArray_m26577_gshared (List_1_t798 * __this, const MethodInfo* method);
#define List_1_ToArray_m26577(__this, method) (( Int32U5BU5D_t484* (*) (List_1_t798 *, const MethodInfo*))List_1_ToArray_m26577_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m26579_gshared (List_1_t798 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m26579(__this, method) (( void (*) (List_1_t798 *, const MethodInfo*))List_1_TrimExcess_m26579_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m26581_gshared (List_1_t798 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m26581(__this, method) (( int32_t (*) (List_1_t798 *, const MethodInfo*))List_1_get_Capacity_m26581_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m26583_gshared (List_1_t798 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m26583(__this, ___value, method) (( void (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26583_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m26585_gshared (List_1_t798 * __this, const MethodInfo* method);
#define List_1_get_Count_m26585(__this, method) (( int32_t (*) (List_1_t798 *, const MethodInfo*))List_1_get_Count_m26585_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m26587_gshared (List_1_t798 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m26587(__this, ___index, method) (( int32_t (*) (List_1_t798 *, int32_t, const MethodInfo*))List_1_get_Item_m26587_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m26589_gshared (List_1_t798 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m26589(__this, ___index, ___value, method) (( void (*) (List_1_t798 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m26589_gshared)(__this, ___index, ___value, method)
