#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t6518;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt32>
struct IEnumerable_1_t6256;
// System.UInt32[]
struct UInt32U5BU5D_t3159;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t6257;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9100;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt32>
struct ReadOnlyCollection_1_t6520;
// System.Predicate`1<System.UInt32>
struct Predicate_1_t6525;
// System.Collections.Generic.IComparer`1<System.UInt32>
struct IComparer_1_t9101;
// System.Comparison`1<System.UInt32>
struct Comparison_1_t6529;
// System.Collections.Generic.List`1/Enumerator<System.UInt32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_58.h"

// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor()
extern "C" void List_1__ctor_m37861_gshared (List_1_t6518 * __this, const MethodInfo* method);
#define List_1__ctor_m37861(__this, method) (( void (*) (List_1_t6518 *, const MethodInfo*))List_1__ctor_m37861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m37862_gshared (List_1_t6518 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m37862(__this, ___collection, method) (( void (*) (List_1_t6518 *, Object_t*, const MethodInfo*))List_1__ctor_m37862_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m37863_gshared (List_1_t6518 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m37863(__this, ___capacity, method) (( void (*) (List_1_t6518 *, int32_t, const MethodInfo*))List_1__ctor_m37863_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m37864_gshared (List_1_t6518 * __this, UInt32U5BU5D_t3159* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m37864(__this, ___data, ___size, method) (( void (*) (List_1_t6518 *, UInt32U5BU5D_t3159*, int32_t, const MethodInfo*))List_1__ctor_m37864_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.cctor()
extern "C" void List_1__cctor_m37865_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m37865(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m37865_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37866_gshared (List_1_t6518 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37866(__this, method) (( Object_t* (*) (List_1_t6518 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37866_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m37867_gshared (List_1_t6518 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m37867(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6518 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m37867_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m37868_gshared (List_1_t6518 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m37868(__this, method) (( Object_t * (*) (List_1_t6518 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m37868_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m37869_gshared (List_1_t6518 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m37869(__this, ___item, method) (( int32_t (*) (List_1_t6518 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m37869_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m37870_gshared (List_1_t6518 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m37870(__this, ___item, method) (( bool (*) (List_1_t6518 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m37870_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m37871_gshared (List_1_t6518 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m37871(__this, ___item, method) (( int32_t (*) (List_1_t6518 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m37871_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m37872_gshared (List_1_t6518 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m37872(__this, ___index, ___item, method) (( void (*) (List_1_t6518 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m37872_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m37873_gshared (List_1_t6518 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m37873(__this, ___item, method) (( void (*) (List_1_t6518 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m37873_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37874_gshared (List_1_t6518 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37874(__this, method) (( bool (*) (List_1_t6518 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m37875_gshared (List_1_t6518 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m37875(__this, method) (( bool (*) (List_1_t6518 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m37875_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m37876_gshared (List_1_t6518 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m37876(__this, method) (( Object_t * (*) (List_1_t6518 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m37876_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m37877_gshared (List_1_t6518 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m37877(__this, method) (( bool (*) (List_1_t6518 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m37877_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m37878_gshared (List_1_t6518 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m37878(__this, method) (( bool (*) (List_1_t6518 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m37878_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m37879_gshared (List_1_t6518 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m37879(__this, ___index, method) (( Object_t * (*) (List_1_t6518 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m37879_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m37880_gshared (List_1_t6518 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m37880(__this, ___index, ___value, method) (( void (*) (List_1_t6518 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m37880_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Add(T)
extern "C" void List_1_Add_m37881_gshared (List_1_t6518 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Add_m37881(__this, ___item, method) (( void (*) (List_1_t6518 *, uint32_t, const MethodInfo*))List_1_Add_m37881_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m37882_gshared (List_1_t6518 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m37882(__this, ___newCount, method) (( void (*) (List_1_t6518 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m37882_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m37883_gshared (List_1_t6518 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m37883(__this, ___idx, ___count, method) (( void (*) (List_1_t6518 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m37883_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m37884_gshared (List_1_t6518 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m37884(__this, ___collection, method) (( void (*) (List_1_t6518 *, Object_t*, const MethodInfo*))List_1_AddCollection_m37884_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m37885_gshared (List_1_t6518 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m37885(__this, ___enumerable, method) (( void (*) (List_1_t6518 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m37885_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m37886_gshared (List_1_t6518 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m37886(__this, ___collection, method) (( void (*) (List_1_t6518 *, Object_t*, const MethodInfo*))List_1_AddRange_m37886_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6520 * List_1_AsReadOnly_m37887_gshared (List_1_t6518 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m37887(__this, method) (( ReadOnlyCollection_1_t6520 * (*) (List_1_t6518 *, const MethodInfo*))List_1_AsReadOnly_m37887_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Clear()
extern "C" void List_1_Clear_m37888_gshared (List_1_t6518 * __this, const MethodInfo* method);
#define List_1_Clear_m37888(__this, method) (( void (*) (List_1_t6518 *, const MethodInfo*))List_1_Clear_m37888_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Contains(T)
extern "C" bool List_1_Contains_m37889_gshared (List_1_t6518 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Contains_m37889(__this, ___item, method) (( bool (*) (List_1_t6518 *, uint32_t, const MethodInfo*))List_1_Contains_m37889_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m37890_gshared (List_1_t6518 * __this, UInt32U5BU5D_t3159* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m37890(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6518 *, UInt32U5BU5D_t3159*, int32_t, const MethodInfo*))List_1_CopyTo_m37890_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt32>::Find(System.Predicate`1<T>)
extern "C" uint32_t List_1_Find_m37891_gshared (List_1_t6518 * __this, Predicate_1_t6525 * ___match, const MethodInfo* method);
#define List_1_Find_m37891(__this, ___match, method) (( uint32_t (*) (List_1_t6518 *, Predicate_1_t6525 *, const MethodInfo*))List_1_Find_m37891_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m37892_gshared (Object_t * __this /* static, unused */, Predicate_1_t6525 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m37892(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6525 *, const MethodInfo*))List_1_CheckMatch_m37892_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m37893_gshared (List_1_t6518 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6525 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m37893(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6518 *, int32_t, int32_t, Predicate_1_t6525 *, const MethodInfo*))List_1_GetIndex_m37893_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt32>::GetEnumerator()
extern "C" Enumerator_t6519  List_1_GetEnumerator_m37894_gshared (List_1_t6518 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m37894(__this, method) (( Enumerator_t6519  (*) (List_1_t6518 *, const MethodInfo*))List_1_GetEnumerator_m37894_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6518 * List_1_GetRange_m37895_gshared (List_1_t6518 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m37895(__this, ___index, ___count, method) (( List_1_t6518 * (*) (List_1_t6518 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m37895_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m37896_gshared (List_1_t6518 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m37896(__this, ___item, method) (( int32_t (*) (List_1_t6518 *, uint32_t, const MethodInfo*))List_1_IndexOf_m37896_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m37897_gshared (List_1_t6518 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m37897(__this, ___start, ___delta, method) (( void (*) (List_1_t6518 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m37897_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m37898_gshared (List_1_t6518 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m37898(__this, ___index, method) (( void (*) (List_1_t6518 *, int32_t, const MethodInfo*))List_1_CheckIndex_m37898_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m37899_gshared (List_1_t6518 * __this, int32_t ___index, uint32_t ___item, const MethodInfo* method);
#define List_1_Insert_m37899(__this, ___index, ___item, method) (( void (*) (List_1_t6518 *, int32_t, uint32_t, const MethodInfo*))List_1_Insert_m37899_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m37900_gshared (List_1_t6518 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m37900(__this, ___collection, method) (( void (*) (List_1_t6518 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m37900_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m37901_gshared (List_1_t6518 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m37901(__this, ___index, ___collection, method) (( void (*) (List_1_t6518 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m37901_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m37902_gshared (List_1_t6518 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m37902(__this, ___index, ___collection, method) (( void (*) (List_1_t6518 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m37902_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m37903_gshared (List_1_t6518 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m37903(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6518 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m37903_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Remove(T)
extern "C" bool List_1_Remove_m37904_gshared (List_1_t6518 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Remove_m37904(__this, ___item, method) (( bool (*) (List_1_t6518 *, uint32_t, const MethodInfo*))List_1_Remove_m37904_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m37905_gshared (List_1_t6518 * __this, Predicate_1_t6525 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m37905(__this, ___match, method) (( int32_t (*) (List_1_t6518 *, Predicate_1_t6525 *, const MethodInfo*))List_1_RemoveAll_m37905_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m37906_gshared (List_1_t6518 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m37906(__this, ___index, method) (( void (*) (List_1_t6518 *, int32_t, const MethodInfo*))List_1_RemoveAt_m37906_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m37907_gshared (List_1_t6518 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m37907(__this, ___index, ___count, method) (( void (*) (List_1_t6518 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m37907_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Reverse()
extern "C" void List_1_Reverse_m37908_gshared (List_1_t6518 * __this, const MethodInfo* method);
#define List_1_Reverse_m37908(__this, method) (( void (*) (List_1_t6518 *, const MethodInfo*))List_1_Reverse_m37908_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort()
extern "C" void List_1_Sort_m37909_gshared (List_1_t6518 * __this, const MethodInfo* method);
#define List_1_Sort_m37909(__this, method) (( void (*) (List_1_t6518 *, const MethodInfo*))List_1_Sort_m37909_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m37910_gshared (List_1_t6518 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m37910(__this, ___comparer, method) (( void (*) (List_1_t6518 *, Object_t*, const MethodInfo*))List_1_Sort_m37910_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m37911_gshared (List_1_t6518 * __this, Comparison_1_t6529 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m37911(__this, ___comparison, method) (( void (*) (List_1_t6518 *, Comparison_1_t6529 *, const MethodInfo*))List_1_Sort_m37911_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt32>::ToArray()
extern "C" UInt32U5BU5D_t3159* List_1_ToArray_m37912_gshared (List_1_t6518 * __this, const MethodInfo* method);
#define List_1_ToArray_m37912(__this, method) (( UInt32U5BU5D_t3159* (*) (List_1_t6518 *, const MethodInfo*))List_1_ToArray_m37912_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::TrimExcess()
extern "C" void List_1_TrimExcess_m37913_gshared (List_1_t6518 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m37913(__this, method) (( void (*) (List_1_t6518 *, const MethodInfo*))List_1_TrimExcess_m37913_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m37914_gshared (List_1_t6518 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m37914(__this, method) (( int32_t (*) (List_1_t6518 *, const MethodInfo*))List_1_get_Capacity_m37914_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m37915_gshared (List_1_t6518 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m37915(__this, ___value, method) (( void (*) (List_1_t6518 *, int32_t, const MethodInfo*))List_1_set_Capacity_m37915_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Count()
extern "C" int32_t List_1_get_Count_m37916_gshared (List_1_t6518 * __this, const MethodInfo* method);
#define List_1_get_Count_m37916(__this, method) (( int32_t (*) (List_1_t6518 *, const MethodInfo*))List_1_get_Count_m37916_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt32>::get_Item(System.Int32)
extern "C" uint32_t List_1_get_Item_m37917_gshared (List_1_t6518 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m37917(__this, ___index, method) (( uint32_t (*) (List_1_t6518 *, int32_t, const MethodInfo*))List_1_get_Item_m37917_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m37918_gshared (List_1_t6518 * __this, int32_t ___index, uint32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m37918(__this, ___index, ___value, method) (( void (*) (List_1_t6518 *, int32_t, uint32_t, const MethodInfo*))List_1_set_Item_m37918_gshared)(__this, ___index, ___value, method)
