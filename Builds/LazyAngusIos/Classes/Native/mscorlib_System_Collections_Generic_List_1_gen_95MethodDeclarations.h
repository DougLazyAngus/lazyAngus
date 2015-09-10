#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct List_1_t7946;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerable_1_t7780;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7945;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerator_1_t7781;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct ICollection_1_t10006;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct ReadOnlyCollection_1_t7949;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Predicate_1_t7953;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IComparer_1_t10007;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Comparison_1_t7956;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_78.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor()
extern "C" void List_1__ctor_m52816_gshared (List_1_t7946 * __this, const MethodInfo* method);
#define List_1__ctor_m52816(__this, method) (( void (*) (List_1_t7946 *, const MethodInfo*))List_1__ctor_m52816_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m52817_gshared (List_1_t7946 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m52817(__this, ___collection, method) (( void (*) (List_1_t7946 *, Object_t*, const MethodInfo*))List_1__ctor_m52817_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m52818_gshared (List_1_t7946 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m52818(__this, ___capacity, method) (( void (*) (List_1_t7946 *, int32_t, const MethodInfo*))List_1__ctor_m52818_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m52819_gshared (List_1_t7946 * __this, KeyValuePair_2U5BU5D_t7945* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m52819(__this, ___data, ___size, method) (( void (*) (List_1_t7946 *, KeyValuePair_2U5BU5D_t7945*, int32_t, const MethodInfo*))List_1__ctor_m52819_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.cctor()
extern "C" void List_1__cctor_m52820_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m52820(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m52820_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52821_gshared (List_1_t7946 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52821(__this, method) (( Object_t* (*) (List_1_t7946 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52821_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m52822_gshared (List_1_t7946 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m52822(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7946 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m52822_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m52823_gshared (List_1_t7946 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m52823(__this, method) (( Object_t * (*) (List_1_t7946 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m52823_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m52824_gshared (List_1_t7946 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m52824(__this, ___item, method) (( int32_t (*) (List_1_t7946 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m52824_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m52825_gshared (List_1_t7946 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m52825(__this, ___item, method) (( bool (*) (List_1_t7946 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m52825_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m52826_gshared (List_1_t7946 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m52826(__this, ___item, method) (( int32_t (*) (List_1_t7946 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m52826_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m52827_gshared (List_1_t7946 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m52827(__this, ___index, ___item, method) (( void (*) (List_1_t7946 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m52827_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m52828_gshared (List_1_t7946 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m52828(__this, ___item, method) (( void (*) (List_1_t7946 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m52828_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52829_gshared (List_1_t7946 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52829(__this, method) (( bool (*) (List_1_t7946 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m52829_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m52830_gshared (List_1_t7946 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m52830(__this, method) (( bool (*) (List_1_t7946 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m52830_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m52831_gshared (List_1_t7946 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m52831(__this, method) (( Object_t * (*) (List_1_t7946 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m52831_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m52832_gshared (List_1_t7946 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m52832(__this, method) (( bool (*) (List_1_t7946 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m52832_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m52833_gshared (List_1_t7946 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m52833(__this, method) (( bool (*) (List_1_t7946 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m52833_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m52834_gshared (List_1_t7946 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m52834(__this, ___index, method) (( Object_t * (*) (List_1_t7946 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m52834_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m52835_gshared (List_1_t7946 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m52835(__this, ___index, ___value, method) (( void (*) (List_1_t7946 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m52835_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Add(T)
extern "C" void List_1_Add_m52836_gshared (List_1_t7946 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define List_1_Add_m52836(__this, ___item, method) (( void (*) (List_1_t7946 *, KeyValuePair_2_t7776 , const MethodInfo*))List_1_Add_m52836_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m52837_gshared (List_1_t7946 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m52837(__this, ___newCount, method) (( void (*) (List_1_t7946 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m52837_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m52838_gshared (List_1_t7946 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m52838(__this, ___idx, ___count, method) (( void (*) (List_1_t7946 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m52838_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m52839_gshared (List_1_t7946 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m52839(__this, ___collection, method) (( void (*) (List_1_t7946 *, Object_t*, const MethodInfo*))List_1_AddCollection_m52839_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m52840_gshared (List_1_t7946 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m52840(__this, ___enumerable, method) (( void (*) (List_1_t7946 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m52840_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m52841_gshared (List_1_t7946 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m52841(__this, ___collection, method) (( void (*) (List_1_t7946 *, Object_t*, const MethodInfo*))List_1_AddRange_m52841_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7949 * List_1_AsReadOnly_m52842_gshared (List_1_t7946 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m52842(__this, method) (( ReadOnlyCollection_1_t7949 * (*) (List_1_t7946 *, const MethodInfo*))List_1_AsReadOnly_m52842_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Clear()
extern "C" void List_1_Clear_m52843_gshared (List_1_t7946 * __this, const MethodInfo* method);
#define List_1_Clear_m52843(__this, method) (( void (*) (List_1_t7946 *, const MethodInfo*))List_1_Clear_m52843_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Contains(T)
extern "C" bool List_1_Contains_m52844_gshared (List_1_t7946 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define List_1_Contains_m52844(__this, ___item, method) (( bool (*) (List_1_t7946 *, KeyValuePair_2_t7776 , const MethodInfo*))List_1_Contains_m52844_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m52845_gshared (List_1_t7946 * __this, KeyValuePair_2U5BU5D_t7945* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m52845(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7946 *, KeyValuePair_2U5BU5D_t7945*, int32_t, const MethodInfo*))List_1_CopyTo_m52845_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7776  List_1_Find_m52846_gshared (List_1_t7946 * __this, Predicate_1_t7953 * ___match, const MethodInfo* method);
#define List_1_Find_m52846(__this, ___match, method) (( KeyValuePair_2_t7776  (*) (List_1_t7946 *, Predicate_1_t7953 *, const MethodInfo*))List_1_Find_m52846_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m52847_gshared (Object_t * __this /* static, unused */, Predicate_1_t7953 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m52847(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7953 *, const MethodInfo*))List_1_CheckMatch_m52847_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m52848_gshared (List_1_t7946 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7953 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m52848(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7946 *, int32_t, int32_t, Predicate_1_t7953 *, const MethodInfo*))List_1_GetIndex_m52848_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetEnumerator()
extern "C" Enumerator_t7947  List_1_GetEnumerator_m52849_gshared (List_1_t7946 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m52849(__this, method) (( Enumerator_t7947  (*) (List_1_t7946 *, const MethodInfo*))List_1_GetEnumerator_m52849_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7946 * List_1_GetRange_m52850_gshared (List_1_t7946 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m52850(__this, ___index, ___count, method) (( List_1_t7946 * (*) (List_1_t7946 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m52850_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m52851_gshared (List_1_t7946 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define List_1_IndexOf_m52851(__this, ___item, method) (( int32_t (*) (List_1_t7946 *, KeyValuePair_2_t7776 , const MethodInfo*))List_1_IndexOf_m52851_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m52852_gshared (List_1_t7946 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m52852(__this, ___start, ___delta, method) (( void (*) (List_1_t7946 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m52852_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m52853_gshared (List_1_t7946 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m52853(__this, ___index, method) (( void (*) (List_1_t7946 *, int32_t, const MethodInfo*))List_1_CheckIndex_m52853_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m52854_gshared (List_1_t7946 * __this, int32_t ___index, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define List_1_Insert_m52854(__this, ___index, ___item, method) (( void (*) (List_1_t7946 *, int32_t, KeyValuePair_2_t7776 , const MethodInfo*))List_1_Insert_m52854_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m52855_gshared (List_1_t7946 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m52855(__this, ___collection, method) (( void (*) (List_1_t7946 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m52855_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m52856_gshared (List_1_t7946 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m52856(__this, ___index, ___collection, method) (( void (*) (List_1_t7946 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m52856_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m52857_gshared (List_1_t7946 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m52857(__this, ___index, ___collection, method) (( void (*) (List_1_t7946 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m52857_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m52858_gshared (List_1_t7946 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m52858(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7946 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m52858_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Remove(T)
extern "C" bool List_1_Remove_m52859_gshared (List_1_t7946 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define List_1_Remove_m52859(__this, ___item, method) (( bool (*) (List_1_t7946 *, KeyValuePair_2_t7776 , const MethodInfo*))List_1_Remove_m52859_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m52860_gshared (List_1_t7946 * __this, Predicate_1_t7953 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m52860(__this, ___match, method) (( int32_t (*) (List_1_t7946 *, Predicate_1_t7953 *, const MethodInfo*))List_1_RemoveAll_m52860_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m52861_gshared (List_1_t7946 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m52861(__this, ___index, method) (( void (*) (List_1_t7946 *, int32_t, const MethodInfo*))List_1_RemoveAt_m52861_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m52862_gshared (List_1_t7946 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m52862(__this, ___index, ___count, method) (( void (*) (List_1_t7946 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m52862_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Reverse()
extern "C" void List_1_Reverse_m52863_gshared (List_1_t7946 * __this, const MethodInfo* method);
#define List_1_Reverse_m52863(__this, method) (( void (*) (List_1_t7946 *, const MethodInfo*))List_1_Reverse_m52863_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort()
extern "C" void List_1_Sort_m52864_gshared (List_1_t7946 * __this, const MethodInfo* method);
#define List_1_Sort_m52864(__this, method) (( void (*) (List_1_t7946 *, const MethodInfo*))List_1_Sort_m52864_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m52865_gshared (List_1_t7946 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m52865(__this, ___comparer, method) (( void (*) (List_1_t7946 *, Object_t*, const MethodInfo*))List_1_Sort_m52865_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m52866_gshared (List_1_t7946 * __this, Comparison_1_t7956 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m52866(__this, ___comparison, method) (( void (*) (List_1_t7946 *, Comparison_1_t7956 *, const MethodInfo*))List_1_Sort_m52866_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7945* List_1_ToArray_m52867_gshared (List_1_t7946 * __this, const MethodInfo* method);
#define List_1_ToArray_m52867(__this, method) (( KeyValuePair_2U5BU5D_t7945* (*) (List_1_t7946 *, const MethodInfo*))List_1_ToArray_m52867_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::TrimExcess()
extern "C" void List_1_TrimExcess_m52868_gshared (List_1_t7946 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m52868(__this, method) (( void (*) (List_1_t7946 *, const MethodInfo*))List_1_TrimExcess_m52868_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m52869_gshared (List_1_t7946 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m52869(__this, method) (( int32_t (*) (List_1_t7946 *, const MethodInfo*))List_1_get_Capacity_m52869_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m52870_gshared (List_1_t7946 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m52870(__this, ___value, method) (( void (*) (List_1_t7946 *, int32_t, const MethodInfo*))List_1_set_Capacity_m52870_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Count()
extern "C" int32_t List_1_get_Count_m52871_gshared (List_1_t7946 * __this, const MethodInfo* method);
#define List_1_get_Count_m52871(__this, method) (( int32_t (*) (List_1_t7946 *, const MethodInfo*))List_1_get_Count_m52871_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7776  List_1_get_Item_m52872_gshared (List_1_t7946 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m52872(__this, ___index, method) (( KeyValuePair_2_t7776  (*) (List_1_t7946 *, int32_t, const MethodInfo*))List_1_get_Item_m52872_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m52873_gshared (List_1_t7946 * __this, int32_t ___index, KeyValuePair_2_t7776  ___value, const MethodInfo* method);
#define List_1_set_Item_m52873(__this, ___index, ___value, method) (( void (*) (List_1_t7946 *, int32_t, KeyValuePair_2_t7776 , const MethodInfo*))List_1_set_Item_m52873_gshared)(__this, ___index, ___value, method)
