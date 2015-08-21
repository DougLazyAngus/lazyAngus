#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.SByte>
struct List_1_t6429;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.SByte>
struct IEnumerable_1_t6321;
// System.SByte[]
struct SByteU5BU5D_t4759;
// System.Collections.Generic.IEnumerator`1<System.SByte>
struct IEnumerator_1_t6322;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9205;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.SByte>
struct ReadOnlyCollection_1_t6431;
// System.Predicate`1<System.SByte>
struct Predicate_1_t6436;
// System.Collections.Generic.IComparer`1<System.SByte>
struct IComparer_1_t5362;
// System.Comparison`1<System.SByte>
struct Comparison_1_t6440;
// System.Collections.Generic.List`1/Enumerator<System.SByte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_59.h"

// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor()
extern "C" void List_1__ctor_m36526_gshared (List_1_t6429 * __this, const MethodInfo* method);
#define List_1__ctor_m36526(__this, method) (( void (*) (List_1_t6429 *, const MethodInfo*))List_1__ctor_m36526_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m36527_gshared (List_1_t6429 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m36527(__this, ___collection, method) (( void (*) (List_1_t6429 *, Object_t*, const MethodInfo*))List_1__ctor_m36527_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m36528_gshared (List_1_t6429 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m36528(__this, ___capacity, method) (( void (*) (List_1_t6429 *, int32_t, const MethodInfo*))List_1__ctor_m36528_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m36529_gshared (List_1_t6429 * __this, SByteU5BU5D_t4759* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m36529(__this, ___data, ___size, method) (( void (*) (List_1_t6429 *, SByteU5BU5D_t4759*, int32_t, const MethodInfo*))List_1__ctor_m36529_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::.cctor()
extern "C" void List_1__cctor_m36530_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m36530(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m36530_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.SByte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36531_gshared (List_1_t6429 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36531(__this, method) (( Object_t* (*) (List_1_t6429 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36531_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m36532_gshared (List_1_t6429 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m36532(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6429 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m36532_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m36533_gshared (List_1_t6429 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m36533(__this, method) (( Object_t * (*) (List_1_t6429 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m36533_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m36534_gshared (List_1_t6429 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m36534(__this, ___item, method) (( int32_t (*) (List_1_t6429 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m36534_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m36535_gshared (List_1_t6429 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m36535(__this, ___item, method) (( bool (*) (List_1_t6429 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m36535_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m36536_gshared (List_1_t6429 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m36536(__this, ___item, method) (( int32_t (*) (List_1_t6429 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m36536_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m36537_gshared (List_1_t6429 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m36537(__this, ___index, ___item, method) (( void (*) (List_1_t6429 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m36537_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m36538_gshared (List_1_t6429 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m36538(__this, ___item, method) (( void (*) (List_1_t6429 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m36538_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36539_gshared (List_1_t6429 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36539(__this, method) (( bool (*) (List_1_t6429 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36539_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m36540_gshared (List_1_t6429 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m36540(__this, method) (( bool (*) (List_1_t6429 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m36540_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.SByte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m36541_gshared (List_1_t6429 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m36541(__this, method) (( Object_t * (*) (List_1_t6429 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m36541_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m36542_gshared (List_1_t6429 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m36542(__this, method) (( bool (*) (List_1_t6429 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m36542_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m36543_gshared (List_1_t6429 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m36543(__this, method) (( bool (*) (List_1_t6429 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m36543_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m36544_gshared (List_1_t6429 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m36544(__this, ___index, method) (( Object_t * (*) (List_1_t6429 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m36544_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m36545_gshared (List_1_t6429 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m36545(__this, ___index, ___value, method) (( void (*) (List_1_t6429 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m36545_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Add(T)
extern "C" void List_1_Add_m36546_gshared (List_1_t6429 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Add_m36546(__this, ___item, method) (( void (*) (List_1_t6429 *, int8_t, const MethodInfo*))List_1_Add_m36546_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m36547_gshared (List_1_t6429 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m36547(__this, ___newCount, method) (( void (*) (List_1_t6429 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m36547_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m36548_gshared (List_1_t6429 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m36548(__this, ___idx, ___count, method) (( void (*) (List_1_t6429 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m36548_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m36549_gshared (List_1_t6429 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m36549(__this, ___collection, method) (( void (*) (List_1_t6429 *, Object_t*, const MethodInfo*))List_1_AddCollection_m36549_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m36550_gshared (List_1_t6429 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m36550(__this, ___enumerable, method) (( void (*) (List_1_t6429 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m36550_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m36551_gshared (List_1_t6429 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m36551(__this, ___collection, method) (( void (*) (List_1_t6429 *, Object_t*, const MethodInfo*))List_1_AddRange_m36551_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.SByte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6431 * List_1_AsReadOnly_m36552_gshared (List_1_t6429 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m36552(__this, method) (( ReadOnlyCollection_1_t6431 * (*) (List_1_t6429 *, const MethodInfo*))List_1_AsReadOnly_m36552_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Clear()
extern "C" void List_1_Clear_m36553_gshared (List_1_t6429 * __this, const MethodInfo* method);
#define List_1_Clear_m36553(__this, method) (( void (*) (List_1_t6429 *, const MethodInfo*))List_1_Clear_m36553_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::Contains(T)
extern "C" bool List_1_Contains_m36554_gshared (List_1_t6429 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Contains_m36554(__this, ___item, method) (( bool (*) (List_1_t6429 *, int8_t, const MethodInfo*))List_1_Contains_m36554_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m36555_gshared (List_1_t6429 * __this, SByteU5BU5D_t4759* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m36555(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6429 *, SByteU5BU5D_t4759*, int32_t, const MethodInfo*))List_1_CopyTo_m36555_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.SByte>::Find(System.Predicate`1<T>)
extern "C" int8_t List_1_Find_m36556_gshared (List_1_t6429 * __this, Predicate_1_t6436 * ___match, const MethodInfo* method);
#define List_1_Find_m36556(__this, ___match, method) (( int8_t (*) (List_1_t6429 *, Predicate_1_t6436 *, const MethodInfo*))List_1_Find_m36556_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m36557_gshared (Object_t * __this /* static, unused */, Predicate_1_t6436 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m36557(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6436 *, const MethodInfo*))List_1_CheckMatch_m36557_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m36558_gshared (List_1_t6429 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6436 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m36558(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6429 *, int32_t, int32_t, Predicate_1_t6436 *, const MethodInfo*))List_1_GetIndex_m36558_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.SByte>::GetEnumerator()
extern "C" Enumerator_t6430  List_1_GetEnumerator_m36559_gshared (List_1_t6429 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m36559(__this, method) (( Enumerator_t6430  (*) (List_1_t6429 *, const MethodInfo*))List_1_GetEnumerator_m36559_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.SByte>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6429 * List_1_GetRange_m36560_gshared (List_1_t6429 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m36560(__this, ___index, ___count, method) (( List_1_t6429 * (*) (List_1_t6429 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m36560_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m36561_gshared (List_1_t6429 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m36561(__this, ___item, method) (( int32_t (*) (List_1_t6429 *, int8_t, const MethodInfo*))List_1_IndexOf_m36561_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m36562_gshared (List_1_t6429 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m36562(__this, ___start, ___delta, method) (( void (*) (List_1_t6429 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m36562_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m36563_gshared (List_1_t6429 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m36563(__this, ___index, method) (( void (*) (List_1_t6429 *, int32_t, const MethodInfo*))List_1_CheckIndex_m36563_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m36564_gshared (List_1_t6429 * __this, int32_t ___index, int8_t ___item, const MethodInfo* method);
#define List_1_Insert_m36564(__this, ___index, ___item, method) (( void (*) (List_1_t6429 *, int32_t, int8_t, const MethodInfo*))List_1_Insert_m36564_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m36565_gshared (List_1_t6429 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m36565(__this, ___collection, method) (( void (*) (List_1_t6429 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m36565_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m36566_gshared (List_1_t6429 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m36566(__this, ___index, ___collection, method) (( void (*) (List_1_t6429 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m36566_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m36567_gshared (List_1_t6429 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m36567(__this, ___index, ___collection, method) (( void (*) (List_1_t6429 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m36567_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m36568_gshared (List_1_t6429 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m36568(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6429 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m36568_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.SByte>::Remove(T)
extern "C" bool List_1_Remove_m36569_gshared (List_1_t6429 * __this, int8_t ___item, const MethodInfo* method);
#define List_1_Remove_m36569(__this, ___item, method) (( bool (*) (List_1_t6429 *, int8_t, const MethodInfo*))List_1_Remove_m36569_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m36570_gshared (List_1_t6429 * __this, Predicate_1_t6436 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m36570(__this, ___match, method) (( int32_t (*) (List_1_t6429 *, Predicate_1_t6436 *, const MethodInfo*))List_1_RemoveAll_m36570_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m36571_gshared (List_1_t6429 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m36571(__this, ___index, method) (( void (*) (List_1_t6429 *, int32_t, const MethodInfo*))List_1_RemoveAt_m36571_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m36572_gshared (List_1_t6429 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m36572(__this, ___index, ___count, method) (( void (*) (List_1_t6429 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m36572_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Reverse()
extern "C" void List_1_Reverse_m36573_gshared (List_1_t6429 * __this, const MethodInfo* method);
#define List_1_Reverse_m36573(__this, method) (( void (*) (List_1_t6429 *, const MethodInfo*))List_1_Reverse_m36573_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort()
extern "C" void List_1_Sort_m36574_gshared (List_1_t6429 * __this, const MethodInfo* method);
#define List_1_Sort_m36574(__this, method) (( void (*) (List_1_t6429 *, const MethodInfo*))List_1_Sort_m36574_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m36575_gshared (List_1_t6429 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m36575(__this, ___comparer, method) (( void (*) (List_1_t6429 *, Object_t*, const MethodInfo*))List_1_Sort_m36575_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m36576_gshared (List_1_t6429 * __this, Comparison_1_t6440 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m36576(__this, ___comparison, method) (( void (*) (List_1_t6429 *, Comparison_1_t6440 *, const MethodInfo*))List_1_Sort_m36576_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.SByte>::ToArray()
extern "C" SByteU5BU5D_t4759* List_1_ToArray_m36577_gshared (List_1_t6429 * __this, const MethodInfo* method);
#define List_1_ToArray_m36577(__this, method) (( SByteU5BU5D_t4759* (*) (List_1_t6429 *, const MethodInfo*))List_1_ToArray_m36577_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::TrimExcess()
extern "C" void List_1_TrimExcess_m36578_gshared (List_1_t6429 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m36578(__this, method) (( void (*) (List_1_t6429 *, const MethodInfo*))List_1_TrimExcess_m36578_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m36579_gshared (List_1_t6429 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m36579(__this, method) (( int32_t (*) (List_1_t6429 *, const MethodInfo*))List_1_get_Capacity_m36579_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m36580_gshared (List_1_t6429 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m36580(__this, ___value, method) (( void (*) (List_1_t6429 *, int32_t, const MethodInfo*))List_1_set_Capacity_m36580_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.SByte>::get_Count()
extern "C" int32_t List_1_get_Count_m36581_gshared (List_1_t6429 * __this, const MethodInfo* method);
#define List_1_get_Count_m36581(__this, method) (( int32_t (*) (List_1_t6429 *, const MethodInfo*))List_1_get_Count_m36581_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.SByte>::get_Item(System.Int32)
extern "C" int8_t List_1_get_Item_m36582_gshared (List_1_t6429 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m36582(__this, ___index, method) (( int8_t (*) (List_1_t6429 *, int32_t, const MethodInfo*))List_1_get_Item_m36582_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.SByte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m36583_gshared (List_1_t6429 * __this, int32_t ___index, int8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m36583(__this, ___index, ___value, method) (( void (*) (List_1_t6429 *, int32_t, int8_t, const MethodInfo*))List_1_set_Item_m36583_gshared)(__this, ___index, ___value, method)
