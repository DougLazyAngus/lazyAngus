#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int64>
struct List_1_t7229;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int64>
struct IEnumerable_1_t6926;
// System.Int64[]
struct Int64U5BU5D_t4573;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t6927;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9720;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int64>
struct ReadOnlyCollection_1_t7231;
// System.Predicate`1<System.Int64>
struct Predicate_1_t7233;
// System.Collections.Generic.IComparer`1<System.Int64>
struct IComparer_1_t5768;
// System.Comparison`1<System.Int64>
struct Comparison_1_t7237;
// System.Collections.Generic.List`1/Enumerator<System.Int64>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_66.h"

// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor()
extern "C" void List_1__ctor_m43974_gshared (List_1_t7229 * __this, const MethodInfo* method);
#define List_1__ctor_m43974(__this, method) (( void (*) (List_1_t7229 *, const MethodInfo*))List_1__ctor_m43974_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m43975_gshared (List_1_t7229 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m43975(__this, ___collection, method) (( void (*) (List_1_t7229 *, Object_t*, const MethodInfo*))List_1__ctor_m43975_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(System.Int32)
extern "C" void List_1__ctor_m43976_gshared (List_1_t7229 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m43976(__this, ___capacity, method) (( void (*) (List_1_t7229 *, int32_t, const MethodInfo*))List_1__ctor_m43976_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m43977_gshared (List_1_t7229 * __this, Int64U5BU5D_t4573* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m43977(__this, ___data, ___size, method) (( void (*) (List_1_t7229 *, Int64U5BU5D_t4573*, int32_t, const MethodInfo*))List_1__ctor_m43977_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::.cctor()
extern "C" void List_1__cctor_m43978_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m43978(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m43978_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43979_gshared (List_1_t7229 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43979(__this, method) (( Object_t* (*) (List_1_t7229 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43979_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m43980_gshared (List_1_t7229 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m43980(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7229 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m43980_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m43981_gshared (List_1_t7229 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m43981(__this, method) (( Object_t * (*) (List_1_t7229 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m43981_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m43982_gshared (List_1_t7229 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m43982(__this, ___item, method) (( int32_t (*) (List_1_t7229 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m43982_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m43983_gshared (List_1_t7229 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m43983(__this, ___item, method) (( bool (*) (List_1_t7229 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m43983_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m43984_gshared (List_1_t7229 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m43984(__this, ___item, method) (( int32_t (*) (List_1_t7229 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m43984_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m43985_gshared (List_1_t7229 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m43985(__this, ___index, ___item, method) (( void (*) (List_1_t7229 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m43985_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m43986_gshared (List_1_t7229 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m43986(__this, ___item, method) (( void (*) (List_1_t7229 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m43986_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43987_gshared (List_1_t7229 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43987(__this, method) (( bool (*) (List_1_t7229 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43987_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m43988_gshared (List_1_t7229 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m43988(__this, method) (( bool (*) (List_1_t7229 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m43988_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m43989_gshared (List_1_t7229 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m43989(__this, method) (( Object_t * (*) (List_1_t7229 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m43989_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m43990_gshared (List_1_t7229 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m43990(__this, method) (( bool (*) (List_1_t7229 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m43990_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m43991_gshared (List_1_t7229 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m43991(__this, method) (( bool (*) (List_1_t7229 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m43991_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m43992_gshared (List_1_t7229 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m43992(__this, ___index, method) (( Object_t * (*) (List_1_t7229 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m43992_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m43993_gshared (List_1_t7229 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m43993(__this, ___index, ___value, method) (( void (*) (List_1_t7229 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m43993_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Add(T)
extern "C" void List_1_Add_m43994_gshared (List_1_t7229 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Add_m43994(__this, ___item, method) (( void (*) (List_1_t7229 *, int64_t, const MethodInfo*))List_1_Add_m43994_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m43995_gshared (List_1_t7229 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m43995(__this, ___newCount, method) (( void (*) (List_1_t7229 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m43995_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m43996_gshared (List_1_t7229 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m43996(__this, ___idx, ___count, method) (( void (*) (List_1_t7229 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m43996_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m43997_gshared (List_1_t7229 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m43997(__this, ___collection, method) (( void (*) (List_1_t7229 *, Object_t*, const MethodInfo*))List_1_AddCollection_m43997_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m43998_gshared (List_1_t7229 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m43998(__this, ___enumerable, method) (( void (*) (List_1_t7229 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m43998_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m43999_gshared (List_1_t7229 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m43999(__this, ___collection, method) (( void (*) (List_1_t7229 *, Object_t*, const MethodInfo*))List_1_AddRange_m43999_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int64>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7231 * List_1_AsReadOnly_m44000_gshared (List_1_t7229 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m44000(__this, method) (( ReadOnlyCollection_1_t7231 * (*) (List_1_t7229 *, const MethodInfo*))List_1_AsReadOnly_m44000_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Clear()
extern "C" void List_1_Clear_m44001_gshared (List_1_t7229 * __this, const MethodInfo* method);
#define List_1_Clear_m44001(__this, method) (( void (*) (List_1_t7229 *, const MethodInfo*))List_1_Clear_m44001_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Contains(T)
extern "C" bool List_1_Contains_m44002_gshared (List_1_t7229 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Contains_m44002(__this, ___item, method) (( bool (*) (List_1_t7229 *, int64_t, const MethodInfo*))List_1_Contains_m44002_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m44003_gshared (List_1_t7229 * __this, Int64U5BU5D_t4573* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m44003(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7229 *, Int64U5BU5D_t4573*, int32_t, const MethodInfo*))List_1_CopyTo_m44003_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int64>::Find(System.Predicate`1<T>)
extern "C" int64_t List_1_Find_m44004_gshared (List_1_t7229 * __this, Predicate_1_t7233 * ___match, const MethodInfo* method);
#define List_1_Find_m44004(__this, ___match, method) (( int64_t (*) (List_1_t7229 *, Predicate_1_t7233 *, const MethodInfo*))List_1_Find_m44004_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m44005_gshared (Object_t * __this /* static, unused */, Predicate_1_t7233 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m44005(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7233 *, const MethodInfo*))List_1_CheckMatch_m44005_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m44006_gshared (List_1_t7229 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7233 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m44006(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7229 *, int32_t, int32_t, Predicate_1_t7233 *, const MethodInfo*))List_1_GetIndex_m44006_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int64>::GetEnumerator()
extern "C" Enumerator_t7230  List_1_GetEnumerator_m44007_gshared (List_1_t7229 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m44007(__this, method) (( Enumerator_t7230  (*) (List_1_t7229 *, const MethodInfo*))List_1_GetEnumerator_m44007_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int64>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7229 * List_1_GetRange_m44008_gshared (List_1_t7229 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m44008(__this, ___index, ___count, method) (( List_1_t7229 * (*) (List_1_t7229 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m44008_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m44009_gshared (List_1_t7229 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m44009(__this, ___item, method) (( int32_t (*) (List_1_t7229 *, int64_t, const MethodInfo*))List_1_IndexOf_m44009_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m44010_gshared (List_1_t7229 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m44010(__this, ___start, ___delta, method) (( void (*) (List_1_t7229 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m44010_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m44011_gshared (List_1_t7229 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m44011(__this, ___index, method) (( void (*) (List_1_t7229 *, int32_t, const MethodInfo*))List_1_CheckIndex_m44011_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m44012_gshared (List_1_t7229 * __this, int32_t ___index, int64_t ___item, const MethodInfo* method);
#define List_1_Insert_m44012(__this, ___index, ___item, method) (( void (*) (List_1_t7229 *, int32_t, int64_t, const MethodInfo*))List_1_Insert_m44012_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m44013_gshared (List_1_t7229 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m44013(__this, ___collection, method) (( void (*) (List_1_t7229 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m44013_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m44014_gshared (List_1_t7229 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m44014(__this, ___index, ___collection, method) (( void (*) (List_1_t7229 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m44014_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m44015_gshared (List_1_t7229 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m44015(__this, ___index, ___collection, method) (( void (*) (List_1_t7229 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m44015_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m44016_gshared (List_1_t7229 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m44016(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7229 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m44016_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int64>::Remove(T)
extern "C" bool List_1_Remove_m44017_gshared (List_1_t7229 * __this, int64_t ___item, const MethodInfo* method);
#define List_1_Remove_m44017(__this, ___item, method) (( bool (*) (List_1_t7229 *, int64_t, const MethodInfo*))List_1_Remove_m44017_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m44018_gshared (List_1_t7229 * __this, Predicate_1_t7233 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m44018(__this, ___match, method) (( int32_t (*) (List_1_t7229 *, Predicate_1_t7233 *, const MethodInfo*))List_1_RemoveAll_m44018_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m44019_gshared (List_1_t7229 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m44019(__this, ___index, method) (( void (*) (List_1_t7229 *, int32_t, const MethodInfo*))List_1_RemoveAt_m44019_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m44020_gshared (List_1_t7229 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m44020(__this, ___index, ___count, method) (( void (*) (List_1_t7229 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m44020_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Reverse()
extern "C" void List_1_Reverse_m44021_gshared (List_1_t7229 * __this, const MethodInfo* method);
#define List_1_Reverse_m44021(__this, method) (( void (*) (List_1_t7229 *, const MethodInfo*))List_1_Reverse_m44021_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort()
extern "C" void List_1_Sort_m44022_gshared (List_1_t7229 * __this, const MethodInfo* method);
#define List_1_Sort_m44022(__this, method) (( void (*) (List_1_t7229 *, const MethodInfo*))List_1_Sort_m44022_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m44023_gshared (List_1_t7229 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m44023(__this, ___comparer, method) (( void (*) (List_1_t7229 *, Object_t*, const MethodInfo*))List_1_Sort_m44023_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m44024_gshared (List_1_t7229 * __this, Comparison_1_t7237 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m44024(__this, ___comparison, method) (( void (*) (List_1_t7229 *, Comparison_1_t7237 *, const MethodInfo*))List_1_Sort_m44024_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int64>::ToArray()
extern "C" Int64U5BU5D_t4573* List_1_ToArray_m44025_gshared (List_1_t7229 * __this, const MethodInfo* method);
#define List_1_ToArray_m44025(__this, method) (( Int64U5BU5D_t4573* (*) (List_1_t7229 *, const MethodInfo*))List_1_ToArray_m44025_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::TrimExcess()
extern "C" void List_1_TrimExcess_m44026_gshared (List_1_t7229 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m44026(__this, method) (( void (*) (List_1_t7229 *, const MethodInfo*))List_1_TrimExcess_m44026_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m44027_gshared (List_1_t7229 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m44027(__this, method) (( int32_t (*) (List_1_t7229 *, const MethodInfo*))List_1_get_Capacity_m44027_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m44028_gshared (List_1_t7229 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m44028(__this, ___value, method) (( void (*) (List_1_t7229 *, int32_t, const MethodInfo*))List_1_set_Capacity_m44028_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int64>::get_Count()
extern "C" int32_t List_1_get_Count_m44029_gshared (List_1_t7229 * __this, const MethodInfo* method);
#define List_1_get_Count_m44029(__this, method) (( int32_t (*) (List_1_t7229 *, const MethodInfo*))List_1_get_Count_m44029_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int64>::get_Item(System.Int32)
extern "C" int64_t List_1_get_Item_m44030_gshared (List_1_t7229 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m44030(__this, ___index, method) (( int64_t (*) (List_1_t7229 *, int32_t, const MethodInfo*))List_1_get_Item_m44030_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int64>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m44031_gshared (List_1_t7229 * __this, int32_t ___index, int64_t ___value, const MethodInfo* method);
#define List_1_set_Item_m44031(__this, ___index, ___value, method) (( void (*) (List_1_t7229 *, int32_t, int64_t, const MethodInfo*))List_1_set_Item_m44031_gshared)(__this, ___index, ___value, method)
