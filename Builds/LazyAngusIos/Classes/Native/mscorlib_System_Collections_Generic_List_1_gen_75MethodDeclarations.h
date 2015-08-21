#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t6373;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t6314;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6315;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9138;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t6375;
// System.Predicate`1<System.Byte>
struct Predicate_1_t6377;
// System.Collections.Generic.IComparer`1<System.Byte>
struct IComparer_1_t9204;
// System.Comparison`1<System.Byte>
struct Comparison_1_t6381;
// System.Collections.Generic.List`1/Enumerator<System.Byte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_58.h"

// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
extern "C" void List_1__ctor_m35714_gshared (List_1_t6373 * __this, const MethodInfo* method);
#define List_1__ctor_m35714(__this, method) (( void (*) (List_1_t6373 *, const MethodInfo*))List_1__ctor_m35714_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m35715_gshared (List_1_t6373 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m35715(__this, ___collection, method) (( void (*) (List_1_t6373 *, Object_t*, const MethodInfo*))List_1__ctor_m35715_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m35716_gshared (List_1_t6373 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m35716(__this, ___capacity, method) (( void (*) (List_1_t6373 *, int32_t, const MethodInfo*))List_1__ctor_m35716_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m35717_gshared (List_1_t6373 * __this, ByteU5BU5D_t66* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m35717(__this, ___data, ___size, method) (( void (*) (List_1_t6373 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))List_1__ctor_m35717_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.cctor()
extern "C" void List_1__cctor_m35718_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m35718(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m35718_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35719_gshared (List_1_t6373 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35719(__this, method) (( Object_t* (*) (List_1_t6373 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35719_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m35720_gshared (List_1_t6373 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m35720(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6373 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m35720_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m35721_gshared (List_1_t6373 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m35721(__this, method) (( Object_t * (*) (List_1_t6373 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m35721_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m35722_gshared (List_1_t6373 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m35722(__this, ___item, method) (( int32_t (*) (List_1_t6373 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m35722_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m35723_gshared (List_1_t6373 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m35723(__this, ___item, method) (( bool (*) (List_1_t6373 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m35723_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m35724_gshared (List_1_t6373 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m35724(__this, ___item, method) (( int32_t (*) (List_1_t6373 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m35724_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m35725_gshared (List_1_t6373 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m35725(__this, ___index, ___item, method) (( void (*) (List_1_t6373 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m35725_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m35726_gshared (List_1_t6373 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m35726(__this, ___item, method) (( void (*) (List_1_t6373 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m35726_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35727_gshared (List_1_t6373 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35727(__this, method) (( bool (*) (List_1_t6373 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35727_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m35728_gshared (List_1_t6373 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m35728(__this, method) (( bool (*) (List_1_t6373 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m35728_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m35729_gshared (List_1_t6373 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m35729(__this, method) (( Object_t * (*) (List_1_t6373 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m35729_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m35730_gshared (List_1_t6373 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m35730(__this, method) (( bool (*) (List_1_t6373 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m35730_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m35731_gshared (List_1_t6373 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m35731(__this, method) (( bool (*) (List_1_t6373 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m35731_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m35732_gshared (List_1_t6373 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m35732(__this, ___index, method) (( Object_t * (*) (List_1_t6373 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m35732_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m35733_gshared (List_1_t6373 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m35733(__this, ___index, ___value, method) (( void (*) (List_1_t6373 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m35733_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
extern "C" void List_1_Add_m35734_gshared (List_1_t6373 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Add_m35734(__this, ___item, method) (( void (*) (List_1_t6373 *, uint8_t, const MethodInfo*))List_1_Add_m35734_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m35735_gshared (List_1_t6373 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m35735(__this, ___newCount, method) (( void (*) (List_1_t6373 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m35735_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m35736_gshared (List_1_t6373 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m35736(__this, ___idx, ___count, method) (( void (*) (List_1_t6373 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m35736_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m35737_gshared (List_1_t6373 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m35737(__this, ___collection, method) (( void (*) (List_1_t6373 *, Object_t*, const MethodInfo*))List_1_AddCollection_m35737_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m35738_gshared (List_1_t6373 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m35738(__this, ___enumerable, method) (( void (*) (List_1_t6373 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m35738_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m35739_gshared (List_1_t6373 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m35739(__this, ___collection, method) (( void (*) (List_1_t6373 *, Object_t*, const MethodInfo*))List_1_AddRange_m35739_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6375 * List_1_AsReadOnly_m35740_gshared (List_1_t6373 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m35740(__this, method) (( ReadOnlyCollection_1_t6375 * (*) (List_1_t6373 *, const MethodInfo*))List_1_AsReadOnly_m35740_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
extern "C" void List_1_Clear_m35741_gshared (List_1_t6373 * __this, const MethodInfo* method);
#define List_1_Clear_m35741(__this, method) (( void (*) (List_1_t6373 *, const MethodInfo*))List_1_Clear_m35741_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Contains(T)
extern "C" bool List_1_Contains_m35742_gshared (List_1_t6373 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Contains_m35742(__this, ___item, method) (( bool (*) (List_1_t6373 *, uint8_t, const MethodInfo*))List_1_Contains_m35742_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m35743_gshared (List_1_t6373 * __this, ByteU5BU5D_t66* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m35743(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6373 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))List_1_CopyTo_m35743_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte>::Find(System.Predicate`1<T>)
extern "C" uint8_t List_1_Find_m35744_gshared (List_1_t6373 * __this, Predicate_1_t6377 * ___match, const MethodInfo* method);
#define List_1_Find_m35744(__this, ___match, method) (( uint8_t (*) (List_1_t6373 *, Predicate_1_t6377 *, const MethodInfo*))List_1_Find_m35744_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m35745_gshared (Object_t * __this /* static, unused */, Predicate_1_t6377 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m35745(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6377 *, const MethodInfo*))List_1_CheckMatch_m35745_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m35746_gshared (List_1_t6373 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6377 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m35746(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6373 *, int32_t, int32_t, Predicate_1_t6377 *, const MethodInfo*))List_1_GetIndex_m35746_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
extern "C" Enumerator_t6374  List_1_GetEnumerator_m35747_gshared (List_1_t6373 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m35747(__this, method) (( Enumerator_t6374  (*) (List_1_t6373 *, const MethodInfo*))List_1_GetEnumerator_m35747_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6373 * List_1_GetRange_m35748_gshared (List_1_t6373 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m35748(__this, ___index, ___count, method) (( List_1_t6373 * (*) (List_1_t6373 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m35748_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m35749_gshared (List_1_t6373 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m35749(__this, ___item, method) (( int32_t (*) (List_1_t6373 *, uint8_t, const MethodInfo*))List_1_IndexOf_m35749_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m35750_gshared (List_1_t6373 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m35750(__this, ___start, ___delta, method) (( void (*) (List_1_t6373 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m35750_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m35751_gshared (List_1_t6373 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m35751(__this, ___index, method) (( void (*) (List_1_t6373 *, int32_t, const MethodInfo*))List_1_CheckIndex_m35751_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m35752_gshared (List_1_t6373 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define List_1_Insert_m35752(__this, ___index, ___item, method) (( void (*) (List_1_t6373 *, int32_t, uint8_t, const MethodInfo*))List_1_Insert_m35752_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m35753_gshared (List_1_t6373 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m35753(__this, ___collection, method) (( void (*) (List_1_t6373 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m35753_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m35754_gshared (List_1_t6373 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m35754(__this, ___index, ___collection, method) (( void (*) (List_1_t6373 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m35754_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m35755_gshared (List_1_t6373 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m35755(__this, ___index, ___collection, method) (( void (*) (List_1_t6373 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m35755_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m35756_gshared (List_1_t6373 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m35756(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6373 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m35756_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Remove(T)
extern "C" bool List_1_Remove_m35757_gshared (List_1_t6373 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Remove_m35757(__this, ___item, method) (( bool (*) (List_1_t6373 *, uint8_t, const MethodInfo*))List_1_Remove_m35757_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m35758_gshared (List_1_t6373 * __this, Predicate_1_t6377 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m35758(__this, ___match, method) (( int32_t (*) (List_1_t6373 *, Predicate_1_t6377 *, const MethodInfo*))List_1_RemoveAll_m35758_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m35759_gshared (List_1_t6373 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m35759(__this, ___index, method) (( void (*) (List_1_t6373 *, int32_t, const MethodInfo*))List_1_RemoveAt_m35759_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m35760_gshared (List_1_t6373 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m35760(__this, ___index, ___count, method) (( void (*) (List_1_t6373 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m35760_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
extern "C" void List_1_Reverse_m35761_gshared (List_1_t6373 * __this, const MethodInfo* method);
#define List_1_Reverse_m35761(__this, method) (( void (*) (List_1_t6373 *, const MethodInfo*))List_1_Reverse_m35761_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort()
extern "C" void List_1_Sort_m35762_gshared (List_1_t6373 * __this, const MethodInfo* method);
#define List_1_Sort_m35762(__this, method) (( void (*) (List_1_t6373 *, const MethodInfo*))List_1_Sort_m35762_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m35763_gshared (List_1_t6373 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m35763(__this, ___comparer, method) (( void (*) (List_1_t6373 *, Object_t*, const MethodInfo*))List_1_Sort_m35763_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m35764_gshared (List_1_t6373 * __this, Comparison_1_t6381 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m35764(__this, ___comparison, method) (( void (*) (List_1_t6373 *, Comparison_1_t6381 *, const MethodInfo*))List_1_Sort_m35764_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
extern "C" ByteU5BU5D_t66* List_1_ToArray_m35765_gshared (List_1_t6373 * __this, const MethodInfo* method);
#define List_1_ToArray_m35765(__this, method) (( ByteU5BU5D_t66* (*) (List_1_t6373 *, const MethodInfo*))List_1_ToArray_m35765_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::TrimExcess()
extern "C" void List_1_TrimExcess_m35766_gshared (List_1_t6373 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m35766(__this, method) (( void (*) (List_1_t6373 *, const MethodInfo*))List_1_TrimExcess_m35766_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m35767_gshared (List_1_t6373 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m35767(__this, method) (( int32_t (*) (List_1_t6373 *, const MethodInfo*))List_1_get_Capacity_m35767_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m35768_gshared (List_1_t6373 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m35768(__this, ___value, method) (( void (*) (List_1_t6373 *, int32_t, const MethodInfo*))List_1_set_Capacity_m35768_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
extern "C" int32_t List_1_get_Count_m35769_gshared (List_1_t6373 * __this, const MethodInfo* method);
#define List_1_get_Count_m35769(__this, method) (( int32_t (*) (List_1_t6373 *, const MethodInfo*))List_1_get_Count_m35769_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t List_1_get_Item_m35770_gshared (List_1_t6373 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m35770(__this, ___index, method) (( uint8_t (*) (List_1_t6373 *, int32_t, const MethodInfo*))List_1_get_Item_m35770_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m35771_gshared (List_1_t6373 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m35771(__this, ___index, ___value, method) (( void (*) (List_1_t6373 *, int32_t, uint8_t, const MethodInfo*))List_1_set_Item_m35771_gshared)(__this, ___index, ___value, method)
