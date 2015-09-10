#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct List_1_t8336;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IEnumerable_1_t7842;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8335;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IEnumerator_1_t7843;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct ICollection_1_t10036;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct ReadOnlyCollection_1_t8339;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Predicate_1_t8343;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct IComparer_1_t10037;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
struct Comparison_1_t8346;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_90.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor()
extern "C" void List_1__ctor_m57478_gshared (List_1_t8336 * __this, const MethodInfo* method);
#define List_1__ctor_m57478(__this, method) (( void (*) (List_1_t8336 *, const MethodInfo*))List_1__ctor_m57478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m57479_gshared (List_1_t8336 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m57479(__this, ___collection, method) (( void (*) (List_1_t8336 *, Object_t*, const MethodInfo*))List_1__ctor_m57479_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m57480_gshared (List_1_t8336 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m57480(__this, ___capacity, method) (( void (*) (List_1_t8336 *, int32_t, const MethodInfo*))List_1__ctor_m57480_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m57481_gshared (List_1_t8336 * __this, KeyValuePair_2U5BU5D_t8335* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m57481(__this, ___data, ___size, method) (( void (*) (List_1_t8336 *, KeyValuePair_2U5BU5D_t8335*, int32_t, const MethodInfo*))List_1__ctor_m57481_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::.cctor()
extern "C" void List_1__cctor_m57482_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m57482(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m57482_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m57483_gshared (List_1_t8336 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m57483(__this, method) (( Object_t* (*) (List_1_t8336 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m57483_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m57484_gshared (List_1_t8336 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m57484(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8336 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m57484_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m57485_gshared (List_1_t8336 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m57485(__this, method) (( Object_t * (*) (List_1_t8336 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m57485_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m57486_gshared (List_1_t8336 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m57486(__this, ___item, method) (( int32_t (*) (List_1_t8336 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m57486_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m57487_gshared (List_1_t8336 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m57487(__this, ___item, method) (( bool (*) (List_1_t8336 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m57487_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m57488_gshared (List_1_t8336 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m57488(__this, ___item, method) (( int32_t (*) (List_1_t8336 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m57488_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m57489_gshared (List_1_t8336 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m57489(__this, ___index, ___item, method) (( void (*) (List_1_t8336 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m57489_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m57490_gshared (List_1_t8336 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m57490(__this, ___item, method) (( void (*) (List_1_t8336 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m57490_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m57491_gshared (List_1_t8336 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m57491(__this, method) (( bool (*) (List_1_t8336 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m57491_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m57492_gshared (List_1_t8336 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m57492(__this, method) (( bool (*) (List_1_t8336 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m57492_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m57493_gshared (List_1_t8336 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m57493(__this, method) (( Object_t * (*) (List_1_t8336 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m57493_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m57494_gshared (List_1_t8336 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m57494(__this, method) (( bool (*) (List_1_t8336 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m57494_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m57495_gshared (List_1_t8336 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m57495(__this, method) (( bool (*) (List_1_t8336 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m57495_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m57496_gshared (List_1_t8336 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m57496(__this, ___index, method) (( Object_t * (*) (List_1_t8336 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m57496_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m57497_gshared (List_1_t8336 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m57497(__this, ___index, ___value, method) (( void (*) (List_1_t8336 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m57497_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Add(T)
extern "C" void List_1_Add_m57498_gshared (List_1_t8336 * __this, KeyValuePair_2_t7838  ___item, const MethodInfo* method);
#define List_1_Add_m57498(__this, ___item, method) (( void (*) (List_1_t8336 *, KeyValuePair_2_t7838 , const MethodInfo*))List_1_Add_m57498_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m57499_gshared (List_1_t8336 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m57499(__this, ___newCount, method) (( void (*) (List_1_t8336 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m57499_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m57500_gshared (List_1_t8336 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m57500(__this, ___idx, ___count, method) (( void (*) (List_1_t8336 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m57500_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m57501_gshared (List_1_t8336 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m57501(__this, ___collection, method) (( void (*) (List_1_t8336 *, Object_t*, const MethodInfo*))List_1_AddCollection_m57501_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m57502_gshared (List_1_t8336 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m57502(__this, ___enumerable, method) (( void (*) (List_1_t8336 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m57502_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m57503_gshared (List_1_t8336 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m57503(__this, ___collection, method) (( void (*) (List_1_t8336 *, Object_t*, const MethodInfo*))List_1_AddRange_m57503_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8339 * List_1_AsReadOnly_m57504_gshared (List_1_t8336 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m57504(__this, method) (( ReadOnlyCollection_1_t8339 * (*) (List_1_t8336 *, const MethodInfo*))List_1_AsReadOnly_m57504_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Clear()
extern "C" void List_1_Clear_m57505_gshared (List_1_t8336 * __this, const MethodInfo* method);
#define List_1_Clear_m57505(__this, method) (( void (*) (List_1_t8336 *, const MethodInfo*))List_1_Clear_m57505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Contains(T)
extern "C" bool List_1_Contains_m57506_gshared (List_1_t8336 * __this, KeyValuePair_2_t7838  ___item, const MethodInfo* method);
#define List_1_Contains_m57506(__this, ___item, method) (( bool (*) (List_1_t8336 *, KeyValuePair_2_t7838 , const MethodInfo*))List_1_Contains_m57506_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m57507_gshared (List_1_t8336 * __this, KeyValuePair_2U5BU5D_t8335* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m57507(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8336 *, KeyValuePair_2U5BU5D_t8335*, int32_t, const MethodInfo*))List_1_CopyTo_m57507_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7838  List_1_Find_m57508_gshared (List_1_t8336 * __this, Predicate_1_t8343 * ___match, const MethodInfo* method);
#define List_1_Find_m57508(__this, ___match, method) (( KeyValuePair_2_t7838  (*) (List_1_t8336 *, Predicate_1_t8343 *, const MethodInfo*))List_1_Find_m57508_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m57509_gshared (Object_t * __this /* static, unused */, Predicate_1_t8343 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m57509(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8343 *, const MethodInfo*))List_1_CheckMatch_m57509_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m57510_gshared (List_1_t8336 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8343 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m57510(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8336 *, int32_t, int32_t, Predicate_1_t8343 *, const MethodInfo*))List_1_GetIndex_m57510_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetEnumerator()
extern "C" Enumerator_t8337  List_1_GetEnumerator_m57511_gshared (List_1_t8336 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m57511(__this, method) (( Enumerator_t8337  (*) (List_1_t8336 *, const MethodInfo*))List_1_GetEnumerator_m57511_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8336 * List_1_GetRange_m57512_gshared (List_1_t8336 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m57512(__this, ___index, ___count, method) (( List_1_t8336 * (*) (List_1_t8336 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m57512_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m57513_gshared (List_1_t8336 * __this, KeyValuePair_2_t7838  ___item, const MethodInfo* method);
#define List_1_IndexOf_m57513(__this, ___item, method) (( int32_t (*) (List_1_t8336 *, KeyValuePair_2_t7838 , const MethodInfo*))List_1_IndexOf_m57513_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m57514_gshared (List_1_t8336 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m57514(__this, ___start, ___delta, method) (( void (*) (List_1_t8336 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m57514_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m57515_gshared (List_1_t8336 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m57515(__this, ___index, method) (( void (*) (List_1_t8336 *, int32_t, const MethodInfo*))List_1_CheckIndex_m57515_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m57516_gshared (List_1_t8336 * __this, int32_t ___index, KeyValuePair_2_t7838  ___item, const MethodInfo* method);
#define List_1_Insert_m57516(__this, ___index, ___item, method) (( void (*) (List_1_t8336 *, int32_t, KeyValuePair_2_t7838 , const MethodInfo*))List_1_Insert_m57516_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m57517_gshared (List_1_t8336 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m57517(__this, ___collection, method) (( void (*) (List_1_t8336 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m57517_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m57518_gshared (List_1_t8336 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m57518(__this, ___index, ___collection, method) (( void (*) (List_1_t8336 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m57518_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m57519_gshared (List_1_t8336 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m57519(__this, ___index, ___collection, method) (( void (*) (List_1_t8336 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m57519_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m57520_gshared (List_1_t8336 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m57520(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8336 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m57520_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Remove(T)
extern "C" bool List_1_Remove_m57521_gshared (List_1_t8336 * __this, KeyValuePair_2_t7838  ___item, const MethodInfo* method);
#define List_1_Remove_m57521(__this, ___item, method) (( bool (*) (List_1_t8336 *, KeyValuePair_2_t7838 , const MethodInfo*))List_1_Remove_m57521_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m57522_gshared (List_1_t8336 * __this, Predicate_1_t8343 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m57522(__this, ___match, method) (( int32_t (*) (List_1_t8336 *, Predicate_1_t8343 *, const MethodInfo*))List_1_RemoveAll_m57522_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m57523_gshared (List_1_t8336 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m57523(__this, ___index, method) (( void (*) (List_1_t8336 *, int32_t, const MethodInfo*))List_1_RemoveAt_m57523_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m57524_gshared (List_1_t8336 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m57524(__this, ___index, ___count, method) (( void (*) (List_1_t8336 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m57524_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Reverse()
extern "C" void List_1_Reverse_m57525_gshared (List_1_t8336 * __this, const MethodInfo* method);
#define List_1_Reverse_m57525(__this, method) (( void (*) (List_1_t8336 *, const MethodInfo*))List_1_Reverse_m57525_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort()
extern "C" void List_1_Sort_m57526_gshared (List_1_t8336 * __this, const MethodInfo* method);
#define List_1_Sort_m57526(__this, method) (( void (*) (List_1_t8336 *, const MethodInfo*))List_1_Sort_m57526_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m57527_gshared (List_1_t8336 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m57527(__this, ___comparer, method) (( void (*) (List_1_t8336 *, Object_t*, const MethodInfo*))List_1_Sort_m57527_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m57528_gshared (List_1_t8336 * __this, Comparison_1_t8346 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m57528(__this, ___comparison, method) (( void (*) (List_1_t8336 *, Comparison_1_t8346 *, const MethodInfo*))List_1_Sort_m57528_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8335* List_1_ToArray_m57529_gshared (List_1_t8336 * __this, const MethodInfo* method);
#define List_1_ToArray_m57529(__this, method) (( KeyValuePair_2U5BU5D_t8335* (*) (List_1_t8336 *, const MethodInfo*))List_1_ToArray_m57529_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::TrimExcess()
extern "C" void List_1_TrimExcess_m57530_gshared (List_1_t8336 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m57530(__this, method) (( void (*) (List_1_t8336 *, const MethodInfo*))List_1_TrimExcess_m57530_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m57531_gshared (List_1_t8336 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m57531(__this, method) (( int32_t (*) (List_1_t8336 *, const MethodInfo*))List_1_get_Capacity_m57531_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m57532_gshared (List_1_t8336 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m57532(__this, ___value, method) (( void (*) (List_1_t8336 *, int32_t, const MethodInfo*))List_1_set_Capacity_m57532_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Count()
extern "C" int32_t List_1_get_Count_m57533_gshared (List_1_t8336 * __this, const MethodInfo* method);
#define List_1_get_Count_m57533(__this, method) (( int32_t (*) (List_1_t8336 *, const MethodInfo*))List_1_get_Count_m57533_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7838  List_1_get_Item_m57534_gshared (List_1_t8336 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m57534(__this, ___index, method) (( KeyValuePair_2_t7838  (*) (List_1_t8336 *, int32_t, const MethodInfo*))List_1_get_Item_m57534_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m57535_gshared (List_1_t8336 * __this, int32_t ___index, KeyValuePair_2_t7838  ___value, const MethodInfo* method);
#define List_1_set_Item_m57535(__this, ___index, ___value, method) (( void (*) (List_1_t8336 *, int32_t, KeyValuePair_2_t7838 , const MethodInfo*))List_1_set_Item_m57535_gshared)(__this, ___index, ___value, method)
