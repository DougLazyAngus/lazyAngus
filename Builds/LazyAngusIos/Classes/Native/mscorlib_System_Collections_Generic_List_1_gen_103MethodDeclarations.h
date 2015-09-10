#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct List_1_t8206;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IEnumerable_1_t7820;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8205;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IEnumerator_1_t7821;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct ICollection_1_t10026;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct ReadOnlyCollection_1_t8209;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Predicate_1_t8213;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct IComparer_1_t10027;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
struct Comparison_1_t8216;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_86.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor()
extern "C" void List_1__ctor_m55924_gshared (List_1_t8206 * __this, const MethodInfo* method);
#define List_1__ctor_m55924(__this, method) (( void (*) (List_1_t8206 *, const MethodInfo*))List_1__ctor_m55924_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m55925_gshared (List_1_t8206 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m55925(__this, ___collection, method) (( void (*) (List_1_t8206 *, Object_t*, const MethodInfo*))List_1__ctor_m55925_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m55926_gshared (List_1_t8206 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m55926(__this, ___capacity, method) (( void (*) (List_1_t8206 *, int32_t, const MethodInfo*))List_1__ctor_m55926_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m55927_gshared (List_1_t8206 * __this, KeyValuePair_2U5BU5D_t8205* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m55927(__this, ___data, ___size, method) (( void (*) (List_1_t8206 *, KeyValuePair_2U5BU5D_t8205*, int32_t, const MethodInfo*))List_1__ctor_m55927_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::.cctor()
extern "C" void List_1__cctor_m55928_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m55928(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m55928_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55929_gshared (List_1_t8206 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55929(__this, method) (( Object_t* (*) (List_1_t8206 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m55929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m55930_gshared (List_1_t8206 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m55930(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8206 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m55930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m55931_gshared (List_1_t8206 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m55931(__this, method) (( Object_t * (*) (List_1_t8206 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m55931_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m55932_gshared (List_1_t8206 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m55932(__this, ___item, method) (( int32_t (*) (List_1_t8206 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m55932_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m55933_gshared (List_1_t8206 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m55933(__this, ___item, method) (( bool (*) (List_1_t8206 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m55933_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m55934_gshared (List_1_t8206 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m55934(__this, ___item, method) (( int32_t (*) (List_1_t8206 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m55934_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m55935_gshared (List_1_t8206 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m55935(__this, ___index, ___item, method) (( void (*) (List_1_t8206 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m55935_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m55936_gshared (List_1_t8206 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m55936(__this, ___item, method) (( void (*) (List_1_t8206 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m55936_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55937_gshared (List_1_t8206 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55937(__this, method) (( bool (*) (List_1_t8206 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m55937_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m55938_gshared (List_1_t8206 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m55938(__this, method) (( bool (*) (List_1_t8206 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m55938_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m55939_gshared (List_1_t8206 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m55939(__this, method) (( Object_t * (*) (List_1_t8206 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m55939_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m55940_gshared (List_1_t8206 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m55940(__this, method) (( bool (*) (List_1_t8206 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m55940_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m55941_gshared (List_1_t8206 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m55941(__this, method) (( bool (*) (List_1_t8206 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m55941_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m55942_gshared (List_1_t8206 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m55942(__this, ___index, method) (( Object_t * (*) (List_1_t8206 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m55942_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m55943_gshared (List_1_t8206 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m55943(__this, ___index, ___value, method) (( void (*) (List_1_t8206 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m55943_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Add(T)
extern "C" void List_1_Add_m55944_gshared (List_1_t8206 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define List_1_Add_m55944(__this, ___item, method) (( void (*) (List_1_t8206 *, KeyValuePair_2_t7816 , const MethodInfo*))List_1_Add_m55944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m55945_gshared (List_1_t8206 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m55945(__this, ___newCount, method) (( void (*) (List_1_t8206 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m55945_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m55946_gshared (List_1_t8206 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m55946(__this, ___idx, ___count, method) (( void (*) (List_1_t8206 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m55946_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m55947_gshared (List_1_t8206 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m55947(__this, ___collection, method) (( void (*) (List_1_t8206 *, Object_t*, const MethodInfo*))List_1_AddCollection_m55947_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m55948_gshared (List_1_t8206 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m55948(__this, ___enumerable, method) (( void (*) (List_1_t8206 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m55948_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m55949_gshared (List_1_t8206 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m55949(__this, ___collection, method) (( void (*) (List_1_t8206 *, Object_t*, const MethodInfo*))List_1_AddRange_m55949_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8209 * List_1_AsReadOnly_m55950_gshared (List_1_t8206 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m55950(__this, method) (( ReadOnlyCollection_1_t8209 * (*) (List_1_t8206 *, const MethodInfo*))List_1_AsReadOnly_m55950_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Clear()
extern "C" void List_1_Clear_m55951_gshared (List_1_t8206 * __this, const MethodInfo* method);
#define List_1_Clear_m55951(__this, method) (( void (*) (List_1_t8206 *, const MethodInfo*))List_1_Clear_m55951_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Contains(T)
extern "C" bool List_1_Contains_m55952_gshared (List_1_t8206 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define List_1_Contains_m55952(__this, ___item, method) (( bool (*) (List_1_t8206 *, KeyValuePair_2_t7816 , const MethodInfo*))List_1_Contains_m55952_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m55953_gshared (List_1_t8206 * __this, KeyValuePair_2U5BU5D_t8205* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m55953(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8206 *, KeyValuePair_2U5BU5D_t8205*, int32_t, const MethodInfo*))List_1_CopyTo_m55953_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7816  List_1_Find_m55954_gshared (List_1_t8206 * __this, Predicate_1_t8213 * ___match, const MethodInfo* method);
#define List_1_Find_m55954(__this, ___match, method) (( KeyValuePair_2_t7816  (*) (List_1_t8206 *, Predicate_1_t8213 *, const MethodInfo*))List_1_Find_m55954_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m55955_gshared (Object_t * __this /* static, unused */, Predicate_1_t8213 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m55955(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8213 *, const MethodInfo*))List_1_CheckMatch_m55955_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m55956_gshared (List_1_t8206 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8213 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m55956(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8206 *, int32_t, int32_t, Predicate_1_t8213 *, const MethodInfo*))List_1_GetIndex_m55956_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetEnumerator()
extern "C" Enumerator_t8207  List_1_GetEnumerator_m55957_gshared (List_1_t8206 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m55957(__this, method) (( Enumerator_t8207  (*) (List_1_t8206 *, const MethodInfo*))List_1_GetEnumerator_m55957_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8206 * List_1_GetRange_m55958_gshared (List_1_t8206 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m55958(__this, ___index, ___count, method) (( List_1_t8206 * (*) (List_1_t8206 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m55958_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m55959_gshared (List_1_t8206 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define List_1_IndexOf_m55959(__this, ___item, method) (( int32_t (*) (List_1_t8206 *, KeyValuePair_2_t7816 , const MethodInfo*))List_1_IndexOf_m55959_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m55960_gshared (List_1_t8206 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m55960(__this, ___start, ___delta, method) (( void (*) (List_1_t8206 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m55960_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m55961_gshared (List_1_t8206 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m55961(__this, ___index, method) (( void (*) (List_1_t8206 *, int32_t, const MethodInfo*))List_1_CheckIndex_m55961_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m55962_gshared (List_1_t8206 * __this, int32_t ___index, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define List_1_Insert_m55962(__this, ___index, ___item, method) (( void (*) (List_1_t8206 *, int32_t, KeyValuePair_2_t7816 , const MethodInfo*))List_1_Insert_m55962_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m55963_gshared (List_1_t8206 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m55963(__this, ___collection, method) (( void (*) (List_1_t8206 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m55963_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m55964_gshared (List_1_t8206 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m55964(__this, ___index, ___collection, method) (( void (*) (List_1_t8206 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m55964_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m55965_gshared (List_1_t8206 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m55965(__this, ___index, ___collection, method) (( void (*) (List_1_t8206 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m55965_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m55966_gshared (List_1_t8206 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m55966(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8206 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m55966_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Remove(T)
extern "C" bool List_1_Remove_m55967_gshared (List_1_t8206 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define List_1_Remove_m55967(__this, ___item, method) (( bool (*) (List_1_t8206 *, KeyValuePair_2_t7816 , const MethodInfo*))List_1_Remove_m55967_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m55968_gshared (List_1_t8206 * __this, Predicate_1_t8213 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m55968(__this, ___match, method) (( int32_t (*) (List_1_t8206 *, Predicate_1_t8213 *, const MethodInfo*))List_1_RemoveAll_m55968_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m55969_gshared (List_1_t8206 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m55969(__this, ___index, method) (( void (*) (List_1_t8206 *, int32_t, const MethodInfo*))List_1_RemoveAt_m55969_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m55970_gshared (List_1_t8206 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m55970(__this, ___index, ___count, method) (( void (*) (List_1_t8206 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m55970_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Reverse()
extern "C" void List_1_Reverse_m55971_gshared (List_1_t8206 * __this, const MethodInfo* method);
#define List_1_Reverse_m55971(__this, method) (( void (*) (List_1_t8206 *, const MethodInfo*))List_1_Reverse_m55971_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort()
extern "C" void List_1_Sort_m55972_gshared (List_1_t8206 * __this, const MethodInfo* method);
#define List_1_Sort_m55972(__this, method) (( void (*) (List_1_t8206 *, const MethodInfo*))List_1_Sort_m55972_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m55973_gshared (List_1_t8206 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m55973(__this, ___comparer, method) (( void (*) (List_1_t8206 *, Object_t*, const MethodInfo*))List_1_Sort_m55973_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m55974_gshared (List_1_t8206 * __this, Comparison_1_t8216 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m55974(__this, ___comparison, method) (( void (*) (List_1_t8206 *, Comparison_1_t8216 *, const MethodInfo*))List_1_Sort_m55974_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8205* List_1_ToArray_m55975_gshared (List_1_t8206 * __this, const MethodInfo* method);
#define List_1_ToArray_m55975(__this, method) (( KeyValuePair_2U5BU5D_t8205* (*) (List_1_t8206 *, const MethodInfo*))List_1_ToArray_m55975_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::TrimExcess()
extern "C" void List_1_TrimExcess_m55976_gshared (List_1_t8206 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m55976(__this, method) (( void (*) (List_1_t8206 *, const MethodInfo*))List_1_TrimExcess_m55976_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m55977_gshared (List_1_t8206 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m55977(__this, method) (( int32_t (*) (List_1_t8206 *, const MethodInfo*))List_1_get_Capacity_m55977_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m55978_gshared (List_1_t8206 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m55978(__this, ___value, method) (( void (*) (List_1_t8206 *, int32_t, const MethodInfo*))List_1_set_Capacity_m55978_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Count()
extern "C" int32_t List_1_get_Count_m55979_gshared (List_1_t8206 * __this, const MethodInfo* method);
#define List_1_get_Count_m55979(__this, method) (( int32_t (*) (List_1_t8206 *, const MethodInfo*))List_1_get_Count_m55979_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7816  List_1_get_Item_m55980_gshared (List_1_t8206 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m55980(__this, ___index, method) (( KeyValuePair_2_t7816  (*) (List_1_t8206 *, int32_t, const MethodInfo*))List_1_get_Item_m55980_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m55981_gshared (List_1_t8206 * __this, int32_t ___index, KeyValuePair_2_t7816  ___value, const MethodInfo* method);
#define List_1_set_Item_m55981(__this, ___index, ___value, method) (( void (*) (List_1_t8206 *, int32_t, KeyValuePair_2_t7816 , const MethodInfo*))List_1_set_Item_m55981_gshared)(__this, ___index, ___value, method)
