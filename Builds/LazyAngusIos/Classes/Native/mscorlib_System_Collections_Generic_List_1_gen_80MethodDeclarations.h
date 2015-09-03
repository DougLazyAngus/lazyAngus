#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int16>
struct List_1_t7041;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int16>
struct IEnumerable_1_t6893;
// System.Int16[]
struct Int16U5BU5D_t5433;
// System.Collections.Generic.IEnumerator`1<System.Int16>
struct IEnumerator_1_t6894;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9833;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int16>
struct ReadOnlyCollection_1_t7043;
// System.Predicate`1<System.Int16>
struct Predicate_1_t7048;
// System.Collections.Generic.IComparer`1<System.Int16>
struct IComparer_1_t5755;
// System.Comparison`1<System.Int16>
struct Comparison_1_t7052;
// System.Collections.Generic.List`1/Enumerator<System.Int16>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_63.h"

// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor()
extern "C" void List_1__ctor_m41722_gshared (List_1_t7041 * __this, const MethodInfo* method);
#define List_1__ctor_m41722(__this, method) (( void (*) (List_1_t7041 *, const MethodInfo*))List_1__ctor_m41722_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m41723_gshared (List_1_t7041 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m41723(__this, ___collection, method) (( void (*) (List_1_t7041 *, Object_t*, const MethodInfo*))List_1__ctor_m41723_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(System.Int32)
extern "C" void List_1__ctor_m41724_gshared (List_1_t7041 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m41724(__this, ___capacity, method) (( void (*) (List_1_t7041 *, int32_t, const MethodInfo*))List_1__ctor_m41724_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m41725_gshared (List_1_t7041 * __this, Int16U5BU5D_t5433* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m41725(__this, ___data, ___size, method) (( void (*) (List_1_t7041 *, Int16U5BU5D_t5433*, int32_t, const MethodInfo*))List_1__ctor_m41725_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.cctor()
extern "C" void List_1__cctor_m41726_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m41726(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m41726_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int16>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41727_gshared (List_1_t7041 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41727(__this, method) (( Object_t* (*) (List_1_t7041 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41727_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m41728_gshared (List_1_t7041 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m41728(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7041 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m41728_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m41729_gshared (List_1_t7041 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m41729(__this, method) (( Object_t * (*) (List_1_t7041 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m41729_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m41730_gshared (List_1_t7041 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m41730(__this, ___item, method) (( int32_t (*) (List_1_t7041 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m41730_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m41731_gshared (List_1_t7041 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m41731(__this, ___item, method) (( bool (*) (List_1_t7041 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m41731_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m41732_gshared (List_1_t7041 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m41732(__this, ___item, method) (( int32_t (*) (List_1_t7041 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m41732_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m41733_gshared (List_1_t7041 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m41733(__this, ___index, ___item, method) (( void (*) (List_1_t7041 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m41733_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m41734_gshared (List_1_t7041 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m41734(__this, ___item, method) (( void (*) (List_1_t7041 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m41734_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41735_gshared (List_1_t7041 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41735(__this, method) (( bool (*) (List_1_t7041 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41735_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m41736_gshared (List_1_t7041 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m41736(__this, method) (( bool (*) (List_1_t7041 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m41736_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m41737_gshared (List_1_t7041 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m41737(__this, method) (( Object_t * (*) (List_1_t7041 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m41737_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m41738_gshared (List_1_t7041 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m41738(__this, method) (( bool (*) (List_1_t7041 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m41738_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m41739_gshared (List_1_t7041 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m41739(__this, method) (( bool (*) (List_1_t7041 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m41739_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m41740_gshared (List_1_t7041 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m41740(__this, ___index, method) (( Object_t * (*) (List_1_t7041 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m41740_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m41741_gshared (List_1_t7041 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m41741(__this, ___index, ___value, method) (( void (*) (List_1_t7041 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m41741_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Add(T)
extern "C" void List_1_Add_m41742_gshared (List_1_t7041 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Add_m41742(__this, ___item, method) (( void (*) (List_1_t7041 *, int16_t, const MethodInfo*))List_1_Add_m41742_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m41743_gshared (List_1_t7041 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m41743(__this, ___newCount, method) (( void (*) (List_1_t7041 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m41743_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m41744_gshared (List_1_t7041 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m41744(__this, ___idx, ___count, method) (( void (*) (List_1_t7041 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m41744_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m41745_gshared (List_1_t7041 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m41745(__this, ___collection, method) (( void (*) (List_1_t7041 *, Object_t*, const MethodInfo*))List_1_AddCollection_m41745_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m41746_gshared (List_1_t7041 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m41746(__this, ___enumerable, method) (( void (*) (List_1_t7041 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m41746_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m41747_gshared (List_1_t7041 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m41747(__this, ___collection, method) (( void (*) (List_1_t7041 *, Object_t*, const MethodInfo*))List_1_AddRange_m41747_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int16>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7043 * List_1_AsReadOnly_m41748_gshared (List_1_t7041 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m41748(__this, method) (( ReadOnlyCollection_1_t7043 * (*) (List_1_t7041 *, const MethodInfo*))List_1_AsReadOnly_m41748_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Clear()
extern "C" void List_1_Clear_m41749_gshared (List_1_t7041 * __this, const MethodInfo* method);
#define List_1_Clear_m41749(__this, method) (( void (*) (List_1_t7041 *, const MethodInfo*))List_1_Clear_m41749_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::Contains(T)
extern "C" bool List_1_Contains_m41750_gshared (List_1_t7041 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Contains_m41750(__this, ___item, method) (( bool (*) (List_1_t7041 *, int16_t, const MethodInfo*))List_1_Contains_m41750_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m41751_gshared (List_1_t7041 * __this, Int16U5BU5D_t5433* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m41751(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7041 *, Int16U5BU5D_t5433*, int32_t, const MethodInfo*))List_1_CopyTo_m41751_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int16>::Find(System.Predicate`1<T>)
extern "C" int16_t List_1_Find_m41752_gshared (List_1_t7041 * __this, Predicate_1_t7048 * ___match, const MethodInfo* method);
#define List_1_Find_m41752(__this, ___match, method) (( int16_t (*) (List_1_t7041 *, Predicate_1_t7048 *, const MethodInfo*))List_1_Find_m41752_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m41753_gshared (Object_t * __this /* static, unused */, Predicate_1_t7048 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m41753(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7048 *, const MethodInfo*))List_1_CheckMatch_m41753_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m41754_gshared (List_1_t7041 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7048 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m41754(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7041 *, int32_t, int32_t, Predicate_1_t7048 *, const MethodInfo*))List_1_GetIndex_m41754_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int16>::GetEnumerator()
extern "C" Enumerator_t7042  List_1_GetEnumerator_m41755_gshared (List_1_t7041 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m41755(__this, method) (( Enumerator_t7042  (*) (List_1_t7041 *, const MethodInfo*))List_1_GetEnumerator_m41755_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int16>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7041 * List_1_GetRange_m41756_gshared (List_1_t7041 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m41756(__this, ___index, ___count, method) (( List_1_t7041 * (*) (List_1_t7041 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m41756_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m41757_gshared (List_1_t7041 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m41757(__this, ___item, method) (( int32_t (*) (List_1_t7041 *, int16_t, const MethodInfo*))List_1_IndexOf_m41757_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m41758_gshared (List_1_t7041 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m41758(__this, ___start, ___delta, method) (( void (*) (List_1_t7041 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m41758_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m41759_gshared (List_1_t7041 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m41759(__this, ___index, method) (( void (*) (List_1_t7041 *, int32_t, const MethodInfo*))List_1_CheckIndex_m41759_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m41760_gshared (List_1_t7041 * __this, int32_t ___index, int16_t ___item, const MethodInfo* method);
#define List_1_Insert_m41760(__this, ___index, ___item, method) (( void (*) (List_1_t7041 *, int32_t, int16_t, const MethodInfo*))List_1_Insert_m41760_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m41761_gshared (List_1_t7041 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m41761(__this, ___collection, method) (( void (*) (List_1_t7041 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m41761_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m41762_gshared (List_1_t7041 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m41762(__this, ___index, ___collection, method) (( void (*) (List_1_t7041 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m41762_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m41763_gshared (List_1_t7041 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m41763(__this, ___index, ___collection, method) (( void (*) (List_1_t7041 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m41763_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m41764_gshared (List_1_t7041 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m41764(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7041 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m41764_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::Remove(T)
extern "C" bool List_1_Remove_m41765_gshared (List_1_t7041 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Remove_m41765(__this, ___item, method) (( bool (*) (List_1_t7041 *, int16_t, const MethodInfo*))List_1_Remove_m41765_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m41766_gshared (List_1_t7041 * __this, Predicate_1_t7048 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m41766(__this, ___match, method) (( int32_t (*) (List_1_t7041 *, Predicate_1_t7048 *, const MethodInfo*))List_1_RemoveAll_m41766_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m41767_gshared (List_1_t7041 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m41767(__this, ___index, method) (( void (*) (List_1_t7041 *, int32_t, const MethodInfo*))List_1_RemoveAt_m41767_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m41768_gshared (List_1_t7041 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m41768(__this, ___index, ___count, method) (( void (*) (List_1_t7041 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m41768_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Reverse()
extern "C" void List_1_Reverse_m41769_gshared (List_1_t7041 * __this, const MethodInfo* method);
#define List_1_Reverse_m41769(__this, method) (( void (*) (List_1_t7041 *, const MethodInfo*))List_1_Reverse_m41769_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort()
extern "C" void List_1_Sort_m41770_gshared (List_1_t7041 * __this, const MethodInfo* method);
#define List_1_Sort_m41770(__this, method) (( void (*) (List_1_t7041 *, const MethodInfo*))List_1_Sort_m41770_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m41771_gshared (List_1_t7041 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m41771(__this, ___comparer, method) (( void (*) (List_1_t7041 *, Object_t*, const MethodInfo*))List_1_Sort_m41771_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m41772_gshared (List_1_t7041 * __this, Comparison_1_t7052 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m41772(__this, ___comparison, method) (( void (*) (List_1_t7041 *, Comparison_1_t7052 *, const MethodInfo*))List_1_Sort_m41772_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int16>::ToArray()
extern "C" Int16U5BU5D_t5433* List_1_ToArray_m41773_gshared (List_1_t7041 * __this, const MethodInfo* method);
#define List_1_ToArray_m41773(__this, method) (( Int16U5BU5D_t5433* (*) (List_1_t7041 *, const MethodInfo*))List_1_ToArray_m41773_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::TrimExcess()
extern "C" void List_1_TrimExcess_m41774_gshared (List_1_t7041 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m41774(__this, method) (( void (*) (List_1_t7041 *, const MethodInfo*))List_1_TrimExcess_m41774_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m41775_gshared (List_1_t7041 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m41775(__this, method) (( int32_t (*) (List_1_t7041 *, const MethodInfo*))List_1_get_Capacity_m41775_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m41776_gshared (List_1_t7041 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m41776(__this, ___value, method) (( void (*) (List_1_t7041 *, int32_t, const MethodInfo*))List_1_set_Capacity_m41776_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::get_Count()
extern "C" int32_t List_1_get_Count_m41777_gshared (List_1_t7041 * __this, const MethodInfo* method);
#define List_1_get_Count_m41777(__this, method) (( int32_t (*) (List_1_t7041 *, const MethodInfo*))List_1_get_Count_m41777_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int16>::get_Item(System.Int32)
extern "C" int16_t List_1_get_Item_m41778_gshared (List_1_t7041 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m41778(__this, ___index, method) (( int16_t (*) (List_1_t7041 *, int32_t, const MethodInfo*))List_1_get_Item_m41778_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m41779_gshared (List_1_t7041 * __this, int32_t ___index, int16_t ___value, const MethodInfo* method);
#define List_1_set_Item_m41779(__this, ___index, ___value, method) (( void (*) (List_1_t7041 *, int32_t, int16_t, const MethodInfo*))List_1_set_Item_m41779_gshared)(__this, ___index, ___value, method)
