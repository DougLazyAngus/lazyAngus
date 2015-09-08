#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Double>
struct List_1_t7326;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Double>
struct IEnumerable_1_t6934;
// System.Double[]
struct DoubleU5BU5D_t5420;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t6935;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9846;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Double>
struct ReadOnlyCollection_1_t7328;
// System.Predicate`1<System.Double>
struct Predicate_1_t7333;
// System.Collections.Generic.IComparer`1<System.Double>
struct IComparer_1_t9847;
// System.Comparison`1<System.Double>
struct Comparison_1_t7337;
// System.Collections.Generic.List`1/Enumerator<System.Double>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_68.h"

// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
extern "C" void List_1__ctor_m45332_gshared (List_1_t7326 * __this, const MethodInfo* method);
#define List_1__ctor_m45332(__this, method) (( void (*) (List_1_t7326 *, const MethodInfo*))List_1__ctor_m45332_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m45333_gshared (List_1_t7326 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m45333(__this, ___collection, method) (( void (*) (List_1_t7326 *, Object_t*, const MethodInfo*))List_1__ctor_m45333_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(System.Int32)
extern "C" void List_1__ctor_m45334_gshared (List_1_t7326 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m45334(__this, ___capacity, method) (( void (*) (List_1_t7326 *, int32_t, const MethodInfo*))List_1__ctor_m45334_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m45335_gshared (List_1_t7326 * __this, DoubleU5BU5D_t5420* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m45335(__this, ___data, ___size, method) (( void (*) (List_1_t7326 *, DoubleU5BU5D_t5420*, int32_t, const MethodInfo*))List_1__ctor_m45335_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.cctor()
extern "C" void List_1__cctor_m45336_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m45336(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m45336_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Double>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m45337_gshared (List_1_t7326 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m45337(__this, method) (( Object_t* (*) (List_1_t7326 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m45337_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m45338_gshared (List_1_t7326 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m45338(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7326 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m45338_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m45339_gshared (List_1_t7326 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m45339(__this, method) (( Object_t * (*) (List_1_t7326 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m45339_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m45340_gshared (List_1_t7326 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m45340(__this, ___item, method) (( int32_t (*) (List_1_t7326 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m45340_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m45341_gshared (List_1_t7326 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m45341(__this, ___item, method) (( bool (*) (List_1_t7326 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m45341_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m45342_gshared (List_1_t7326 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m45342(__this, ___item, method) (( int32_t (*) (List_1_t7326 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m45342_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m45343_gshared (List_1_t7326 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m45343(__this, ___index, ___item, method) (( void (*) (List_1_t7326 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m45343_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m45344_gshared (List_1_t7326 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m45344(__this, ___item, method) (( void (*) (List_1_t7326 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m45344_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m45345_gshared (List_1_t7326 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m45345(__this, method) (( bool (*) (List_1_t7326 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m45345_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m45346_gshared (List_1_t7326 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m45346(__this, method) (( bool (*) (List_1_t7326 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m45346_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m45347_gshared (List_1_t7326 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m45347(__this, method) (( Object_t * (*) (List_1_t7326 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m45347_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m45348_gshared (List_1_t7326 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m45348(__this, method) (( bool (*) (List_1_t7326 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m45348_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m45349_gshared (List_1_t7326 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m45349(__this, method) (( bool (*) (List_1_t7326 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m45349_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m45350_gshared (List_1_t7326 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m45350(__this, ___index, method) (( Object_t * (*) (List_1_t7326 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m45350_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m45351_gshared (List_1_t7326 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m45351(__this, ___index, ___value, method) (( void (*) (List_1_t7326 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m45351_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Add(T)
extern "C" void List_1_Add_m45352_gshared (List_1_t7326 * __this, double ___item, const MethodInfo* method);
#define List_1_Add_m45352(__this, ___item, method) (( void (*) (List_1_t7326 *, double, const MethodInfo*))List_1_Add_m45352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m45353_gshared (List_1_t7326 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m45353(__this, ___newCount, method) (( void (*) (List_1_t7326 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m45353_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m45354_gshared (List_1_t7326 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m45354(__this, ___idx, ___count, method) (( void (*) (List_1_t7326 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m45354_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m45355_gshared (List_1_t7326 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m45355(__this, ___collection, method) (( void (*) (List_1_t7326 *, Object_t*, const MethodInfo*))List_1_AddCollection_m45355_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m45356_gshared (List_1_t7326 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m45356(__this, ___enumerable, method) (( void (*) (List_1_t7326 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m45356_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m45357_gshared (List_1_t7326 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m45357(__this, ___collection, method) (( void (*) (List_1_t7326 *, Object_t*, const MethodInfo*))List_1_AddRange_m45357_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Double>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7328 * List_1_AsReadOnly_m45358_gshared (List_1_t7326 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m45358(__this, method) (( ReadOnlyCollection_1_t7328 * (*) (List_1_t7326 *, const MethodInfo*))List_1_AsReadOnly_m45358_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Clear()
extern "C" void List_1_Clear_m45359_gshared (List_1_t7326 * __this, const MethodInfo* method);
#define List_1_Clear_m45359(__this, method) (( void (*) (List_1_t7326 *, const MethodInfo*))List_1_Clear_m45359_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::Contains(T)
extern "C" bool List_1_Contains_m45360_gshared (List_1_t7326 * __this, double ___item, const MethodInfo* method);
#define List_1_Contains_m45360(__this, ___item, method) (( bool (*) (List_1_t7326 *, double, const MethodInfo*))List_1_Contains_m45360_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m45361_gshared (List_1_t7326 * __this, DoubleU5BU5D_t5420* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m45361(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7326 *, DoubleU5BU5D_t5420*, int32_t, const MethodInfo*))List_1_CopyTo_m45361_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Double>::Find(System.Predicate`1<T>)
extern "C" double List_1_Find_m45362_gshared (List_1_t7326 * __this, Predicate_1_t7333 * ___match, const MethodInfo* method);
#define List_1_Find_m45362(__this, ___match, method) (( double (*) (List_1_t7326 *, Predicate_1_t7333 *, const MethodInfo*))List_1_Find_m45362_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m45363_gshared (Object_t * __this /* static, unused */, Predicate_1_t7333 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m45363(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7333 *, const MethodInfo*))List_1_CheckMatch_m45363_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m45364_gshared (List_1_t7326 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7333 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m45364(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7326 *, int32_t, int32_t, Predicate_1_t7333 *, const MethodInfo*))List_1_GetIndex_m45364_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Double>::GetEnumerator()
extern "C" Enumerator_t7327  List_1_GetEnumerator_m45365_gshared (List_1_t7326 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m45365(__this, method) (( Enumerator_t7327  (*) (List_1_t7326 *, const MethodInfo*))List_1_GetEnumerator_m45365_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Double>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7326 * List_1_GetRange_m45366_gshared (List_1_t7326 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m45366(__this, ___index, ___count, method) (( List_1_t7326 * (*) (List_1_t7326 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m45366_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m45367_gshared (List_1_t7326 * __this, double ___item, const MethodInfo* method);
#define List_1_IndexOf_m45367(__this, ___item, method) (( int32_t (*) (List_1_t7326 *, double, const MethodInfo*))List_1_IndexOf_m45367_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m45368_gshared (List_1_t7326 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m45368(__this, ___start, ___delta, method) (( void (*) (List_1_t7326 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m45368_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m45369_gshared (List_1_t7326 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m45369(__this, ___index, method) (( void (*) (List_1_t7326 *, int32_t, const MethodInfo*))List_1_CheckIndex_m45369_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m45370_gshared (List_1_t7326 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define List_1_Insert_m45370(__this, ___index, ___item, method) (( void (*) (List_1_t7326 *, int32_t, double, const MethodInfo*))List_1_Insert_m45370_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m45371_gshared (List_1_t7326 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m45371(__this, ___collection, method) (( void (*) (List_1_t7326 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m45371_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m45372_gshared (List_1_t7326 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m45372(__this, ___index, ___collection, method) (( void (*) (List_1_t7326 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m45372_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m45373_gshared (List_1_t7326 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m45373(__this, ___index, ___collection, method) (( void (*) (List_1_t7326 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m45373_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m45374_gshared (List_1_t7326 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m45374(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7326 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m45374_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::Remove(T)
extern "C" bool List_1_Remove_m45375_gshared (List_1_t7326 * __this, double ___item, const MethodInfo* method);
#define List_1_Remove_m45375(__this, ___item, method) (( bool (*) (List_1_t7326 *, double, const MethodInfo*))List_1_Remove_m45375_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m45376_gshared (List_1_t7326 * __this, Predicate_1_t7333 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m45376(__this, ___match, method) (( int32_t (*) (List_1_t7326 *, Predicate_1_t7333 *, const MethodInfo*))List_1_RemoveAll_m45376_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Double>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m45377_gshared (List_1_t7326 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m45377(__this, ___index, method) (( void (*) (List_1_t7326 *, int32_t, const MethodInfo*))List_1_RemoveAt_m45377_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m45378_gshared (List_1_t7326 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m45378(__this, ___index, ___count, method) (( void (*) (List_1_t7326 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m45378_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Reverse()
extern "C" void List_1_Reverse_m45379_gshared (List_1_t7326 * __this, const MethodInfo* method);
#define List_1_Reverse_m45379(__this, method) (( void (*) (List_1_t7326 *, const MethodInfo*))List_1_Reverse_m45379_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort()
extern "C" void List_1_Sort_m45380_gshared (List_1_t7326 * __this, const MethodInfo* method);
#define List_1_Sort_m45380(__this, method) (( void (*) (List_1_t7326 *, const MethodInfo*))List_1_Sort_m45380_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m45381_gshared (List_1_t7326 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m45381(__this, ___comparer, method) (( void (*) (List_1_t7326 *, Object_t*, const MethodInfo*))List_1_Sort_m45381_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m45382_gshared (List_1_t7326 * __this, Comparison_1_t7337 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m45382(__this, ___comparison, method) (( void (*) (List_1_t7326 *, Comparison_1_t7337 *, const MethodInfo*))List_1_Sort_m45382_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Double>::ToArray()
extern "C" DoubleU5BU5D_t5420* List_1_ToArray_m45383_gshared (List_1_t7326 * __this, const MethodInfo* method);
#define List_1_ToArray_m45383(__this, method) (( DoubleU5BU5D_t5420* (*) (List_1_t7326 *, const MethodInfo*))List_1_ToArray_m45383_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::TrimExcess()
extern "C" void List_1_TrimExcess_m45384_gshared (List_1_t7326 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m45384(__this, method) (( void (*) (List_1_t7326 *, const MethodInfo*))List_1_TrimExcess_m45384_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m45385_gshared (List_1_t7326 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m45385(__this, method) (( int32_t (*) (List_1_t7326 *, const MethodInfo*))List_1_get_Capacity_m45385_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m45386_gshared (List_1_t7326 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m45386(__this, ___value, method) (( void (*) (List_1_t7326 *, int32_t, const MethodInfo*))List_1_set_Capacity_m45386_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Count()
extern "C" int32_t List_1_get_Count_m45387_gshared (List_1_t7326 * __this, const MethodInfo* method);
#define List_1_get_Count_m45387(__this, method) (( int32_t (*) (List_1_t7326 *, const MethodInfo*))List_1_get_Count_m45387_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Double>::get_Item(System.Int32)
extern "C" double List_1_get_Item_m45388_gshared (List_1_t7326 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m45388(__this, ___index, method) (( double (*) (List_1_t7326 *, int32_t, const MethodInfo*))List_1_get_Item_m45388_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m45389_gshared (List_1_t7326 * __this, int32_t ___index, double ___value, const MethodInfo* method);
#define List_1_set_Item_m45389(__this, ___index, ___value, method) (( void (*) (List_1_t7326 *, int32_t, double, const MethodInfo*))List_1_set_Item_m45389_gshared)(__this, ___index, ___value, method)
