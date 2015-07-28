#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt16>
struct List_1_t6437;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt16>
struct IEnumerable_1_t6248;
// System.UInt16[]
struct UInt16U5BU5D_t4003;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t6249;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9098;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt16>
struct ReadOnlyCollection_1_t6439;
// System.Predicate`1<System.UInt16>
struct Predicate_1_t6444;
// System.Collections.Generic.IComparer`1<System.UInt16>
struct IComparer_1_t9099;
// System.Comparison`1<System.UInt16>
struct Comparison_1_t6448;
// System.Collections.Generic.List`1/Enumerator<System.UInt16>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_57.h"

// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor()
extern "C" void List_1__ctor_m36857_gshared (List_1_t6437 * __this, const MethodInfo* method);
#define List_1__ctor_m36857(__this, method) (( void (*) (List_1_t6437 *, const MethodInfo*))List_1__ctor_m36857_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m36858_gshared (List_1_t6437 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m36858(__this, ___collection, method) (( void (*) (List_1_t6437 *, Object_t*, const MethodInfo*))List_1__ctor_m36858_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(System.Int32)
extern "C" void List_1__ctor_m36859_gshared (List_1_t6437 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m36859(__this, ___capacity, method) (( void (*) (List_1_t6437 *, int32_t, const MethodInfo*))List_1__ctor_m36859_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m36860_gshared (List_1_t6437 * __this, UInt16U5BU5D_t4003* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m36860(__this, ___data, ___size, method) (( void (*) (List_1_t6437 *, UInt16U5BU5D_t4003*, int32_t, const MethodInfo*))List_1__ctor_m36860_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::.cctor()
extern "C" void List_1__cctor_m36861_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m36861(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m36861_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36862_gshared (List_1_t6437 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36862(__this, method) (( Object_t* (*) (List_1_t6437 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36862_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m36863_gshared (List_1_t6437 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m36863(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6437 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m36863_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m36864_gshared (List_1_t6437 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m36864(__this, method) (( Object_t * (*) (List_1_t6437 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m36864_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m36865_gshared (List_1_t6437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m36865(__this, ___item, method) (( int32_t (*) (List_1_t6437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m36865_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m36866_gshared (List_1_t6437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m36866(__this, ___item, method) (( bool (*) (List_1_t6437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m36866_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m36867_gshared (List_1_t6437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m36867(__this, ___item, method) (( int32_t (*) (List_1_t6437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m36867_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m36868_gshared (List_1_t6437 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m36868(__this, ___index, ___item, method) (( void (*) (List_1_t6437 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m36868_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m36869_gshared (List_1_t6437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m36869(__this, ___item, method) (( void (*) (List_1_t6437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m36869_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36870_gshared (List_1_t6437 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36870(__this, method) (( bool (*) (List_1_t6437 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36870_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m36871_gshared (List_1_t6437 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m36871(__this, method) (( bool (*) (List_1_t6437 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m36871_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m36872_gshared (List_1_t6437 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m36872(__this, method) (( Object_t * (*) (List_1_t6437 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m36872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m36873_gshared (List_1_t6437 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m36873(__this, method) (( bool (*) (List_1_t6437 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m36873_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m36874_gshared (List_1_t6437 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m36874(__this, method) (( bool (*) (List_1_t6437 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m36874_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m36875_gshared (List_1_t6437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m36875(__this, ___index, method) (( Object_t * (*) (List_1_t6437 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m36875_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m36876_gshared (List_1_t6437 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m36876(__this, ___index, ___value, method) (( void (*) (List_1_t6437 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m36876_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Add(T)
extern "C" void List_1_Add_m36877_gshared (List_1_t6437 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Add_m36877(__this, ___item, method) (( void (*) (List_1_t6437 *, uint16_t, const MethodInfo*))List_1_Add_m36877_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m36878_gshared (List_1_t6437 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m36878(__this, ___newCount, method) (( void (*) (List_1_t6437 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m36878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m36879_gshared (List_1_t6437 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m36879(__this, ___idx, ___count, method) (( void (*) (List_1_t6437 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m36879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m36880_gshared (List_1_t6437 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m36880(__this, ___collection, method) (( void (*) (List_1_t6437 *, Object_t*, const MethodInfo*))List_1_AddCollection_m36880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m36881_gshared (List_1_t6437 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m36881(__this, ___enumerable, method) (( void (*) (List_1_t6437 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m36881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m36882_gshared (List_1_t6437 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m36882(__this, ___collection, method) (( void (*) (List_1_t6437 *, Object_t*, const MethodInfo*))List_1_AddRange_m36882_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt16>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6439 * List_1_AsReadOnly_m36883_gshared (List_1_t6437 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m36883(__this, method) (( ReadOnlyCollection_1_t6439 * (*) (List_1_t6437 *, const MethodInfo*))List_1_AsReadOnly_m36883_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Clear()
extern "C" void List_1_Clear_m36884_gshared (List_1_t6437 * __this, const MethodInfo* method);
#define List_1_Clear_m36884(__this, method) (( void (*) (List_1_t6437 *, const MethodInfo*))List_1_Clear_m36884_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Contains(T)
extern "C" bool List_1_Contains_m36885_gshared (List_1_t6437 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Contains_m36885(__this, ___item, method) (( bool (*) (List_1_t6437 *, uint16_t, const MethodInfo*))List_1_Contains_m36885_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m36886_gshared (List_1_t6437 * __this, UInt16U5BU5D_t4003* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m36886(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6437 *, UInt16U5BU5D_t4003*, int32_t, const MethodInfo*))List_1_CopyTo_m36886_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt16>::Find(System.Predicate`1<T>)
extern "C" uint16_t List_1_Find_m36887_gshared (List_1_t6437 * __this, Predicate_1_t6444 * ___match, const MethodInfo* method);
#define List_1_Find_m36887(__this, ___match, method) (( uint16_t (*) (List_1_t6437 *, Predicate_1_t6444 *, const MethodInfo*))List_1_Find_m36887_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m36888_gshared (Object_t * __this /* static, unused */, Predicate_1_t6444 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m36888(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6444 *, const MethodInfo*))List_1_CheckMatch_m36888_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m36889_gshared (List_1_t6437 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6444 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m36889(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6437 *, int32_t, int32_t, Predicate_1_t6444 *, const MethodInfo*))List_1_GetIndex_m36889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt16>::GetEnumerator()
extern "C" Enumerator_t6438  List_1_GetEnumerator_m36890_gshared (List_1_t6437 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m36890(__this, method) (( Enumerator_t6438  (*) (List_1_t6437 *, const MethodInfo*))List_1_GetEnumerator_m36890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt16>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6437 * List_1_GetRange_m36891_gshared (List_1_t6437 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m36891(__this, ___index, ___count, method) (( List_1_t6437 * (*) (List_1_t6437 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m36891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m36892_gshared (List_1_t6437 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m36892(__this, ___item, method) (( int32_t (*) (List_1_t6437 *, uint16_t, const MethodInfo*))List_1_IndexOf_m36892_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m36893_gshared (List_1_t6437 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m36893(__this, ___start, ___delta, method) (( void (*) (List_1_t6437 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m36893_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m36894_gshared (List_1_t6437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m36894(__this, ___index, method) (( void (*) (List_1_t6437 *, int32_t, const MethodInfo*))List_1_CheckIndex_m36894_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m36895_gshared (List_1_t6437 * __this, int32_t ___index, uint16_t ___item, const MethodInfo* method);
#define List_1_Insert_m36895(__this, ___index, ___item, method) (( void (*) (List_1_t6437 *, int32_t, uint16_t, const MethodInfo*))List_1_Insert_m36895_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m36896_gshared (List_1_t6437 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m36896(__this, ___collection, method) (( void (*) (List_1_t6437 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m36896_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m36897_gshared (List_1_t6437 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m36897(__this, ___index, ___collection, method) (( void (*) (List_1_t6437 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m36897_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m36898_gshared (List_1_t6437 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m36898(__this, ___index, ___collection, method) (( void (*) (List_1_t6437 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m36898_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m36899_gshared (List_1_t6437 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m36899(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6437 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m36899_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt16>::Remove(T)
extern "C" bool List_1_Remove_m36900_gshared (List_1_t6437 * __this, uint16_t ___item, const MethodInfo* method);
#define List_1_Remove_m36900(__this, ___item, method) (( bool (*) (List_1_t6437 *, uint16_t, const MethodInfo*))List_1_Remove_m36900_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m36901_gshared (List_1_t6437 * __this, Predicate_1_t6444 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m36901(__this, ___match, method) (( int32_t (*) (List_1_t6437 *, Predicate_1_t6444 *, const MethodInfo*))List_1_RemoveAll_m36901_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m36902_gshared (List_1_t6437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m36902(__this, ___index, method) (( void (*) (List_1_t6437 *, int32_t, const MethodInfo*))List_1_RemoveAt_m36902_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m36903_gshared (List_1_t6437 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m36903(__this, ___index, ___count, method) (( void (*) (List_1_t6437 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m36903_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Reverse()
extern "C" void List_1_Reverse_m36904_gshared (List_1_t6437 * __this, const MethodInfo* method);
#define List_1_Reverse_m36904(__this, method) (( void (*) (List_1_t6437 *, const MethodInfo*))List_1_Reverse_m36904_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort()
extern "C" void List_1_Sort_m36905_gshared (List_1_t6437 * __this, const MethodInfo* method);
#define List_1_Sort_m36905(__this, method) (( void (*) (List_1_t6437 *, const MethodInfo*))List_1_Sort_m36905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m36906_gshared (List_1_t6437 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m36906(__this, ___comparer, method) (( void (*) (List_1_t6437 *, Object_t*, const MethodInfo*))List_1_Sort_m36906_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m36907_gshared (List_1_t6437 * __this, Comparison_1_t6448 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m36907(__this, ___comparison, method) (( void (*) (List_1_t6437 *, Comparison_1_t6448 *, const MethodInfo*))List_1_Sort_m36907_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt16>::ToArray()
extern "C" UInt16U5BU5D_t4003* List_1_ToArray_m36908_gshared (List_1_t6437 * __this, const MethodInfo* method);
#define List_1_ToArray_m36908(__this, method) (( UInt16U5BU5D_t4003* (*) (List_1_t6437 *, const MethodInfo*))List_1_ToArray_m36908_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::TrimExcess()
extern "C" void List_1_TrimExcess_m36909_gshared (List_1_t6437 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m36909(__this, method) (( void (*) (List_1_t6437 *, const MethodInfo*))List_1_TrimExcess_m36909_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m36910_gshared (List_1_t6437 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m36910(__this, method) (( int32_t (*) (List_1_t6437 *, const MethodInfo*))List_1_get_Capacity_m36910_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m36911_gshared (List_1_t6437 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m36911(__this, ___value, method) (( void (*) (List_1_t6437 *, int32_t, const MethodInfo*))List_1_set_Capacity_m36911_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt16>::get_Count()
extern "C" int32_t List_1_get_Count_m36912_gshared (List_1_t6437 * __this, const MethodInfo* method);
#define List_1_get_Count_m36912(__this, method) (( int32_t (*) (List_1_t6437 *, const MethodInfo*))List_1_get_Count_m36912_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt16>::get_Item(System.Int32)
extern "C" uint16_t List_1_get_Item_m36913_gshared (List_1_t6437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m36913(__this, ___index, method) (( uint16_t (*) (List_1_t6437 *, int32_t, const MethodInfo*))List_1_get_Item_m36913_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt16>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m36914_gshared (List_1_t6437 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method);
#define List_1_set_Item_m36914(__this, ___index, ___value, method) (( void (*) (List_1_t6437 *, int32_t, uint16_t, const MethodInfo*))List_1_set_Item_m36914_gshared)(__this, ___index, ___value, method)
