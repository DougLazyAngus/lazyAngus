#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct List_1_t7899;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerable_1_t7279;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t7898;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t7280;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct ICollection_1_t9409;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct ReadOnlyCollection_1_t7902;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Predicate_1_t7906;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IComparer_1_t9410;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Comparison_1_t7909;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_91.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor()
extern "C" void List_1__ctor_m54635_gshared (List_1_t7899 * __this, const MethodInfo* method);
#define List_1__ctor_m54635(__this, method) (( void (*) (List_1_t7899 *, const MethodInfo*))List_1__ctor_m54635_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m54636_gshared (List_1_t7899 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m54636(__this, ___collection, method) (( void (*) (List_1_t7899 *, Object_t*, const MethodInfo*))List_1__ctor_m54636_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m54637_gshared (List_1_t7899 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m54637(__this, ___capacity, method) (( void (*) (List_1_t7899 *, int32_t, const MethodInfo*))List_1__ctor_m54637_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m54638_gshared (List_1_t7899 * __this, KeyValuePair_2U5BU5D_t7898* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m54638(__this, ___data, ___size, method) (( void (*) (List_1_t7899 *, KeyValuePair_2U5BU5D_t7898*, int32_t, const MethodInfo*))List_1__ctor_m54638_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.cctor()
extern "C" void List_1__cctor_m54639_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m54639(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m54639_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54640_gshared (List_1_t7899 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54640(__this, method) (( Object_t* (*) (List_1_t7899 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m54640_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m54641_gshared (List_1_t7899 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m54641(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7899 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m54641_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m54642_gshared (List_1_t7899 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m54642(__this, method) (( Object_t * (*) (List_1_t7899 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m54642_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m54643_gshared (List_1_t7899 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m54643(__this, ___item, method) (( int32_t (*) (List_1_t7899 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m54643_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m54644_gshared (List_1_t7899 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m54644(__this, ___item, method) (( bool (*) (List_1_t7899 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m54644_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m54645_gshared (List_1_t7899 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m54645(__this, ___item, method) (( int32_t (*) (List_1_t7899 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m54645_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m54646_gshared (List_1_t7899 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m54646(__this, ___index, ___item, method) (( void (*) (List_1_t7899 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m54646_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m54647_gshared (List_1_t7899 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m54647(__this, ___item, method) (( void (*) (List_1_t7899 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m54647_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54648_gshared (List_1_t7899 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54648(__this, method) (( bool (*) (List_1_t7899 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m54648_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m54649_gshared (List_1_t7899 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m54649(__this, method) (( bool (*) (List_1_t7899 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m54649_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m54650_gshared (List_1_t7899 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m54650(__this, method) (( Object_t * (*) (List_1_t7899 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m54650_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m54651_gshared (List_1_t7899 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m54651(__this, method) (( bool (*) (List_1_t7899 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m54651_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m54652_gshared (List_1_t7899 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m54652(__this, method) (( bool (*) (List_1_t7899 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m54652_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m54653_gshared (List_1_t7899 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m54653(__this, ___index, method) (( Object_t * (*) (List_1_t7899 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m54653_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m54654_gshared (List_1_t7899 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m54654(__this, ___index, ___value, method) (( void (*) (List_1_t7899 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m54654_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Add(T)
extern "C" void List_1_Add_m54655_gshared (List_1_t7899 * __this, KeyValuePair_2_t7004  ___item, const MethodInfo* method);
#define List_1_Add_m54655(__this, ___item, method) (( void (*) (List_1_t7899 *, KeyValuePair_2_t7004 , const MethodInfo*))List_1_Add_m54655_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m54656_gshared (List_1_t7899 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m54656(__this, ___newCount, method) (( void (*) (List_1_t7899 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m54656_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m54657_gshared (List_1_t7899 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m54657(__this, ___idx, ___count, method) (( void (*) (List_1_t7899 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m54657_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m54658_gshared (List_1_t7899 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m54658(__this, ___collection, method) (( void (*) (List_1_t7899 *, Object_t*, const MethodInfo*))List_1_AddCollection_m54658_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m54659_gshared (List_1_t7899 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m54659(__this, ___enumerable, method) (( void (*) (List_1_t7899 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m54659_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m54660_gshared (List_1_t7899 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m54660(__this, ___collection, method) (( void (*) (List_1_t7899 *, Object_t*, const MethodInfo*))List_1_AddRange_m54660_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7902 * List_1_AsReadOnly_m54661_gshared (List_1_t7899 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m54661(__this, method) (( ReadOnlyCollection_1_t7902 * (*) (List_1_t7899 *, const MethodInfo*))List_1_AsReadOnly_m54661_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Clear()
extern "C" void List_1_Clear_m54662_gshared (List_1_t7899 * __this, const MethodInfo* method);
#define List_1_Clear_m54662(__this, method) (( void (*) (List_1_t7899 *, const MethodInfo*))List_1_Clear_m54662_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Contains(T)
extern "C" bool List_1_Contains_m54663_gshared (List_1_t7899 * __this, KeyValuePair_2_t7004  ___item, const MethodInfo* method);
#define List_1_Contains_m54663(__this, ___item, method) (( bool (*) (List_1_t7899 *, KeyValuePair_2_t7004 , const MethodInfo*))List_1_Contains_m54663_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m54664_gshared (List_1_t7899 * __this, KeyValuePair_2U5BU5D_t7898* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m54664(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7899 *, KeyValuePair_2U5BU5D_t7898*, int32_t, const MethodInfo*))List_1_CopyTo_m54664_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7004  List_1_Find_m54665_gshared (List_1_t7899 * __this, Predicate_1_t7906 * ___match, const MethodInfo* method);
#define List_1_Find_m54665(__this, ___match, method) (( KeyValuePair_2_t7004  (*) (List_1_t7899 *, Predicate_1_t7906 *, const MethodInfo*))List_1_Find_m54665_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m54666_gshared (Object_t * __this /* static, unused */, Predicate_1_t7906 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m54666(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7906 *, const MethodInfo*))List_1_CheckMatch_m54666_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m54667_gshared (List_1_t7899 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7906 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m54667(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7899 *, int32_t, int32_t, Predicate_1_t7906 *, const MethodInfo*))List_1_GetIndex_m54667_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetEnumerator()
extern "C" Enumerator_t7900  List_1_GetEnumerator_m54668_gshared (List_1_t7899 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m54668(__this, method) (( Enumerator_t7900  (*) (List_1_t7899 *, const MethodInfo*))List_1_GetEnumerator_m54668_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7899 * List_1_GetRange_m54669_gshared (List_1_t7899 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m54669(__this, ___index, ___count, method) (( List_1_t7899 * (*) (List_1_t7899 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m54669_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m54670_gshared (List_1_t7899 * __this, KeyValuePair_2_t7004  ___item, const MethodInfo* method);
#define List_1_IndexOf_m54670(__this, ___item, method) (( int32_t (*) (List_1_t7899 *, KeyValuePair_2_t7004 , const MethodInfo*))List_1_IndexOf_m54670_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m54671_gshared (List_1_t7899 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m54671(__this, ___start, ___delta, method) (( void (*) (List_1_t7899 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m54671_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m54672_gshared (List_1_t7899 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m54672(__this, ___index, method) (( void (*) (List_1_t7899 *, int32_t, const MethodInfo*))List_1_CheckIndex_m54672_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m54673_gshared (List_1_t7899 * __this, int32_t ___index, KeyValuePair_2_t7004  ___item, const MethodInfo* method);
#define List_1_Insert_m54673(__this, ___index, ___item, method) (( void (*) (List_1_t7899 *, int32_t, KeyValuePair_2_t7004 , const MethodInfo*))List_1_Insert_m54673_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m54674_gshared (List_1_t7899 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m54674(__this, ___collection, method) (( void (*) (List_1_t7899 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m54674_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m54675_gshared (List_1_t7899 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m54675(__this, ___index, ___collection, method) (( void (*) (List_1_t7899 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m54675_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m54676_gshared (List_1_t7899 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m54676(__this, ___index, ___collection, method) (( void (*) (List_1_t7899 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m54676_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m54677_gshared (List_1_t7899 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m54677(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7899 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m54677_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Remove(T)
extern "C" bool List_1_Remove_m54678_gshared (List_1_t7899 * __this, KeyValuePair_2_t7004  ___item, const MethodInfo* method);
#define List_1_Remove_m54678(__this, ___item, method) (( bool (*) (List_1_t7899 *, KeyValuePair_2_t7004 , const MethodInfo*))List_1_Remove_m54678_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m54679_gshared (List_1_t7899 * __this, Predicate_1_t7906 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m54679(__this, ___match, method) (( int32_t (*) (List_1_t7899 *, Predicate_1_t7906 *, const MethodInfo*))List_1_RemoveAll_m54679_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m54680_gshared (List_1_t7899 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m54680(__this, ___index, method) (( void (*) (List_1_t7899 *, int32_t, const MethodInfo*))List_1_RemoveAt_m54680_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m54681_gshared (List_1_t7899 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m54681(__this, ___index, ___count, method) (( void (*) (List_1_t7899 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m54681_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Reverse()
extern "C" void List_1_Reverse_m54682_gshared (List_1_t7899 * __this, const MethodInfo* method);
#define List_1_Reverse_m54682(__this, method) (( void (*) (List_1_t7899 *, const MethodInfo*))List_1_Reverse_m54682_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort()
extern "C" void List_1_Sort_m54683_gshared (List_1_t7899 * __this, const MethodInfo* method);
#define List_1_Sort_m54683(__this, method) (( void (*) (List_1_t7899 *, const MethodInfo*))List_1_Sort_m54683_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m54684_gshared (List_1_t7899 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m54684(__this, ___comparer, method) (( void (*) (List_1_t7899 *, Object_t*, const MethodInfo*))List_1_Sort_m54684_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m54685_gshared (List_1_t7899 * __this, Comparison_1_t7909 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m54685(__this, ___comparison, method) (( void (*) (List_1_t7899 *, Comparison_1_t7909 *, const MethodInfo*))List_1_Sort_m54685_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t7898* List_1_ToArray_m54686_gshared (List_1_t7899 * __this, const MethodInfo* method);
#define List_1_ToArray_m54686(__this, method) (( KeyValuePair_2U5BU5D_t7898* (*) (List_1_t7899 *, const MethodInfo*))List_1_ToArray_m54686_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::TrimExcess()
extern "C" void List_1_TrimExcess_m54687_gshared (List_1_t7899 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m54687(__this, method) (( void (*) (List_1_t7899 *, const MethodInfo*))List_1_TrimExcess_m54687_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m54688_gshared (List_1_t7899 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m54688(__this, method) (( int32_t (*) (List_1_t7899 *, const MethodInfo*))List_1_get_Capacity_m54688_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m54689_gshared (List_1_t7899 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m54689(__this, ___value, method) (( void (*) (List_1_t7899 *, int32_t, const MethodInfo*))List_1_set_Capacity_m54689_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Count()
extern "C" int32_t List_1_get_Count_m54690_gshared (List_1_t7899 * __this, const MethodInfo* method);
#define List_1_get_Count_m54690(__this, method) (( int32_t (*) (List_1_t7899 *, const MethodInfo*))List_1_get_Count_m54690_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7004  List_1_get_Item_m54691_gshared (List_1_t7899 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m54691(__this, ___index, method) (( KeyValuePair_2_t7004  (*) (List_1_t7899 *, int32_t, const MethodInfo*))List_1_get_Item_m54691_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m54692_gshared (List_1_t7899 * __this, int32_t ___index, KeyValuePair_2_t7004  ___value, const MethodInfo* method);
#define List_1_set_Item_m54692(__this, ___index, ___value, method) (( void (*) (List_1_t7899 *, int32_t, KeyValuePair_2_t7004 , const MethodInfo*))List_1_set_Item_m54692_gshared)(__this, ___index, ___value, method)
