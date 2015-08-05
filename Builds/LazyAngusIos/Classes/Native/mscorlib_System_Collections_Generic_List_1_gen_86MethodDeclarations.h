#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct List_1_t7215;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerable_1_t7115;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7214;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7116;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ICollection_1_t9264;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct ReadOnlyCollection_1_t7218;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Predicate_1_t7222;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IComparer_1_t9265;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Comparison_1_t7225;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_69.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor()
extern "C" void List_1__ctor_m46278_gshared (List_1_t7215 * __this, const MethodInfo* method);
#define List_1__ctor_m46278(__this, method) (( void (*) (List_1_t7215 *, const MethodInfo*))List_1__ctor_m46278_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m46279_gshared (List_1_t7215 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m46279(__this, ___collection, method) (( void (*) (List_1_t7215 *, Object_t*, const MethodInfo*))List_1__ctor_m46279_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m46280_gshared (List_1_t7215 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m46280(__this, ___capacity, method) (( void (*) (List_1_t7215 *, int32_t, const MethodInfo*))List_1__ctor_m46280_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m46281_gshared (List_1_t7215 * __this, KeyValuePair_2U5BU5D_t7214* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m46281(__this, ___data, ___size, method) (( void (*) (List_1_t7215 *, KeyValuePair_2U5BU5D_t7214*, int32_t, const MethodInfo*))List_1__ctor_m46281_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.cctor()
extern "C" void List_1__cctor_m46282_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m46282(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m46282_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46283_gshared (List_1_t7215 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46283(__this, method) (( Object_t* (*) (List_1_t7215 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46283_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m46284_gshared (List_1_t7215 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m46284(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7215 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m46284_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m46285_gshared (List_1_t7215 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m46285(__this, method) (( Object_t * (*) (List_1_t7215 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m46285_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m46286_gshared (List_1_t7215 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m46286(__this, ___item, method) (( int32_t (*) (List_1_t7215 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m46286_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m46287_gshared (List_1_t7215 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m46287(__this, ___item, method) (( bool (*) (List_1_t7215 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m46287_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m46288_gshared (List_1_t7215 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m46288(__this, ___item, method) (( int32_t (*) (List_1_t7215 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m46288_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m46289_gshared (List_1_t7215 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m46289(__this, ___index, ___item, method) (( void (*) (List_1_t7215 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m46289_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m46290_gshared (List_1_t7215 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m46290(__this, ___item, method) (( void (*) (List_1_t7215 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m46290_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46291_gshared (List_1_t7215 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46291(__this, method) (( bool (*) (List_1_t7215 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46291_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m46292_gshared (List_1_t7215 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m46292(__this, method) (( bool (*) (List_1_t7215 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m46292_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m46293_gshared (List_1_t7215 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m46293(__this, method) (( Object_t * (*) (List_1_t7215 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m46293_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m46294_gshared (List_1_t7215 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m46294(__this, method) (( bool (*) (List_1_t7215 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m46294_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m46295_gshared (List_1_t7215 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m46295(__this, method) (( bool (*) (List_1_t7215 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m46295_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m46296_gshared (List_1_t7215 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m46296(__this, ___index, method) (( Object_t * (*) (List_1_t7215 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m46296_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m46297_gshared (List_1_t7215 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m46297(__this, ___index, ___value, method) (( void (*) (List_1_t7215 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m46297_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Add(T)
extern "C" void List_1_Add_m46298_gshared (List_1_t7215 * __this, KeyValuePair_2_t6111  ___item, const MethodInfo* method);
#define List_1_Add_m46298(__this, ___item, method) (( void (*) (List_1_t7215 *, KeyValuePair_2_t6111 , const MethodInfo*))List_1_Add_m46298_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m46299_gshared (List_1_t7215 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m46299(__this, ___newCount, method) (( void (*) (List_1_t7215 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m46299_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m46300_gshared (List_1_t7215 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m46300(__this, ___idx, ___count, method) (( void (*) (List_1_t7215 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m46300_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m46301_gshared (List_1_t7215 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m46301(__this, ___collection, method) (( void (*) (List_1_t7215 *, Object_t*, const MethodInfo*))List_1_AddCollection_m46301_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m46302_gshared (List_1_t7215 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m46302(__this, ___enumerable, method) (( void (*) (List_1_t7215 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m46302_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m46303_gshared (List_1_t7215 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m46303(__this, ___collection, method) (( void (*) (List_1_t7215 *, Object_t*, const MethodInfo*))List_1_AddRange_m46303_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7218 * List_1_AsReadOnly_m46304_gshared (List_1_t7215 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m46304(__this, method) (( ReadOnlyCollection_1_t7218 * (*) (List_1_t7215 *, const MethodInfo*))List_1_AsReadOnly_m46304_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Clear()
extern "C" void List_1_Clear_m46305_gshared (List_1_t7215 * __this, const MethodInfo* method);
#define List_1_Clear_m46305(__this, method) (( void (*) (List_1_t7215 *, const MethodInfo*))List_1_Clear_m46305_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Contains(T)
extern "C" bool List_1_Contains_m46306_gshared (List_1_t7215 * __this, KeyValuePair_2_t6111  ___item, const MethodInfo* method);
#define List_1_Contains_m46306(__this, ___item, method) (( bool (*) (List_1_t7215 *, KeyValuePair_2_t6111 , const MethodInfo*))List_1_Contains_m46306_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m46307_gshared (List_1_t7215 * __this, KeyValuePair_2U5BU5D_t7214* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m46307(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7215 *, KeyValuePair_2U5BU5D_t7214*, int32_t, const MethodInfo*))List_1_CopyTo_m46307_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t6111  List_1_Find_m46308_gshared (List_1_t7215 * __this, Predicate_1_t7222 * ___match, const MethodInfo* method);
#define List_1_Find_m46308(__this, ___match, method) (( KeyValuePair_2_t6111  (*) (List_1_t7215 *, Predicate_1_t7222 *, const MethodInfo*))List_1_Find_m46308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m46309_gshared (Object_t * __this /* static, unused */, Predicate_1_t7222 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m46309(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7222 *, const MethodInfo*))List_1_CheckMatch_m46309_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m46310_gshared (List_1_t7215 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7222 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m46310(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7215 *, int32_t, int32_t, Predicate_1_t7222 *, const MethodInfo*))List_1_GetIndex_m46310_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetEnumerator()
extern "C" Enumerator_t7216  List_1_GetEnumerator_m46311_gshared (List_1_t7215 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m46311(__this, method) (( Enumerator_t7216  (*) (List_1_t7215 *, const MethodInfo*))List_1_GetEnumerator_m46311_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7215 * List_1_GetRange_m46312_gshared (List_1_t7215 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m46312(__this, ___index, ___count, method) (( List_1_t7215 * (*) (List_1_t7215 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m46312_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m46313_gshared (List_1_t7215 * __this, KeyValuePair_2_t6111  ___item, const MethodInfo* method);
#define List_1_IndexOf_m46313(__this, ___item, method) (( int32_t (*) (List_1_t7215 *, KeyValuePair_2_t6111 , const MethodInfo*))List_1_IndexOf_m46313_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m46314_gshared (List_1_t7215 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m46314(__this, ___start, ___delta, method) (( void (*) (List_1_t7215 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m46314_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m46315_gshared (List_1_t7215 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m46315(__this, ___index, method) (( void (*) (List_1_t7215 *, int32_t, const MethodInfo*))List_1_CheckIndex_m46315_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m46316_gshared (List_1_t7215 * __this, int32_t ___index, KeyValuePair_2_t6111  ___item, const MethodInfo* method);
#define List_1_Insert_m46316(__this, ___index, ___item, method) (( void (*) (List_1_t7215 *, int32_t, KeyValuePair_2_t6111 , const MethodInfo*))List_1_Insert_m46316_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m46317_gshared (List_1_t7215 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m46317(__this, ___collection, method) (( void (*) (List_1_t7215 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m46317_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m46318_gshared (List_1_t7215 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m46318(__this, ___index, ___collection, method) (( void (*) (List_1_t7215 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m46318_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m46319_gshared (List_1_t7215 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m46319(__this, ___index, ___collection, method) (( void (*) (List_1_t7215 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m46319_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m46320_gshared (List_1_t7215 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m46320(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7215 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m46320_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Remove(T)
extern "C" bool List_1_Remove_m46321_gshared (List_1_t7215 * __this, KeyValuePair_2_t6111  ___item, const MethodInfo* method);
#define List_1_Remove_m46321(__this, ___item, method) (( bool (*) (List_1_t7215 *, KeyValuePair_2_t6111 , const MethodInfo*))List_1_Remove_m46321_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m46322_gshared (List_1_t7215 * __this, Predicate_1_t7222 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m46322(__this, ___match, method) (( int32_t (*) (List_1_t7215 *, Predicate_1_t7222 *, const MethodInfo*))List_1_RemoveAll_m46322_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m46323_gshared (List_1_t7215 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m46323(__this, ___index, method) (( void (*) (List_1_t7215 *, int32_t, const MethodInfo*))List_1_RemoveAt_m46323_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m46324_gshared (List_1_t7215 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m46324(__this, ___index, ___count, method) (( void (*) (List_1_t7215 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m46324_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Reverse()
extern "C" void List_1_Reverse_m46325_gshared (List_1_t7215 * __this, const MethodInfo* method);
#define List_1_Reverse_m46325(__this, method) (( void (*) (List_1_t7215 *, const MethodInfo*))List_1_Reverse_m46325_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort()
extern "C" void List_1_Sort_m46326_gshared (List_1_t7215 * __this, const MethodInfo* method);
#define List_1_Sort_m46326(__this, method) (( void (*) (List_1_t7215 *, const MethodInfo*))List_1_Sort_m46326_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m46327_gshared (List_1_t7215 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m46327(__this, ___comparer, method) (( void (*) (List_1_t7215 *, Object_t*, const MethodInfo*))List_1_Sort_m46327_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m46328_gshared (List_1_t7215 * __this, Comparison_1_t7225 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m46328(__this, ___comparison, method) (( void (*) (List_1_t7215 *, Comparison_1_t7225 *, const MethodInfo*))List_1_Sort_m46328_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7214* List_1_ToArray_m46329_gshared (List_1_t7215 * __this, const MethodInfo* method);
#define List_1_ToArray_m46329(__this, method) (( KeyValuePair_2U5BU5D_t7214* (*) (List_1_t7215 *, const MethodInfo*))List_1_ToArray_m46329_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::TrimExcess()
extern "C" void List_1_TrimExcess_m46330_gshared (List_1_t7215 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m46330(__this, method) (( void (*) (List_1_t7215 *, const MethodInfo*))List_1_TrimExcess_m46330_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m46331_gshared (List_1_t7215 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m46331(__this, method) (( int32_t (*) (List_1_t7215 *, const MethodInfo*))List_1_get_Capacity_m46331_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m46332_gshared (List_1_t7215 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m46332(__this, ___value, method) (( void (*) (List_1_t7215 *, int32_t, const MethodInfo*))List_1_set_Capacity_m46332_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Count()
extern "C" int32_t List_1_get_Count_m46333_gshared (List_1_t7215 * __this, const MethodInfo* method);
#define List_1_get_Count_m46333(__this, method) (( int32_t (*) (List_1_t7215 *, const MethodInfo*))List_1_get_Count_m46333_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t6111  List_1_get_Item_m46334_gshared (List_1_t7215 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m46334(__this, ___index, method) (( KeyValuePair_2_t6111  (*) (List_1_t7215 *, int32_t, const MethodInfo*))List_1_get_Item_m46334_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m46335_gshared (List_1_t7215 * __this, int32_t ___index, KeyValuePair_2_t6111  ___value, const MethodInfo* method);
#define List_1_set_Item_m46335(__this, ___index, ___value, method) (( void (*) (List_1_t7215 *, int32_t, KeyValuePair_2_t6111 , const MethodInfo*))List_1_set_Item_m46335_gshared)(__this, ___index, ___value, method)
