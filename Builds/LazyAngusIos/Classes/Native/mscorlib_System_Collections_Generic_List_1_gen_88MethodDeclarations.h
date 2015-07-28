#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct List_1_t7281;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerable_1_t7115;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7280;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IEnumerator_1_t7116;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct ICollection_1_t9258;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct ReadOnlyCollection_1_t7284;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Predicate_1_t7288;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct IComparer_1_t9259;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Comparison_1_t7291;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_71.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor()
extern "C" void List_1__ctor_m47272_gshared (List_1_t7281 * __this, const MethodInfo* method);
#define List_1__ctor_m47272(__this, method) (( void (*) (List_1_t7281 *, const MethodInfo*))List_1__ctor_m47272_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m47273_gshared (List_1_t7281 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m47273(__this, ___collection, method) (( void (*) (List_1_t7281 *, Object_t*, const MethodInfo*))List_1__ctor_m47273_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m47274_gshared (List_1_t7281 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m47274(__this, ___capacity, method) (( void (*) (List_1_t7281 *, int32_t, const MethodInfo*))List_1__ctor_m47274_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m47275_gshared (List_1_t7281 * __this, KeyValuePair_2U5BU5D_t7280* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m47275(__this, ___data, ___size, method) (( void (*) (List_1_t7281 *, KeyValuePair_2U5BU5D_t7280*, int32_t, const MethodInfo*))List_1__ctor_m47275_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.cctor()
extern "C" void List_1__cctor_m47276_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m47276(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m47276_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47277_gshared (List_1_t7281 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47277(__this, method) (( Object_t* (*) (List_1_t7281 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m47277_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m47278_gshared (List_1_t7281 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m47278(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7281 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m47278_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m47279_gshared (List_1_t7281 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m47279(__this, method) (( Object_t * (*) (List_1_t7281 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m47279_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m47280_gshared (List_1_t7281 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m47280(__this, ___item, method) (( int32_t (*) (List_1_t7281 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m47280_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m47281_gshared (List_1_t7281 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m47281(__this, ___item, method) (( bool (*) (List_1_t7281 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m47281_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m47282_gshared (List_1_t7281 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m47282(__this, ___item, method) (( int32_t (*) (List_1_t7281 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m47282_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m47283_gshared (List_1_t7281 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m47283(__this, ___index, ___item, method) (( void (*) (List_1_t7281 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m47283_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m47284_gshared (List_1_t7281 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m47284(__this, ___item, method) (( void (*) (List_1_t7281 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m47284_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47285_gshared (List_1_t7281 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47285(__this, method) (( bool (*) (List_1_t7281 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m47285_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m47286_gshared (List_1_t7281 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m47286(__this, method) (( bool (*) (List_1_t7281 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m47286_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m47287_gshared (List_1_t7281 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m47287(__this, method) (( Object_t * (*) (List_1_t7281 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m47287_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m47288_gshared (List_1_t7281 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m47288(__this, method) (( bool (*) (List_1_t7281 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m47288_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m47289_gshared (List_1_t7281 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m47289(__this, method) (( bool (*) (List_1_t7281 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m47289_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m47290_gshared (List_1_t7281 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m47290(__this, ___index, method) (( Object_t * (*) (List_1_t7281 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m47290_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m47291_gshared (List_1_t7281 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m47291(__this, ___index, ___value, method) (( void (*) (List_1_t7281 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m47291_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Add(T)
extern "C" void List_1_Add_m47292_gshared (List_1_t7281 * __this, KeyValuePair_2_t7111  ___item, const MethodInfo* method);
#define List_1_Add_m47292(__this, ___item, method) (( void (*) (List_1_t7281 *, KeyValuePair_2_t7111 , const MethodInfo*))List_1_Add_m47292_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m47293_gshared (List_1_t7281 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m47293(__this, ___newCount, method) (( void (*) (List_1_t7281 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m47293_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m47294_gshared (List_1_t7281 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m47294(__this, ___idx, ___count, method) (( void (*) (List_1_t7281 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m47294_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m47295_gshared (List_1_t7281 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m47295(__this, ___collection, method) (( void (*) (List_1_t7281 *, Object_t*, const MethodInfo*))List_1_AddCollection_m47295_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m47296_gshared (List_1_t7281 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m47296(__this, ___enumerable, method) (( void (*) (List_1_t7281 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m47296_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m47297_gshared (List_1_t7281 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m47297(__this, ___collection, method) (( void (*) (List_1_t7281 *, Object_t*, const MethodInfo*))List_1_AddRange_m47297_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7284 * List_1_AsReadOnly_m47298_gshared (List_1_t7281 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m47298(__this, method) (( ReadOnlyCollection_1_t7284 * (*) (List_1_t7281 *, const MethodInfo*))List_1_AsReadOnly_m47298_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Clear()
extern "C" void List_1_Clear_m47299_gshared (List_1_t7281 * __this, const MethodInfo* method);
#define List_1_Clear_m47299(__this, method) (( void (*) (List_1_t7281 *, const MethodInfo*))List_1_Clear_m47299_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Contains(T)
extern "C" bool List_1_Contains_m47300_gshared (List_1_t7281 * __this, KeyValuePair_2_t7111  ___item, const MethodInfo* method);
#define List_1_Contains_m47300(__this, ___item, method) (( bool (*) (List_1_t7281 *, KeyValuePair_2_t7111 , const MethodInfo*))List_1_Contains_m47300_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m47301_gshared (List_1_t7281 * __this, KeyValuePair_2U5BU5D_t7280* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m47301(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7281 *, KeyValuePair_2U5BU5D_t7280*, int32_t, const MethodInfo*))List_1_CopyTo_m47301_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7111  List_1_Find_m47302_gshared (List_1_t7281 * __this, Predicate_1_t7288 * ___match, const MethodInfo* method);
#define List_1_Find_m47302(__this, ___match, method) (( KeyValuePair_2_t7111  (*) (List_1_t7281 *, Predicate_1_t7288 *, const MethodInfo*))List_1_Find_m47302_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m47303_gshared (Object_t * __this /* static, unused */, Predicate_1_t7288 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m47303(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7288 *, const MethodInfo*))List_1_CheckMatch_m47303_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m47304_gshared (List_1_t7281 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7288 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m47304(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7281 *, int32_t, int32_t, Predicate_1_t7288 *, const MethodInfo*))List_1_GetIndex_m47304_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetEnumerator()
extern "C" Enumerator_t7282  List_1_GetEnumerator_m47305_gshared (List_1_t7281 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m47305(__this, method) (( Enumerator_t7282  (*) (List_1_t7281 *, const MethodInfo*))List_1_GetEnumerator_m47305_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7281 * List_1_GetRange_m47306_gshared (List_1_t7281 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m47306(__this, ___index, ___count, method) (( List_1_t7281 * (*) (List_1_t7281 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m47306_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m47307_gshared (List_1_t7281 * __this, KeyValuePair_2_t7111  ___item, const MethodInfo* method);
#define List_1_IndexOf_m47307(__this, ___item, method) (( int32_t (*) (List_1_t7281 *, KeyValuePair_2_t7111 , const MethodInfo*))List_1_IndexOf_m47307_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m47308_gshared (List_1_t7281 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m47308(__this, ___start, ___delta, method) (( void (*) (List_1_t7281 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m47308_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m47309_gshared (List_1_t7281 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m47309(__this, ___index, method) (( void (*) (List_1_t7281 *, int32_t, const MethodInfo*))List_1_CheckIndex_m47309_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m47310_gshared (List_1_t7281 * __this, int32_t ___index, KeyValuePair_2_t7111  ___item, const MethodInfo* method);
#define List_1_Insert_m47310(__this, ___index, ___item, method) (( void (*) (List_1_t7281 *, int32_t, KeyValuePair_2_t7111 , const MethodInfo*))List_1_Insert_m47310_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m47311_gshared (List_1_t7281 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m47311(__this, ___collection, method) (( void (*) (List_1_t7281 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m47311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m47312_gshared (List_1_t7281 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m47312(__this, ___index, ___collection, method) (( void (*) (List_1_t7281 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m47312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m47313_gshared (List_1_t7281 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m47313(__this, ___index, ___collection, method) (( void (*) (List_1_t7281 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m47313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m47314_gshared (List_1_t7281 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m47314(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7281 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m47314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Remove(T)
extern "C" bool List_1_Remove_m47315_gshared (List_1_t7281 * __this, KeyValuePair_2_t7111  ___item, const MethodInfo* method);
#define List_1_Remove_m47315(__this, ___item, method) (( bool (*) (List_1_t7281 *, KeyValuePair_2_t7111 , const MethodInfo*))List_1_Remove_m47315_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m47316_gshared (List_1_t7281 * __this, Predicate_1_t7288 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m47316(__this, ___match, method) (( int32_t (*) (List_1_t7281 *, Predicate_1_t7288 *, const MethodInfo*))List_1_RemoveAll_m47316_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m47317_gshared (List_1_t7281 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m47317(__this, ___index, method) (( void (*) (List_1_t7281 *, int32_t, const MethodInfo*))List_1_RemoveAt_m47317_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m47318_gshared (List_1_t7281 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m47318(__this, ___index, ___count, method) (( void (*) (List_1_t7281 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m47318_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Reverse()
extern "C" void List_1_Reverse_m47319_gshared (List_1_t7281 * __this, const MethodInfo* method);
#define List_1_Reverse_m47319(__this, method) (( void (*) (List_1_t7281 *, const MethodInfo*))List_1_Reverse_m47319_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort()
extern "C" void List_1_Sort_m47320_gshared (List_1_t7281 * __this, const MethodInfo* method);
#define List_1_Sort_m47320(__this, method) (( void (*) (List_1_t7281 *, const MethodInfo*))List_1_Sort_m47320_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m47321_gshared (List_1_t7281 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m47321(__this, ___comparer, method) (( void (*) (List_1_t7281 *, Object_t*, const MethodInfo*))List_1_Sort_m47321_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m47322_gshared (List_1_t7281 * __this, Comparison_1_t7291 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m47322(__this, ___comparison, method) (( void (*) (List_1_t7281 *, Comparison_1_t7291 *, const MethodInfo*))List_1_Sort_m47322_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7280* List_1_ToArray_m47323_gshared (List_1_t7281 * __this, const MethodInfo* method);
#define List_1_ToArray_m47323(__this, method) (( KeyValuePair_2U5BU5D_t7280* (*) (List_1_t7281 *, const MethodInfo*))List_1_ToArray_m47323_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::TrimExcess()
extern "C" void List_1_TrimExcess_m47324_gshared (List_1_t7281 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m47324(__this, method) (( void (*) (List_1_t7281 *, const MethodInfo*))List_1_TrimExcess_m47324_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m47325_gshared (List_1_t7281 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m47325(__this, method) (( int32_t (*) (List_1_t7281 *, const MethodInfo*))List_1_get_Capacity_m47325_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m47326_gshared (List_1_t7281 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m47326(__this, ___value, method) (( void (*) (List_1_t7281 *, int32_t, const MethodInfo*))List_1_set_Capacity_m47326_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Count()
extern "C" int32_t List_1_get_Count_m47327_gshared (List_1_t7281 * __this, const MethodInfo* method);
#define List_1_get_Count_m47327(__this, method) (( int32_t (*) (List_1_t7281 *, const MethodInfo*))List_1_get_Count_m47327_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7111  List_1_get_Item_m47328_gshared (List_1_t7281 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m47328(__this, ___index, method) (( KeyValuePair_2_t7111  (*) (List_1_t7281 *, int32_t, const MethodInfo*))List_1_get_Item_m47328_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m47329_gshared (List_1_t7281 * __this, int32_t ___index, KeyValuePair_2_t7111  ___value, const MethodInfo* method);
#define List_1_set_Item_m47329(__this, ___index, ___value, method) (( void (*) (List_1_t7281 *, int32_t, KeyValuePair_2_t7111 , const MethodInfo*))List_1_set_Item_m47329_gshared)(__this, ___index, ___value, method)
