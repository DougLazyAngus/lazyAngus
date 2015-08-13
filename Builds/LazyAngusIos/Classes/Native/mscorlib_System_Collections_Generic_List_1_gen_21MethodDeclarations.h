#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t797;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1477;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3362;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8706;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t5685;
// System.Predicate`1<System.Int32>
struct Predicate_1_t5687;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t5366;
// System.Comparison`1<System.Int32>
struct Comparison_1_t5691;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m4264_gshared (List_1_t797 * __this, const MethodInfo* method);
#define List_1__ctor_m4264(__this, method) (( void (*) (List_1_t797 *, const MethodInfo*))List_1__ctor_m4264_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m26458_gshared (List_1_t797 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m26458(__this, ___collection, method) (( void (*) (List_1_t797 *, Object_t*, const MethodInfo*))List_1__ctor_m26458_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m26460_gshared (List_1_t797 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m26460(__this, ___capacity, method) (( void (*) (List_1_t797 *, int32_t, const MethodInfo*))List_1__ctor_m26460_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m26462_gshared (List_1_t797 * __this, Int32U5BU5D_t484* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m26462(__this, ___data, ___size, method) (( void (*) (List_1_t797 *, Int32U5BU5D_t484*, int32_t, const MethodInfo*))List_1__ctor_m26462_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m26464_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m26464(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m26464_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26466_gshared (List_1_t797 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26466(__this, method) (( Object_t* (*) (List_1_t797 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26466_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m26468_gshared (List_1_t797 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m26468(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t797 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m26468_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m26470_gshared (List_1_t797 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26470(__this, method) (( Object_t * (*) (List_1_t797 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m26470_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m26472_gshared (List_1_t797 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m26472(__this, ___item, method) (( int32_t (*) (List_1_t797 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m26472_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m26474_gshared (List_1_t797 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m26474(__this, ___item, method) (( bool (*) (List_1_t797 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m26474_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m26476_gshared (List_1_t797 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m26476(__this, ___item, method) (( int32_t (*) (List_1_t797 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m26476_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m26478_gshared (List_1_t797 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m26478(__this, ___index, ___item, method) (( void (*) (List_1_t797 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m26478_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m26480_gshared (List_1_t797 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m26480(__this, ___item, method) (( void (*) (List_1_t797 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m26480_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26482_gshared (List_1_t797 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26482(__this, method) (( bool (*) (List_1_t797 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26482_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m26484_gshared (List_1_t797 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26484(__this, method) (( bool (*) (List_1_t797 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m26484_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m26486_gshared (List_1_t797 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m26486(__this, method) (( Object_t * (*) (List_1_t797 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m26486_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m26488_gshared (List_1_t797 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m26488(__this, method) (( bool (*) (List_1_t797 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m26488_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m26490_gshared (List_1_t797 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m26490(__this, method) (( bool (*) (List_1_t797 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m26490_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m26492_gshared (List_1_t797 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m26492(__this, ___index, method) (( Object_t * (*) (List_1_t797 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m26492_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m26494_gshared (List_1_t797 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m26494(__this, ___index, ___value, method) (( void (*) (List_1_t797 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m26494_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m26496_gshared (List_1_t797 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m26496(__this, ___item, method) (( void (*) (List_1_t797 *, int32_t, const MethodInfo*))List_1_Add_m26496_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m26498_gshared (List_1_t797 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m26498(__this, ___newCount, method) (( void (*) (List_1_t797 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m26498_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m26500_gshared (List_1_t797 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m26500(__this, ___idx, ___count, method) (( void (*) (List_1_t797 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26500_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m26502_gshared (List_1_t797 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m26502(__this, ___collection, method) (( void (*) (List_1_t797 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26502_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m26504_gshared (List_1_t797 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m26504(__this, ___enumerable, method) (( void (*) (List_1_t797 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26504_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m26506_gshared (List_1_t797 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m26506(__this, ___collection, method) (( void (*) (List_1_t797 *, Object_t*, const MethodInfo*))List_1_AddRange_m26506_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5685 * List_1_AsReadOnly_m26508_gshared (List_1_t797 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m26508(__this, method) (( ReadOnlyCollection_1_t5685 * (*) (List_1_t797 *, const MethodInfo*))List_1_AsReadOnly_m26508_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m26510_gshared (List_1_t797 * __this, const MethodInfo* method);
#define List_1_Clear_m26510(__this, method) (( void (*) (List_1_t797 *, const MethodInfo*))List_1_Clear_m26510_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m26512_gshared (List_1_t797 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m26512(__this, ___item, method) (( bool (*) (List_1_t797 *, int32_t, const MethodInfo*))List_1_Contains_m26512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m26514_gshared (List_1_t797 * __this, Int32U5BU5D_t484* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m26514(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t797 *, Int32U5BU5D_t484*, int32_t, const MethodInfo*))List_1_CopyTo_m26514_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m26516_gshared (List_1_t797 * __this, Predicate_1_t5687 * ___match, const MethodInfo* method);
#define List_1_Find_m26516(__this, ___match, method) (( int32_t (*) (List_1_t797 *, Predicate_1_t5687 *, const MethodInfo*))List_1_Find_m26516_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m26518_gshared (Object_t * __this /* static, unused */, Predicate_1_t5687 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m26518(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5687 *, const MethodInfo*))List_1_CheckMatch_m26518_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m26520_gshared (List_1_t797 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5687 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m26520(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t797 *, int32_t, int32_t, Predicate_1_t5687 *, const MethodInfo*))List_1_GetIndex_m26520_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t5683  List_1_GetEnumerator_m26522_gshared (List_1_t797 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m26522(__this, method) (( Enumerator_t5683  (*) (List_1_t797 *, const MethodInfo*))List_1_GetEnumerator_m26522_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t797 * List_1_GetRange_m26524_gshared (List_1_t797 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m26524(__this, ___index, ___count, method) (( List_1_t797 * (*) (List_1_t797 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26524_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m26526_gshared (List_1_t797 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m26526(__this, ___item, method) (( int32_t (*) (List_1_t797 *, int32_t, const MethodInfo*))List_1_IndexOf_m26526_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m26528_gshared (List_1_t797 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m26528(__this, ___start, ___delta, method) (( void (*) (List_1_t797 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26528_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m26530_gshared (List_1_t797 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m26530(__this, ___index, method) (( void (*) (List_1_t797 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26530_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m26532_gshared (List_1_t797 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m26532(__this, ___index, ___item, method) (( void (*) (List_1_t797 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m26532_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m26534_gshared (List_1_t797 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m26534(__this, ___collection, method) (( void (*) (List_1_t797 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26534_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m26536_gshared (List_1_t797 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m26536(__this, ___index, ___collection, method) (( void (*) (List_1_t797 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26536_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m26538_gshared (List_1_t797 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m26538(__this, ___index, ___collection, method) (( void (*) (List_1_t797 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26538_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m26540_gshared (List_1_t797 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m26540(__this, ___index, ___enumerable, method) (( void (*) (List_1_t797 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26540_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m26542_gshared (List_1_t797 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m26542(__this, ___item, method) (( bool (*) (List_1_t797 *, int32_t, const MethodInfo*))List_1_Remove_m26542_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m26544_gshared (List_1_t797 * __this, Predicate_1_t5687 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m26544(__this, ___match, method) (( int32_t (*) (List_1_t797 *, Predicate_1_t5687 *, const MethodInfo*))List_1_RemoveAll_m26544_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m26546_gshared (List_1_t797 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m26546(__this, ___index, method) (( void (*) (List_1_t797 *, int32_t, const MethodInfo*))List_1_RemoveAt_m26546_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m26548_gshared (List_1_t797 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m26548(__this, ___index, ___count, method) (( void (*) (List_1_t797 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26548_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m26550_gshared (List_1_t797 * __this, const MethodInfo* method);
#define List_1_Reverse_m26550(__this, method) (( void (*) (List_1_t797 *, const MethodInfo*))List_1_Reverse_m26550_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m26552_gshared (List_1_t797 * __this, const MethodInfo* method);
#define List_1_Sort_m26552(__this, method) (( void (*) (List_1_t797 *, const MethodInfo*))List_1_Sort_m26552_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m26554_gshared (List_1_t797 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m26554(__this, ___comparer, method) (( void (*) (List_1_t797 *, Object_t*, const MethodInfo*))List_1_Sort_m26554_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m26556_gshared (List_1_t797 * __this, Comparison_1_t5691 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m26556(__this, ___comparison, method) (( void (*) (List_1_t797 *, Comparison_1_t5691 *, const MethodInfo*))List_1_Sort_m26556_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t484* List_1_ToArray_m26558_gshared (List_1_t797 * __this, const MethodInfo* method);
#define List_1_ToArray_m26558(__this, method) (( Int32U5BU5D_t484* (*) (List_1_t797 *, const MethodInfo*))List_1_ToArray_m26558_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m26560_gshared (List_1_t797 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m26560(__this, method) (( void (*) (List_1_t797 *, const MethodInfo*))List_1_TrimExcess_m26560_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m26562_gshared (List_1_t797 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m26562(__this, method) (( int32_t (*) (List_1_t797 *, const MethodInfo*))List_1_get_Capacity_m26562_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m26564_gshared (List_1_t797 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m26564(__this, ___value, method) (( void (*) (List_1_t797 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26564_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m26566_gshared (List_1_t797 * __this, const MethodInfo* method);
#define List_1_get_Count_m26566(__this, method) (( int32_t (*) (List_1_t797 *, const MethodInfo*))List_1_get_Count_m26566_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m26568_gshared (List_1_t797 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m26568(__this, ___index, method) (( int32_t (*) (List_1_t797 *, int32_t, const MethodInfo*))List_1_get_Item_m26568_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m26570_gshared (List_1_t797 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m26570(__this, ___index, ___value, method) (( void (*) (List_1_t797 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m26570_gshared)(__this, ___index, ___value, method)
