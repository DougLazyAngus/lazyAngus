#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.SByte>
struct List_1_t6425;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.SByte>
struct IEnumerable_1_t6317;
// System.SByte[]
struct SByteU5BU5D_t4761;
// System.Collections.Generic.IEnumerator`1<System.SByte>
struct IEnumerator_1_t6318;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9197;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.SByte>
struct ReadOnlyCollection_1_t6427;
// System.Predicate`1<System.SByte>
struct Predicate_1_t6432;
// System.Collections.Generic.IComparer`1<System.SByte>
struct IComparer_1_t5364;
// System.Comparison`1<System.SByte>
struct Comparison_1_t6436;
// System.Collections.Generic.List`1/Enumerator<System.SByte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_58.h"

// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor()
extern "C" void List_1__ctor_m36435_gshared (List_1_t6425 * __this, const MethodInfo* method);
#define List_1__ctor_m36435(__this, method) (( void (*) (List_1_t6425 *, const MethodInfo*))List_1__ctor_m36435_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m36436_gshared (List_1_t6425 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m36436(__this, ___collection, method) (( void (*) (List_1_t6425 *, Object_t*, const MethodInfo*))List_1__ctor_m36436_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m36437_gshared (List_1_t6425 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m36437(__this, ___capacity, method) (( void (*) (List_1_t6425 *, int32_t, const MethodInfo*))List_1__ctor_m36437_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m36438_gshared (List_1_t6425 * __this, SByteU5BU5D_t4761* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m36438(__this, ___data, ___size, method) (( void (*) (List_1_t6425 *, SByteU5BU5D_t4761*, int32_t, const MethodInfo*))List_1__ctor_m36438_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.cctor()
extern "C" void List_1__cctor_m36439_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m36439(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m36439_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.SByte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36440_gshared (List_1_t6425 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36440(__this, method) (( Object_t* (*) (List_1_t6425 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36440_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m36441_gshared (List_1_t6425 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m36441(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6425 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m36441_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m36442_gshared (List_1_t6425 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m36442(__this, method) (( Object_t * (*) (List_1_t6425 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m36442_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m36443_gshared (List_1_t6425 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m36443(__this, ___item, method) (( int32_t (*) (List_1_t6425 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m36443_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m36444_gshared (List_1_t6425 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m36444(__this, ___item, method) (( bool (*) (List_1_t6425 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m36444_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m36445_gshared (List_1_t6425 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m36445(__this, ___item, method) (( int32_t (*) (List_1_t6425 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m36445_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m36446_gshared (List_1_t6425 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m36446(__this, ___index, ___item, method) (( void (*) (List_1_t6425 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m36446_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m36447_gshared (List_1_t6425 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m36447(__this, ___item, method) (( void (*) (List_1_t6425 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m36447_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36448_gshared (List_1_t6425 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36448(__this, method) (( bool (*) (List_1_t6425 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36448_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m36449_gshared (List_1_t6425 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m36449(__this, method) (( bool (*) (List_1_t6425 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m36449_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m36450_gshared (List_1_t6425 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m36450(__this, method) (( Object_t * (*) (List_1_t6425 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m36450_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m36451_gshared (List_1_t6425 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m36451(__this, method) (( bool (*) (List_1_t6425 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m36451_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m36452_gshared (List_1_t6425 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m36452(__this, method) (( bool (*) (List_1_t6425 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m36452_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m36453_gshared (List_1_t6425 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m36453(__this, ___index, method) (( Object_t * (*) (List_1_t6425 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m36453_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m36454_gshared (List_1_t6425 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m36454(__this, ___index, ___value, method) (( void (*) (List_1_t6425 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m36454_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Add(T)
extern "C" void List_1_Add_m36455_gshared (List_1_t6425 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Add_m36455(__this, ___item, method) (( void (*) (List_1_t6425 *, int8_t, const MethodInfo*))List_1_Add_m36455_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m36456_gshared (List_1_t6425 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m36456(__this, ___newCount, method) (( void (*) (List_1_t6425 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m36456_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m36457_gshared (List_1_t6425 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m36457(__this, ___idx, ___count, method) (( void (*) (List_1_t6425 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m36457_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m36458_gshared (List_1_t6425 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m36458(__this, ___collection, method) (( void (*) (List_1_t6425 *, Object_t*, const MethodInfo*))List_1_AddCollection_m36458_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m36459_gshared (List_1_t6425 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m36459(__this, ___enumerable, method) (( void (*) (List_1_t6425 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m36459_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m36460_gshared (List_1_t6425 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m36460(__this, ___collection, method) (( void (*) (List_1_t6425 *, Object_t*, const MethodInfo*))List_1_AddRange_m36460_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.SByte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6427 * List_1_AsReadOnly_m36461_gshared (List_1_t6425 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m36461(__this, method) (( ReadOnlyCollection_1_t6427 * (*) (List_1_t6425 *, const MethodInfo*))List_1_AsReadOnly_m36461_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Clear()
extern "C" void List_1_Clear_m36462_gshared (List_1_t6425 * __this, const MethodInfo* method);
#define List_1_Clear_m36462(__this, method) (( void (*) (List_1_t6425 *, const MethodInfo*))List_1_Clear_m36462_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::Contains(T)
extern "C" bool List_1_Contains_m36463_gshared (List_1_t6425 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Contains_m36463(__this, ___item, method) (( bool (*) (List_1_t6425 *, int8_t, const MethodInfo*))List_1_Contains_m36463_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m36464_gshared (List_1_t6425 * __this, SByteU5BU5D_t4761* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m36464(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6425 *, SByteU5BU5D_t4761*, int32_t, const MethodInfo*))List_1_CopyTo_m36464_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.SByte>::Find(System.Predicate`1<T>)
extern "C" int8_t List_1_Find_m36465_gshared (List_1_t6425 * __this, Predicate_1_t6432 * ___match, const MethodInfo* method);
#define List_1_Find_m36465(__this, ___match, method) (( int8_t (*) (List_1_t6425 *, Predicate_1_t6432 *, const MethodInfo*))List_1_Find_m36465_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m36466_gshared (Object_t * __this /* static, unused */, Predicate_1_t6432 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m36466(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6432 *, const MethodInfo*))List_1_CheckMatch_m36466_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m36467_gshared (List_1_t6425 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6432 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m36467(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6425 *, int32_t, int32_t, Predicate_1_t6432 *, const MethodInfo*))List_1_GetIndex_m36467_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.SByte>::GetEnumerator()
extern "C" Enumerator_t6426  List_1_GetEnumerator_m36468_gshared (List_1_t6425 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m36468(__this, method) (( Enumerator_t6426  (*) (List_1_t6425 *, const MethodInfo*))List_1_GetEnumerator_m36468_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.SByte>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6425 * List_1_GetRange_m36469_gshared (List_1_t6425 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m36469(__this, ___index, ___count, method) (( List_1_t6425 * (*) (List_1_t6425 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m36469_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m36470_gshared (List_1_t6425 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m36470(__this, ___item, method) (( int32_t (*) (List_1_t6425 *, int8_t, const MethodInfo*))List_1_IndexOf_m36470_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m36471_gshared (List_1_t6425 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m36471(__this, ___start, ___delta, method) (( void (*) (List_1_t6425 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m36471_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m36472_gshared (List_1_t6425 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m36472(__this, ___index, method) (( void (*) (List_1_t6425 *, int32_t, const MethodInfo*))List_1_CheckIndex_m36472_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m36473_gshared (List_1_t6425 * __this, int32_t ___index, int8_t ___item, const MethodInfo* method);
#define List_1_Insert_m36473(__this, ___index, ___item, method) (( void (*) (List_1_t6425 *, int32_t, int8_t, const MethodInfo*))List_1_Insert_m36473_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m36474_gshared (List_1_t6425 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m36474(__this, ___collection, method) (( void (*) (List_1_t6425 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m36474_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m36475_gshared (List_1_t6425 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m36475(__this, ___index, ___collection, method) (( void (*) (List_1_t6425 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m36475_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m36476_gshared (List_1_t6425 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m36476(__this, ___index, ___collection, method) (( void (*) (List_1_t6425 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m36476_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m36477_gshared (List_1_t6425 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m36477(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6425 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m36477_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::Remove(T)
extern "C" bool List_1_Remove_m36478_gshared (List_1_t6425 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Remove_m36478(__this, ___item, method) (( bool (*) (List_1_t6425 *, int8_t, const MethodInfo*))List_1_Remove_m36478_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m36479_gshared (List_1_t6425 * __this, Predicate_1_t6432 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m36479(__this, ___match, method) (( int32_t (*) (List_1_t6425 *, Predicate_1_t6432 *, const MethodInfo*))List_1_RemoveAll_m36479_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m36480_gshared (List_1_t6425 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m36480(__this, ___index, method) (( void (*) (List_1_t6425 *, int32_t, const MethodInfo*))List_1_RemoveAt_m36480_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m36481_gshared (List_1_t6425 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m36481(__this, ___index, ___count, method) (( void (*) (List_1_t6425 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m36481_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Reverse()
extern "C" void List_1_Reverse_m36482_gshared (List_1_t6425 * __this, const MethodInfo* method);
#define List_1_Reverse_m36482(__this, method) (( void (*) (List_1_t6425 *, const MethodInfo*))List_1_Reverse_m36482_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort()
extern "C" void List_1_Sort_m36483_gshared (List_1_t6425 * __this, const MethodInfo* method);
#define List_1_Sort_m36483(__this, method) (( void (*) (List_1_t6425 *, const MethodInfo*))List_1_Sort_m36483_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m36484_gshared (List_1_t6425 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m36484(__this, ___comparer, method) (( void (*) (List_1_t6425 *, Object_t*, const MethodInfo*))List_1_Sort_m36484_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m36485_gshared (List_1_t6425 * __this, Comparison_1_t6436 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m36485(__this, ___comparison, method) (( void (*) (List_1_t6425 *, Comparison_1_t6436 *, const MethodInfo*))List_1_Sort_m36485_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.SByte>::ToArray()
extern "C" SByteU5BU5D_t4761* List_1_ToArray_m36486_gshared (List_1_t6425 * __this, const MethodInfo* method);
#define List_1_ToArray_m36486(__this, method) (( SByteU5BU5D_t4761* (*) (List_1_t6425 *, const MethodInfo*))List_1_ToArray_m36486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::TrimExcess()
extern "C" void List_1_TrimExcess_m36487_gshared (List_1_t6425 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m36487(__this, method) (( void (*) (List_1_t6425 *, const MethodInfo*))List_1_TrimExcess_m36487_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m36488_gshared (List_1_t6425 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m36488(__this, method) (( int32_t (*) (List_1_t6425 *, const MethodInfo*))List_1_get_Capacity_m36488_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m36489_gshared (List_1_t6425 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m36489(__this, ___value, method) (( void (*) (List_1_t6425 *, int32_t, const MethodInfo*))List_1_set_Capacity_m36489_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::get_Count()
extern "C" int32_t List_1_get_Count_m36490_gshared (List_1_t6425 * __this, const MethodInfo* method);
#define List_1_get_Count_m36490(__this, method) (( int32_t (*) (List_1_t6425 *, const MethodInfo*))List_1_get_Count_m36490_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.SByte>::get_Item(System.Int32)
extern "C" int8_t List_1_get_Item_m36491_gshared (List_1_t6425 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m36491(__this, ___index, method) (( int8_t (*) (List_1_t6425 *, int32_t, const MethodInfo*))List_1_get_Item_m36491_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m36492_gshared (List_1_t6425 * __this, int32_t ___index, int8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m36492(__this, ___index, ___value, method) (( void (*) (List_1_t6425 *, int32_t, int8_t, const MethodInfo*))List_1_set_Item_m36492_gshared)(__this, ___index, ___value, method)
