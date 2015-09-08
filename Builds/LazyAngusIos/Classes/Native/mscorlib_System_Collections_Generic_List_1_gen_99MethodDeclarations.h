#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct List_1_t8064;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerable_1_t7790;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8063;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t7791;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct ICollection_1_t10004;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct ReadOnlyCollection_1_t8067;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Predicate_1_t8071;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IComparer_1_t10005;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Comparison_1_t8074;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_82.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor()
extern "C" void List_1__ctor_m54301_gshared (List_1_t8064 * __this, const MethodInfo* method);
#define List_1__ctor_m54301(__this, method) (( void (*) (List_1_t8064 *, const MethodInfo*))List_1__ctor_m54301_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m54302_gshared (List_1_t8064 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m54302(__this, ___collection, method) (( void (*) (List_1_t8064 *, Object_t*, const MethodInfo*))List_1__ctor_m54302_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m54303_gshared (List_1_t8064 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m54303(__this, ___capacity, method) (( void (*) (List_1_t8064 *, int32_t, const MethodInfo*))List_1__ctor_m54303_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m54304_gshared (List_1_t8064 * __this, KeyValuePair_2U5BU5D_t8063* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m54304(__this, ___data, ___size, method) (( void (*) (List_1_t8064 *, KeyValuePair_2U5BU5D_t8063*, int32_t, const MethodInfo*))List_1__ctor_m54304_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.cctor()
extern "C" void List_1__cctor_m54305_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m54305(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m54305_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54306_gshared (List_1_t8064 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54306(__this, method) (( Object_t* (*) (List_1_t8064 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54306_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m54307_gshared (List_1_t8064 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m54307(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8064 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m54307_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m54308_gshared (List_1_t8064 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m54308(__this, method) (( Object_t * (*) (List_1_t8064 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m54308_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m54309_gshared (List_1_t8064 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m54309(__this, ___item, method) (( int32_t (*) (List_1_t8064 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m54309_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m54310_gshared (List_1_t8064 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m54310(__this, ___item, method) (( bool (*) (List_1_t8064 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m54310_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m54311_gshared (List_1_t8064 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m54311(__this, ___item, method) (( int32_t (*) (List_1_t8064 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m54311_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m54312_gshared (List_1_t8064 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m54312(__this, ___index, ___item, method) (( void (*) (List_1_t8064 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m54312_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m54313_gshared (List_1_t8064 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m54313(__this, ___item, method) (( void (*) (List_1_t8064 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m54313_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54314_gshared (List_1_t8064 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54314(__this, method) (( bool (*) (List_1_t8064 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54314_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m54315_gshared (List_1_t8064 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m54315(__this, method) (( bool (*) (List_1_t8064 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m54315_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m54316_gshared (List_1_t8064 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m54316(__this, method) (( Object_t * (*) (List_1_t8064 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m54316_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m54317_gshared (List_1_t8064 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m54317(__this, method) (( bool (*) (List_1_t8064 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m54317_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m54318_gshared (List_1_t8064 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m54318(__this, method) (( bool (*) (List_1_t8064 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m54318_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m54319_gshared (List_1_t8064 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m54319(__this, ___index, method) (( Object_t * (*) (List_1_t8064 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m54319_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m54320_gshared (List_1_t8064 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m54320(__this, ___index, ___value, method) (( void (*) (List_1_t8064 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m54320_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Add(T)
extern "C" void List_1_Add_m54321_gshared (List_1_t8064 * __this, KeyValuePair_2_t7786  ___item, const MethodInfo* method);
#define List_1_Add_m54321(__this, ___item, method) (( void (*) (List_1_t8064 *, KeyValuePair_2_t7786 , const MethodInfo*))List_1_Add_m54321_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m54322_gshared (List_1_t8064 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m54322(__this, ___newCount, method) (( void (*) (List_1_t8064 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m54322_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m54323_gshared (List_1_t8064 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m54323(__this, ___idx, ___count, method) (( void (*) (List_1_t8064 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m54323_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m54324_gshared (List_1_t8064 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m54324(__this, ___collection, method) (( void (*) (List_1_t8064 *, Object_t*, const MethodInfo*))List_1_AddCollection_m54324_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m54325_gshared (List_1_t8064 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m54325(__this, ___enumerable, method) (( void (*) (List_1_t8064 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m54325_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m54326_gshared (List_1_t8064 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m54326(__this, ___collection, method) (( void (*) (List_1_t8064 *, Object_t*, const MethodInfo*))List_1_AddRange_m54326_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8067 * List_1_AsReadOnly_m54327_gshared (List_1_t8064 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m54327(__this, method) (( ReadOnlyCollection_1_t8067 * (*) (List_1_t8064 *, const MethodInfo*))List_1_AsReadOnly_m54327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Clear()
extern "C" void List_1_Clear_m54328_gshared (List_1_t8064 * __this, const MethodInfo* method);
#define List_1_Clear_m54328(__this, method) (( void (*) (List_1_t8064 *, const MethodInfo*))List_1_Clear_m54328_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Contains(T)
extern "C" bool List_1_Contains_m54329_gshared (List_1_t8064 * __this, KeyValuePair_2_t7786  ___item, const MethodInfo* method);
#define List_1_Contains_m54329(__this, ___item, method) (( bool (*) (List_1_t8064 *, KeyValuePair_2_t7786 , const MethodInfo*))List_1_Contains_m54329_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m54330_gshared (List_1_t8064 * __this, KeyValuePair_2U5BU5D_t8063* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m54330(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8064 *, KeyValuePair_2U5BU5D_t8063*, int32_t, const MethodInfo*))List_1_CopyTo_m54330_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7786  List_1_Find_m54331_gshared (List_1_t8064 * __this, Predicate_1_t8071 * ___match, const MethodInfo* method);
#define List_1_Find_m54331(__this, ___match, method) (( KeyValuePair_2_t7786  (*) (List_1_t8064 *, Predicate_1_t8071 *, const MethodInfo*))List_1_Find_m54331_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m54332_gshared (Object_t * __this /* static, unused */, Predicate_1_t8071 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m54332(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8071 *, const MethodInfo*))List_1_CheckMatch_m54332_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m54333_gshared (List_1_t8064 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8071 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m54333(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8064 *, int32_t, int32_t, Predicate_1_t8071 *, const MethodInfo*))List_1_GetIndex_m54333_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetEnumerator()
extern "C" Enumerator_t8065  List_1_GetEnumerator_m54334_gshared (List_1_t8064 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m54334(__this, method) (( Enumerator_t8065  (*) (List_1_t8064 *, const MethodInfo*))List_1_GetEnumerator_m54334_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8064 * List_1_GetRange_m54335_gshared (List_1_t8064 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m54335(__this, ___index, ___count, method) (( List_1_t8064 * (*) (List_1_t8064 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m54335_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m54336_gshared (List_1_t8064 * __this, KeyValuePair_2_t7786  ___item, const MethodInfo* method);
#define List_1_IndexOf_m54336(__this, ___item, method) (( int32_t (*) (List_1_t8064 *, KeyValuePair_2_t7786 , const MethodInfo*))List_1_IndexOf_m54336_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m54337_gshared (List_1_t8064 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m54337(__this, ___start, ___delta, method) (( void (*) (List_1_t8064 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m54337_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m54338_gshared (List_1_t8064 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m54338(__this, ___index, method) (( void (*) (List_1_t8064 *, int32_t, const MethodInfo*))List_1_CheckIndex_m54338_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m54339_gshared (List_1_t8064 * __this, int32_t ___index, KeyValuePair_2_t7786  ___item, const MethodInfo* method);
#define List_1_Insert_m54339(__this, ___index, ___item, method) (( void (*) (List_1_t8064 *, int32_t, KeyValuePair_2_t7786 , const MethodInfo*))List_1_Insert_m54339_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m54340_gshared (List_1_t8064 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m54340(__this, ___collection, method) (( void (*) (List_1_t8064 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m54340_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m54341_gshared (List_1_t8064 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m54341(__this, ___index, ___collection, method) (( void (*) (List_1_t8064 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m54341_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m54342_gshared (List_1_t8064 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m54342(__this, ___index, ___collection, method) (( void (*) (List_1_t8064 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m54342_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m54343_gshared (List_1_t8064 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m54343(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8064 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m54343_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Remove(T)
extern "C" bool List_1_Remove_m54344_gshared (List_1_t8064 * __this, KeyValuePair_2_t7786  ___item, const MethodInfo* method);
#define List_1_Remove_m54344(__this, ___item, method) (( bool (*) (List_1_t8064 *, KeyValuePair_2_t7786 , const MethodInfo*))List_1_Remove_m54344_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m54345_gshared (List_1_t8064 * __this, Predicate_1_t8071 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m54345(__this, ___match, method) (( int32_t (*) (List_1_t8064 *, Predicate_1_t8071 *, const MethodInfo*))List_1_RemoveAll_m54345_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m54346_gshared (List_1_t8064 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m54346(__this, ___index, method) (( void (*) (List_1_t8064 *, int32_t, const MethodInfo*))List_1_RemoveAt_m54346_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m54347_gshared (List_1_t8064 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m54347(__this, ___index, ___count, method) (( void (*) (List_1_t8064 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m54347_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Reverse()
extern "C" void List_1_Reverse_m54348_gshared (List_1_t8064 * __this, const MethodInfo* method);
#define List_1_Reverse_m54348(__this, method) (( void (*) (List_1_t8064 *, const MethodInfo*))List_1_Reverse_m54348_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort()
extern "C" void List_1_Sort_m54349_gshared (List_1_t8064 * __this, const MethodInfo* method);
#define List_1_Sort_m54349(__this, method) (( void (*) (List_1_t8064 *, const MethodInfo*))List_1_Sort_m54349_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m54350_gshared (List_1_t8064 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m54350(__this, ___comparer, method) (( void (*) (List_1_t8064 *, Object_t*, const MethodInfo*))List_1_Sort_m54350_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m54351_gshared (List_1_t8064 * __this, Comparison_1_t8074 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m54351(__this, ___comparison, method) (( void (*) (List_1_t8064 *, Comparison_1_t8074 *, const MethodInfo*))List_1_Sort_m54351_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8063* List_1_ToArray_m54352_gshared (List_1_t8064 * __this, const MethodInfo* method);
#define List_1_ToArray_m54352(__this, method) (( KeyValuePair_2U5BU5D_t8063* (*) (List_1_t8064 *, const MethodInfo*))List_1_ToArray_m54352_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::TrimExcess()
extern "C" void List_1_TrimExcess_m54353_gshared (List_1_t8064 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m54353(__this, method) (( void (*) (List_1_t8064 *, const MethodInfo*))List_1_TrimExcess_m54353_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m54354_gshared (List_1_t8064 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m54354(__this, method) (( int32_t (*) (List_1_t8064 *, const MethodInfo*))List_1_get_Capacity_m54354_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m54355_gshared (List_1_t8064 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m54355(__this, ___value, method) (( void (*) (List_1_t8064 *, int32_t, const MethodInfo*))List_1_set_Capacity_m54355_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Count()
extern "C" int32_t List_1_get_Count_m54356_gshared (List_1_t8064 * __this, const MethodInfo* method);
#define List_1_get_Count_m54356(__this, method) (( int32_t (*) (List_1_t8064 *, const MethodInfo*))List_1_get_Count_m54356_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7786  List_1_get_Item_m54357_gshared (List_1_t8064 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m54357(__this, ___index, method) (( KeyValuePair_2_t7786  (*) (List_1_t8064 *, int32_t, const MethodInfo*))List_1_get_Item_m54357_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m54358_gshared (List_1_t8064 * __this, int32_t ___index, KeyValuePair_2_t7786  ___value, const MethodInfo* method);
#define List_1_set_Item_m54358(__this, ___index, ___value, method) (( void (*) (List_1_t8064 *, int32_t, KeyValuePair_2_t7786 , const MethodInfo*))List_1_set_Item_m54358_gshared)(__this, ___index, ___value, method)
