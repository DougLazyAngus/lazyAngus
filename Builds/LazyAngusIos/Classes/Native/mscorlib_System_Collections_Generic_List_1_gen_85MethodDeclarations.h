#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Double>
struct List_1_t7333;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Double>
struct IEnumerable_1_t6941;
// System.Double[]
struct DoubleU5BU5D_t5427;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t6942;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9853;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Double>
struct ReadOnlyCollection_1_t7335;
// System.Predicate`1<System.Double>
struct Predicate_1_t7340;
// System.Collections.Generic.IComparer`1<System.Double>
struct IComparer_1_t9854;
// System.Comparison`1<System.Double>
struct Comparison_1_t7344;
// System.Collections.Generic.List`1/Enumerator<System.Double>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_68.h"

// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
extern "C" void List_1__ctor_m45389_gshared (List_1_t7333 * __this, const MethodInfo* method);
#define List_1__ctor_m45389(__this, method) (( void (*) (List_1_t7333 *, const MethodInfo*))List_1__ctor_m45389_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m45390_gshared (List_1_t7333 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m45390(__this, ___collection, method) (( void (*) (List_1_t7333 *, Object_t*, const MethodInfo*))List_1__ctor_m45390_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(System.Int32)
extern "C" void List_1__ctor_m45391_gshared (List_1_t7333 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m45391(__this, ___capacity, method) (( void (*) (List_1_t7333 *, int32_t, const MethodInfo*))List_1__ctor_m45391_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m45392_gshared (List_1_t7333 * __this, DoubleU5BU5D_t5427* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m45392(__this, ___data, ___size, method) (( void (*) (List_1_t7333 *, DoubleU5BU5D_t5427*, int32_t, const MethodInfo*))List_1__ctor_m45392_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.cctor()
extern "C" void List_1__cctor_m45393_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m45393(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m45393_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Double>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m45394_gshared (List_1_t7333 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m45394(__this, method) (( Object_t* (*) (List_1_t7333 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m45394_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m45395_gshared (List_1_t7333 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m45395(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7333 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m45395_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m45396_gshared (List_1_t7333 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m45396(__this, method) (( Object_t * (*) (List_1_t7333 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m45396_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m45397_gshared (List_1_t7333 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m45397(__this, ___item, method) (( int32_t (*) (List_1_t7333 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m45397_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m45398_gshared (List_1_t7333 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m45398(__this, ___item, method) (( bool (*) (List_1_t7333 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m45398_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m45399_gshared (List_1_t7333 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m45399(__this, ___item, method) (( int32_t (*) (List_1_t7333 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m45399_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m45400_gshared (List_1_t7333 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m45400(__this, ___index, ___item, method) (( void (*) (List_1_t7333 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m45400_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m45401_gshared (List_1_t7333 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m45401(__this, ___item, method) (( void (*) (List_1_t7333 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m45401_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m45402_gshared (List_1_t7333 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m45402(__this, method) (( bool (*) (List_1_t7333 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m45402_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m45403_gshared (List_1_t7333 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m45403(__this, method) (( bool (*) (List_1_t7333 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m45403_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m45404_gshared (List_1_t7333 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m45404(__this, method) (( Object_t * (*) (List_1_t7333 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m45404_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m45405_gshared (List_1_t7333 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m45405(__this, method) (( bool (*) (List_1_t7333 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m45405_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m45406_gshared (List_1_t7333 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m45406(__this, method) (( bool (*) (List_1_t7333 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m45406_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m45407_gshared (List_1_t7333 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m45407(__this, ___index, method) (( Object_t * (*) (List_1_t7333 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m45407_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m45408_gshared (List_1_t7333 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m45408(__this, ___index, ___value, method) (( void (*) (List_1_t7333 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m45408_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Add(T)
extern "C" void List_1_Add_m45409_gshared (List_1_t7333 * __this, double ___item, const MethodInfo* method);
#define List_1_Add_m45409(__this, ___item, method) (( void (*) (List_1_t7333 *, double, const MethodInfo*))List_1_Add_m45409_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m45410_gshared (List_1_t7333 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m45410(__this, ___newCount, method) (( void (*) (List_1_t7333 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m45410_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m45411_gshared (List_1_t7333 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m45411(__this, ___idx, ___count, method) (( void (*) (List_1_t7333 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m45411_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m45412_gshared (List_1_t7333 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m45412(__this, ___collection, method) (( void (*) (List_1_t7333 *, Object_t*, const MethodInfo*))List_1_AddCollection_m45412_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m45413_gshared (List_1_t7333 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m45413(__this, ___enumerable, method) (( void (*) (List_1_t7333 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m45413_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m45414_gshared (List_1_t7333 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m45414(__this, ___collection, method) (( void (*) (List_1_t7333 *, Object_t*, const MethodInfo*))List_1_AddRange_m45414_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Double>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7335 * List_1_AsReadOnly_m45415_gshared (List_1_t7333 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m45415(__this, method) (( ReadOnlyCollection_1_t7335 * (*) (List_1_t7333 *, const MethodInfo*))List_1_AsReadOnly_m45415_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Clear()
extern "C" void List_1_Clear_m45416_gshared (List_1_t7333 * __this, const MethodInfo* method);
#define List_1_Clear_m45416(__this, method) (( void (*) (List_1_t7333 *, const MethodInfo*))List_1_Clear_m45416_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::Contains(T)
extern "C" bool List_1_Contains_m45417_gshared (List_1_t7333 * __this, double ___item, const MethodInfo* method);
#define List_1_Contains_m45417(__this, ___item, method) (( bool (*) (List_1_t7333 *, double, const MethodInfo*))List_1_Contains_m45417_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m45418_gshared (List_1_t7333 * __this, DoubleU5BU5D_t5427* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m45418(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7333 *, DoubleU5BU5D_t5427*, int32_t, const MethodInfo*))List_1_CopyTo_m45418_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Double>::Find(System.Predicate`1<T>)
extern "C" double List_1_Find_m45419_gshared (List_1_t7333 * __this, Predicate_1_t7340 * ___match, const MethodInfo* method);
#define List_1_Find_m45419(__this, ___match, method) (( double (*) (List_1_t7333 *, Predicate_1_t7340 *, const MethodInfo*))List_1_Find_m45419_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m45420_gshared (Object_t * __this /* static, unused */, Predicate_1_t7340 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m45420(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7340 *, const MethodInfo*))List_1_CheckMatch_m45420_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m45421_gshared (List_1_t7333 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7340 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m45421(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7333 *, int32_t, int32_t, Predicate_1_t7340 *, const MethodInfo*))List_1_GetIndex_m45421_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Double>::GetEnumerator()
extern "C" Enumerator_t7334  List_1_GetEnumerator_m45422_gshared (List_1_t7333 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m45422(__this, method) (( Enumerator_t7334  (*) (List_1_t7333 *, const MethodInfo*))List_1_GetEnumerator_m45422_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Double>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7333 * List_1_GetRange_m45423_gshared (List_1_t7333 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m45423(__this, ___index, ___count, method) (( List_1_t7333 * (*) (List_1_t7333 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m45423_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m45424_gshared (List_1_t7333 * __this, double ___item, const MethodInfo* method);
#define List_1_IndexOf_m45424(__this, ___item, method) (( int32_t (*) (List_1_t7333 *, double, const MethodInfo*))List_1_IndexOf_m45424_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m45425_gshared (List_1_t7333 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m45425(__this, ___start, ___delta, method) (( void (*) (List_1_t7333 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m45425_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m45426_gshared (List_1_t7333 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m45426(__this, ___index, method) (( void (*) (List_1_t7333 *, int32_t, const MethodInfo*))List_1_CheckIndex_m45426_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m45427_gshared (List_1_t7333 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define List_1_Insert_m45427(__this, ___index, ___item, method) (( void (*) (List_1_t7333 *, int32_t, double, const MethodInfo*))List_1_Insert_m45427_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m45428_gshared (List_1_t7333 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m45428(__this, ___collection, method) (( void (*) (List_1_t7333 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m45428_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m45429_gshared (List_1_t7333 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m45429(__this, ___index, ___collection, method) (( void (*) (List_1_t7333 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m45429_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m45430_gshared (List_1_t7333 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m45430(__this, ___index, ___collection, method) (( void (*) (List_1_t7333 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m45430_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m45431_gshared (List_1_t7333 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m45431(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7333 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m45431_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::Remove(T)
extern "C" bool List_1_Remove_m45432_gshared (List_1_t7333 * __this, double ___item, const MethodInfo* method);
#define List_1_Remove_m45432(__this, ___item, method) (( bool (*) (List_1_t7333 *, double, const MethodInfo*))List_1_Remove_m45432_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m45433_gshared (List_1_t7333 * __this, Predicate_1_t7340 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m45433(__this, ___match, method) (( int32_t (*) (List_1_t7333 *, Predicate_1_t7340 *, const MethodInfo*))List_1_RemoveAll_m45433_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Double>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m45434_gshared (List_1_t7333 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m45434(__this, ___index, method) (( void (*) (List_1_t7333 *, int32_t, const MethodInfo*))List_1_RemoveAt_m45434_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m45435_gshared (List_1_t7333 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m45435(__this, ___index, ___count, method) (( void (*) (List_1_t7333 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m45435_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Reverse()
extern "C" void List_1_Reverse_m45436_gshared (List_1_t7333 * __this, const MethodInfo* method);
#define List_1_Reverse_m45436(__this, method) (( void (*) (List_1_t7333 *, const MethodInfo*))List_1_Reverse_m45436_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort()
extern "C" void List_1_Sort_m45437_gshared (List_1_t7333 * __this, const MethodInfo* method);
#define List_1_Sort_m45437(__this, method) (( void (*) (List_1_t7333 *, const MethodInfo*))List_1_Sort_m45437_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m45438_gshared (List_1_t7333 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m45438(__this, ___comparer, method) (( void (*) (List_1_t7333 *, Object_t*, const MethodInfo*))List_1_Sort_m45438_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m45439_gshared (List_1_t7333 * __this, Comparison_1_t7344 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m45439(__this, ___comparison, method) (( void (*) (List_1_t7333 *, Comparison_1_t7344 *, const MethodInfo*))List_1_Sort_m45439_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Double>::ToArray()
extern "C" DoubleU5BU5D_t5427* List_1_ToArray_m45440_gshared (List_1_t7333 * __this, const MethodInfo* method);
#define List_1_ToArray_m45440(__this, method) (( DoubleU5BU5D_t5427* (*) (List_1_t7333 *, const MethodInfo*))List_1_ToArray_m45440_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::TrimExcess()
extern "C" void List_1_TrimExcess_m45441_gshared (List_1_t7333 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m45441(__this, method) (( void (*) (List_1_t7333 *, const MethodInfo*))List_1_TrimExcess_m45441_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m45442_gshared (List_1_t7333 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m45442(__this, method) (( int32_t (*) (List_1_t7333 *, const MethodInfo*))List_1_get_Capacity_m45442_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m45443_gshared (List_1_t7333 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m45443(__this, ___value, method) (( void (*) (List_1_t7333 *, int32_t, const MethodInfo*))List_1_set_Capacity_m45443_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Count()
extern "C" int32_t List_1_get_Count_m45444_gshared (List_1_t7333 * __this, const MethodInfo* method);
#define List_1_get_Count_m45444(__this, method) (( int32_t (*) (List_1_t7333 *, const MethodInfo*))List_1_get_Count_m45444_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Double>::get_Item(System.Int32)
extern "C" double List_1_get_Item_m45445_gshared (List_1_t7333 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m45445(__this, ___index, method) (( double (*) (List_1_t7333 *, int32_t, const MethodInfo*))List_1_get_Item_m45445_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m45446_gshared (List_1_t7333 * __this, int32_t ___index, double ___value, const MethodInfo* method);
#define List_1_set_Item_m45446(__this, ___index, ___value, method) (( void (*) (List_1_t7333 *, int32_t, double, const MethodInfo*))List_1_set_Item_m45446_gshared)(__this, ___index, ___value, method)
