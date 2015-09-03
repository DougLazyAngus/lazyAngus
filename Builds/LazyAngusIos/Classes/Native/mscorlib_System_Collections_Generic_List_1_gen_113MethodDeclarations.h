#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct List_1_t8540;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerable_1_t8531;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t8539;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t8532;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ICollection_1_t10041;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct ReadOnlyCollection_1_t8543;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Predicate_1_t8547;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IComparer_1_t10042;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Comparison_1_t8550;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_96.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor()
extern "C" void List_1__ctor_m60130_gshared (List_1_t8540 * __this, const MethodInfo* method);
#define List_1__ctor_m60130(__this, method) (( void (*) (List_1_t8540 *, const MethodInfo*))List_1__ctor_m60130_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m60131_gshared (List_1_t8540 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m60131(__this, ___collection, method) (( void (*) (List_1_t8540 *, Object_t*, const MethodInfo*))List_1__ctor_m60131_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m60132_gshared (List_1_t8540 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m60132(__this, ___capacity, method) (( void (*) (List_1_t8540 *, int32_t, const MethodInfo*))List_1__ctor_m60132_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m60133_gshared (List_1_t8540 * __this, KeyValuePair_2U5BU5D_t8539* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m60133(__this, ___data, ___size, method) (( void (*) (List_1_t8540 *, KeyValuePair_2U5BU5D_t8539*, int32_t, const MethodInfo*))List_1__ctor_m60133_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.cctor()
extern "C" void List_1__cctor_m60134_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m60134(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m60134_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60135_gshared (List_1_t8540 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60135(__this, method) (( Object_t* (*) (List_1_t8540 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60135_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m60136_gshared (List_1_t8540 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m60136(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8540 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m60136_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m60137_gshared (List_1_t8540 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60137(__this, method) (( Object_t * (*) (List_1_t8540 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m60137_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m60138_gshared (List_1_t8540 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m60138(__this, ___item, method) (( int32_t (*) (List_1_t8540 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m60138_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m60139_gshared (List_1_t8540 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m60139(__this, ___item, method) (( bool (*) (List_1_t8540 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m60139_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m60140_gshared (List_1_t8540 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m60140(__this, ___item, method) (( int32_t (*) (List_1_t8540 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m60140_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m60141_gshared (List_1_t8540 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m60141(__this, ___index, ___item, method) (( void (*) (List_1_t8540 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m60141_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m60142_gshared (List_1_t8540 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m60142(__this, ___item, method) (( void (*) (List_1_t8540 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m60142_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60143_gshared (List_1_t8540 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60143(__this, method) (( bool (*) (List_1_t8540 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60143_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m60144_gshared (List_1_t8540 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60144(__this, method) (( bool (*) (List_1_t8540 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m60144_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m60145_gshared (List_1_t8540 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m60145(__this, method) (( Object_t * (*) (List_1_t8540 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m60145_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m60146_gshared (List_1_t8540 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m60146(__this, method) (( bool (*) (List_1_t8540 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m60146_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m60147_gshared (List_1_t8540 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m60147(__this, method) (( bool (*) (List_1_t8540 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m60147_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m60148_gshared (List_1_t8540 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m60148(__this, ___index, method) (( Object_t * (*) (List_1_t8540 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m60148_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m60149_gshared (List_1_t8540 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m60149(__this, ___index, ___value, method) (( void (*) (List_1_t8540 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m60149_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Add(T)
extern "C" void List_1_Add_m60150_gshared (List_1_t8540 * __this, KeyValuePair_2_t7588  ___item, const MethodInfo* method);
#define List_1_Add_m60150(__this, ___item, method) (( void (*) (List_1_t8540 *, KeyValuePair_2_t7588 , const MethodInfo*))List_1_Add_m60150_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m60151_gshared (List_1_t8540 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m60151(__this, ___newCount, method) (( void (*) (List_1_t8540 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m60151_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m60152_gshared (List_1_t8540 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m60152(__this, ___idx, ___count, method) (( void (*) (List_1_t8540 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m60152_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m60153_gshared (List_1_t8540 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m60153(__this, ___collection, method) (( void (*) (List_1_t8540 *, Object_t*, const MethodInfo*))List_1_AddCollection_m60153_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m60154_gshared (List_1_t8540 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m60154(__this, ___enumerable, method) (( void (*) (List_1_t8540 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m60154_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m60155_gshared (List_1_t8540 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m60155(__this, ___collection, method) (( void (*) (List_1_t8540 *, Object_t*, const MethodInfo*))List_1_AddRange_m60155_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8543 * List_1_AsReadOnly_m60156_gshared (List_1_t8540 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m60156(__this, method) (( ReadOnlyCollection_1_t8543 * (*) (List_1_t8540 *, const MethodInfo*))List_1_AsReadOnly_m60156_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Clear()
extern "C" void List_1_Clear_m60157_gshared (List_1_t8540 * __this, const MethodInfo* method);
#define List_1_Clear_m60157(__this, method) (( void (*) (List_1_t8540 *, const MethodInfo*))List_1_Clear_m60157_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Contains(T)
extern "C" bool List_1_Contains_m60158_gshared (List_1_t8540 * __this, KeyValuePair_2_t7588  ___item, const MethodInfo* method);
#define List_1_Contains_m60158(__this, ___item, method) (( bool (*) (List_1_t8540 *, KeyValuePair_2_t7588 , const MethodInfo*))List_1_Contains_m60158_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m60159_gshared (List_1_t8540 * __this, KeyValuePair_2U5BU5D_t8539* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m60159(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8540 *, KeyValuePair_2U5BU5D_t8539*, int32_t, const MethodInfo*))List_1_CopyTo_m60159_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7588  List_1_Find_m60160_gshared (List_1_t8540 * __this, Predicate_1_t8547 * ___match, const MethodInfo* method);
#define List_1_Find_m60160(__this, ___match, method) (( KeyValuePair_2_t7588  (*) (List_1_t8540 *, Predicate_1_t8547 *, const MethodInfo*))List_1_Find_m60160_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m60161_gshared (Object_t * __this /* static, unused */, Predicate_1_t8547 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m60161(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8547 *, const MethodInfo*))List_1_CheckMatch_m60161_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m60162_gshared (List_1_t8540 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8547 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m60162(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8540 *, int32_t, int32_t, Predicate_1_t8547 *, const MethodInfo*))List_1_GetIndex_m60162_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetEnumerator()
extern "C" Enumerator_t8541  List_1_GetEnumerator_m60163_gshared (List_1_t8540 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m60163(__this, method) (( Enumerator_t8541  (*) (List_1_t8540 *, const MethodInfo*))List_1_GetEnumerator_m60163_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8540 * List_1_GetRange_m60164_gshared (List_1_t8540 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m60164(__this, ___index, ___count, method) (( List_1_t8540 * (*) (List_1_t8540 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m60164_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m60165_gshared (List_1_t8540 * __this, KeyValuePair_2_t7588  ___item, const MethodInfo* method);
#define List_1_IndexOf_m60165(__this, ___item, method) (( int32_t (*) (List_1_t8540 *, KeyValuePair_2_t7588 , const MethodInfo*))List_1_IndexOf_m60165_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m60166_gshared (List_1_t8540 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m60166(__this, ___start, ___delta, method) (( void (*) (List_1_t8540 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m60166_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m60167_gshared (List_1_t8540 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m60167(__this, ___index, method) (( void (*) (List_1_t8540 *, int32_t, const MethodInfo*))List_1_CheckIndex_m60167_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m60168_gshared (List_1_t8540 * __this, int32_t ___index, KeyValuePair_2_t7588  ___item, const MethodInfo* method);
#define List_1_Insert_m60168(__this, ___index, ___item, method) (( void (*) (List_1_t8540 *, int32_t, KeyValuePair_2_t7588 , const MethodInfo*))List_1_Insert_m60168_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m60169_gshared (List_1_t8540 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m60169(__this, ___collection, method) (( void (*) (List_1_t8540 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m60169_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m60170_gshared (List_1_t8540 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m60170(__this, ___index, ___collection, method) (( void (*) (List_1_t8540 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m60170_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m60171_gshared (List_1_t8540 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m60171(__this, ___index, ___collection, method) (( void (*) (List_1_t8540 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m60171_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m60172_gshared (List_1_t8540 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m60172(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8540 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m60172_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Remove(T)
extern "C" bool List_1_Remove_m60173_gshared (List_1_t8540 * __this, KeyValuePair_2_t7588  ___item, const MethodInfo* method);
#define List_1_Remove_m60173(__this, ___item, method) (( bool (*) (List_1_t8540 *, KeyValuePair_2_t7588 , const MethodInfo*))List_1_Remove_m60173_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m60174_gshared (List_1_t8540 * __this, Predicate_1_t8547 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m60174(__this, ___match, method) (( int32_t (*) (List_1_t8540 *, Predicate_1_t8547 *, const MethodInfo*))List_1_RemoveAll_m60174_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m60175_gshared (List_1_t8540 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m60175(__this, ___index, method) (( void (*) (List_1_t8540 *, int32_t, const MethodInfo*))List_1_RemoveAt_m60175_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m60176_gshared (List_1_t8540 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m60176(__this, ___index, ___count, method) (( void (*) (List_1_t8540 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m60176_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Reverse()
extern "C" void List_1_Reverse_m60177_gshared (List_1_t8540 * __this, const MethodInfo* method);
#define List_1_Reverse_m60177(__this, method) (( void (*) (List_1_t8540 *, const MethodInfo*))List_1_Reverse_m60177_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort()
extern "C" void List_1_Sort_m60178_gshared (List_1_t8540 * __this, const MethodInfo* method);
#define List_1_Sort_m60178(__this, method) (( void (*) (List_1_t8540 *, const MethodInfo*))List_1_Sort_m60178_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m60179_gshared (List_1_t8540 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m60179(__this, ___comparer, method) (( void (*) (List_1_t8540 *, Object_t*, const MethodInfo*))List_1_Sort_m60179_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m60180_gshared (List_1_t8540 * __this, Comparison_1_t8550 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m60180(__this, ___comparison, method) (( void (*) (List_1_t8540 *, Comparison_1_t8550 *, const MethodInfo*))List_1_Sort_m60180_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8539* List_1_ToArray_m60181_gshared (List_1_t8540 * __this, const MethodInfo* method);
#define List_1_ToArray_m60181(__this, method) (( KeyValuePair_2U5BU5D_t8539* (*) (List_1_t8540 *, const MethodInfo*))List_1_ToArray_m60181_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::TrimExcess()
extern "C" void List_1_TrimExcess_m60182_gshared (List_1_t8540 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m60182(__this, method) (( void (*) (List_1_t8540 *, const MethodInfo*))List_1_TrimExcess_m60182_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m60183_gshared (List_1_t8540 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m60183(__this, method) (( int32_t (*) (List_1_t8540 *, const MethodInfo*))List_1_get_Capacity_m60183_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m60184_gshared (List_1_t8540 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m60184(__this, ___value, method) (( void (*) (List_1_t8540 *, int32_t, const MethodInfo*))List_1_set_Capacity_m60184_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Count()
extern "C" int32_t List_1_get_Count_m60185_gshared (List_1_t8540 * __this, const MethodInfo* method);
#define List_1_get_Count_m60185(__this, method) (( int32_t (*) (List_1_t8540 *, const MethodInfo*))List_1_get_Count_m60185_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7588  List_1_get_Item_m60186_gshared (List_1_t8540 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m60186(__this, ___index, method) (( KeyValuePair_2_t7588  (*) (List_1_t8540 *, int32_t, const MethodInfo*))List_1_get_Item_m60186_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m60187_gshared (List_1_t8540 * __this, int32_t ___index, KeyValuePair_2_t7588  ___value, const MethodInfo* method);
#define List_1_set_Item_m60187(__this, ___index, ___value, method) (( void (*) (List_1_t8540 *, int32_t, KeyValuePair_2_t7588 , const MethodInfo*))List_1_set_Item_m60187_gshared)(__this, ___index, ___value, method)
