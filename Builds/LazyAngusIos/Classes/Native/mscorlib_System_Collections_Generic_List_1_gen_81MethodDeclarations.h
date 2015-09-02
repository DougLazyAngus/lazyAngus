#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t6636;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt32>
struct IEnumerable_1_t6374;
// System.UInt32[]
struct UInt32U5BU5D_t3234;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t6375;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9249;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt32>
struct ReadOnlyCollection_1_t6638;
// System.Predicate`1<System.UInt32>
struct Predicate_1_t6643;
// System.Collections.Generic.IComparer`1<System.UInt32>
struct IComparer_1_t9250;
// System.Comparison`1<System.UInt32>
struct Comparison_1_t6647;
// System.Collections.Generic.List`1/Enumerator<System.UInt32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_64.h"

// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor()
extern "C" void List_1__ctor_m39061_gshared (List_1_t6636 * __this, const MethodInfo* method);
#define List_1__ctor_m39061(__this, method) (( void (*) (List_1_t6636 *, const MethodInfo*))List_1__ctor_m39061_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m39062_gshared (List_1_t6636 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m39062(__this, ___collection, method) (( void (*) (List_1_t6636 *, Object_t*, const MethodInfo*))List_1__ctor_m39062_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m39063_gshared (List_1_t6636 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m39063(__this, ___capacity, method) (( void (*) (List_1_t6636 *, int32_t, const MethodInfo*))List_1__ctor_m39063_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m39064_gshared (List_1_t6636 * __this, UInt32U5BU5D_t3234* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m39064(__this, ___data, ___size, method) (( void (*) (List_1_t6636 *, UInt32U5BU5D_t3234*, int32_t, const MethodInfo*))List_1__ctor_m39064_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.cctor()
extern "C" void List_1__cctor_m39065_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m39065(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m39065_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39066_gshared (List_1_t6636 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39066(__this, method) (( Object_t* (*) (List_1_t6636 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39066_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m39067_gshared (List_1_t6636 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m39067(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6636 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m39067_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m39068_gshared (List_1_t6636 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39068(__this, method) (( Object_t * (*) (List_1_t6636 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m39068_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m39069_gshared (List_1_t6636 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m39069(__this, ___item, method) (( int32_t (*) (List_1_t6636 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m39069_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m39070_gshared (List_1_t6636 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m39070(__this, ___item, method) (( bool (*) (List_1_t6636 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m39070_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m39071_gshared (List_1_t6636 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m39071(__this, ___item, method) (( int32_t (*) (List_1_t6636 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m39071_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m39072_gshared (List_1_t6636 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m39072(__this, ___index, ___item, method) (( void (*) (List_1_t6636 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m39072_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m39073_gshared (List_1_t6636 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m39073(__this, ___item, method) (( void (*) (List_1_t6636 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m39073_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39074_gshared (List_1_t6636 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39074(__this, method) (( bool (*) (List_1_t6636 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39074_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m39075_gshared (List_1_t6636 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39075(__this, method) (( bool (*) (List_1_t6636 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m39075_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m39076_gshared (List_1_t6636 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m39076(__this, method) (( Object_t * (*) (List_1_t6636 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m39076_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m39077_gshared (List_1_t6636 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m39077(__this, method) (( bool (*) (List_1_t6636 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m39077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m39078_gshared (List_1_t6636 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m39078(__this, method) (( bool (*) (List_1_t6636 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m39078_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m39079_gshared (List_1_t6636 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m39079(__this, ___index, method) (( Object_t * (*) (List_1_t6636 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m39079_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m39080_gshared (List_1_t6636 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m39080(__this, ___index, ___value, method) (( void (*) (List_1_t6636 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m39080_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Add(T)
extern "C" void List_1_Add_m39081_gshared (List_1_t6636 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Add_m39081(__this, ___item, method) (( void (*) (List_1_t6636 *, uint32_t, const MethodInfo*))List_1_Add_m39081_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m39082_gshared (List_1_t6636 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m39082(__this, ___newCount, method) (( void (*) (List_1_t6636 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m39082_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m39083_gshared (List_1_t6636 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m39083(__this, ___idx, ___count, method) (( void (*) (List_1_t6636 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m39083_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m39084_gshared (List_1_t6636 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m39084(__this, ___collection, method) (( void (*) (List_1_t6636 *, Object_t*, const MethodInfo*))List_1_AddCollection_m39084_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m39085_gshared (List_1_t6636 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m39085(__this, ___enumerable, method) (( void (*) (List_1_t6636 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m39085_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m39086_gshared (List_1_t6636 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m39086(__this, ___collection, method) (( void (*) (List_1_t6636 *, Object_t*, const MethodInfo*))List_1_AddRange_m39086_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6638 * List_1_AsReadOnly_m39087_gshared (List_1_t6636 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m39087(__this, method) (( ReadOnlyCollection_1_t6638 * (*) (List_1_t6636 *, const MethodInfo*))List_1_AsReadOnly_m39087_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Clear()
extern "C" void List_1_Clear_m39088_gshared (List_1_t6636 * __this, const MethodInfo* method);
#define List_1_Clear_m39088(__this, method) (( void (*) (List_1_t6636 *, const MethodInfo*))List_1_Clear_m39088_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Contains(T)
extern "C" bool List_1_Contains_m39089_gshared (List_1_t6636 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Contains_m39089(__this, ___item, method) (( bool (*) (List_1_t6636 *, uint32_t, const MethodInfo*))List_1_Contains_m39089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m39090_gshared (List_1_t6636 * __this, UInt32U5BU5D_t3234* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m39090(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6636 *, UInt32U5BU5D_t3234*, int32_t, const MethodInfo*))List_1_CopyTo_m39090_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt32>::Find(System.Predicate`1<T>)
extern "C" uint32_t List_1_Find_m39091_gshared (List_1_t6636 * __this, Predicate_1_t6643 * ___match, const MethodInfo* method);
#define List_1_Find_m39091(__this, ___match, method) (( uint32_t (*) (List_1_t6636 *, Predicate_1_t6643 *, const MethodInfo*))List_1_Find_m39091_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m39092_gshared (Object_t * __this /* static, unused */, Predicate_1_t6643 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m39092(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6643 *, const MethodInfo*))List_1_CheckMatch_m39092_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m39093_gshared (List_1_t6636 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6643 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m39093(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6636 *, int32_t, int32_t, Predicate_1_t6643 *, const MethodInfo*))List_1_GetIndex_m39093_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt32>::GetEnumerator()
extern "C" Enumerator_t6637  List_1_GetEnumerator_m39094_gshared (List_1_t6636 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m39094(__this, method) (( Enumerator_t6637  (*) (List_1_t6636 *, const MethodInfo*))List_1_GetEnumerator_m39094_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6636 * List_1_GetRange_m39095_gshared (List_1_t6636 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m39095(__this, ___index, ___count, method) (( List_1_t6636 * (*) (List_1_t6636 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m39095_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m39096_gshared (List_1_t6636 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m39096(__this, ___item, method) (( int32_t (*) (List_1_t6636 *, uint32_t, const MethodInfo*))List_1_IndexOf_m39096_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m39097_gshared (List_1_t6636 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m39097(__this, ___start, ___delta, method) (( void (*) (List_1_t6636 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m39097_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m39098_gshared (List_1_t6636 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m39098(__this, ___index, method) (( void (*) (List_1_t6636 *, int32_t, const MethodInfo*))List_1_CheckIndex_m39098_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m39099_gshared (List_1_t6636 * __this, int32_t ___index, uint32_t ___item, const MethodInfo* method);
#define List_1_Insert_m39099(__this, ___index, ___item, method) (( void (*) (List_1_t6636 *, int32_t, uint32_t, const MethodInfo*))List_1_Insert_m39099_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m39100_gshared (List_1_t6636 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m39100(__this, ___collection, method) (( void (*) (List_1_t6636 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m39100_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m39101_gshared (List_1_t6636 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m39101(__this, ___index, ___collection, method) (( void (*) (List_1_t6636 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m39101_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m39102_gshared (List_1_t6636 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m39102(__this, ___index, ___collection, method) (( void (*) (List_1_t6636 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m39102_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m39103_gshared (List_1_t6636 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m39103(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6636 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m39103_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Remove(T)
extern "C" bool List_1_Remove_m39104_gshared (List_1_t6636 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Remove_m39104(__this, ___item, method) (( bool (*) (List_1_t6636 *, uint32_t, const MethodInfo*))List_1_Remove_m39104_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m39105_gshared (List_1_t6636 * __this, Predicate_1_t6643 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m39105(__this, ___match, method) (( int32_t (*) (List_1_t6636 *, Predicate_1_t6643 *, const MethodInfo*))List_1_RemoveAll_m39105_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m39106_gshared (List_1_t6636 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m39106(__this, ___index, method) (( void (*) (List_1_t6636 *, int32_t, const MethodInfo*))List_1_RemoveAt_m39106_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m39107_gshared (List_1_t6636 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m39107(__this, ___index, ___count, method) (( void (*) (List_1_t6636 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m39107_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Reverse()
extern "C" void List_1_Reverse_m39108_gshared (List_1_t6636 * __this, const MethodInfo* method);
#define List_1_Reverse_m39108(__this, method) (( void (*) (List_1_t6636 *, const MethodInfo*))List_1_Reverse_m39108_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort()
extern "C" void List_1_Sort_m39109_gshared (List_1_t6636 * __this, const MethodInfo* method);
#define List_1_Sort_m39109(__this, method) (( void (*) (List_1_t6636 *, const MethodInfo*))List_1_Sort_m39109_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m39110_gshared (List_1_t6636 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m39110(__this, ___comparer, method) (( void (*) (List_1_t6636 *, Object_t*, const MethodInfo*))List_1_Sort_m39110_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m39111_gshared (List_1_t6636 * __this, Comparison_1_t6647 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m39111(__this, ___comparison, method) (( void (*) (List_1_t6636 *, Comparison_1_t6647 *, const MethodInfo*))List_1_Sort_m39111_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt32>::ToArray()
extern "C" UInt32U5BU5D_t3234* List_1_ToArray_m39112_gshared (List_1_t6636 * __this, const MethodInfo* method);
#define List_1_ToArray_m39112(__this, method) (( UInt32U5BU5D_t3234* (*) (List_1_t6636 *, const MethodInfo*))List_1_ToArray_m39112_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::TrimExcess()
extern "C" void List_1_TrimExcess_m39113_gshared (List_1_t6636 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m39113(__this, method) (( void (*) (List_1_t6636 *, const MethodInfo*))List_1_TrimExcess_m39113_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m39114_gshared (List_1_t6636 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m39114(__this, method) (( int32_t (*) (List_1_t6636 *, const MethodInfo*))List_1_get_Capacity_m39114_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m39115_gshared (List_1_t6636 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m39115(__this, ___value, method) (( void (*) (List_1_t6636 *, int32_t, const MethodInfo*))List_1_set_Capacity_m39115_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Count()
extern "C" int32_t List_1_get_Count_m39116_gshared (List_1_t6636 * __this, const MethodInfo* method);
#define List_1_get_Count_m39116(__this, method) (( int32_t (*) (List_1_t6636 *, const MethodInfo*))List_1_get_Count_m39116_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt32>::get_Item(System.Int32)
extern "C" uint32_t List_1_get_Item_m39117_gshared (List_1_t6636 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m39117(__this, ___index, method) (( uint32_t (*) (List_1_t6636 *, int32_t, const MethodInfo*))List_1_get_Item_m39117_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m39118_gshared (List_1_t6636 * __this, int32_t ___index, uint32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m39118(__this, ___index, ___value, method) (( void (*) (List_1_t6636 *, int32_t, uint32_t, const MethodInfo*))List_1_set_Item_m39118_gshared)(__this, ___index, ___value, method)
