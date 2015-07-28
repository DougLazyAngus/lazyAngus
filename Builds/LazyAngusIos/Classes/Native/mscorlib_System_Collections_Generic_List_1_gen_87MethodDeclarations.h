#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct List_1_t7216;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerable_1_t9255;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7215;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7107;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct ICollection_1_t9256;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct ReadOnlyCollection_1_t7218;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Predicate_1_t7219;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IComparer_1_t9257;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Comparison_1_t7221;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_70.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor()
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_gen_86MethodDeclarations.h"
#define List_1__ctor_m46356(__this, method) (( void (*) (List_1_t7216 *, const MethodInfo*))List_1__ctor_m46203_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m46357(__this, ___collection, method) (( void (*) (List_1_t7216 *, Object_t*, const MethodInfo*))List_1__ctor_m46204_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Int32)
#define List_1__ctor_m46358(__this, ___capacity, method) (( void (*) (List_1_t7216 *, int32_t, const MethodInfo*))List_1__ctor_m46205_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(T[],System.Int32)
#define List_1__ctor_m46359(__this, ___data, ___size, method) (( void (*) (List_1_t7216 *, KeyValuePair_2U5BU5D_t7215*, int32_t, const MethodInfo*))List_1__ctor_m46206_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.cctor()
#define List_1__cctor_m46360(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m46207_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46361(__this, method) (( Object_t* (*) (List_1_t7216 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46208_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m46362(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7216 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m46209_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m46363(__this, method) (( Object_t * (*) (List_1_t7216 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m46210_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m46364(__this, ___item, method) (( int32_t (*) (List_1_t7216 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m46211_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m46365(__this, ___item, method) (( bool (*) (List_1_t7216 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m46212_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m46366(__this, ___item, method) (( int32_t (*) (List_1_t7216 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m46213_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m46367(__this, ___index, ___item, method) (( void (*) (List_1_t7216 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m46214_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m46368(__this, ___item, method) (( void (*) (List_1_t7216 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m46215_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46369(__this, method) (( bool (*) (List_1_t7216 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m46370(__this, method) (( bool (*) (List_1_t7216 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m46217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m46371(__this, method) (( Object_t * (*) (List_1_t7216 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m46218_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m46372(__this, method) (( bool (*) (List_1_t7216 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m46219_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m46373(__this, method) (( bool (*) (List_1_t7216 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m46220_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m46374(__this, ___index, method) (( Object_t * (*) (List_1_t7216 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m46221_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m46375(__this, ___index, ___value, method) (( void (*) (List_1_t7216 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m46222_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Add(T)
#define List_1_Add_m46376(__this, ___item, method) (( void (*) (List_1_t7216 *, KeyValuePair_2_t7102 , const MethodInfo*))List_1_Add_m46223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m46377(__this, ___newCount, method) (( void (*) (List_1_t7216 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m46224_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m46378(__this, ___idx, ___count, method) (( void (*) (List_1_t7216 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m46225_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m46379(__this, ___collection, method) (( void (*) (List_1_t7216 *, Object_t*, const MethodInfo*))List_1_AddCollection_m46226_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m46380(__this, ___enumerable, method) (( void (*) (List_1_t7216 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m46227_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m46381(__this, ___collection, method) (( void (*) (List_1_t7216 *, Object_t*, const MethodInfo*))List_1_AddRange_m46228_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::AsReadOnly()
#define List_1_AsReadOnly_m46382(__this, method) (( ReadOnlyCollection_1_t7218 * (*) (List_1_t7216 *, const MethodInfo*))List_1_AsReadOnly_m46229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Clear()
#define List_1_Clear_m46383(__this, method) (( void (*) (List_1_t7216 *, const MethodInfo*))List_1_Clear_m46230_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Contains(T)
#define List_1_Contains_m46384(__this, ___item, method) (( bool (*) (List_1_t7216 *, KeyValuePair_2_t7102 , const MethodInfo*))List_1_Contains_m46231_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m46385(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7216 *, KeyValuePair_2U5BU5D_t7215*, int32_t, const MethodInfo*))List_1_CopyTo_m46232_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Find(System.Predicate`1<T>)
#define List_1_Find_m46386(__this, ___match, method) (( KeyValuePair_2_t7102  (*) (List_1_t7216 *, Predicate_1_t7219 *, const MethodInfo*))List_1_Find_m46233_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m46387(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7219 *, const MethodInfo*))List_1_CheckMatch_m46234_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m46388(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7216 *, int32_t, int32_t, Predicate_1_t7219 *, const MethodInfo*))List_1_GetIndex_m46235_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetEnumerator()
#define List_1_GetEnumerator_m46389(__this, method) (( Enumerator_t7220  (*) (List_1_t7216 *, const MethodInfo*))List_1_GetEnumerator_m46236_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m46390(__this, ___index, ___count, method) (( List_1_t7216 * (*) (List_1_t7216 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m46237_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::IndexOf(T)
#define List_1_IndexOf_m46391(__this, ___item, method) (( int32_t (*) (List_1_t7216 *, KeyValuePair_2_t7102 , const MethodInfo*))List_1_IndexOf_m46238_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m46392(__this, ___start, ___delta, method) (( void (*) (List_1_t7216 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m46239_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m46393(__this, ___index, method) (( void (*) (List_1_t7216 *, int32_t, const MethodInfo*))List_1_CheckIndex_m46240_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Insert(System.Int32,T)
#define List_1_Insert_m46394(__this, ___index, ___item, method) (( void (*) (List_1_t7216 *, int32_t, KeyValuePair_2_t7102 , const MethodInfo*))List_1_Insert_m46241_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m46395(__this, ___collection, method) (( void (*) (List_1_t7216 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m46242_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m46396(__this, ___index, ___collection, method) (( void (*) (List_1_t7216 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m46243_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m46397(__this, ___index, ___collection, method) (( void (*) (List_1_t7216 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m46244_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m46398(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7216 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m46245_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Remove(T)
#define List_1_Remove_m46399(__this, ___item, method) (( bool (*) (List_1_t7216 *, KeyValuePair_2_t7102 , const MethodInfo*))List_1_Remove_m46246_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m46400(__this, ___match, method) (( int32_t (*) (List_1_t7216 *, Predicate_1_t7219 *, const MethodInfo*))List_1_RemoveAll_m46247_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m46401(__this, ___index, method) (( void (*) (List_1_t7216 *, int32_t, const MethodInfo*))List_1_RemoveAt_m46248_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m46402(__this, ___index, ___count, method) (( void (*) (List_1_t7216 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m46249_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Reverse()
#define List_1_Reverse_m46403(__this, method) (( void (*) (List_1_t7216 *, const MethodInfo*))List_1_Reverse_m46250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort()
#define List_1_Sort_m46404(__this, method) (( void (*) (List_1_t7216 *, const MethodInfo*))List_1_Sort_m46251_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m46405(__this, ___comparer, method) (( void (*) (List_1_t7216 *, Object_t*, const MethodInfo*))List_1_Sort_m46252_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m46406(__this, ___comparison, method) (( void (*) (List_1_t7216 *, Comparison_1_t7221 *, const MethodInfo*))List_1_Sort_m46253_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::ToArray()
#define List_1_ToArray_m46407(__this, method) (( KeyValuePair_2U5BU5D_t7215* (*) (List_1_t7216 *, const MethodInfo*))List_1_ToArray_m46254_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::TrimExcess()
#define List_1_TrimExcess_m46408(__this, method) (( void (*) (List_1_t7216 *, const MethodInfo*))List_1_TrimExcess_m46255_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Capacity()
#define List_1_get_Capacity_m46409(__this, method) (( int32_t (*) (List_1_t7216 *, const MethodInfo*))List_1_get_Capacity_m46256_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m46410(__this, ___value, method) (( void (*) (List_1_t7216 *, int32_t, const MethodInfo*))List_1_set_Capacity_m46257_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Count()
#define List_1_get_Count_m46411(__this, method) (( int32_t (*) (List_1_t7216 *, const MethodInfo*))List_1_get_Count_m46258_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::get_Item(System.Int32)
#define List_1_get_Item_m46412(__this, ___index, method) (( KeyValuePair_2_t7102  (*) (List_1_t7216 *, int32_t, const MethodInfo*))List_1_get_Item_m46259_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::set_Item(System.Int32,T)
#define List_1_set_Item_m46413(__this, ___index, ___value, method) (( void (*) (List_1_t7216 *, int32_t, KeyValuePair_2_t7102 , const MethodInfo*))List_1_set_Item_m46260_gshared)(__this, ___index, ___value, method)
