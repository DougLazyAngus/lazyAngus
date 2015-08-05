#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int16>
struct List_1_t6402;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int16>
struct IEnumerable_1_t6254;
// System.Int16[]
struct Int16U5BU5D_t4842;
// System.Collections.Generic.IEnumerator`1<System.Int16>
struct IEnumerator_1_t6255;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9109;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int16>
struct ReadOnlyCollection_1_t6404;
// System.Predicate`1<System.Int16>
struct Predicate_1_t6409;
// System.Collections.Generic.IComparer`1<System.Int16>
struct IComparer_1_t5321;
// System.Comparison`1<System.Int16>
struct Comparison_1_t6413;
// System.Collections.Generic.List`1/Enumerator<System.Int16>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_56.h"

// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor()
extern "C" void List_1__ctor_m36352_gshared (List_1_t6402 * __this, const MethodInfo* method);
#define List_1__ctor_m36352(__this, method) (( void (*) (List_1_t6402 *, const MethodInfo*))List_1__ctor_m36352_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m36353_gshared (List_1_t6402 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m36353(__this, ___collection, method) (( void (*) (List_1_t6402 *, Object_t*, const MethodInfo*))List_1__ctor_m36353_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(System.Int32)
extern "C" void List_1__ctor_m36354_gshared (List_1_t6402 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m36354(__this, ___capacity, method) (( void (*) (List_1_t6402 *, int32_t, const MethodInfo*))List_1__ctor_m36354_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m36355_gshared (List_1_t6402 * __this, Int16U5BU5D_t4842* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m36355(__this, ___data, ___size, method) (( void (*) (List_1_t6402 *, Int16U5BU5D_t4842*, int32_t, const MethodInfo*))List_1__ctor_m36355_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::.cctor()
extern "C" void List_1__cctor_m36356_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m36356(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m36356_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int16>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36357_gshared (List_1_t6402 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36357(__this, method) (( Object_t* (*) (List_1_t6402 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36357_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m36358_gshared (List_1_t6402 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m36358(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6402 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m36358_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m36359_gshared (List_1_t6402 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m36359(__this, method) (( Object_t * (*) (List_1_t6402 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m36359_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m36360_gshared (List_1_t6402 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m36360(__this, ___item, method) (( int32_t (*) (List_1_t6402 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m36360_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m36361_gshared (List_1_t6402 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m36361(__this, ___item, method) (( bool (*) (List_1_t6402 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m36361_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m36362_gshared (List_1_t6402 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m36362(__this, ___item, method) (( int32_t (*) (List_1_t6402 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m36362_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m36363_gshared (List_1_t6402 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m36363(__this, ___index, ___item, method) (( void (*) (List_1_t6402 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m36363_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m36364_gshared (List_1_t6402 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m36364(__this, ___item, method) (( void (*) (List_1_t6402 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m36364_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36365_gshared (List_1_t6402 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36365(__this, method) (( bool (*) (List_1_t6402 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36365_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m36366_gshared (List_1_t6402 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m36366(__this, method) (( bool (*) (List_1_t6402 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m36366_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m36367_gshared (List_1_t6402 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m36367(__this, method) (( Object_t * (*) (List_1_t6402 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m36367_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m36368_gshared (List_1_t6402 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m36368(__this, method) (( bool (*) (List_1_t6402 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m36368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m36369_gshared (List_1_t6402 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m36369(__this, method) (( bool (*) (List_1_t6402 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m36369_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m36370_gshared (List_1_t6402 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m36370(__this, ___index, method) (( Object_t * (*) (List_1_t6402 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m36370_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m36371_gshared (List_1_t6402 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m36371(__this, ___index, ___value, method) (( void (*) (List_1_t6402 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m36371_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Add(T)
extern "C" void List_1_Add_m36372_gshared (List_1_t6402 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Add_m36372(__this, ___item, method) (( void (*) (List_1_t6402 *, int16_t, const MethodInfo*))List_1_Add_m36372_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m36373_gshared (List_1_t6402 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m36373(__this, ___newCount, method) (( void (*) (List_1_t6402 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m36373_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m36374_gshared (List_1_t6402 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m36374(__this, ___idx, ___count, method) (( void (*) (List_1_t6402 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m36374_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m36375_gshared (List_1_t6402 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m36375(__this, ___collection, method) (( void (*) (List_1_t6402 *, Object_t*, const MethodInfo*))List_1_AddCollection_m36375_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m36376_gshared (List_1_t6402 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m36376(__this, ___enumerable, method) (( void (*) (List_1_t6402 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m36376_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m36377_gshared (List_1_t6402 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m36377(__this, ___collection, method) (( void (*) (List_1_t6402 *, Object_t*, const MethodInfo*))List_1_AddRange_m36377_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int16>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6404 * List_1_AsReadOnly_m36378_gshared (List_1_t6402 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m36378(__this, method) (( ReadOnlyCollection_1_t6404 * (*) (List_1_t6402 *, const MethodInfo*))List_1_AsReadOnly_m36378_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Clear()
extern "C" void List_1_Clear_m36379_gshared (List_1_t6402 * __this, const MethodInfo* method);
#define List_1_Clear_m36379(__this, method) (( void (*) (List_1_t6402 *, const MethodInfo*))List_1_Clear_m36379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::Contains(T)
extern "C" bool List_1_Contains_m36380_gshared (List_1_t6402 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Contains_m36380(__this, ___item, method) (( bool (*) (List_1_t6402 *, int16_t, const MethodInfo*))List_1_Contains_m36380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m36381_gshared (List_1_t6402 * __this, Int16U5BU5D_t4842* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m36381(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6402 *, Int16U5BU5D_t4842*, int32_t, const MethodInfo*))List_1_CopyTo_m36381_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int16>::Find(System.Predicate`1<T>)
extern "C" int16_t List_1_Find_m36382_gshared (List_1_t6402 * __this, Predicate_1_t6409 * ___match, const MethodInfo* method);
#define List_1_Find_m36382(__this, ___match, method) (( int16_t (*) (List_1_t6402 *, Predicate_1_t6409 *, const MethodInfo*))List_1_Find_m36382_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m36383_gshared (Object_t * __this /* static, unused */, Predicate_1_t6409 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m36383(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6409 *, const MethodInfo*))List_1_CheckMatch_m36383_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m36384_gshared (List_1_t6402 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6409 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m36384(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6402 *, int32_t, int32_t, Predicate_1_t6409 *, const MethodInfo*))List_1_GetIndex_m36384_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int16>::GetEnumerator()
extern "C" Enumerator_t6403  List_1_GetEnumerator_m36385_gshared (List_1_t6402 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m36385(__this, method) (( Enumerator_t6403  (*) (List_1_t6402 *, const MethodInfo*))List_1_GetEnumerator_m36385_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int16>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6402 * List_1_GetRange_m36386_gshared (List_1_t6402 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m36386(__this, ___index, ___count, method) (( List_1_t6402 * (*) (List_1_t6402 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m36386_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m36387_gshared (List_1_t6402 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m36387(__this, ___item, method) (( int32_t (*) (List_1_t6402 *, int16_t, const MethodInfo*))List_1_IndexOf_m36387_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m36388_gshared (List_1_t6402 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m36388(__this, ___start, ___delta, method) (( void (*) (List_1_t6402 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m36388_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m36389_gshared (List_1_t6402 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m36389(__this, ___index, method) (( void (*) (List_1_t6402 *, int32_t, const MethodInfo*))List_1_CheckIndex_m36389_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m36390_gshared (List_1_t6402 * __this, int32_t ___index, int16_t ___item, const MethodInfo* method);
#define List_1_Insert_m36390(__this, ___index, ___item, method) (( void (*) (List_1_t6402 *, int32_t, int16_t, const MethodInfo*))List_1_Insert_m36390_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m36391_gshared (List_1_t6402 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m36391(__this, ___collection, method) (( void (*) (List_1_t6402 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m36391_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m36392_gshared (List_1_t6402 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m36392(__this, ___index, ___collection, method) (( void (*) (List_1_t6402 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m36392_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m36393_gshared (List_1_t6402 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m36393(__this, ___index, ___collection, method) (( void (*) (List_1_t6402 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m36393_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m36394_gshared (List_1_t6402 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m36394(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6402 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m36394_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int16>::Remove(T)
extern "C" bool List_1_Remove_m36395_gshared (List_1_t6402 * __this, int16_t ___item, const MethodInfo* method);
#define List_1_Remove_m36395(__this, ___item, method) (( bool (*) (List_1_t6402 *, int16_t, const MethodInfo*))List_1_Remove_m36395_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m36396_gshared (List_1_t6402 * __this, Predicate_1_t6409 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m36396(__this, ___match, method) (( int32_t (*) (List_1_t6402 *, Predicate_1_t6409 *, const MethodInfo*))List_1_RemoveAll_m36396_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m36397_gshared (List_1_t6402 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m36397(__this, ___index, method) (( void (*) (List_1_t6402 *, int32_t, const MethodInfo*))List_1_RemoveAt_m36397_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m36398_gshared (List_1_t6402 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m36398(__this, ___index, ___count, method) (( void (*) (List_1_t6402 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m36398_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Reverse()
extern "C" void List_1_Reverse_m36399_gshared (List_1_t6402 * __this, const MethodInfo* method);
#define List_1_Reverse_m36399(__this, method) (( void (*) (List_1_t6402 *, const MethodInfo*))List_1_Reverse_m36399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort()
extern "C" void List_1_Sort_m36400_gshared (List_1_t6402 * __this, const MethodInfo* method);
#define List_1_Sort_m36400(__this, method) (( void (*) (List_1_t6402 *, const MethodInfo*))List_1_Sort_m36400_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m36401_gshared (List_1_t6402 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m36401(__this, ___comparer, method) (( void (*) (List_1_t6402 *, Object_t*, const MethodInfo*))List_1_Sort_m36401_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m36402_gshared (List_1_t6402 * __this, Comparison_1_t6413 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m36402(__this, ___comparison, method) (( void (*) (List_1_t6402 *, Comparison_1_t6413 *, const MethodInfo*))List_1_Sort_m36402_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int16>::ToArray()
extern "C" Int16U5BU5D_t4842* List_1_ToArray_m36403_gshared (List_1_t6402 * __this, const MethodInfo* method);
#define List_1_ToArray_m36403(__this, method) (( Int16U5BU5D_t4842* (*) (List_1_t6402 *, const MethodInfo*))List_1_ToArray_m36403_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::TrimExcess()
extern "C" void List_1_TrimExcess_m36404_gshared (List_1_t6402 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m36404(__this, method) (( void (*) (List_1_t6402 *, const MethodInfo*))List_1_TrimExcess_m36404_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m36405_gshared (List_1_t6402 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m36405(__this, method) (( int32_t (*) (List_1_t6402 *, const MethodInfo*))List_1_get_Capacity_m36405_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m36406_gshared (List_1_t6402 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m36406(__this, ___value, method) (( void (*) (List_1_t6402 *, int32_t, const MethodInfo*))List_1_set_Capacity_m36406_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int16>::get_Count()
extern "C" int32_t List_1_get_Count_m36407_gshared (List_1_t6402 * __this, const MethodInfo* method);
#define List_1_get_Count_m36407(__this, method) (( int32_t (*) (List_1_t6402 *, const MethodInfo*))List_1_get_Count_m36407_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int16>::get_Item(System.Int32)
extern "C" int16_t List_1_get_Item_m36408_gshared (List_1_t6402 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m36408(__this, ___index, method) (( int16_t (*) (List_1_t6402 *, int32_t, const MethodInfo*))List_1_get_Item_m36408_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int16>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m36409_gshared (List_1_t6402 * __this, int32_t ___index, int16_t ___value, const MethodInfo* method);
#define List_1_set_Item_m36409(__this, ___index, ___value, method) (( void (*) (List_1_t6402 *, int32_t, int16_t, const MethodInfo*))List_1_set_Item_m36409_gshared)(__this, ___index, ___value, method)
