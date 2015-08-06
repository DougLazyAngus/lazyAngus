#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t744;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1426;
// System.Int32[]
struct Int32U5BU5D_t548;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3314;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8634;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t5634;
// System.Predicate`1<System.Int32>
struct Predicate_1_t5636;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t5320;
// System.Comparison`1<System.Int32>
struct Comparison_1_t5640;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m4009_gshared (List_1_t744 * __this, const MethodInfo* method);
#define List_1__ctor_m4009(__this, method) (( void (*) (List_1_t744 *, const MethodInfo*))List_1__ctor_m4009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m26117_gshared (List_1_t744 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m26117(__this, ___collection, method) (( void (*) (List_1_t744 *, Object_t*, const MethodInfo*))List_1__ctor_m26117_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m26118_gshared (List_1_t744 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m26118(__this, ___capacity, method) (( void (*) (List_1_t744 *, int32_t, const MethodInfo*))List_1__ctor_m26118_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m26119_gshared (List_1_t744 * __this, Int32U5BU5D_t548* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m26119(__this, ___data, ___size, method) (( void (*) (List_1_t744 *, Int32U5BU5D_t548*, int32_t, const MethodInfo*))List_1__ctor_m26119_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m26120_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m26120(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m26120_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26121_gshared (List_1_t744 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26121(__this, method) (( Object_t* (*) (List_1_t744 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26121_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m26122_gshared (List_1_t744 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m26122(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t744 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m26122_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m26123_gshared (List_1_t744 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26123(__this, method) (( Object_t * (*) (List_1_t744 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m26123_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m26124_gshared (List_1_t744 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m26124(__this, ___item, method) (( int32_t (*) (List_1_t744 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m26124_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m26125_gshared (List_1_t744 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m26125(__this, ___item, method) (( bool (*) (List_1_t744 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m26125_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m26126_gshared (List_1_t744 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m26126(__this, ___item, method) (( int32_t (*) (List_1_t744 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m26126_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m26127_gshared (List_1_t744 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m26127(__this, ___index, ___item, method) (( void (*) (List_1_t744 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m26127_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m26128_gshared (List_1_t744 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m26128(__this, ___item, method) (( void (*) (List_1_t744 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m26128_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26129_gshared (List_1_t744 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26129(__this, method) (( bool (*) (List_1_t744 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26129_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m26130_gshared (List_1_t744 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26130(__this, method) (( bool (*) (List_1_t744 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m26130_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m26131_gshared (List_1_t744 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m26131(__this, method) (( Object_t * (*) (List_1_t744 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m26131_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m26132_gshared (List_1_t744 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m26132(__this, method) (( bool (*) (List_1_t744 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m26132_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m26133_gshared (List_1_t744 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m26133(__this, method) (( bool (*) (List_1_t744 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m26133_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m26134_gshared (List_1_t744 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m26134(__this, ___index, method) (( Object_t * (*) (List_1_t744 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m26134_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m26135_gshared (List_1_t744 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m26135(__this, ___index, ___value, method) (( void (*) (List_1_t744 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m26135_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m26136_gshared (List_1_t744 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m26136(__this, ___item, method) (( void (*) (List_1_t744 *, int32_t, const MethodInfo*))List_1_Add_m26136_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m26137_gshared (List_1_t744 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m26137(__this, ___newCount, method) (( void (*) (List_1_t744 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m26137_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m26138_gshared (List_1_t744 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m26138(__this, ___idx, ___count, method) (( void (*) (List_1_t744 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26138_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m26139_gshared (List_1_t744 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m26139(__this, ___collection, method) (( void (*) (List_1_t744 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26139_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m26140_gshared (List_1_t744 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m26140(__this, ___enumerable, method) (( void (*) (List_1_t744 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26140_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m26141_gshared (List_1_t744 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m26141(__this, ___collection, method) (( void (*) (List_1_t744 *, Object_t*, const MethodInfo*))List_1_AddRange_m26141_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5634 * List_1_AsReadOnly_m26142_gshared (List_1_t744 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m26142(__this, method) (( ReadOnlyCollection_1_t5634 * (*) (List_1_t744 *, const MethodInfo*))List_1_AsReadOnly_m26142_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m26143_gshared (List_1_t744 * __this, const MethodInfo* method);
#define List_1_Clear_m26143(__this, method) (( void (*) (List_1_t744 *, const MethodInfo*))List_1_Clear_m26143_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m26144_gshared (List_1_t744 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m26144(__this, ___item, method) (( bool (*) (List_1_t744 *, int32_t, const MethodInfo*))List_1_Contains_m26144_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m26145_gshared (List_1_t744 * __this, Int32U5BU5D_t548* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m26145(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t744 *, Int32U5BU5D_t548*, int32_t, const MethodInfo*))List_1_CopyTo_m26145_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m26146_gshared (List_1_t744 * __this, Predicate_1_t5636 * ___match, const MethodInfo* method);
#define List_1_Find_m26146(__this, ___match, method) (( int32_t (*) (List_1_t744 *, Predicate_1_t5636 *, const MethodInfo*))List_1_Find_m26146_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m26147_gshared (Object_t * __this /* static, unused */, Predicate_1_t5636 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m26147(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5636 *, const MethodInfo*))List_1_CheckMatch_m26147_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m26148_gshared (List_1_t744 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5636 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m26148(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t744 *, int32_t, int32_t, Predicate_1_t5636 *, const MethodInfo*))List_1_GetIndex_m26148_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t5632  List_1_GetEnumerator_m26149_gshared (List_1_t744 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m26149(__this, method) (( Enumerator_t5632  (*) (List_1_t744 *, const MethodInfo*))List_1_GetEnumerator_m26149_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t744 * List_1_GetRange_m26150_gshared (List_1_t744 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m26150(__this, ___index, ___count, method) (( List_1_t744 * (*) (List_1_t744 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26150_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m26151_gshared (List_1_t744 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m26151(__this, ___item, method) (( int32_t (*) (List_1_t744 *, int32_t, const MethodInfo*))List_1_IndexOf_m26151_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m26152_gshared (List_1_t744 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m26152(__this, ___start, ___delta, method) (( void (*) (List_1_t744 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26152_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m26153_gshared (List_1_t744 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m26153(__this, ___index, method) (( void (*) (List_1_t744 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26153_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m26154_gshared (List_1_t744 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m26154(__this, ___index, ___item, method) (( void (*) (List_1_t744 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m26154_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m26155_gshared (List_1_t744 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m26155(__this, ___collection, method) (( void (*) (List_1_t744 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26155_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m26156_gshared (List_1_t744 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m26156(__this, ___index, ___collection, method) (( void (*) (List_1_t744 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26156_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m26157_gshared (List_1_t744 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m26157(__this, ___index, ___collection, method) (( void (*) (List_1_t744 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26157_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m26158_gshared (List_1_t744 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m26158(__this, ___index, ___enumerable, method) (( void (*) (List_1_t744 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26158_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m26159_gshared (List_1_t744 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m26159(__this, ___item, method) (( bool (*) (List_1_t744 *, int32_t, const MethodInfo*))List_1_Remove_m26159_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m26160_gshared (List_1_t744 * __this, Predicate_1_t5636 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m26160(__this, ___match, method) (( int32_t (*) (List_1_t744 *, Predicate_1_t5636 *, const MethodInfo*))List_1_RemoveAll_m26160_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m26161_gshared (List_1_t744 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m26161(__this, ___index, method) (( void (*) (List_1_t744 *, int32_t, const MethodInfo*))List_1_RemoveAt_m26161_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m26162_gshared (List_1_t744 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m26162(__this, ___index, ___count, method) (( void (*) (List_1_t744 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26162_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m26163_gshared (List_1_t744 * __this, const MethodInfo* method);
#define List_1_Reverse_m26163(__this, method) (( void (*) (List_1_t744 *, const MethodInfo*))List_1_Reverse_m26163_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m26164_gshared (List_1_t744 * __this, const MethodInfo* method);
#define List_1_Sort_m26164(__this, method) (( void (*) (List_1_t744 *, const MethodInfo*))List_1_Sort_m26164_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m26165_gshared (List_1_t744 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m26165(__this, ___comparer, method) (( void (*) (List_1_t744 *, Object_t*, const MethodInfo*))List_1_Sort_m26165_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m26166_gshared (List_1_t744 * __this, Comparison_1_t5640 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m26166(__this, ___comparison, method) (( void (*) (List_1_t744 *, Comparison_1_t5640 *, const MethodInfo*))List_1_Sort_m26166_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t548* List_1_ToArray_m26167_gshared (List_1_t744 * __this, const MethodInfo* method);
#define List_1_ToArray_m26167(__this, method) (( Int32U5BU5D_t548* (*) (List_1_t744 *, const MethodInfo*))List_1_ToArray_m26167_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m26168_gshared (List_1_t744 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m26168(__this, method) (( void (*) (List_1_t744 *, const MethodInfo*))List_1_TrimExcess_m26168_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m26169_gshared (List_1_t744 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m26169(__this, method) (( int32_t (*) (List_1_t744 *, const MethodInfo*))List_1_get_Capacity_m26169_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m26170_gshared (List_1_t744 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m26170(__this, ___value, method) (( void (*) (List_1_t744 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26170_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m26171_gshared (List_1_t744 * __this, const MethodInfo* method);
#define List_1_get_Count_m26171(__this, method) (( int32_t (*) (List_1_t744 *, const MethodInfo*))List_1_get_Count_m26171_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m26172_gshared (List_1_t744 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m26172(__this, ___index, method) (( int32_t (*) (List_1_t744 *, int32_t, const MethodInfo*))List_1_get_Item_m26172_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m26173_gshared (List_1_t744 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m26173(__this, ___index, ___value, method) (( void (*) (List_1_t744 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m26173_gshared)(__this, ___index, ___value, method)
