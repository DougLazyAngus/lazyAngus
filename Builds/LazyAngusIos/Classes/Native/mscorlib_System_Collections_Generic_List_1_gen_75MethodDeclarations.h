#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t6526;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.UInt32>
struct IEnumerable_1_t6264;
// System.UInt32[]
struct UInt32U5BU5D_t3167;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t6265;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9108;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt32>
struct ReadOnlyCollection_1_t6528;
// System.Predicate`1<System.UInt32>
struct Predicate_1_t6533;
// System.Collections.Generic.IComparer`1<System.UInt32>
struct IComparer_1_t9109;
// System.Comparison`1<System.UInt32>
struct Comparison_1_t6537;
// System.Collections.Generic.List`1/Enumerator<System.UInt32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_58.h"

// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor()
extern "C" void List_1__ctor_m37908_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1__ctor_m37908(__this, method) (( void (*) (List_1_t6526 *, const MethodInfo*))List_1__ctor_m37908_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m37909_gshared (List_1_t6526 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m37909(__this, ___collection, method) (( void (*) (List_1_t6526 *, Object_t*, const MethodInfo*))List_1__ctor_m37909_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m37910_gshared (List_1_t6526 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m37910(__this, ___capacity, method) (( void (*) (List_1_t6526 *, int32_t, const MethodInfo*))List_1__ctor_m37910_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m37911_gshared (List_1_t6526 * __this, UInt32U5BU5D_t3167* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m37911(__this, ___data, ___size, method) (( void (*) (List_1_t6526 *, UInt32U5BU5D_t3167*, int32_t, const MethodInfo*))List_1__ctor_m37911_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.cctor()
extern "C" void List_1__cctor_m37912_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m37912(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m37912_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37913_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37913(__this, method) (( Object_t* (*) (List_1_t6526 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37913_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m37914_gshared (List_1_t6526 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m37914(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6526 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m37914_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m37915_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m37915(__this, method) (( Object_t * (*) (List_1_t6526 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m37915_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m37916_gshared (List_1_t6526 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m37916(__this, ___item, method) (( int32_t (*) (List_1_t6526 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m37916_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m37917_gshared (List_1_t6526 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m37917(__this, ___item, method) (( bool (*) (List_1_t6526 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m37917_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m37918_gshared (List_1_t6526 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m37918(__this, ___item, method) (( int32_t (*) (List_1_t6526 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m37918_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m37919_gshared (List_1_t6526 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m37919(__this, ___index, ___item, method) (( void (*) (List_1_t6526 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m37919_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m37920_gshared (List_1_t6526 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m37920(__this, ___item, method) (( void (*) (List_1_t6526 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m37920_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37921_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37921(__this, method) (( bool (*) (List_1_t6526 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37921_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m37922_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m37922(__this, method) (( bool (*) (List_1_t6526 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m37922_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m37923_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m37923(__this, method) (( Object_t * (*) (List_1_t6526 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m37923_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m37924_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m37924(__this, method) (( bool (*) (List_1_t6526 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m37924_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m37925_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m37925(__this, method) (( bool (*) (List_1_t6526 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m37925_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m37926_gshared (List_1_t6526 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m37926(__this, ___index, method) (( Object_t * (*) (List_1_t6526 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m37926_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m37927_gshared (List_1_t6526 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m37927(__this, ___index, ___value, method) (( void (*) (List_1_t6526 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m37927_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Add(T)
extern "C" void List_1_Add_m37928_gshared (List_1_t6526 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Add_m37928(__this, ___item, method) (( void (*) (List_1_t6526 *, uint32_t, const MethodInfo*))List_1_Add_m37928_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m37929_gshared (List_1_t6526 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m37929(__this, ___newCount, method) (( void (*) (List_1_t6526 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m37929_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m37930_gshared (List_1_t6526 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m37930(__this, ___idx, ___count, method) (( void (*) (List_1_t6526 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m37930_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m37931_gshared (List_1_t6526 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m37931(__this, ___collection, method) (( void (*) (List_1_t6526 *, Object_t*, const MethodInfo*))List_1_AddCollection_m37931_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m37932_gshared (List_1_t6526 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m37932(__this, ___enumerable, method) (( void (*) (List_1_t6526 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m37932_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m37933_gshared (List_1_t6526 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m37933(__this, ___collection, method) (( void (*) (List_1_t6526 *, Object_t*, const MethodInfo*))List_1_AddRange_m37933_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6528 * List_1_AsReadOnly_m37934_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m37934(__this, method) (( ReadOnlyCollection_1_t6528 * (*) (List_1_t6526 *, const MethodInfo*))List_1_AsReadOnly_m37934_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Clear()
extern "C" void List_1_Clear_m37935_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_Clear_m37935(__this, method) (( void (*) (List_1_t6526 *, const MethodInfo*))List_1_Clear_m37935_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Contains(T)
extern "C" bool List_1_Contains_m37936_gshared (List_1_t6526 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Contains_m37936(__this, ___item, method) (( bool (*) (List_1_t6526 *, uint32_t, const MethodInfo*))List_1_Contains_m37936_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m37937_gshared (List_1_t6526 * __this, UInt32U5BU5D_t3167* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m37937(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6526 *, UInt32U5BU5D_t3167*, int32_t, const MethodInfo*))List_1_CopyTo_m37937_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt32>::Find(System.Predicate`1<T>)
extern "C" uint32_t List_1_Find_m37938_gshared (List_1_t6526 * __this, Predicate_1_t6533 * ___match, const MethodInfo* method);
#define List_1_Find_m37938(__this, ___match, method) (( uint32_t (*) (List_1_t6526 *, Predicate_1_t6533 *, const MethodInfo*))List_1_Find_m37938_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m37939_gshared (Object_t * __this /* static, unused */, Predicate_1_t6533 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m37939(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6533 *, const MethodInfo*))List_1_CheckMatch_m37939_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m37940_gshared (List_1_t6526 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6533 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m37940(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6526 *, int32_t, int32_t, Predicate_1_t6533 *, const MethodInfo*))List_1_GetIndex_m37940_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt32>::GetEnumerator()
extern "C" Enumerator_t6527  List_1_GetEnumerator_m37941_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m37941(__this, method) (( Enumerator_t6527  (*) (List_1_t6526 *, const MethodInfo*))List_1_GetEnumerator_m37941_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.UInt32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6526 * List_1_GetRange_m37942_gshared (List_1_t6526 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m37942(__this, ___index, ___count, method) (( List_1_t6526 * (*) (List_1_t6526 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m37942_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m37943_gshared (List_1_t6526 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m37943(__this, ___item, method) (( int32_t (*) (List_1_t6526 *, uint32_t, const MethodInfo*))List_1_IndexOf_m37943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m37944_gshared (List_1_t6526 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m37944(__this, ___start, ___delta, method) (( void (*) (List_1_t6526 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m37944_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m37945_gshared (List_1_t6526 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m37945(__this, ___index, method) (( void (*) (List_1_t6526 *, int32_t, const MethodInfo*))List_1_CheckIndex_m37945_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m37946_gshared (List_1_t6526 * __this, int32_t ___index, uint32_t ___item, const MethodInfo* method);
#define List_1_Insert_m37946(__this, ___index, ___item, method) (( void (*) (List_1_t6526 *, int32_t, uint32_t, const MethodInfo*))List_1_Insert_m37946_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m37947_gshared (List_1_t6526 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m37947(__this, ___collection, method) (( void (*) (List_1_t6526 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m37947_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m37948_gshared (List_1_t6526 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m37948(__this, ___index, ___collection, method) (( void (*) (List_1_t6526 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m37948_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m37949_gshared (List_1_t6526 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m37949(__this, ___index, ___collection, method) (( void (*) (List_1_t6526 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m37949_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m37950_gshared (List_1_t6526 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m37950(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6526 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m37950_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Remove(T)
extern "C" bool List_1_Remove_m37951_gshared (List_1_t6526 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Remove_m37951(__this, ___item, method) (( bool (*) (List_1_t6526 *, uint32_t, const MethodInfo*))List_1_Remove_m37951_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m37952_gshared (List_1_t6526 * __this, Predicate_1_t6533 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m37952(__this, ___match, method) (( int32_t (*) (List_1_t6526 *, Predicate_1_t6533 *, const MethodInfo*))List_1_RemoveAll_m37952_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m37953_gshared (List_1_t6526 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m37953(__this, ___index, method) (( void (*) (List_1_t6526 *, int32_t, const MethodInfo*))List_1_RemoveAt_m37953_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m37954_gshared (List_1_t6526 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m37954(__this, ___index, ___count, method) (( void (*) (List_1_t6526 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m37954_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Reverse()
extern "C" void List_1_Reverse_m37955_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_Reverse_m37955(__this, method) (( void (*) (List_1_t6526 *, const MethodInfo*))List_1_Reverse_m37955_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort()
extern "C" void List_1_Sort_m37956_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_Sort_m37956(__this, method) (( void (*) (List_1_t6526 *, const MethodInfo*))List_1_Sort_m37956_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m37957_gshared (List_1_t6526 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m37957(__this, ___comparer, method) (( void (*) (List_1_t6526 *, Object_t*, const MethodInfo*))List_1_Sort_m37957_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m37958_gshared (List_1_t6526 * __this, Comparison_1_t6537 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m37958(__this, ___comparison, method) (( void (*) (List_1_t6526 *, Comparison_1_t6537 *, const MethodInfo*))List_1_Sort_m37958_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt32>::ToArray()
extern "C" UInt32U5BU5D_t3167* List_1_ToArray_m37959_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_ToArray_m37959(__this, method) (( UInt32U5BU5D_t3167* (*) (List_1_t6526 *, const MethodInfo*))List_1_ToArray_m37959_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::TrimExcess()
extern "C" void List_1_TrimExcess_m37960_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m37960(__this, method) (( void (*) (List_1_t6526 *, const MethodInfo*))List_1_TrimExcess_m37960_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m37961_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m37961(__this, method) (( int32_t (*) (List_1_t6526 *, const MethodInfo*))List_1_get_Capacity_m37961_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m37962_gshared (List_1_t6526 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m37962(__this, ___value, method) (( void (*) (List_1_t6526 *, int32_t, const MethodInfo*))List_1_set_Capacity_m37962_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Count()
extern "C" int32_t List_1_get_Count_m37963_gshared (List_1_t6526 * __this, const MethodInfo* method);
#define List_1_get_Count_m37963(__this, method) (( int32_t (*) (List_1_t6526 *, const MethodInfo*))List_1_get_Count_m37963_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt32>::get_Item(System.Int32)
extern "C" uint32_t List_1_get_Item_m37964_gshared (List_1_t6526 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m37964(__this, ___index, method) (( uint32_t (*) (List_1_t6526 *, int32_t, const MethodInfo*))List_1_get_Item_m37964_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m37965_gshared (List_1_t6526 * __this, int32_t ___index, uint32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m37965(__this, ___index, ___value, method) (( void (*) (List_1_t6526 *, int32_t, uint32_t, const MethodInfo*))List_1_set_Item_m37965_gshared)(__this, ___index, ___value, method)
