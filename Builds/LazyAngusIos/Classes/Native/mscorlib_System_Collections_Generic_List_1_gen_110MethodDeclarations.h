#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct List_1_t7976;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerable_1_t7967;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7975;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t7968;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ICollection_1_t9417;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ReadOnlyCollection_1_t7979;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Predicate_1_t7983;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IComparer_1_t9418;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Comparison_1_t7986;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_93.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor()
extern "C" void List_1__ctor_m55536_gshared (List_1_t7976 * __this, const MethodInfo* method);
#define List_1__ctor_m55536(__this, method) (( void (*) (List_1_t7976 *, const MethodInfo*))List_1__ctor_m55536_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m55537_gshared (List_1_t7976 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m55537(__this, ___collection, method) (( void (*) (List_1_t7976 *, Object_t*, const MethodInfo*))List_1__ctor_m55537_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m55538_gshared (List_1_t7976 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m55538(__this, ___capacity, method) (( void (*) (List_1_t7976 *, int32_t, const MethodInfo*))List_1__ctor_m55538_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m55539_gshared (List_1_t7976 * __this, KeyValuePair_2U5BU5D_t7975* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m55539(__this, ___data, ___size, method) (( void (*) (List_1_t7976 *, KeyValuePair_2U5BU5D_t7975*, int32_t, const MethodInfo*))List_1__ctor_m55539_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.cctor()
extern "C" void List_1__cctor_m55540_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m55540(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m55540_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55541_gshared (List_1_t7976 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55541(__this, method) (( Object_t* (*) (List_1_t7976 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m55542_gshared (List_1_t7976 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m55542(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7976 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m55542_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m55543_gshared (List_1_t7976 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m55543(__this, method) (( Object_t * (*) (List_1_t7976 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m55543_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m55544_gshared (List_1_t7976 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m55544(__this, ___item, method) (( int32_t (*) (List_1_t7976 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m55544_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m55545_gshared (List_1_t7976 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m55545(__this, ___item, method) (( bool (*) (List_1_t7976 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m55545_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m55546_gshared (List_1_t7976 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m55546(__this, ___item, method) (( int32_t (*) (List_1_t7976 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m55546_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m55547_gshared (List_1_t7976 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m55547(__this, ___index, ___item, method) (( void (*) (List_1_t7976 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m55547_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m55548_gshared (List_1_t7976 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m55548(__this, ___item, method) (( void (*) (List_1_t7976 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m55548_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55549_gshared (List_1_t7976 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55549(__this, method) (( bool (*) (List_1_t7976 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55549_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m55550_gshared (List_1_t7976 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m55550(__this, method) (( bool (*) (List_1_t7976 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m55550_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m55551_gshared (List_1_t7976 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m55551(__this, method) (( Object_t * (*) (List_1_t7976 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m55551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m55552_gshared (List_1_t7976 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m55552(__this, method) (( bool (*) (List_1_t7976 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m55552_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m55553_gshared (List_1_t7976 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m55553(__this, method) (( bool (*) (List_1_t7976 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m55553_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m55554_gshared (List_1_t7976 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m55554(__this, ___index, method) (( Object_t * (*) (List_1_t7976 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m55554_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m55555_gshared (List_1_t7976 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m55555(__this, ___index, ___value, method) (( void (*) (List_1_t7976 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m55555_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Add(T)
extern "C" void List_1_Add_m55556_gshared (List_1_t7976 * __this, KeyValuePair_2_t7024  ___item, const MethodInfo* method);
#define List_1_Add_m55556(__this, ___item, method) (( void (*) (List_1_t7976 *, KeyValuePair_2_t7024 , const MethodInfo*))List_1_Add_m55556_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m55557_gshared (List_1_t7976 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m55557(__this, ___newCount, method) (( void (*) (List_1_t7976 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m55557_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m55558_gshared (List_1_t7976 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m55558(__this, ___idx, ___count, method) (( void (*) (List_1_t7976 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m55558_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m55559_gshared (List_1_t7976 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m55559(__this, ___collection, method) (( void (*) (List_1_t7976 *, Object_t*, const MethodInfo*))List_1_AddCollection_m55559_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m55560_gshared (List_1_t7976 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m55560(__this, ___enumerable, method) (( void (*) (List_1_t7976 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m55560_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m55561_gshared (List_1_t7976 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m55561(__this, ___collection, method) (( void (*) (List_1_t7976 *, Object_t*, const MethodInfo*))List_1_AddRange_m55561_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7979 * List_1_AsReadOnly_m55562_gshared (List_1_t7976 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m55562(__this, method) (( ReadOnlyCollection_1_t7979 * (*) (List_1_t7976 *, const MethodInfo*))List_1_AsReadOnly_m55562_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Clear()
extern "C" void List_1_Clear_m55563_gshared (List_1_t7976 * __this, const MethodInfo* method);
#define List_1_Clear_m55563(__this, method) (( void (*) (List_1_t7976 *, const MethodInfo*))List_1_Clear_m55563_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Contains(T)
extern "C" bool List_1_Contains_m55564_gshared (List_1_t7976 * __this, KeyValuePair_2_t7024  ___item, const MethodInfo* method);
#define List_1_Contains_m55564(__this, ___item, method) (( bool (*) (List_1_t7976 *, KeyValuePair_2_t7024 , const MethodInfo*))List_1_Contains_m55564_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m55565_gshared (List_1_t7976 * __this, KeyValuePair_2U5BU5D_t7975* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m55565(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7976 *, KeyValuePair_2U5BU5D_t7975*, int32_t, const MethodInfo*))List_1_CopyTo_m55565_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7024  List_1_Find_m55566_gshared (List_1_t7976 * __this, Predicate_1_t7983 * ___match, const MethodInfo* method);
#define List_1_Find_m55566(__this, ___match, method) (( KeyValuePair_2_t7024  (*) (List_1_t7976 *, Predicate_1_t7983 *, const MethodInfo*))List_1_Find_m55566_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m55567_gshared (Object_t * __this /* static, unused */, Predicate_1_t7983 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m55567(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7983 *, const MethodInfo*))List_1_CheckMatch_m55567_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m55568_gshared (List_1_t7976 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7983 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m55568(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7976 *, int32_t, int32_t, Predicate_1_t7983 *, const MethodInfo*))List_1_GetIndex_m55568_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetEnumerator()
extern "C" Enumerator_t7977  List_1_GetEnumerator_m55569_gshared (List_1_t7976 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m55569(__this, method) (( Enumerator_t7977  (*) (List_1_t7976 *, const MethodInfo*))List_1_GetEnumerator_m55569_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7976 * List_1_GetRange_m55570_gshared (List_1_t7976 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m55570(__this, ___index, ___count, method) (( List_1_t7976 * (*) (List_1_t7976 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m55570_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m55571_gshared (List_1_t7976 * __this, KeyValuePair_2_t7024  ___item, const MethodInfo* method);
#define List_1_IndexOf_m55571(__this, ___item, method) (( int32_t (*) (List_1_t7976 *, KeyValuePair_2_t7024 , const MethodInfo*))List_1_IndexOf_m55571_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m55572_gshared (List_1_t7976 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m55572(__this, ___start, ___delta, method) (( void (*) (List_1_t7976 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m55572_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m55573_gshared (List_1_t7976 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m55573(__this, ___index, method) (( void (*) (List_1_t7976 *, int32_t, const MethodInfo*))List_1_CheckIndex_m55573_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m55574_gshared (List_1_t7976 * __this, int32_t ___index, KeyValuePair_2_t7024  ___item, const MethodInfo* method);
#define List_1_Insert_m55574(__this, ___index, ___item, method) (( void (*) (List_1_t7976 *, int32_t, KeyValuePair_2_t7024 , const MethodInfo*))List_1_Insert_m55574_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m55575_gshared (List_1_t7976 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m55575(__this, ___collection, method) (( void (*) (List_1_t7976 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m55575_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m55576_gshared (List_1_t7976 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m55576(__this, ___index, ___collection, method) (( void (*) (List_1_t7976 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m55576_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m55577_gshared (List_1_t7976 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m55577(__this, ___index, ___collection, method) (( void (*) (List_1_t7976 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m55577_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m55578_gshared (List_1_t7976 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m55578(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7976 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m55578_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Remove(T)
extern "C" bool List_1_Remove_m55579_gshared (List_1_t7976 * __this, KeyValuePair_2_t7024  ___item, const MethodInfo* method);
#define List_1_Remove_m55579(__this, ___item, method) (( bool (*) (List_1_t7976 *, KeyValuePair_2_t7024 , const MethodInfo*))List_1_Remove_m55579_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m55580_gshared (List_1_t7976 * __this, Predicate_1_t7983 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m55580(__this, ___match, method) (( int32_t (*) (List_1_t7976 *, Predicate_1_t7983 *, const MethodInfo*))List_1_RemoveAll_m55580_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m55581_gshared (List_1_t7976 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m55581(__this, ___index, method) (( void (*) (List_1_t7976 *, int32_t, const MethodInfo*))List_1_RemoveAt_m55581_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m55582_gshared (List_1_t7976 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m55582(__this, ___index, ___count, method) (( void (*) (List_1_t7976 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m55582_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Reverse()
extern "C" void List_1_Reverse_m55583_gshared (List_1_t7976 * __this, const MethodInfo* method);
#define List_1_Reverse_m55583(__this, method) (( void (*) (List_1_t7976 *, const MethodInfo*))List_1_Reverse_m55583_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort()
extern "C" void List_1_Sort_m55584_gshared (List_1_t7976 * __this, const MethodInfo* method);
#define List_1_Sort_m55584(__this, method) (( void (*) (List_1_t7976 *, const MethodInfo*))List_1_Sort_m55584_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m55585_gshared (List_1_t7976 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m55585(__this, ___comparer, method) (( void (*) (List_1_t7976 *, Object_t*, const MethodInfo*))List_1_Sort_m55585_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m55586_gshared (List_1_t7976 * __this, Comparison_1_t7986 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m55586(__this, ___comparison, method) (( void (*) (List_1_t7976 *, Comparison_1_t7986 *, const MethodInfo*))List_1_Sort_m55586_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7975* List_1_ToArray_m55587_gshared (List_1_t7976 * __this, const MethodInfo* method);
#define List_1_ToArray_m55587(__this, method) (( KeyValuePair_2U5BU5D_t7975* (*) (List_1_t7976 *, const MethodInfo*))List_1_ToArray_m55587_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::TrimExcess()
extern "C" void List_1_TrimExcess_m55588_gshared (List_1_t7976 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m55588(__this, method) (( void (*) (List_1_t7976 *, const MethodInfo*))List_1_TrimExcess_m55588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m55589_gshared (List_1_t7976 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m55589(__this, method) (( int32_t (*) (List_1_t7976 *, const MethodInfo*))List_1_get_Capacity_m55589_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m55590_gshared (List_1_t7976 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m55590(__this, ___value, method) (( void (*) (List_1_t7976 *, int32_t, const MethodInfo*))List_1_set_Capacity_m55590_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Count()
extern "C" int32_t List_1_get_Count_m55591_gshared (List_1_t7976 * __this, const MethodInfo* method);
#define List_1_get_Count_m55591(__this, method) (( int32_t (*) (List_1_t7976 *, const MethodInfo*))List_1_get_Count_m55591_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7024  List_1_get_Item_m55592_gshared (List_1_t7976 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m55592(__this, ___index, method) (( KeyValuePair_2_t7024  (*) (List_1_t7976 *, int32_t, const MethodInfo*))List_1_get_Item_m55592_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m55593_gshared (List_1_t7976 * __this, int32_t ___index, KeyValuePair_2_t7024  ___value, const MethodInfo* method);
#define List_1_set_Item_m55593(__this, ___index, ___value, method) (( void (*) (List_1_t7976 *, int32_t, KeyValuePair_2_t7024 , const MethodInfo*))List_1_set_Item_m55593_gshared)(__this, ___index, ___value, method)
