#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Double>
struct List_1_t6669;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Double>
struct IEnumerable_1_t6277;
// System.Double[]
struct DoubleU5BU5D_t4817;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t6278;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9104;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Double>
struct ReadOnlyCollection_1_t6671;
// System.Predicate`1<System.Double>
struct Predicate_1_t6676;
// System.Collections.Generic.IComparer`1<System.Double>
struct IComparer_1_t9105;
// System.Comparison`1<System.Double>
struct Comparison_1_t6680;
// System.Collections.Generic.List`1/Enumerator<System.Double>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_61.h"

// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
extern "C" void List_1__ctor_m39859_gshared (List_1_t6669 * __this, const MethodInfo* method);
#define List_1__ctor_m39859(__this, method) (( void (*) (List_1_t6669 *, const MethodInfo*))List_1__ctor_m39859_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m39860_gshared (List_1_t6669 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m39860(__this, ___collection, method) (( void (*) (List_1_t6669 *, Object_t*, const MethodInfo*))List_1__ctor_m39860_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(System.Int32)
extern "C" void List_1__ctor_m39861_gshared (List_1_t6669 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m39861(__this, ___capacity, method) (( void (*) (List_1_t6669 *, int32_t, const MethodInfo*))List_1__ctor_m39861_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m39862_gshared (List_1_t6669 * __this, DoubleU5BU5D_t4817* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m39862(__this, ___data, ___size, method) (( void (*) (List_1_t6669 *, DoubleU5BU5D_t4817*, int32_t, const MethodInfo*))List_1__ctor_m39862_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.cctor()
extern "C" void List_1__cctor_m39863_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m39863(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m39863_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Double>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39864_gshared (List_1_t6669 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39864(__this, method) (( Object_t* (*) (List_1_t6669 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39864_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m39865_gshared (List_1_t6669 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m39865(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6669 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m39865_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m39866_gshared (List_1_t6669 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39866(__this, method) (( Object_t * (*) (List_1_t6669 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m39866_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m39867_gshared (List_1_t6669 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m39867(__this, ___item, method) (( int32_t (*) (List_1_t6669 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m39867_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m39868_gshared (List_1_t6669 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m39868(__this, ___item, method) (( bool (*) (List_1_t6669 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m39868_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m39869_gshared (List_1_t6669 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m39869(__this, ___item, method) (( int32_t (*) (List_1_t6669 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m39869_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m39870_gshared (List_1_t6669 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m39870(__this, ___index, ___item, method) (( void (*) (List_1_t6669 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m39870_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m39871_gshared (List_1_t6669 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m39871(__this, ___item, method) (( void (*) (List_1_t6669 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m39871_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39872_gshared (List_1_t6669 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39872(__this, method) (( bool (*) (List_1_t6669 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m39873_gshared (List_1_t6669 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39873(__this, method) (( bool (*) (List_1_t6669 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m39873_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m39874_gshared (List_1_t6669 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m39874(__this, method) (( Object_t * (*) (List_1_t6669 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m39874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m39875_gshared (List_1_t6669 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m39875(__this, method) (( bool (*) (List_1_t6669 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m39875_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m39876_gshared (List_1_t6669 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m39876(__this, method) (( bool (*) (List_1_t6669 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m39876_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m39877_gshared (List_1_t6669 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m39877(__this, ___index, method) (( Object_t * (*) (List_1_t6669 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m39877_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m39878_gshared (List_1_t6669 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m39878(__this, ___index, ___value, method) (( void (*) (List_1_t6669 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m39878_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Add(T)
extern "C" void List_1_Add_m39879_gshared (List_1_t6669 * __this, double ___item, const MethodInfo* method);
#define List_1_Add_m39879(__this, ___item, method) (( void (*) (List_1_t6669 *, double, const MethodInfo*))List_1_Add_m39879_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m39880_gshared (List_1_t6669 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m39880(__this, ___newCount, method) (( void (*) (List_1_t6669 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m39880_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m39881_gshared (List_1_t6669 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m39881(__this, ___idx, ___count, method) (( void (*) (List_1_t6669 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m39881_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m39882_gshared (List_1_t6669 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m39882(__this, ___collection, method) (( void (*) (List_1_t6669 *, Object_t*, const MethodInfo*))List_1_AddCollection_m39882_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m39883_gshared (List_1_t6669 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m39883(__this, ___enumerable, method) (( void (*) (List_1_t6669 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m39883_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m39884_gshared (List_1_t6669 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m39884(__this, ___collection, method) (( void (*) (List_1_t6669 *, Object_t*, const MethodInfo*))List_1_AddRange_m39884_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Double>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6671 * List_1_AsReadOnly_m39885_gshared (List_1_t6669 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m39885(__this, method) (( ReadOnlyCollection_1_t6671 * (*) (List_1_t6669 *, const MethodInfo*))List_1_AsReadOnly_m39885_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Clear()
extern "C" void List_1_Clear_m39886_gshared (List_1_t6669 * __this, const MethodInfo* method);
#define List_1_Clear_m39886(__this, method) (( void (*) (List_1_t6669 *, const MethodInfo*))List_1_Clear_m39886_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::Contains(T)
extern "C" bool List_1_Contains_m39887_gshared (List_1_t6669 * __this, double ___item, const MethodInfo* method);
#define List_1_Contains_m39887(__this, ___item, method) (( bool (*) (List_1_t6669 *, double, const MethodInfo*))List_1_Contains_m39887_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m39888_gshared (List_1_t6669 * __this, DoubleU5BU5D_t4817* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m39888(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6669 *, DoubleU5BU5D_t4817*, int32_t, const MethodInfo*))List_1_CopyTo_m39888_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Double>::Find(System.Predicate`1<T>)
extern "C" double List_1_Find_m39889_gshared (List_1_t6669 * __this, Predicate_1_t6676 * ___match, const MethodInfo* method);
#define List_1_Find_m39889(__this, ___match, method) (( double (*) (List_1_t6669 *, Predicate_1_t6676 *, const MethodInfo*))List_1_Find_m39889_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m39890_gshared (Object_t * __this /* static, unused */, Predicate_1_t6676 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m39890(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6676 *, const MethodInfo*))List_1_CheckMatch_m39890_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m39891_gshared (List_1_t6669 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6676 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m39891(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6669 *, int32_t, int32_t, Predicate_1_t6676 *, const MethodInfo*))List_1_GetIndex_m39891_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Double>::GetEnumerator()
extern "C" Enumerator_t6670  List_1_GetEnumerator_m39892_gshared (List_1_t6669 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m39892(__this, method) (( Enumerator_t6670  (*) (List_1_t6669 *, const MethodInfo*))List_1_GetEnumerator_m39892_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Double>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6669 * List_1_GetRange_m39893_gshared (List_1_t6669 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m39893(__this, ___index, ___count, method) (( List_1_t6669 * (*) (List_1_t6669 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m39893_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m39894_gshared (List_1_t6669 * __this, double ___item, const MethodInfo* method);
#define List_1_IndexOf_m39894(__this, ___item, method) (( int32_t (*) (List_1_t6669 *, double, const MethodInfo*))List_1_IndexOf_m39894_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m39895_gshared (List_1_t6669 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m39895(__this, ___start, ___delta, method) (( void (*) (List_1_t6669 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m39895_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m39896_gshared (List_1_t6669 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m39896(__this, ___index, method) (( void (*) (List_1_t6669 *, int32_t, const MethodInfo*))List_1_CheckIndex_m39896_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m39897_gshared (List_1_t6669 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define List_1_Insert_m39897(__this, ___index, ___item, method) (( void (*) (List_1_t6669 *, int32_t, double, const MethodInfo*))List_1_Insert_m39897_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m39898_gshared (List_1_t6669 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m39898(__this, ___collection, method) (( void (*) (List_1_t6669 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m39898_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m39899_gshared (List_1_t6669 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m39899(__this, ___index, ___collection, method) (( void (*) (List_1_t6669 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m39899_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m39900_gshared (List_1_t6669 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m39900(__this, ___index, ___collection, method) (( void (*) (List_1_t6669 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m39900_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m39901_gshared (List_1_t6669 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m39901(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6669 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m39901_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::Remove(T)
extern "C" bool List_1_Remove_m39902_gshared (List_1_t6669 * __this, double ___item, const MethodInfo* method);
#define List_1_Remove_m39902(__this, ___item, method) (( bool (*) (List_1_t6669 *, double, const MethodInfo*))List_1_Remove_m39902_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m39903_gshared (List_1_t6669 * __this, Predicate_1_t6676 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m39903(__this, ___match, method) (( int32_t (*) (List_1_t6669 *, Predicate_1_t6676 *, const MethodInfo*))List_1_RemoveAll_m39903_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Double>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m39904_gshared (List_1_t6669 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m39904(__this, ___index, method) (( void (*) (List_1_t6669 *, int32_t, const MethodInfo*))List_1_RemoveAt_m39904_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m39905_gshared (List_1_t6669 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m39905(__this, ___index, ___count, method) (( void (*) (List_1_t6669 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m39905_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Reverse()
extern "C" void List_1_Reverse_m39906_gshared (List_1_t6669 * __this, const MethodInfo* method);
#define List_1_Reverse_m39906(__this, method) (( void (*) (List_1_t6669 *, const MethodInfo*))List_1_Reverse_m39906_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort()
extern "C" void List_1_Sort_m39907_gshared (List_1_t6669 * __this, const MethodInfo* method);
#define List_1_Sort_m39907(__this, method) (( void (*) (List_1_t6669 *, const MethodInfo*))List_1_Sort_m39907_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m39908_gshared (List_1_t6669 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m39908(__this, ___comparer, method) (( void (*) (List_1_t6669 *, Object_t*, const MethodInfo*))List_1_Sort_m39908_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m39909_gshared (List_1_t6669 * __this, Comparison_1_t6680 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m39909(__this, ___comparison, method) (( void (*) (List_1_t6669 *, Comparison_1_t6680 *, const MethodInfo*))List_1_Sort_m39909_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Double>::ToArray()
extern "C" DoubleU5BU5D_t4817* List_1_ToArray_m39910_gshared (List_1_t6669 * __this, const MethodInfo* method);
#define List_1_ToArray_m39910(__this, method) (( DoubleU5BU5D_t4817* (*) (List_1_t6669 *, const MethodInfo*))List_1_ToArray_m39910_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::TrimExcess()
extern "C" void List_1_TrimExcess_m39911_gshared (List_1_t6669 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m39911(__this, method) (( void (*) (List_1_t6669 *, const MethodInfo*))List_1_TrimExcess_m39911_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m39912_gshared (List_1_t6669 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m39912(__this, method) (( int32_t (*) (List_1_t6669 *, const MethodInfo*))List_1_get_Capacity_m39912_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m39913_gshared (List_1_t6669 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m39913(__this, ___value, method) (( void (*) (List_1_t6669 *, int32_t, const MethodInfo*))List_1_set_Capacity_m39913_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Count()
extern "C" int32_t List_1_get_Count_m39914_gshared (List_1_t6669 * __this, const MethodInfo* method);
#define List_1_get_Count_m39914(__this, method) (( int32_t (*) (List_1_t6669 *, const MethodInfo*))List_1_get_Count_m39914_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Double>::get_Item(System.Int32)
extern "C" double List_1_get_Item_m39915_gshared (List_1_t6669 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m39915(__this, ___index, method) (( double (*) (List_1_t6669 *, int32_t, const MethodInfo*))List_1_get_Item_m39915_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m39916_gshared (List_1_t6669 * __this, int32_t ___index, double ___value, const MethodInfo* method);
#define List_1_set_Item_m39916(__this, ___index, ___value, method) (( void (*) (List_1_t6669 *, int32_t, double, const MethodInfo*))List_1_set_Item_m39916_gshared)(__this, ___index, ___value, method)
