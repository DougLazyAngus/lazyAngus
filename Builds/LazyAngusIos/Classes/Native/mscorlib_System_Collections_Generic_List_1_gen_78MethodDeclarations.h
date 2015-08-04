#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Double>
struct List_1_t6679;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Double>
struct IEnumerable_1_t6287;
// System.Double[]
struct DoubleU5BU5D_t4827;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_t6288;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9114;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Double>
struct ReadOnlyCollection_1_t6681;
// System.Predicate`1<System.Double>
struct Predicate_1_t6686;
// System.Collections.Generic.IComparer`1<System.Double>
struct IComparer_1_t9115;
// System.Comparison`1<System.Double>
struct Comparison_1_t6690;
// System.Collections.Generic.List`1/Enumerator<System.Double>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_61.h"

// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
extern "C" void List_1__ctor_m39922_gshared (List_1_t6679 * __this, const MethodInfo* method);
#define List_1__ctor_m39922(__this, method) (( void (*) (List_1_t6679 *, const MethodInfo*))List_1__ctor_m39922_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m39923_gshared (List_1_t6679 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m39923(__this, ___collection, method) (( void (*) (List_1_t6679 *, Object_t*, const MethodInfo*))List_1__ctor_m39923_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(System.Int32)
extern "C" void List_1__ctor_m39924_gshared (List_1_t6679 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m39924(__this, ___capacity, method) (( void (*) (List_1_t6679 *, int32_t, const MethodInfo*))List_1__ctor_m39924_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m39925_gshared (List_1_t6679 * __this, DoubleU5BU5D_t4827* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m39925(__this, ___data, ___size, method) (( void (*) (List_1_t6679 *, DoubleU5BU5D_t4827*, int32_t, const MethodInfo*))List_1__ctor_m39925_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Double>::.cctor()
extern "C" void List_1__cctor_m39926_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m39926(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m39926_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Double>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39927_gshared (List_1_t6679 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39927(__this, method) (( Object_t* (*) (List_1_t6679 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39927_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m39928_gshared (List_1_t6679 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m39928(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6679 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m39928_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m39929_gshared (List_1_t6679 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39929(__this, method) (( Object_t * (*) (List_1_t6679 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m39929_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m39930_gshared (List_1_t6679 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m39930(__this, ___item, method) (( int32_t (*) (List_1_t6679 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m39930_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m39931_gshared (List_1_t6679 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m39931(__this, ___item, method) (( bool (*) (List_1_t6679 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m39931_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m39932_gshared (List_1_t6679 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m39932(__this, ___item, method) (( int32_t (*) (List_1_t6679 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m39932_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m39933_gshared (List_1_t6679 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m39933(__this, ___index, ___item, method) (( void (*) (List_1_t6679 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m39933_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m39934_gshared (List_1_t6679 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m39934(__this, ___item, method) (( void (*) (List_1_t6679 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m39934_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39935_gshared (List_1_t6679 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39935(__this, method) (( bool (*) (List_1_t6679 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39935_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m39936_gshared (List_1_t6679 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39936(__this, method) (( bool (*) (List_1_t6679 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m39936_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m39937_gshared (List_1_t6679 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m39937(__this, method) (( Object_t * (*) (List_1_t6679 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m39937_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m39938_gshared (List_1_t6679 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m39938(__this, method) (( bool (*) (List_1_t6679 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m39938_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m39939_gshared (List_1_t6679 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m39939(__this, method) (( bool (*) (List_1_t6679 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m39939_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Double>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m39940_gshared (List_1_t6679 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m39940(__this, ___index, method) (( Object_t * (*) (List_1_t6679 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m39940_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m39941_gshared (List_1_t6679 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m39941(__this, ___index, ___value, method) (( void (*) (List_1_t6679 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m39941_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Add(T)
extern "C" void List_1_Add_m39942_gshared (List_1_t6679 * __this, double ___item, const MethodInfo* method);
#define List_1_Add_m39942(__this, ___item, method) (( void (*) (List_1_t6679 *, double, const MethodInfo*))List_1_Add_m39942_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m39943_gshared (List_1_t6679 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m39943(__this, ___newCount, method) (( void (*) (List_1_t6679 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m39943_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m39944_gshared (List_1_t6679 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m39944(__this, ___idx, ___count, method) (( void (*) (List_1_t6679 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m39944_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m39945_gshared (List_1_t6679 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m39945(__this, ___collection, method) (( void (*) (List_1_t6679 *, Object_t*, const MethodInfo*))List_1_AddCollection_m39945_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m39946_gshared (List_1_t6679 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m39946(__this, ___enumerable, method) (( void (*) (List_1_t6679 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m39946_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Double>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m39947_gshared (List_1_t6679 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m39947(__this, ___collection, method) (( void (*) (List_1_t6679 *, Object_t*, const MethodInfo*))List_1_AddRange_m39947_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Double>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6681 * List_1_AsReadOnly_m39948_gshared (List_1_t6679 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m39948(__this, method) (( ReadOnlyCollection_1_t6681 * (*) (List_1_t6679 *, const MethodInfo*))List_1_AsReadOnly_m39948_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Clear()
extern "C" void List_1_Clear_m39949_gshared (List_1_t6679 * __this, const MethodInfo* method);
#define List_1_Clear_m39949(__this, method) (( void (*) (List_1_t6679 *, const MethodInfo*))List_1_Clear_m39949_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::Contains(T)
extern "C" bool List_1_Contains_m39950_gshared (List_1_t6679 * __this, double ___item, const MethodInfo* method);
#define List_1_Contains_m39950(__this, ___item, method) (( bool (*) (List_1_t6679 *, double, const MethodInfo*))List_1_Contains_m39950_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m39951_gshared (List_1_t6679 * __this, DoubleU5BU5D_t4827* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m39951(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6679 *, DoubleU5BU5D_t4827*, int32_t, const MethodInfo*))List_1_CopyTo_m39951_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Double>::Find(System.Predicate`1<T>)
extern "C" double List_1_Find_m39952_gshared (List_1_t6679 * __this, Predicate_1_t6686 * ___match, const MethodInfo* method);
#define List_1_Find_m39952(__this, ___match, method) (( double (*) (List_1_t6679 *, Predicate_1_t6686 *, const MethodInfo*))List_1_Find_m39952_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m39953_gshared (Object_t * __this /* static, unused */, Predicate_1_t6686 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m39953(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6686 *, const MethodInfo*))List_1_CheckMatch_m39953_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m39954_gshared (List_1_t6679 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6686 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m39954(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6679 *, int32_t, int32_t, Predicate_1_t6686 *, const MethodInfo*))List_1_GetIndex_m39954_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Double>::GetEnumerator()
extern "C" Enumerator_t6680  List_1_GetEnumerator_m39955_gshared (List_1_t6679 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m39955(__this, method) (( Enumerator_t6680  (*) (List_1_t6679 *, const MethodInfo*))List_1_GetEnumerator_m39955_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Double>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6679 * List_1_GetRange_m39956_gshared (List_1_t6679 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m39956(__this, ___index, ___count, method) (( List_1_t6679 * (*) (List_1_t6679 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m39956_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m39957_gshared (List_1_t6679 * __this, double ___item, const MethodInfo* method);
#define List_1_IndexOf_m39957(__this, ___item, method) (( int32_t (*) (List_1_t6679 *, double, const MethodInfo*))List_1_IndexOf_m39957_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m39958_gshared (List_1_t6679 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m39958(__this, ___start, ___delta, method) (( void (*) (List_1_t6679 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m39958_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m39959_gshared (List_1_t6679 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m39959(__this, ___index, method) (( void (*) (List_1_t6679 *, int32_t, const MethodInfo*))List_1_CheckIndex_m39959_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m39960_gshared (List_1_t6679 * __this, int32_t ___index, double ___item, const MethodInfo* method);
#define List_1_Insert_m39960(__this, ___index, ___item, method) (( void (*) (List_1_t6679 *, int32_t, double, const MethodInfo*))List_1_Insert_m39960_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Double>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m39961_gshared (List_1_t6679 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m39961(__this, ___collection, method) (( void (*) (List_1_t6679 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m39961_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m39962_gshared (List_1_t6679 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m39962(__this, ___index, ___collection, method) (( void (*) (List_1_t6679 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m39962_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m39963_gshared (List_1_t6679 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m39963(__this, ___index, ___collection, method) (( void (*) (List_1_t6679 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m39963_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Double>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m39964_gshared (List_1_t6679 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m39964(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6679 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m39964_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Double>::Remove(T)
extern "C" bool List_1_Remove_m39965_gshared (List_1_t6679 * __this, double ___item, const MethodInfo* method);
#define List_1_Remove_m39965(__this, ___item, method) (( bool (*) (List_1_t6679 *, double, const MethodInfo*))List_1_Remove_m39965_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m39966_gshared (List_1_t6679 * __this, Predicate_1_t6686 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m39966(__this, ___match, method) (( int32_t (*) (List_1_t6679 *, Predicate_1_t6686 *, const MethodInfo*))List_1_RemoveAll_m39966_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Double>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m39967_gshared (List_1_t6679 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m39967(__this, ___index, method) (( void (*) (List_1_t6679 *, int32_t, const MethodInfo*))List_1_RemoveAt_m39967_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m39968_gshared (List_1_t6679 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m39968(__this, ___index, ___count, method) (( void (*) (List_1_t6679 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m39968_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Reverse()
extern "C" void List_1_Reverse_m39969_gshared (List_1_t6679 * __this, const MethodInfo* method);
#define List_1_Reverse_m39969(__this, method) (( void (*) (List_1_t6679 *, const MethodInfo*))List_1_Reverse_m39969_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort()
extern "C" void List_1_Sort_m39970_gshared (List_1_t6679 * __this, const MethodInfo* method);
#define List_1_Sort_m39970(__this, method) (( void (*) (List_1_t6679 *, const MethodInfo*))List_1_Sort_m39970_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m39971_gshared (List_1_t6679 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m39971(__this, ___comparer, method) (( void (*) (List_1_t6679 *, Object_t*, const MethodInfo*))List_1_Sort_m39971_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Double>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m39972_gshared (List_1_t6679 * __this, Comparison_1_t6690 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m39972(__this, ___comparison, method) (( void (*) (List_1_t6679 *, Comparison_1_t6690 *, const MethodInfo*))List_1_Sort_m39972_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Double>::ToArray()
extern "C" DoubleU5BU5D_t4827* List_1_ToArray_m39973_gshared (List_1_t6679 * __this, const MethodInfo* method);
#define List_1_ToArray_m39973(__this, method) (( DoubleU5BU5D_t4827* (*) (List_1_t6679 *, const MethodInfo*))List_1_ToArray_m39973_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::TrimExcess()
extern "C" void List_1_TrimExcess_m39974_gshared (List_1_t6679 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m39974(__this, method) (( void (*) (List_1_t6679 *, const MethodInfo*))List_1_TrimExcess_m39974_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m39975_gshared (List_1_t6679 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m39975(__this, method) (( int32_t (*) (List_1_t6679 *, const MethodInfo*))List_1_get_Capacity_m39975_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Double>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m39976_gshared (List_1_t6679 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m39976(__this, ___value, method) (( void (*) (List_1_t6679 *, int32_t, const MethodInfo*))List_1_set_Capacity_m39976_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Count()
extern "C" int32_t List_1_get_Count_m39977_gshared (List_1_t6679 * __this, const MethodInfo* method);
#define List_1_get_Count_m39977(__this, method) (( int32_t (*) (List_1_t6679 *, const MethodInfo*))List_1_get_Count_m39977_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Double>::get_Item(System.Int32)
extern "C" double List_1_get_Item_m39978_gshared (List_1_t6679 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m39978(__this, ___index, method) (( double (*) (List_1_t6679 *, int32_t, const MethodInfo*))List_1_get_Item_m39978_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Double>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m39979_gshared (List_1_t6679 * __this, int32_t ___index, double ___value, const MethodInfo* method);
#define List_1_set_Item_m39979(__this, ___index, ___value, method) (( void (*) (List_1_t6679 *, int32_t, double, const MethodInfo*))List_1_set_Item_m39979_gshared)(__this, ___index, ___value, method)
