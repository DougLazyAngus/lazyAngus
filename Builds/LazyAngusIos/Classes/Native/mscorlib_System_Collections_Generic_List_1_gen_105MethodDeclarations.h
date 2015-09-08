#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct List_1_t8259;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerable_1_t7819;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8258;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t7820;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct ICollection_1_t10019;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct ReadOnlyCollection_1_t8262;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Predicate_1_t8266;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IComparer_1_t10020;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Comparison_1_t8269;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_88.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor()
extern "C" void List_1__ctor_m56632_gshared (List_1_t8259 * __this, const MethodInfo* method);
#define List_1__ctor_m56632(__this, method) (( void (*) (List_1_t8259 *, const MethodInfo*))List_1__ctor_m56632_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m56633_gshared (List_1_t8259 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m56633(__this, ___collection, method) (( void (*) (List_1_t8259 *, Object_t*, const MethodInfo*))List_1__ctor_m56633_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m56634_gshared (List_1_t8259 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m56634(__this, ___capacity, method) (( void (*) (List_1_t8259 *, int32_t, const MethodInfo*))List_1__ctor_m56634_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m56635_gshared (List_1_t8259 * __this, KeyValuePair_2U5BU5D_t8258* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m56635(__this, ___data, ___size, method) (( void (*) (List_1_t8259 *, KeyValuePair_2U5BU5D_t8258*, int32_t, const MethodInfo*))List_1__ctor_m56635_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.cctor()
extern "C" void List_1__cctor_m56636_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m56636(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m56636_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56637_gshared (List_1_t8259 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56637(__this, method) (( Object_t* (*) (List_1_t8259 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56637_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m56638_gshared (List_1_t8259 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m56638(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8259 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m56638_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m56639_gshared (List_1_t8259 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m56639(__this, method) (( Object_t * (*) (List_1_t8259 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m56639_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m56640_gshared (List_1_t8259 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m56640(__this, ___item, method) (( int32_t (*) (List_1_t8259 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m56640_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m56641_gshared (List_1_t8259 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m56641(__this, ___item, method) (( bool (*) (List_1_t8259 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m56641_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m56642_gshared (List_1_t8259 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m56642(__this, ___item, method) (( int32_t (*) (List_1_t8259 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m56642_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m56643_gshared (List_1_t8259 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m56643(__this, ___index, ___item, method) (( void (*) (List_1_t8259 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m56643_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m56644_gshared (List_1_t8259 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m56644(__this, ___item, method) (( void (*) (List_1_t8259 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m56644_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m56645_gshared (List_1_t8259 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m56645(__this, method) (( bool (*) (List_1_t8259 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m56645_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m56646_gshared (List_1_t8259 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m56646(__this, method) (( bool (*) (List_1_t8259 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m56646_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m56647_gshared (List_1_t8259 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m56647(__this, method) (( Object_t * (*) (List_1_t8259 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m56647_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m56648_gshared (List_1_t8259 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m56648(__this, method) (( bool (*) (List_1_t8259 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m56648_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m56649_gshared (List_1_t8259 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m56649(__this, method) (( bool (*) (List_1_t8259 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m56649_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m56650_gshared (List_1_t8259 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m56650(__this, ___index, method) (( Object_t * (*) (List_1_t8259 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m56650_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m56651_gshared (List_1_t8259 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m56651(__this, ___index, ___value, method) (( void (*) (List_1_t8259 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m56651_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Add(T)
extern "C" void List_1_Add_m56652_gshared (List_1_t8259 * __this, KeyValuePair_2_t7815  ___item, const MethodInfo* method);
#define List_1_Add_m56652(__this, ___item, method) (( void (*) (List_1_t8259 *, KeyValuePair_2_t7815 , const MethodInfo*))List_1_Add_m56652_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m56653_gshared (List_1_t8259 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m56653(__this, ___newCount, method) (( void (*) (List_1_t8259 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m56653_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m56654_gshared (List_1_t8259 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m56654(__this, ___idx, ___count, method) (( void (*) (List_1_t8259 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m56654_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m56655_gshared (List_1_t8259 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m56655(__this, ___collection, method) (( void (*) (List_1_t8259 *, Object_t*, const MethodInfo*))List_1_AddCollection_m56655_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m56656_gshared (List_1_t8259 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m56656(__this, ___enumerable, method) (( void (*) (List_1_t8259 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m56656_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m56657_gshared (List_1_t8259 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m56657(__this, ___collection, method) (( void (*) (List_1_t8259 *, Object_t*, const MethodInfo*))List_1_AddRange_m56657_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8262 * List_1_AsReadOnly_m56658_gshared (List_1_t8259 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m56658(__this, method) (( ReadOnlyCollection_1_t8262 * (*) (List_1_t8259 *, const MethodInfo*))List_1_AsReadOnly_m56658_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Clear()
extern "C" void List_1_Clear_m56659_gshared (List_1_t8259 * __this, const MethodInfo* method);
#define List_1_Clear_m56659(__this, method) (( void (*) (List_1_t8259 *, const MethodInfo*))List_1_Clear_m56659_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Contains(T)
extern "C" bool List_1_Contains_m56660_gshared (List_1_t8259 * __this, KeyValuePair_2_t7815  ___item, const MethodInfo* method);
#define List_1_Contains_m56660(__this, ___item, method) (( bool (*) (List_1_t8259 *, KeyValuePair_2_t7815 , const MethodInfo*))List_1_Contains_m56660_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m56661_gshared (List_1_t8259 * __this, KeyValuePair_2U5BU5D_t8258* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m56661(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8259 *, KeyValuePair_2U5BU5D_t8258*, int32_t, const MethodInfo*))List_1_CopyTo_m56661_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7815  List_1_Find_m56662_gshared (List_1_t8259 * __this, Predicate_1_t8266 * ___match, const MethodInfo* method);
#define List_1_Find_m56662(__this, ___match, method) (( KeyValuePair_2_t7815  (*) (List_1_t8259 *, Predicate_1_t8266 *, const MethodInfo*))List_1_Find_m56662_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m56663_gshared (Object_t * __this /* static, unused */, Predicate_1_t8266 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m56663(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8266 *, const MethodInfo*))List_1_CheckMatch_m56663_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m56664_gshared (List_1_t8259 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8266 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m56664(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8259 *, int32_t, int32_t, Predicate_1_t8266 *, const MethodInfo*))List_1_GetIndex_m56664_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetEnumerator()
extern "C" Enumerator_t8260  List_1_GetEnumerator_m56665_gshared (List_1_t8259 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m56665(__this, method) (( Enumerator_t8260  (*) (List_1_t8259 *, const MethodInfo*))List_1_GetEnumerator_m56665_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8259 * List_1_GetRange_m56666_gshared (List_1_t8259 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m56666(__this, ___index, ___count, method) (( List_1_t8259 * (*) (List_1_t8259 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m56666_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m56667_gshared (List_1_t8259 * __this, KeyValuePair_2_t7815  ___item, const MethodInfo* method);
#define List_1_IndexOf_m56667(__this, ___item, method) (( int32_t (*) (List_1_t8259 *, KeyValuePair_2_t7815 , const MethodInfo*))List_1_IndexOf_m56667_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m56668_gshared (List_1_t8259 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m56668(__this, ___start, ___delta, method) (( void (*) (List_1_t8259 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m56668_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m56669_gshared (List_1_t8259 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m56669(__this, ___index, method) (( void (*) (List_1_t8259 *, int32_t, const MethodInfo*))List_1_CheckIndex_m56669_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m56670_gshared (List_1_t8259 * __this, int32_t ___index, KeyValuePair_2_t7815  ___item, const MethodInfo* method);
#define List_1_Insert_m56670(__this, ___index, ___item, method) (( void (*) (List_1_t8259 *, int32_t, KeyValuePair_2_t7815 , const MethodInfo*))List_1_Insert_m56670_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m56671_gshared (List_1_t8259 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m56671(__this, ___collection, method) (( void (*) (List_1_t8259 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m56671_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m56672_gshared (List_1_t8259 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m56672(__this, ___index, ___collection, method) (( void (*) (List_1_t8259 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m56672_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m56673_gshared (List_1_t8259 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m56673(__this, ___index, ___collection, method) (( void (*) (List_1_t8259 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m56673_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m56674_gshared (List_1_t8259 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m56674(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8259 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m56674_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Remove(T)
extern "C" bool List_1_Remove_m56675_gshared (List_1_t8259 * __this, KeyValuePair_2_t7815  ___item, const MethodInfo* method);
#define List_1_Remove_m56675(__this, ___item, method) (( bool (*) (List_1_t8259 *, KeyValuePair_2_t7815 , const MethodInfo*))List_1_Remove_m56675_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m56676_gshared (List_1_t8259 * __this, Predicate_1_t8266 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m56676(__this, ___match, method) (( int32_t (*) (List_1_t8259 *, Predicate_1_t8266 *, const MethodInfo*))List_1_RemoveAll_m56676_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m56677_gshared (List_1_t8259 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m56677(__this, ___index, method) (( void (*) (List_1_t8259 *, int32_t, const MethodInfo*))List_1_RemoveAt_m56677_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m56678_gshared (List_1_t8259 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m56678(__this, ___index, ___count, method) (( void (*) (List_1_t8259 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m56678_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Reverse()
extern "C" void List_1_Reverse_m56679_gshared (List_1_t8259 * __this, const MethodInfo* method);
#define List_1_Reverse_m56679(__this, method) (( void (*) (List_1_t8259 *, const MethodInfo*))List_1_Reverse_m56679_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort()
extern "C" void List_1_Sort_m56680_gshared (List_1_t8259 * __this, const MethodInfo* method);
#define List_1_Sort_m56680(__this, method) (( void (*) (List_1_t8259 *, const MethodInfo*))List_1_Sort_m56680_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m56681_gshared (List_1_t8259 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m56681(__this, ___comparer, method) (( void (*) (List_1_t8259 *, Object_t*, const MethodInfo*))List_1_Sort_m56681_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m56682_gshared (List_1_t8259 * __this, Comparison_1_t8269 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m56682(__this, ___comparison, method) (( void (*) (List_1_t8259 *, Comparison_1_t8269 *, const MethodInfo*))List_1_Sort_m56682_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8258* List_1_ToArray_m56683_gshared (List_1_t8259 * __this, const MethodInfo* method);
#define List_1_ToArray_m56683(__this, method) (( KeyValuePair_2U5BU5D_t8258* (*) (List_1_t8259 *, const MethodInfo*))List_1_ToArray_m56683_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::TrimExcess()
extern "C" void List_1_TrimExcess_m56684_gshared (List_1_t8259 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m56684(__this, method) (( void (*) (List_1_t8259 *, const MethodInfo*))List_1_TrimExcess_m56684_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m56685_gshared (List_1_t8259 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m56685(__this, method) (( int32_t (*) (List_1_t8259 *, const MethodInfo*))List_1_get_Capacity_m56685_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m56686_gshared (List_1_t8259 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m56686(__this, ___value, method) (( void (*) (List_1_t8259 *, int32_t, const MethodInfo*))List_1_set_Capacity_m56686_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Count()
extern "C" int32_t List_1_get_Count_m56687_gshared (List_1_t8259 * __this, const MethodInfo* method);
#define List_1_get_Count_m56687(__this, method) (( int32_t (*) (List_1_t8259 *, const MethodInfo*))List_1_get_Count_m56687_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7815  List_1_get_Item_m56688_gshared (List_1_t8259 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m56688(__this, ___index, method) (( KeyValuePair_2_t7815  (*) (List_1_t8259 *, int32_t, const MethodInfo*))List_1_get_Item_m56688_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m56689_gshared (List_1_t8259 * __this, int32_t ___index, KeyValuePair_2_t7815  ___value, const MethodInfo* method);
#define List_1_set_Item_m56689(__this, ___index, ___value, method) (( void (*) (List_1_t8259 *, int32_t, KeyValuePair_2_t7815 , const MethodInfo*))List_1_set_Item_m56689_gshared)(__this, ___index, ___value, method)
