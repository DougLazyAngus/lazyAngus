#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt16>
struct List_1_t7101;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt16>
struct IEnumerable_1_t6912;
// System.UInt16[]
struct UInt16U5BU5D_t4392;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t6913;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9847;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt16>
struct ReadOnlyCollection_1_t7103;
// System.Predicate`1<System.UInt16>
struct Predicate_1_t7108;
// System.Collections.Generic.IComparer`1<System.UInt16>
struct IComparer_1_t9848;
// System.Comparison`1<System.UInt16>
struct Comparison_1_t7112;
// System.Collections.Generic.List`1/Enumerator<System.UInt16>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_64.h"

// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor()
extern "C" void List_1__ctor_m42387_gshared (List_1_t7101 * __this, const MethodInfo* method);
#define List_1__ctor_m42387(__this, method) (( void (*) (List_1_t7101 *, const MethodInfo*))List_1__ctor_m42387_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m42388_gshared (List_1_t7101 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m42388(__this, ___collection, method) (( void (*) (List_1_t7101 *, Object_t*, const MethodInfo*))List_1__ctor_m42388_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Int32)
extern "C" void List_1__ctor_m42389_gshared (List_1_t7101 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m42389(__this, ___capacity, method) (( void (*) (List_1_t7101 *, int32_t, const MethodInfo*))List_1__ctor_m42389_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m42390_gshared (List_1_t7101 * __this, UInt16U5BU5D_t4392* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m42390(__this, ___data, ___size, method) (( void (*) (List_1_t7101 *, UInt16U5BU5D_t4392*, int32_t, const MethodInfo*))List_1__ctor_m42390_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.cctor()
extern "C" void List_1__cctor_m42391_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m42391(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m42391_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42392_gshared (List_1_t7101 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42392(__this, method) (( Object_t* (*) (List_1_t7101 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m42392_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m42393_gshared (List_1_t7101 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m42393(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7101 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m42393_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m42394_gshared (List_1_t7101 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m42394(__this, method) (( Object_t * (*) (List_1_t7101 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m42394_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m42395_gshared (List_1_t7101 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m42395(__this, ___item, method) (( int32_t (*) (List_1_t7101 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m42395_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m42396_gshared (List_1_t7101 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m42396(__this, ___item, method) (( bool (*) (List_1_t7101 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m42396_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m42397_gshared (List_1_t7101 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m42397(__this, ___item, method) (( int32_t (*) (List_1_t7101 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m42397_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m42398_gshared (List_1_t7101 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m42398(__this, ___index, ___item, method) (( void (*) (List_1_t7101 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m42398_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m42399_gshared (List_1_t7101 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m42399(__this, ___item, method) (( void (*) (List_1_t7101 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m42399_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42400_gshared (List_1_t7101 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42400(__this, method) (( bool (*) (List_1_t7101 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42400_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m42401_gshared (List_1_t7101 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m42401(__this, method) (( bool (*) (List_1_t7101 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m42401_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m42402_gshared (List_1_t7101 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m42402(__this, method) (( Object_t * (*) (List_1_t7101 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m42402_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m42403_gshared (List_1_t7101 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m42403(__this, method) (( bool (*) (List_1_t7101 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m42403_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m42404_gshared (List_1_t7101 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m42404(__this, method) (( bool (*) (List_1_t7101 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m42404_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m42405_gshared (List_1_t7101 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m42405(__this, ___index, method) (( Object_t * (*) (List_1_t7101 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m42405_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m42406_gshared (List_1_t7101 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m42406(__this, ___index, ___value, method) (( void (*) (List_1_t7101 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m42406_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Add(T)
extern "C" void List_1_Add_m42407_gshared (List_1_t7101 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Add_m42407(__this, ___item, method) (( void (*) (List_1_t7101 *, uint16_t, const MethodInfo*))List_1_Add_m42407_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m42408_gshared (List_1_t7101 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m42408(__this, ___newCount, method) (( void (*) (List_1_t7101 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m42408_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m42409_gshared (List_1_t7101 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m42409(__this, ___idx, ___count, method) (( void (*) (List_1_t7101 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m42409_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m42410_gshared (List_1_t7101 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m42410(__this, ___collection, method) (( void (*) (List_1_t7101 *, Object_t*, const MethodInfo*))List_1_AddCollection_m42410_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m42411_gshared (List_1_t7101 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m42411(__this, ___enumerable, method) (( void (*) (List_1_t7101 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m42411_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m42412_gshared (List_1_t7101 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m42412(__this, ___collection, method) (( void (*) (List_1_t7101 *, Object_t*, const MethodInfo*))List_1_AddRange_m42412_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt16>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7103 * List_1_AsReadOnly_m42413_gshared (List_1_t7101 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m42413(__this, method) (( ReadOnlyCollection_1_t7103 * (*) (List_1_t7101 *, const MethodInfo*))List_1_AsReadOnly_m42413_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Clear()
extern "C" void List_1_Clear_m42414_gshared (List_1_t7101 * __this, const MethodInfo* method);
#define List_1_Clear_m42414(__this, method) (( void (*) (List_1_t7101 *, const MethodInfo*))List_1_Clear_m42414_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Contains(T)
extern "C" bool List_1_Contains_m42415_gshared (List_1_t7101 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Contains_m42415(__this, ___item, method) (( bool (*) (List_1_t7101 *, uint16_t, const MethodInfo*))List_1_Contains_m42415_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m42416_gshared (List_1_t7101 * __this, UInt16U5BU5D_t4392* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m42416(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7101 *, UInt16U5BU5D_t4392*, int32_t, const MethodInfo*))List_1_CopyTo_m42416_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt16>::Find(System.Predicate`1<T>)
extern "C" uint16_t List_1_Find_m42417_gshared (List_1_t7101 * __this, Predicate_1_t7108 * ___match, const MethodInfo* method);
#define List_1_Find_m42417(__this, ___match, method) (( uint16_t (*) (List_1_t7101 *, Predicate_1_t7108 *, const MethodInfo*))List_1_Find_m42417_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m42418_gshared (Object_t * __this /* static, unused */, Predicate_1_t7108 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m42418(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7108 *, const MethodInfo*))List_1_CheckMatch_m42418_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m42419_gshared (List_1_t7101 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7108 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m42419(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7101 *, int32_t, int32_t, Predicate_1_t7108 *, const MethodInfo*))List_1_GetIndex_m42419_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt16>::GetEnumerator()
extern "C" Enumerator_t7102  List_1_GetEnumerator_m42420_gshared (List_1_t7101 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m42420(__this, method) (( Enumerator_t7102  (*) (List_1_t7101 *, const MethodInfo*))List_1_GetEnumerator_m42420_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt16>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7101 * List_1_GetRange_m42421_gshared (List_1_t7101 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m42421(__this, ___index, ___count, method) (( List_1_t7101 * (*) (List_1_t7101 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m42421_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m42422_gshared (List_1_t7101 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m42422(__this, ___item, method) (( int32_t (*) (List_1_t7101 *, uint16_t, const MethodInfo*))List_1_IndexOf_m42422_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m42423_gshared (List_1_t7101 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m42423(__this, ___start, ___delta, method) (( void (*) (List_1_t7101 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m42423_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m42424_gshared (List_1_t7101 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m42424(__this, ___index, method) (( void (*) (List_1_t7101 *, int32_t, const MethodInfo*))List_1_CheckIndex_m42424_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m42425_gshared (List_1_t7101 * __this, int32_t ___index, uint16_t ___item, const MethodInfo* method);
#define List_1_Insert_m42425(__this, ___index, ___item, method) (( void (*) (List_1_t7101 *, int32_t, uint16_t, const MethodInfo*))List_1_Insert_m42425_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m42426_gshared (List_1_t7101 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m42426(__this, ___collection, method) (( void (*) (List_1_t7101 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m42426_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m42427_gshared (List_1_t7101 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m42427(__this, ___index, ___collection, method) (( void (*) (List_1_t7101 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m42427_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m42428_gshared (List_1_t7101 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m42428(__this, ___index, ___collection, method) (( void (*) (List_1_t7101 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m42428_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m42429_gshared (List_1_t7101 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m42429(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7101 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m42429_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Remove(T)
extern "C" bool List_1_Remove_m42430_gshared (List_1_t7101 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Remove_m42430(__this, ___item, method) (( bool (*) (List_1_t7101 *, uint16_t, const MethodInfo*))List_1_Remove_m42430_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m42431_gshared (List_1_t7101 * __this, Predicate_1_t7108 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m42431(__this, ___match, method) (( int32_t (*) (List_1_t7101 *, Predicate_1_t7108 *, const MethodInfo*))List_1_RemoveAll_m42431_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m42432_gshared (List_1_t7101 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m42432(__this, ___index, method) (( void (*) (List_1_t7101 *, int32_t, const MethodInfo*))List_1_RemoveAt_m42432_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m42433_gshared (List_1_t7101 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m42433(__this, ___index, ___count, method) (( void (*) (List_1_t7101 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m42433_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Reverse()
extern "C" void List_1_Reverse_m42434_gshared (List_1_t7101 * __this, const MethodInfo* method);
#define List_1_Reverse_m42434(__this, method) (( void (*) (List_1_t7101 *, const MethodInfo*))List_1_Reverse_m42434_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort()
extern "C" void List_1_Sort_m42435_gshared (List_1_t7101 * __this, const MethodInfo* method);
#define List_1_Sort_m42435(__this, method) (( void (*) (List_1_t7101 *, const MethodInfo*))List_1_Sort_m42435_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m42436_gshared (List_1_t7101 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m42436(__this, ___comparer, method) (( void (*) (List_1_t7101 *, Object_t*, const MethodInfo*))List_1_Sort_m42436_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m42437_gshared (List_1_t7101 * __this, Comparison_1_t7112 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m42437(__this, ___comparison, method) (( void (*) (List_1_t7101 *, Comparison_1_t7112 *, const MethodInfo*))List_1_Sort_m42437_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt16>::ToArray()
extern "C" UInt16U5BU5D_t4392* List_1_ToArray_m42438_gshared (List_1_t7101 * __this, const MethodInfo* method);
#define List_1_ToArray_m42438(__this, method) (( UInt16U5BU5D_t4392* (*) (List_1_t7101 *, const MethodInfo*))List_1_ToArray_m42438_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::TrimExcess()
extern "C" void List_1_TrimExcess_m42439_gshared (List_1_t7101 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m42439(__this, method) (( void (*) (List_1_t7101 *, const MethodInfo*))List_1_TrimExcess_m42439_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m42440_gshared (List_1_t7101 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m42440(__this, method) (( int32_t (*) (List_1_t7101 *, const MethodInfo*))List_1_get_Capacity_m42440_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m42441_gshared (List_1_t7101 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m42441(__this, ___value, method) (( void (*) (List_1_t7101 *, int32_t, const MethodInfo*))List_1_set_Capacity_m42441_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Count()
extern "C" int32_t List_1_get_Count_m42442_gshared (List_1_t7101 * __this, const MethodInfo* method);
#define List_1_get_Count_m42442(__this, method) (( int32_t (*) (List_1_t7101 *, const MethodInfo*))List_1_get_Count_m42442_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt16>::get_Item(System.Int32)
extern "C" uint16_t List_1_get_Item_m42443_gshared (List_1_t7101 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m42443(__this, ___index, method) (( uint16_t (*) (List_1_t7101 *, int32_t, const MethodInfo*))List_1_get_Item_m42443_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m42444_gshared (List_1_t7101 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method);
#define List_1_set_Item_m42444(__this, ___index, ___value, method) (( void (*) (List_1_t7101 *, int32_t, uint16_t, const MethodInfo*))List_1_set_Item_m42444_gshared)(__this, ___index, ___value, method)
