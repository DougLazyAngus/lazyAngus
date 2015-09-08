#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t6939;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t6880;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6881;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9766;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t6941;
// System.Predicate`1<System.Byte>
struct Predicate_1_t6943;
// System.Collections.Generic.IComparer`1<System.Byte>
struct IComparer_1_t9832;
// System.Comparison`1<System.Byte>
struct Comparison_1_t6947;
// System.Collections.Generic.List`1/Enumerator<System.Byte>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_61.h"

// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
extern "C" void List_1__ctor_m40340_gshared (List_1_t6939 * __this, const MethodInfo* method);
#define List_1__ctor_m40340(__this, method) (( void (*) (List_1_t6939 *, const MethodInfo*))List_1__ctor_m40340_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m40341_gshared (List_1_t6939 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m40341(__this, ___collection, method) (( void (*) (List_1_t6939 *, Object_t*, const MethodInfo*))List_1__ctor_m40341_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m40342_gshared (List_1_t6939 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m40342(__this, ___capacity, method) (( void (*) (List_1_t6939 *, int32_t, const MethodInfo*))List_1__ctor_m40342_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m40343_gshared (List_1_t6939 * __this, ByteU5BU5D_t66* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m40343(__this, ___data, ___size, method) (( void (*) (List_1_t6939 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))List_1__ctor_m40343_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.cctor()
extern "C" void List_1__cctor_m40344_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m40344(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m40344_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40345_gshared (List_1_t6939 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40345(__this, method) (( Object_t* (*) (List_1_t6939 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40345_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m40346_gshared (List_1_t6939 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m40346(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6939 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m40346_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m40347_gshared (List_1_t6939 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m40347(__this, method) (( Object_t * (*) (List_1_t6939 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m40347_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m40348_gshared (List_1_t6939 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m40348(__this, ___item, method) (( int32_t (*) (List_1_t6939 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m40348_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m40349_gshared (List_1_t6939 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m40349(__this, ___item, method) (( bool (*) (List_1_t6939 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m40349_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m40350_gshared (List_1_t6939 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m40350(__this, ___item, method) (( int32_t (*) (List_1_t6939 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m40350_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m40351_gshared (List_1_t6939 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m40351(__this, ___index, ___item, method) (( void (*) (List_1_t6939 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m40351_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m40352_gshared (List_1_t6939 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m40352(__this, ___item, method) (( void (*) (List_1_t6939 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m40352_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40353_gshared (List_1_t6939 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40353(__this, method) (( bool (*) (List_1_t6939 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40353_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m40354_gshared (List_1_t6939 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m40354(__this, method) (( bool (*) (List_1_t6939 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m40354_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m40355_gshared (List_1_t6939 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m40355(__this, method) (( Object_t * (*) (List_1_t6939 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m40355_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m40356_gshared (List_1_t6939 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m40356(__this, method) (( bool (*) (List_1_t6939 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m40356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m40357_gshared (List_1_t6939 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m40357(__this, method) (( bool (*) (List_1_t6939 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m40357_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m40358_gshared (List_1_t6939 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m40358(__this, ___index, method) (( Object_t * (*) (List_1_t6939 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m40358_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m40359_gshared (List_1_t6939 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m40359(__this, ___index, ___value, method) (( void (*) (List_1_t6939 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m40359_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
extern "C" void List_1_Add_m40360_gshared (List_1_t6939 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Add_m40360(__this, ___item, method) (( void (*) (List_1_t6939 *, uint8_t, const MethodInfo*))List_1_Add_m40360_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m40361_gshared (List_1_t6939 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m40361(__this, ___newCount, method) (( void (*) (List_1_t6939 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m40361_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m40362_gshared (List_1_t6939 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m40362(__this, ___idx, ___count, method) (( void (*) (List_1_t6939 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m40362_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m40363_gshared (List_1_t6939 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m40363(__this, ___collection, method) (( void (*) (List_1_t6939 *, Object_t*, const MethodInfo*))List_1_AddCollection_m40363_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m40364_gshared (List_1_t6939 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m40364(__this, ___enumerable, method) (( void (*) (List_1_t6939 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m40364_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m40365_gshared (List_1_t6939 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m40365(__this, ___collection, method) (( void (*) (List_1_t6939 *, Object_t*, const MethodInfo*))List_1_AddRange_m40365_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6941 * List_1_AsReadOnly_m40366_gshared (List_1_t6939 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m40366(__this, method) (( ReadOnlyCollection_1_t6941 * (*) (List_1_t6939 *, const MethodInfo*))List_1_AsReadOnly_m40366_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
extern "C" void List_1_Clear_m40367_gshared (List_1_t6939 * __this, const MethodInfo* method);
#define List_1_Clear_m40367(__this, method) (( void (*) (List_1_t6939 *, const MethodInfo*))List_1_Clear_m40367_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Contains(T)
extern "C" bool List_1_Contains_m40368_gshared (List_1_t6939 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Contains_m40368(__this, ___item, method) (( bool (*) (List_1_t6939 *, uint8_t, const MethodInfo*))List_1_Contains_m40368_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m40369_gshared (List_1_t6939 * __this, ByteU5BU5D_t66* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m40369(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6939 *, ByteU5BU5D_t66*, int32_t, const MethodInfo*))List_1_CopyTo_m40369_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte>::Find(System.Predicate`1<T>)
extern "C" uint8_t List_1_Find_m40370_gshared (List_1_t6939 * __this, Predicate_1_t6943 * ___match, const MethodInfo* method);
#define List_1_Find_m40370(__this, ___match, method) (( uint8_t (*) (List_1_t6939 *, Predicate_1_t6943 *, const MethodInfo*))List_1_Find_m40370_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m40371_gshared (Object_t * __this /* static, unused */, Predicate_1_t6943 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m40371(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6943 *, const MethodInfo*))List_1_CheckMatch_m40371_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m40372_gshared (List_1_t6939 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6943 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m40372(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6939 *, int32_t, int32_t, Predicate_1_t6943 *, const MethodInfo*))List_1_GetIndex_m40372_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
extern "C" Enumerator_t6940  List_1_GetEnumerator_m40373_gshared (List_1_t6939 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m40373(__this, method) (( Enumerator_t6940  (*) (List_1_t6939 *, const MethodInfo*))List_1_GetEnumerator_m40373_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6939 * List_1_GetRange_m40374_gshared (List_1_t6939 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m40374(__this, ___index, ___count, method) (( List_1_t6939 * (*) (List_1_t6939 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m40374_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m40375_gshared (List_1_t6939 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m40375(__this, ___item, method) (( int32_t (*) (List_1_t6939 *, uint8_t, const MethodInfo*))List_1_IndexOf_m40375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m40376_gshared (List_1_t6939 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m40376(__this, ___start, ___delta, method) (( void (*) (List_1_t6939 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m40376_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m40377_gshared (List_1_t6939 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m40377(__this, ___index, method) (( void (*) (List_1_t6939 *, int32_t, const MethodInfo*))List_1_CheckIndex_m40377_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m40378_gshared (List_1_t6939 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define List_1_Insert_m40378(__this, ___index, ___item, method) (( void (*) (List_1_t6939 *, int32_t, uint8_t, const MethodInfo*))List_1_Insert_m40378_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m40379_gshared (List_1_t6939 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m40379(__this, ___collection, method) (( void (*) (List_1_t6939 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m40379_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m40380_gshared (List_1_t6939 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m40380(__this, ___index, ___collection, method) (( void (*) (List_1_t6939 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m40380_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m40381_gshared (List_1_t6939 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m40381(__this, ___index, ___collection, method) (( void (*) (List_1_t6939 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m40381_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m40382_gshared (List_1_t6939 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m40382(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6939 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m40382_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Remove(T)
extern "C" bool List_1_Remove_m40383_gshared (List_1_t6939 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Remove_m40383(__this, ___item, method) (( bool (*) (List_1_t6939 *, uint8_t, const MethodInfo*))List_1_Remove_m40383_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m40384_gshared (List_1_t6939 * __this, Predicate_1_t6943 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m40384(__this, ___match, method) (( int32_t (*) (List_1_t6939 *, Predicate_1_t6943 *, const MethodInfo*))List_1_RemoveAll_m40384_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m40385_gshared (List_1_t6939 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m40385(__this, ___index, method) (( void (*) (List_1_t6939 *, int32_t, const MethodInfo*))List_1_RemoveAt_m40385_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m40386_gshared (List_1_t6939 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m40386(__this, ___index, ___count, method) (( void (*) (List_1_t6939 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m40386_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
extern "C" void List_1_Reverse_m40387_gshared (List_1_t6939 * __this, const MethodInfo* method);
#define List_1_Reverse_m40387(__this, method) (( void (*) (List_1_t6939 *, const MethodInfo*))List_1_Reverse_m40387_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort()
extern "C" void List_1_Sort_m40388_gshared (List_1_t6939 * __this, const MethodInfo* method);
#define List_1_Sort_m40388(__this, method) (( void (*) (List_1_t6939 *, const MethodInfo*))List_1_Sort_m40388_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m40389_gshared (List_1_t6939 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m40389(__this, ___comparer, method) (( void (*) (List_1_t6939 *, Object_t*, const MethodInfo*))List_1_Sort_m40389_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m40390_gshared (List_1_t6939 * __this, Comparison_1_t6947 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m40390(__this, ___comparison, method) (( void (*) (List_1_t6939 *, Comparison_1_t6947 *, const MethodInfo*))List_1_Sort_m40390_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
extern "C" ByteU5BU5D_t66* List_1_ToArray_m40391_gshared (List_1_t6939 * __this, const MethodInfo* method);
#define List_1_ToArray_m40391(__this, method) (( ByteU5BU5D_t66* (*) (List_1_t6939 *, const MethodInfo*))List_1_ToArray_m40391_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::TrimExcess()
extern "C" void List_1_TrimExcess_m40392_gshared (List_1_t6939 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m40392(__this, method) (( void (*) (List_1_t6939 *, const MethodInfo*))List_1_TrimExcess_m40392_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m40393_gshared (List_1_t6939 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m40393(__this, method) (( int32_t (*) (List_1_t6939 *, const MethodInfo*))List_1_get_Capacity_m40393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m40394_gshared (List_1_t6939 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m40394(__this, ___value, method) (( void (*) (List_1_t6939 *, int32_t, const MethodInfo*))List_1_set_Capacity_m40394_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
extern "C" int32_t List_1_get_Count_m40395_gshared (List_1_t6939 * __this, const MethodInfo* method);
#define List_1_get_Count_m40395(__this, method) (( int32_t (*) (List_1_t6939 *, const MethodInfo*))List_1_get_Count_m40395_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t List_1_get_Item_m40396_gshared (List_1_t6939 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m40396(__this, ___index, method) (( uint8_t (*) (List_1_t6939 *, int32_t, const MethodInfo*))List_1_get_Item_m40396_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m40397_gshared (List_1_t6939 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m40397(__this, ___index, ___value, method) (( void (*) (List_1_t6939 *, int32_t, uint8_t, const MethodInfo*))List_1_set_Item_m40397_gshared)(__this, ___index, ___value, method)
