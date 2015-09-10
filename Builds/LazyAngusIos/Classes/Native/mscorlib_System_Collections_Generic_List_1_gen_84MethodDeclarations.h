#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t7273;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt64>
struct IEnumerable_1_t6933;
// System.UInt64[]
struct UInt64U5BU5D_t5289;
// System.Collections.Generic.IEnumerator`1<System.UInt64>
struct IEnumerator_1_t6934;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9851;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt64>
struct ReadOnlyCollection_1_t7275;
// System.Predicate`1<System.UInt64>
struct Predicate_1_t7280;
// System.Collections.Generic.IComparer`1<System.UInt64>
struct IComparer_1_t9852;
// System.Comparison`1<System.UInt64>
struct Comparison_1_t7284;
// System.Collections.Generic.List`1/Enumerator<System.UInt64>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_67.h"

// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor()
extern "C" void List_1__ctor_m44546_gshared (List_1_t7273 * __this, const MethodInfo* method);
#define List_1__ctor_m44546(__this, method) (( void (*) (List_1_t7273 *, const MethodInfo*))List_1__ctor_m44546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m44547_gshared (List_1_t7273 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m44547(__this, ___collection, method) (( void (*) (List_1_t7273 *, Object_t*, const MethodInfo*))List_1__ctor_m44547_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(System.Int32)
extern "C" void List_1__ctor_m44548_gshared (List_1_t7273 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m44548(__this, ___capacity, method) (( void (*) (List_1_t7273 *, int32_t, const MethodInfo*))List_1__ctor_m44548_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m44549_gshared (List_1_t7273 * __this, UInt64U5BU5D_t5289* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m44549(__this, ___data, ___size, method) (( void (*) (List_1_t7273 *, UInt64U5BU5D_t5289*, int32_t, const MethodInfo*))List_1__ctor_m44549_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::.cctor()
extern "C" void List_1__cctor_m44550_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m44550(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m44550_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt64>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m44551_gshared (List_1_t7273 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m44551(__this, method) (( Object_t* (*) (List_1_t7273 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m44551_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m44552_gshared (List_1_t7273 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m44552(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7273 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m44552_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m44553_gshared (List_1_t7273 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m44553(__this, method) (( Object_t * (*) (List_1_t7273 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m44553_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m44554_gshared (List_1_t7273 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m44554(__this, ___item, method) (( int32_t (*) (List_1_t7273 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m44554_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m44555_gshared (List_1_t7273 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m44555(__this, ___item, method) (( bool (*) (List_1_t7273 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m44555_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m44556_gshared (List_1_t7273 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m44556(__this, ___item, method) (( int32_t (*) (List_1_t7273 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m44556_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m44557_gshared (List_1_t7273 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m44557(__this, ___index, ___item, method) (( void (*) (List_1_t7273 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m44557_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m44558_gshared (List_1_t7273 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m44558(__this, ___item, method) (( void (*) (List_1_t7273 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m44558_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m44559_gshared (List_1_t7273 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m44559(__this, method) (( bool (*) (List_1_t7273 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m44559_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m44560_gshared (List_1_t7273 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m44560(__this, method) (( bool (*) (List_1_t7273 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m44560_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m44561_gshared (List_1_t7273 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m44561(__this, method) (( Object_t * (*) (List_1_t7273 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m44561_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m44562_gshared (List_1_t7273 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m44562(__this, method) (( bool (*) (List_1_t7273 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m44562_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m44563_gshared (List_1_t7273 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m44563(__this, method) (( bool (*) (List_1_t7273 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m44563_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m44564_gshared (List_1_t7273 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m44564(__this, ___index, method) (( Object_t * (*) (List_1_t7273 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m44564_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m44565_gshared (List_1_t7273 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m44565(__this, ___index, ___value, method) (( void (*) (List_1_t7273 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m44565_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Add(T)
extern "C" void List_1_Add_m44566_gshared (List_1_t7273 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Add_m44566(__this, ___item, method) (( void (*) (List_1_t7273 *, uint64_t, const MethodInfo*))List_1_Add_m44566_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m44567_gshared (List_1_t7273 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m44567(__this, ___newCount, method) (( void (*) (List_1_t7273 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m44567_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m44568_gshared (List_1_t7273 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m44568(__this, ___idx, ___count, method) (( void (*) (List_1_t7273 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m44568_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m44569_gshared (List_1_t7273 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m44569(__this, ___collection, method) (( void (*) (List_1_t7273 *, Object_t*, const MethodInfo*))List_1_AddCollection_m44569_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m44570_gshared (List_1_t7273 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m44570(__this, ___enumerable, method) (( void (*) (List_1_t7273 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m44570_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m44571_gshared (List_1_t7273 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m44571(__this, ___collection, method) (( void (*) (List_1_t7273 *, Object_t*, const MethodInfo*))List_1_AddRange_m44571_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt64>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7275 * List_1_AsReadOnly_m44572_gshared (List_1_t7273 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m44572(__this, method) (( ReadOnlyCollection_1_t7275 * (*) (List_1_t7273 *, const MethodInfo*))List_1_AsReadOnly_m44572_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Clear()
extern "C" void List_1_Clear_m44573_gshared (List_1_t7273 * __this, const MethodInfo* method);
#define List_1_Clear_m44573(__this, method) (( void (*) (List_1_t7273 *, const MethodInfo*))List_1_Clear_m44573_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::Contains(T)
extern "C" bool List_1_Contains_m44574_gshared (List_1_t7273 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Contains_m44574(__this, ___item, method) (( bool (*) (List_1_t7273 *, uint64_t, const MethodInfo*))List_1_Contains_m44574_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m44575_gshared (List_1_t7273 * __this, UInt64U5BU5D_t5289* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m44575(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7273 *, UInt64U5BU5D_t5289*, int32_t, const MethodInfo*))List_1_CopyTo_m44575_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt64>::Find(System.Predicate`1<T>)
extern "C" uint64_t List_1_Find_m44576_gshared (List_1_t7273 * __this, Predicate_1_t7280 * ___match, const MethodInfo* method);
#define List_1_Find_m44576(__this, ___match, method) (( uint64_t (*) (List_1_t7273 *, Predicate_1_t7280 *, const MethodInfo*))List_1_Find_m44576_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m44577_gshared (Object_t * __this /* static, unused */, Predicate_1_t7280 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m44577(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7280 *, const MethodInfo*))List_1_CheckMatch_m44577_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m44578_gshared (List_1_t7273 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7280 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m44578(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7273 *, int32_t, int32_t, Predicate_1_t7280 *, const MethodInfo*))List_1_GetIndex_m44578_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt64>::GetEnumerator()
extern "C" Enumerator_t7274  List_1_GetEnumerator_m44579_gshared (List_1_t7273 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m44579(__this, method) (( Enumerator_t7274  (*) (List_1_t7273 *, const MethodInfo*))List_1_GetEnumerator_m44579_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt64>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7273 * List_1_GetRange_m44580_gshared (List_1_t7273 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m44580(__this, ___index, ___count, method) (( List_1_t7273 * (*) (List_1_t7273 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m44580_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m44581_gshared (List_1_t7273 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m44581(__this, ___item, method) (( int32_t (*) (List_1_t7273 *, uint64_t, const MethodInfo*))List_1_IndexOf_m44581_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m44582_gshared (List_1_t7273 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m44582(__this, ___start, ___delta, method) (( void (*) (List_1_t7273 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m44582_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m44583_gshared (List_1_t7273 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m44583(__this, ___index, method) (( void (*) (List_1_t7273 *, int32_t, const MethodInfo*))List_1_CheckIndex_m44583_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m44584_gshared (List_1_t7273 * __this, int32_t ___index, uint64_t ___item, const MethodInfo* method);
#define List_1_Insert_m44584(__this, ___index, ___item, method) (( void (*) (List_1_t7273 *, int32_t, uint64_t, const MethodInfo*))List_1_Insert_m44584_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m44585_gshared (List_1_t7273 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m44585(__this, ___collection, method) (( void (*) (List_1_t7273 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m44585_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m44586_gshared (List_1_t7273 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m44586(__this, ___index, ___collection, method) (( void (*) (List_1_t7273 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m44586_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m44587_gshared (List_1_t7273 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m44587(__this, ___index, ___collection, method) (( void (*) (List_1_t7273 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m44587_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m44588_gshared (List_1_t7273 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m44588(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7273 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m44588_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt64>::Remove(T)
extern "C" bool List_1_Remove_m44589_gshared (List_1_t7273 * __this, uint64_t ___item, const MethodInfo* method);
#define List_1_Remove_m44589(__this, ___item, method) (( bool (*) (List_1_t7273 *, uint64_t, const MethodInfo*))List_1_Remove_m44589_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m44590_gshared (List_1_t7273 * __this, Predicate_1_t7280 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m44590(__this, ___match, method) (( int32_t (*) (List_1_t7273 *, Predicate_1_t7280 *, const MethodInfo*))List_1_RemoveAll_m44590_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m44591_gshared (List_1_t7273 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m44591(__this, ___index, method) (( void (*) (List_1_t7273 *, int32_t, const MethodInfo*))List_1_RemoveAt_m44591_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m44592_gshared (List_1_t7273 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m44592(__this, ___index, ___count, method) (( void (*) (List_1_t7273 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m44592_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Reverse()
extern "C" void List_1_Reverse_m44593_gshared (List_1_t7273 * __this, const MethodInfo* method);
#define List_1_Reverse_m44593(__this, method) (( void (*) (List_1_t7273 *, const MethodInfo*))List_1_Reverse_m44593_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort()
extern "C" void List_1_Sort_m44594_gshared (List_1_t7273 * __this, const MethodInfo* method);
#define List_1_Sort_m44594(__this, method) (( void (*) (List_1_t7273 *, const MethodInfo*))List_1_Sort_m44594_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m44595_gshared (List_1_t7273 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m44595(__this, ___comparer, method) (( void (*) (List_1_t7273 *, Object_t*, const MethodInfo*))List_1_Sort_m44595_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m44596_gshared (List_1_t7273 * __this, Comparison_1_t7284 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m44596(__this, ___comparison, method) (( void (*) (List_1_t7273 *, Comparison_1_t7284 *, const MethodInfo*))List_1_Sort_m44596_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt64>::ToArray()
extern "C" UInt64U5BU5D_t5289* List_1_ToArray_m44597_gshared (List_1_t7273 * __this, const MethodInfo* method);
#define List_1_ToArray_m44597(__this, method) (( UInt64U5BU5D_t5289* (*) (List_1_t7273 *, const MethodInfo*))List_1_ToArray_m44597_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::TrimExcess()
extern "C" void List_1_TrimExcess_m44598_gshared (List_1_t7273 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m44598(__this, method) (( void (*) (List_1_t7273 *, const MethodInfo*))List_1_TrimExcess_m44598_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m44599_gshared (List_1_t7273 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m44599(__this, method) (( int32_t (*) (List_1_t7273 *, const MethodInfo*))List_1_get_Capacity_m44599_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m44600_gshared (List_1_t7273 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m44600(__this, ___value, method) (( void (*) (List_1_t7273 *, int32_t, const MethodInfo*))List_1_set_Capacity_m44600_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt64>::get_Count()
extern "C" int32_t List_1_get_Count_m44601_gshared (List_1_t7273 * __this, const MethodInfo* method);
#define List_1_get_Count_m44601(__this, method) (( int32_t (*) (List_1_t7273 *, const MethodInfo*))List_1_get_Count_m44601_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt64>::get_Item(System.Int32)
extern "C" uint64_t List_1_get_Item_m44602_gshared (List_1_t7273 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m44602(__this, ___index, method) (( uint64_t (*) (List_1_t7273 *, int32_t, const MethodInfo*))List_1_get_Item_m44602_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt64>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m44603_gshared (List_1_t7273 * __this, int32_t ___index, uint64_t ___value, const MethodInfo* method);
#define List_1_set_Item_m44603(__this, ___index, ___value, method) (( void (*) (List_1_t7273 *, int32_t, uint64_t, const MethodInfo*))List_1_set_Item_m44603_gshared)(__this, ___index, ___value, method)
