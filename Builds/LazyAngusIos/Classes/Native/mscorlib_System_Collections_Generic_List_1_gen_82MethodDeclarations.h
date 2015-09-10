#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t7182;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt32>
struct IEnumerable_1_t6920;
// System.UInt32[]
struct UInt32U5BU5D_t3127;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t6921;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9849;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt32>
struct ReadOnlyCollection_1_t7184;
// System.Predicate`1<System.UInt32>
struct Predicate_1_t7189;
// System.Collections.Generic.IComparer`1<System.UInt32>
struct IComparer_1_t9850;
// System.Comparison`1<System.UInt32>
struct Comparison_1_t7193;
// System.Collections.Generic.List`1/Enumerator<System.UInt32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_65.h"

// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor()
extern "C" void List_1__ctor_m43391_gshared (List_1_t7182 * __this, const MethodInfo* method);
#define List_1__ctor_m43391(__this, method) (( void (*) (List_1_t7182 *, const MethodInfo*))List_1__ctor_m43391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m43392_gshared (List_1_t7182 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m43392(__this, ___collection, method) (( void (*) (List_1_t7182 *, Object_t*, const MethodInfo*))List_1__ctor_m43392_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m43393_gshared (List_1_t7182 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m43393(__this, ___capacity, method) (( void (*) (List_1_t7182 *, int32_t, const MethodInfo*))List_1__ctor_m43393_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m43394_gshared (List_1_t7182 * __this, UInt32U5BU5D_t3127* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m43394(__this, ___data, ___size, method) (( void (*) (List_1_t7182 *, UInt32U5BU5D_t3127*, int32_t, const MethodInfo*))List_1__ctor_m43394_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.cctor()
extern "C" void List_1__cctor_m43395_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m43395(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m43395_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43396_gshared (List_1_t7182 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43396(__this, method) (( Object_t* (*) (List_1_t7182 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43396_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m43397_gshared (List_1_t7182 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m43397(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7182 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m43397_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m43398_gshared (List_1_t7182 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m43398(__this, method) (( Object_t * (*) (List_1_t7182 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m43398_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m43399_gshared (List_1_t7182 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m43399(__this, ___item, method) (( int32_t (*) (List_1_t7182 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m43399_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m43400_gshared (List_1_t7182 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m43400(__this, ___item, method) (( bool (*) (List_1_t7182 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m43400_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m43401_gshared (List_1_t7182 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m43401(__this, ___item, method) (( int32_t (*) (List_1_t7182 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m43401_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m43402_gshared (List_1_t7182 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m43402(__this, ___index, ___item, method) (( void (*) (List_1_t7182 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m43402_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m43403_gshared (List_1_t7182 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m43403(__this, ___item, method) (( void (*) (List_1_t7182 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m43403_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43404_gshared (List_1_t7182 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43404(__this, method) (( bool (*) (List_1_t7182 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43404_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m43405_gshared (List_1_t7182 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m43405(__this, method) (( bool (*) (List_1_t7182 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m43405_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m43406_gshared (List_1_t7182 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m43406(__this, method) (( Object_t * (*) (List_1_t7182 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m43406_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m43407_gshared (List_1_t7182 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m43407(__this, method) (( bool (*) (List_1_t7182 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m43407_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m43408_gshared (List_1_t7182 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m43408(__this, method) (( bool (*) (List_1_t7182 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m43408_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m43409_gshared (List_1_t7182 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m43409(__this, ___index, method) (( Object_t * (*) (List_1_t7182 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m43409_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m43410_gshared (List_1_t7182 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m43410(__this, ___index, ___value, method) (( void (*) (List_1_t7182 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m43410_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Add(T)
extern "C" void List_1_Add_m43411_gshared (List_1_t7182 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Add_m43411(__this, ___item, method) (( void (*) (List_1_t7182 *, uint32_t, const MethodInfo*))List_1_Add_m43411_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m43412_gshared (List_1_t7182 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m43412(__this, ___newCount, method) (( void (*) (List_1_t7182 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m43412_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m43413_gshared (List_1_t7182 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m43413(__this, ___idx, ___count, method) (( void (*) (List_1_t7182 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m43413_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m43414_gshared (List_1_t7182 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m43414(__this, ___collection, method) (( void (*) (List_1_t7182 *, Object_t*, const MethodInfo*))List_1_AddCollection_m43414_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m43415_gshared (List_1_t7182 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m43415(__this, ___enumerable, method) (( void (*) (List_1_t7182 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m43415_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m43416_gshared (List_1_t7182 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m43416(__this, ___collection, method) (( void (*) (List_1_t7182 *, Object_t*, const MethodInfo*))List_1_AddRange_m43416_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7184 * List_1_AsReadOnly_m43417_gshared (List_1_t7182 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m43417(__this, method) (( ReadOnlyCollection_1_t7184 * (*) (List_1_t7182 *, const MethodInfo*))List_1_AsReadOnly_m43417_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Clear()
extern "C" void List_1_Clear_m43418_gshared (List_1_t7182 * __this, const MethodInfo* method);
#define List_1_Clear_m43418(__this, method) (( void (*) (List_1_t7182 *, const MethodInfo*))List_1_Clear_m43418_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Contains(T)
extern "C" bool List_1_Contains_m43419_gshared (List_1_t7182 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Contains_m43419(__this, ___item, method) (( bool (*) (List_1_t7182 *, uint32_t, const MethodInfo*))List_1_Contains_m43419_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m43420_gshared (List_1_t7182 * __this, UInt32U5BU5D_t3127* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m43420(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7182 *, UInt32U5BU5D_t3127*, int32_t, const MethodInfo*))List_1_CopyTo_m43420_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt32>::Find(System.Predicate`1<T>)
extern "C" uint32_t List_1_Find_m43421_gshared (List_1_t7182 * __this, Predicate_1_t7189 * ___match, const MethodInfo* method);
#define List_1_Find_m43421(__this, ___match, method) (( uint32_t (*) (List_1_t7182 *, Predicate_1_t7189 *, const MethodInfo*))List_1_Find_m43421_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m43422_gshared (Object_t * __this /* static, unused */, Predicate_1_t7189 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m43422(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7189 *, const MethodInfo*))List_1_CheckMatch_m43422_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m43423_gshared (List_1_t7182 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7189 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m43423(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7182 *, int32_t, int32_t, Predicate_1_t7189 *, const MethodInfo*))List_1_GetIndex_m43423_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt32>::GetEnumerator()
extern "C" Enumerator_t7183  List_1_GetEnumerator_m43424_gshared (List_1_t7182 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m43424(__this, method) (( Enumerator_t7183  (*) (List_1_t7182 *, const MethodInfo*))List_1_GetEnumerator_m43424_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7182 * List_1_GetRange_m43425_gshared (List_1_t7182 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m43425(__this, ___index, ___count, method) (( List_1_t7182 * (*) (List_1_t7182 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m43425_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m43426_gshared (List_1_t7182 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m43426(__this, ___item, method) (( int32_t (*) (List_1_t7182 *, uint32_t, const MethodInfo*))List_1_IndexOf_m43426_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m43427_gshared (List_1_t7182 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m43427(__this, ___start, ___delta, method) (( void (*) (List_1_t7182 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m43427_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m43428_gshared (List_1_t7182 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m43428(__this, ___index, method) (( void (*) (List_1_t7182 *, int32_t, const MethodInfo*))List_1_CheckIndex_m43428_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m43429_gshared (List_1_t7182 * __this, int32_t ___index, uint32_t ___item, const MethodInfo* method);
#define List_1_Insert_m43429(__this, ___index, ___item, method) (( void (*) (List_1_t7182 *, int32_t, uint32_t, const MethodInfo*))List_1_Insert_m43429_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m43430_gshared (List_1_t7182 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m43430(__this, ___collection, method) (( void (*) (List_1_t7182 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m43430_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m43431_gshared (List_1_t7182 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m43431(__this, ___index, ___collection, method) (( void (*) (List_1_t7182 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m43431_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m43432_gshared (List_1_t7182 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m43432(__this, ___index, ___collection, method) (( void (*) (List_1_t7182 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m43432_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m43433_gshared (List_1_t7182 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m43433(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7182 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m43433_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Remove(T)
extern "C" bool List_1_Remove_m43434_gshared (List_1_t7182 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Remove_m43434(__this, ___item, method) (( bool (*) (List_1_t7182 *, uint32_t, const MethodInfo*))List_1_Remove_m43434_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m43435_gshared (List_1_t7182 * __this, Predicate_1_t7189 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m43435(__this, ___match, method) (( int32_t (*) (List_1_t7182 *, Predicate_1_t7189 *, const MethodInfo*))List_1_RemoveAll_m43435_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m43436_gshared (List_1_t7182 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m43436(__this, ___index, method) (( void (*) (List_1_t7182 *, int32_t, const MethodInfo*))List_1_RemoveAt_m43436_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m43437_gshared (List_1_t7182 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m43437(__this, ___index, ___count, method) (( void (*) (List_1_t7182 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m43437_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Reverse()
extern "C" void List_1_Reverse_m43438_gshared (List_1_t7182 * __this, const MethodInfo* method);
#define List_1_Reverse_m43438(__this, method) (( void (*) (List_1_t7182 *, const MethodInfo*))List_1_Reverse_m43438_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort()
extern "C" void List_1_Sort_m43439_gshared (List_1_t7182 * __this, const MethodInfo* method);
#define List_1_Sort_m43439(__this, method) (( void (*) (List_1_t7182 *, const MethodInfo*))List_1_Sort_m43439_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m43440_gshared (List_1_t7182 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m43440(__this, ___comparer, method) (( void (*) (List_1_t7182 *, Object_t*, const MethodInfo*))List_1_Sort_m43440_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m43441_gshared (List_1_t7182 * __this, Comparison_1_t7193 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m43441(__this, ___comparison, method) (( void (*) (List_1_t7182 *, Comparison_1_t7193 *, const MethodInfo*))List_1_Sort_m43441_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt32>::ToArray()
extern "C" UInt32U5BU5D_t3127* List_1_ToArray_m43442_gshared (List_1_t7182 * __this, const MethodInfo* method);
#define List_1_ToArray_m43442(__this, method) (( UInt32U5BU5D_t3127* (*) (List_1_t7182 *, const MethodInfo*))List_1_ToArray_m43442_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::TrimExcess()
extern "C" void List_1_TrimExcess_m43443_gshared (List_1_t7182 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m43443(__this, method) (( void (*) (List_1_t7182 *, const MethodInfo*))List_1_TrimExcess_m43443_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m43444_gshared (List_1_t7182 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m43444(__this, method) (( int32_t (*) (List_1_t7182 *, const MethodInfo*))List_1_get_Capacity_m43444_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m43445_gshared (List_1_t7182 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m43445(__this, ___value, method) (( void (*) (List_1_t7182 *, int32_t, const MethodInfo*))List_1_set_Capacity_m43445_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Count()
extern "C" int32_t List_1_get_Count_m43446_gshared (List_1_t7182 * __this, const MethodInfo* method);
#define List_1_get_Count_m43446(__this, method) (( int32_t (*) (List_1_t7182 *, const MethodInfo*))List_1_get_Count_m43446_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt32>::get_Item(System.Int32)
extern "C" uint32_t List_1_get_Item_m43447_gshared (List_1_t7182 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m43447(__this, ___index, method) (( uint32_t (*) (List_1_t7182 *, int32_t, const MethodInfo*))List_1_get_Item_m43447_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m43448_gshared (List_1_t7182 * __this, int32_t ___index, uint32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m43448(__this, ___index, ___value, method) (( void (*) (List_1_t7182 *, int32_t, uint32_t, const MethodInfo*))List_1_set_Item_m43448_gshared)(__this, ___index, ___value, method)
