#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct List_1_t7895;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerable_1_t7275;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t7894;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t7276;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct ICollection_1_t9401;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct ReadOnlyCollection_1_t7898;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Predicate_1_t7902;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IComparer_1_t9402;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Comparison_1_t7905;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_90.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor()
extern "C" void List_1__ctor_m54547_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1__ctor_m54547(__this, method) (( void (*) (List_1_t7895 *, const MethodInfo*))List_1__ctor_m54547_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m54548_gshared (List_1_t7895 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m54548(__this, ___collection, method) (( void (*) (List_1_t7895 *, Object_t*, const MethodInfo*))List_1__ctor_m54548_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m54549_gshared (List_1_t7895 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m54549(__this, ___capacity, method) (( void (*) (List_1_t7895 *, int32_t, const MethodInfo*))List_1__ctor_m54549_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m54550_gshared (List_1_t7895 * __this, KeyValuePair_2U5BU5D_t7894* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m54550(__this, ___data, ___size, method) (( void (*) (List_1_t7895 *, KeyValuePair_2U5BU5D_t7894*, int32_t, const MethodInfo*))List_1__ctor_m54550_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.cctor()
extern "C" void List_1__cctor_m54551_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m54551(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m54551_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54552_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54552(__this, method) (( Object_t* (*) (List_1_t7895 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54552_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m54553_gshared (List_1_t7895 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m54553(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7895 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m54553_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m54554_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m54554(__this, method) (( Object_t * (*) (List_1_t7895 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m54554_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m54555_gshared (List_1_t7895 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m54555(__this, ___item, method) (( int32_t (*) (List_1_t7895 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m54555_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m54556_gshared (List_1_t7895 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m54556(__this, ___item, method) (( bool (*) (List_1_t7895 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m54556_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m54557_gshared (List_1_t7895 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m54557(__this, ___item, method) (( int32_t (*) (List_1_t7895 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m54557_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m54558_gshared (List_1_t7895 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m54558(__this, ___index, ___item, method) (( void (*) (List_1_t7895 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m54558_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m54559_gshared (List_1_t7895 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m54559(__this, ___item, method) (( void (*) (List_1_t7895 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m54559_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54560_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54560(__this, method) (( bool (*) (List_1_t7895 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54560_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m54561_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m54561(__this, method) (( bool (*) (List_1_t7895 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m54561_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m54562_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m54562(__this, method) (( Object_t * (*) (List_1_t7895 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m54562_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m54563_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m54563(__this, method) (( bool (*) (List_1_t7895 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m54563_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m54564_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m54564(__this, method) (( bool (*) (List_1_t7895 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m54564_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m54565_gshared (List_1_t7895 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m54565(__this, ___index, method) (( Object_t * (*) (List_1_t7895 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m54565_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m54566_gshared (List_1_t7895 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m54566(__this, ___index, ___value, method) (( void (*) (List_1_t7895 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m54566_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Add(T)
extern "C" void List_1_Add_m54567_gshared (List_1_t7895 * __this, KeyValuePair_2_t7000  ___item, const MethodInfo* method);
#define List_1_Add_m54567(__this, ___item, method) (( void (*) (List_1_t7895 *, KeyValuePair_2_t7000 , const MethodInfo*))List_1_Add_m54567_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m54568_gshared (List_1_t7895 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m54568(__this, ___newCount, method) (( void (*) (List_1_t7895 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m54568_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m54569_gshared (List_1_t7895 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m54569(__this, ___idx, ___count, method) (( void (*) (List_1_t7895 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m54569_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m54570_gshared (List_1_t7895 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m54570(__this, ___collection, method) (( void (*) (List_1_t7895 *, Object_t*, const MethodInfo*))List_1_AddCollection_m54570_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m54571_gshared (List_1_t7895 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m54571(__this, ___enumerable, method) (( void (*) (List_1_t7895 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m54571_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m54572_gshared (List_1_t7895 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m54572(__this, ___collection, method) (( void (*) (List_1_t7895 *, Object_t*, const MethodInfo*))List_1_AddRange_m54572_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7898 * List_1_AsReadOnly_m54573_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m54573(__this, method) (( ReadOnlyCollection_1_t7898 * (*) (List_1_t7895 *, const MethodInfo*))List_1_AsReadOnly_m54573_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Clear()
extern "C" void List_1_Clear_m54574_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_Clear_m54574(__this, method) (( void (*) (List_1_t7895 *, const MethodInfo*))List_1_Clear_m54574_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Contains(T)
extern "C" bool List_1_Contains_m54575_gshared (List_1_t7895 * __this, KeyValuePair_2_t7000  ___item, const MethodInfo* method);
#define List_1_Contains_m54575(__this, ___item, method) (( bool (*) (List_1_t7895 *, KeyValuePair_2_t7000 , const MethodInfo*))List_1_Contains_m54575_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m54576_gshared (List_1_t7895 * __this, KeyValuePair_2U5BU5D_t7894* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m54576(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7895 *, KeyValuePair_2U5BU5D_t7894*, int32_t, const MethodInfo*))List_1_CopyTo_m54576_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7000  List_1_Find_m54577_gshared (List_1_t7895 * __this, Predicate_1_t7902 * ___match, const MethodInfo* method);
#define List_1_Find_m54577(__this, ___match, method) (( KeyValuePair_2_t7000  (*) (List_1_t7895 *, Predicate_1_t7902 *, const MethodInfo*))List_1_Find_m54577_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m54578_gshared (Object_t * __this /* static, unused */, Predicate_1_t7902 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m54578(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7902 *, const MethodInfo*))List_1_CheckMatch_m54578_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m54579_gshared (List_1_t7895 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7902 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m54579(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7895 *, int32_t, int32_t, Predicate_1_t7902 *, const MethodInfo*))List_1_GetIndex_m54579_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetEnumerator()
extern "C" Enumerator_t7896  List_1_GetEnumerator_m54580_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m54580(__this, method) (( Enumerator_t7896  (*) (List_1_t7895 *, const MethodInfo*))List_1_GetEnumerator_m54580_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7895 * List_1_GetRange_m54581_gshared (List_1_t7895 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m54581(__this, ___index, ___count, method) (( List_1_t7895 * (*) (List_1_t7895 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m54581_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m54582_gshared (List_1_t7895 * __this, KeyValuePair_2_t7000  ___item, const MethodInfo* method);
#define List_1_IndexOf_m54582(__this, ___item, method) (( int32_t (*) (List_1_t7895 *, KeyValuePair_2_t7000 , const MethodInfo*))List_1_IndexOf_m54582_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m54583_gshared (List_1_t7895 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m54583(__this, ___start, ___delta, method) (( void (*) (List_1_t7895 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m54583_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m54584_gshared (List_1_t7895 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m54584(__this, ___index, method) (( void (*) (List_1_t7895 *, int32_t, const MethodInfo*))List_1_CheckIndex_m54584_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m54585_gshared (List_1_t7895 * __this, int32_t ___index, KeyValuePair_2_t7000  ___item, const MethodInfo* method);
#define List_1_Insert_m54585(__this, ___index, ___item, method) (( void (*) (List_1_t7895 *, int32_t, KeyValuePair_2_t7000 , const MethodInfo*))List_1_Insert_m54585_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m54586_gshared (List_1_t7895 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m54586(__this, ___collection, method) (( void (*) (List_1_t7895 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m54586_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m54587_gshared (List_1_t7895 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m54587(__this, ___index, ___collection, method) (( void (*) (List_1_t7895 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m54587_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m54588_gshared (List_1_t7895 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m54588(__this, ___index, ___collection, method) (( void (*) (List_1_t7895 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m54588_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m54589_gshared (List_1_t7895 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m54589(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7895 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m54589_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Remove(T)
extern "C" bool List_1_Remove_m54590_gshared (List_1_t7895 * __this, KeyValuePair_2_t7000  ___item, const MethodInfo* method);
#define List_1_Remove_m54590(__this, ___item, method) (( bool (*) (List_1_t7895 *, KeyValuePair_2_t7000 , const MethodInfo*))List_1_Remove_m54590_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m54591_gshared (List_1_t7895 * __this, Predicate_1_t7902 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m54591(__this, ___match, method) (( int32_t (*) (List_1_t7895 *, Predicate_1_t7902 *, const MethodInfo*))List_1_RemoveAll_m54591_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m54592_gshared (List_1_t7895 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m54592(__this, ___index, method) (( void (*) (List_1_t7895 *, int32_t, const MethodInfo*))List_1_RemoveAt_m54592_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m54593_gshared (List_1_t7895 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m54593(__this, ___index, ___count, method) (( void (*) (List_1_t7895 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m54593_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Reverse()
extern "C" void List_1_Reverse_m54594_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_Reverse_m54594(__this, method) (( void (*) (List_1_t7895 *, const MethodInfo*))List_1_Reverse_m54594_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort()
extern "C" void List_1_Sort_m54595_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_Sort_m54595(__this, method) (( void (*) (List_1_t7895 *, const MethodInfo*))List_1_Sort_m54595_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m54596_gshared (List_1_t7895 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m54596(__this, ___comparer, method) (( void (*) (List_1_t7895 *, Object_t*, const MethodInfo*))List_1_Sort_m54596_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m54597_gshared (List_1_t7895 * __this, Comparison_1_t7905 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m54597(__this, ___comparison, method) (( void (*) (List_1_t7895 *, Comparison_1_t7905 *, const MethodInfo*))List_1_Sort_m54597_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7894* List_1_ToArray_m54598_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_ToArray_m54598(__this, method) (( KeyValuePair_2U5BU5D_t7894* (*) (List_1_t7895 *, const MethodInfo*))List_1_ToArray_m54598_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::TrimExcess()
extern "C" void List_1_TrimExcess_m54599_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m54599(__this, method) (( void (*) (List_1_t7895 *, const MethodInfo*))List_1_TrimExcess_m54599_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m54600_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m54600(__this, method) (( int32_t (*) (List_1_t7895 *, const MethodInfo*))List_1_get_Capacity_m54600_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m54601_gshared (List_1_t7895 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m54601(__this, ___value, method) (( void (*) (List_1_t7895 *, int32_t, const MethodInfo*))List_1_set_Capacity_m54601_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Count()
extern "C" int32_t List_1_get_Count_m54602_gshared (List_1_t7895 * __this, const MethodInfo* method);
#define List_1_get_Count_m54602(__this, method) (( int32_t (*) (List_1_t7895 *, const MethodInfo*))List_1_get_Count_m54602_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7000  List_1_get_Item_m54603_gshared (List_1_t7895 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m54603(__this, ___index, method) (( KeyValuePair_2_t7000  (*) (List_1_t7895 *, int32_t, const MethodInfo*))List_1_get_Item_m54603_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m54604_gshared (List_1_t7895 * __this, int32_t ___index, KeyValuePair_2_t7000  ___value, const MethodInfo* method);
#define List_1_set_Item_m54604(__this, ___index, ___value, method) (( void (*) (List_1_t7895 *, int32_t, KeyValuePair_2_t7000 , const MethodInfo*))List_1_set_Item_m54604_gshared)(__this, ___index, ___value, method)
