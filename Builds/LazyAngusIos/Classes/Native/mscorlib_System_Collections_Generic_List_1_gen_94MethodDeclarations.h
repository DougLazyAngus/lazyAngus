#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct List_1_t7434;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IEnumerable_1_t7214;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7433;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IEnumerator_1_t7215;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct ICollection_1_t9374;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct ReadOnlyCollection_1_t7437;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Predicate_1_t7441;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct IComparer_1_t9375;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Comparison_1_t7444;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_77.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor()
extern "C" void List_1__ctor_m48917_gshared (List_1_t7434 * __this, const MethodInfo* method);
#define List_1__ctor_m48917(__this, method) (( void (*) (List_1_t7434 *, const MethodInfo*))List_1__ctor_m48917_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m48918_gshared (List_1_t7434 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m48918(__this, ___collection, method) (( void (*) (List_1_t7434 *, Object_t*, const MethodInfo*))List_1__ctor_m48918_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m48919_gshared (List_1_t7434 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m48919(__this, ___capacity, method) (( void (*) (List_1_t7434 *, int32_t, const MethodInfo*))List_1__ctor_m48919_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m48920_gshared (List_1_t7434 * __this, KeyValuePair_2U5BU5D_t7433* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m48920(__this, ___data, ___size, method) (( void (*) (List_1_t7434 *, KeyValuePair_2U5BU5D_t7433*, int32_t, const MethodInfo*))List_1__ctor_m48920_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.cctor()
extern "C" void List_1__cctor_m48921_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m48921(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m48921_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48922_gshared (List_1_t7434 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48922(__this, method) (( Object_t* (*) (List_1_t7434 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m48922_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m48923_gshared (List_1_t7434 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m48923(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7434 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m48923_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m48924_gshared (List_1_t7434 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m48924(__this, method) (( Object_t * (*) (List_1_t7434 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m48924_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m48925_gshared (List_1_t7434 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m48925(__this, ___item, method) (( int32_t (*) (List_1_t7434 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m48925_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m48926_gshared (List_1_t7434 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m48926(__this, ___item, method) (( bool (*) (List_1_t7434 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m48926_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m48927_gshared (List_1_t7434 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m48927(__this, ___item, method) (( int32_t (*) (List_1_t7434 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m48927_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m48928_gshared (List_1_t7434 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m48928(__this, ___index, ___item, method) (( void (*) (List_1_t7434 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m48928_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m48929_gshared (List_1_t7434 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m48929(__this, ___item, method) (( void (*) (List_1_t7434 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m48929_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48930_gshared (List_1_t7434 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48930(__this, method) (( bool (*) (List_1_t7434 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m48930_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m48931_gshared (List_1_t7434 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m48931(__this, method) (( bool (*) (List_1_t7434 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m48931_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m48932_gshared (List_1_t7434 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m48932(__this, method) (( Object_t * (*) (List_1_t7434 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m48932_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m48933_gshared (List_1_t7434 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m48933(__this, method) (( bool (*) (List_1_t7434 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m48933_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m48934_gshared (List_1_t7434 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m48934(__this, method) (( bool (*) (List_1_t7434 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m48934_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m48935_gshared (List_1_t7434 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m48935(__this, ___index, method) (( Object_t * (*) (List_1_t7434 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m48935_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m48936_gshared (List_1_t7434 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m48936(__this, ___index, ___value, method) (( void (*) (List_1_t7434 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m48936_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Add(T)
extern "C" void List_1_Add_m48937_gshared (List_1_t7434 * __this, KeyValuePair_2_t7210  ___item, const MethodInfo* method);
#define List_1_Add_m48937(__this, ___item, method) (( void (*) (List_1_t7434 *, KeyValuePair_2_t7210 , const MethodInfo*))List_1_Add_m48937_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m48938_gshared (List_1_t7434 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m48938(__this, ___newCount, method) (( void (*) (List_1_t7434 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m48938_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m48939_gshared (List_1_t7434 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m48939(__this, ___idx, ___count, method) (( void (*) (List_1_t7434 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m48939_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m48940_gshared (List_1_t7434 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m48940(__this, ___collection, method) (( void (*) (List_1_t7434 *, Object_t*, const MethodInfo*))List_1_AddCollection_m48940_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m48941_gshared (List_1_t7434 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m48941(__this, ___enumerable, method) (( void (*) (List_1_t7434 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m48941_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m48942_gshared (List_1_t7434 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m48942(__this, ___collection, method) (( void (*) (List_1_t7434 *, Object_t*, const MethodInfo*))List_1_AddRange_m48942_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7437 * List_1_AsReadOnly_m48943_gshared (List_1_t7434 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m48943(__this, method) (( ReadOnlyCollection_1_t7437 * (*) (List_1_t7434 *, const MethodInfo*))List_1_AsReadOnly_m48943_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Clear()
extern "C" void List_1_Clear_m48944_gshared (List_1_t7434 * __this, const MethodInfo* method);
#define List_1_Clear_m48944(__this, method) (( void (*) (List_1_t7434 *, const MethodInfo*))List_1_Clear_m48944_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Contains(T)
extern "C" bool List_1_Contains_m48945_gshared (List_1_t7434 * __this, KeyValuePair_2_t7210  ___item, const MethodInfo* method);
#define List_1_Contains_m48945(__this, ___item, method) (( bool (*) (List_1_t7434 *, KeyValuePair_2_t7210 , const MethodInfo*))List_1_Contains_m48945_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m48946_gshared (List_1_t7434 * __this, KeyValuePair_2U5BU5D_t7433* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m48946(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7434 *, KeyValuePair_2U5BU5D_t7433*, int32_t, const MethodInfo*))List_1_CopyTo_m48946_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7210  List_1_Find_m48947_gshared (List_1_t7434 * __this, Predicate_1_t7441 * ___match, const MethodInfo* method);
#define List_1_Find_m48947(__this, ___match, method) (( KeyValuePair_2_t7210  (*) (List_1_t7434 *, Predicate_1_t7441 *, const MethodInfo*))List_1_Find_m48947_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m48948_gshared (Object_t * __this /* static, unused */, Predicate_1_t7441 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m48948(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7441 *, const MethodInfo*))List_1_CheckMatch_m48948_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m48949_gshared (List_1_t7434 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7441 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m48949(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7434 *, int32_t, int32_t, Predicate_1_t7441 *, const MethodInfo*))List_1_GetIndex_m48949_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetEnumerator()
extern "C" Enumerator_t7435  List_1_GetEnumerator_m48950_gshared (List_1_t7434 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m48950(__this, method) (( Enumerator_t7435  (*) (List_1_t7434 *, const MethodInfo*))List_1_GetEnumerator_m48950_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7434 * List_1_GetRange_m48951_gshared (List_1_t7434 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m48951(__this, ___index, ___count, method) (( List_1_t7434 * (*) (List_1_t7434 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m48951_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m48952_gshared (List_1_t7434 * __this, KeyValuePair_2_t7210  ___item, const MethodInfo* method);
#define List_1_IndexOf_m48952(__this, ___item, method) (( int32_t (*) (List_1_t7434 *, KeyValuePair_2_t7210 , const MethodInfo*))List_1_IndexOf_m48952_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m48953_gshared (List_1_t7434 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m48953(__this, ___start, ___delta, method) (( void (*) (List_1_t7434 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m48953_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m48954_gshared (List_1_t7434 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m48954(__this, ___index, method) (( void (*) (List_1_t7434 *, int32_t, const MethodInfo*))List_1_CheckIndex_m48954_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m48955_gshared (List_1_t7434 * __this, int32_t ___index, KeyValuePair_2_t7210  ___item, const MethodInfo* method);
#define List_1_Insert_m48955(__this, ___index, ___item, method) (( void (*) (List_1_t7434 *, int32_t, KeyValuePair_2_t7210 , const MethodInfo*))List_1_Insert_m48955_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m48956_gshared (List_1_t7434 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m48956(__this, ___collection, method) (( void (*) (List_1_t7434 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m48956_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m48957_gshared (List_1_t7434 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m48957(__this, ___index, ___collection, method) (( void (*) (List_1_t7434 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m48957_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m48958_gshared (List_1_t7434 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m48958(__this, ___index, ___collection, method) (( void (*) (List_1_t7434 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m48958_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m48959_gshared (List_1_t7434 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m48959(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7434 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m48959_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Remove(T)
extern "C" bool List_1_Remove_m48960_gshared (List_1_t7434 * __this, KeyValuePair_2_t7210  ___item, const MethodInfo* method);
#define List_1_Remove_m48960(__this, ___item, method) (( bool (*) (List_1_t7434 *, KeyValuePair_2_t7210 , const MethodInfo*))List_1_Remove_m48960_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m48961_gshared (List_1_t7434 * __this, Predicate_1_t7441 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m48961(__this, ___match, method) (( int32_t (*) (List_1_t7434 *, Predicate_1_t7441 *, const MethodInfo*))List_1_RemoveAll_m48961_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m48962_gshared (List_1_t7434 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m48962(__this, ___index, method) (( void (*) (List_1_t7434 *, int32_t, const MethodInfo*))List_1_RemoveAt_m48962_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m48963_gshared (List_1_t7434 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m48963(__this, ___index, ___count, method) (( void (*) (List_1_t7434 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m48963_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Reverse()
extern "C" void List_1_Reverse_m48964_gshared (List_1_t7434 * __this, const MethodInfo* method);
#define List_1_Reverse_m48964(__this, method) (( void (*) (List_1_t7434 *, const MethodInfo*))List_1_Reverse_m48964_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort()
extern "C" void List_1_Sort_m48965_gshared (List_1_t7434 * __this, const MethodInfo* method);
#define List_1_Sort_m48965(__this, method) (( void (*) (List_1_t7434 *, const MethodInfo*))List_1_Sort_m48965_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m48966_gshared (List_1_t7434 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m48966(__this, ___comparer, method) (( void (*) (List_1_t7434 *, Object_t*, const MethodInfo*))List_1_Sort_m48966_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m48967_gshared (List_1_t7434 * __this, Comparison_1_t7444 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m48967(__this, ___comparison, method) (( void (*) (List_1_t7434 *, Comparison_1_t7444 *, const MethodInfo*))List_1_Sort_m48967_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7433* List_1_ToArray_m48968_gshared (List_1_t7434 * __this, const MethodInfo* method);
#define List_1_ToArray_m48968(__this, method) (( KeyValuePair_2U5BU5D_t7433* (*) (List_1_t7434 *, const MethodInfo*))List_1_ToArray_m48968_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::TrimExcess()
extern "C" void List_1_TrimExcess_m48969_gshared (List_1_t7434 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m48969(__this, method) (( void (*) (List_1_t7434 *, const MethodInfo*))List_1_TrimExcess_m48969_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m48970_gshared (List_1_t7434 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m48970(__this, method) (( int32_t (*) (List_1_t7434 *, const MethodInfo*))List_1_get_Capacity_m48970_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m48971_gshared (List_1_t7434 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m48971(__this, ___value, method) (( void (*) (List_1_t7434 *, int32_t, const MethodInfo*))List_1_set_Capacity_m48971_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Count()
extern "C" int32_t List_1_get_Count_m48972_gshared (List_1_t7434 * __this, const MethodInfo* method);
#define List_1_get_Count_m48972(__this, method) (( int32_t (*) (List_1_t7434 *, const MethodInfo*))List_1_get_Count_m48972_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7210  List_1_get_Item_m48973_gshared (List_1_t7434 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m48973(__this, ___index, method) (( KeyValuePair_2_t7210  (*) (List_1_t7434 *, int32_t, const MethodInfo*))List_1_get_Item_m48973_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m48974_gshared (List_1_t7434 * __this, int32_t ___index, KeyValuePair_2_t7210  ___value, const MethodInfo* method);
#define List_1_set_Item_m48974(__this, ___index, ___value, method) (( void (*) (List_1_t7434 *, int32_t, KeyValuePair_2_t7210 , const MethodInfo*))List_1_set_Item_m48974_gshared)(__this, ___index, ___value, method)
