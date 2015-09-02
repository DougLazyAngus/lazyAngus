#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct List_1_t8037;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerable_1_t8028;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8036;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerator_1_t8029;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct ICollection_1_t9459;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct ReadOnlyCollection_1_t8040;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Predicate_1_t8044;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IComparer_1_t9460;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Comparison_1_t8047;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_97.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor()
extern "C" void List_1__ctor_m56258_gshared (List_1_t8037 * __this, const MethodInfo* method);
#define List_1__ctor_m56258(__this, method) (( void (*) (List_1_t8037 *, const MethodInfo*))List_1__ctor_m56258_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m56259_gshared (List_1_t8037 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m56259(__this, ___collection, method) (( void (*) (List_1_t8037 *, Object_t*, const MethodInfo*))List_1__ctor_m56259_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m56260_gshared (List_1_t8037 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m56260(__this, ___capacity, method) (( void (*) (List_1_t8037 *, int32_t, const MethodInfo*))List_1__ctor_m56260_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m56261_gshared (List_1_t8037 * __this, KeyValuePair_2U5BU5D_t8036* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m56261(__this, ___data, ___size, method) (( void (*) (List_1_t8037 *, KeyValuePair_2U5BU5D_t8036*, int32_t, const MethodInfo*))List_1__ctor_m56261_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.cctor()
extern "C" void List_1__cctor_m56262_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m56262(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m56262_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56263_gshared (List_1_t8037 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56263(__this, method) (( Object_t* (*) (List_1_t8037 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m56263_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m56264_gshared (List_1_t8037 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m56264(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8037 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m56264_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m56265_gshared (List_1_t8037 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m56265(__this, method) (( Object_t * (*) (List_1_t8037 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m56265_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m56266_gshared (List_1_t8037 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m56266(__this, ___item, method) (( int32_t (*) (List_1_t8037 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m56266_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m56267_gshared (List_1_t8037 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m56267(__this, ___item, method) (( bool (*) (List_1_t8037 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m56267_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m56268_gshared (List_1_t8037 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m56268(__this, ___item, method) (( int32_t (*) (List_1_t8037 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m56268_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m56269_gshared (List_1_t8037 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m56269(__this, ___index, ___item, method) (( void (*) (List_1_t8037 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m56269_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m56270_gshared (List_1_t8037 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m56270(__this, ___item, method) (( void (*) (List_1_t8037 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m56270_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m56271_gshared (List_1_t8037 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m56271(__this, method) (( bool (*) (List_1_t8037 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m56271_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m56272_gshared (List_1_t8037 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m56272(__this, method) (( bool (*) (List_1_t8037 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m56272_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m56273_gshared (List_1_t8037 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m56273(__this, method) (( Object_t * (*) (List_1_t8037 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m56273_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m56274_gshared (List_1_t8037 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m56274(__this, method) (( bool (*) (List_1_t8037 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m56274_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m56275_gshared (List_1_t8037 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m56275(__this, method) (( bool (*) (List_1_t8037 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m56275_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m56276_gshared (List_1_t8037 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m56276(__this, ___index, method) (( Object_t * (*) (List_1_t8037 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m56276_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m56277_gshared (List_1_t8037 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m56277(__this, ___index, ___value, method) (( void (*) (List_1_t8037 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m56277_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Add(T)
extern "C" void List_1_Add_m56278_gshared (List_1_t8037 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define List_1_Add_m56278(__this, ___item, method) (( void (*) (List_1_t8037 *, KeyValuePair_2_t7062 , const MethodInfo*))List_1_Add_m56278_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m56279_gshared (List_1_t8037 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m56279(__this, ___newCount, method) (( void (*) (List_1_t8037 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m56279_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m56280_gshared (List_1_t8037 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m56280(__this, ___idx, ___count, method) (( void (*) (List_1_t8037 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m56280_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m56281_gshared (List_1_t8037 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m56281(__this, ___collection, method) (( void (*) (List_1_t8037 *, Object_t*, const MethodInfo*))List_1_AddCollection_m56281_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m56282_gshared (List_1_t8037 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m56282(__this, ___enumerable, method) (( void (*) (List_1_t8037 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m56282_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m56283_gshared (List_1_t8037 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m56283(__this, ___collection, method) (( void (*) (List_1_t8037 *, Object_t*, const MethodInfo*))List_1_AddRange_m56283_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8040 * List_1_AsReadOnly_m56284_gshared (List_1_t8037 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m56284(__this, method) (( ReadOnlyCollection_1_t8040 * (*) (List_1_t8037 *, const MethodInfo*))List_1_AsReadOnly_m56284_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Clear()
extern "C" void List_1_Clear_m56285_gshared (List_1_t8037 * __this, const MethodInfo* method);
#define List_1_Clear_m56285(__this, method) (( void (*) (List_1_t8037 *, const MethodInfo*))List_1_Clear_m56285_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Contains(T)
extern "C" bool List_1_Contains_m56286_gshared (List_1_t8037 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define List_1_Contains_m56286(__this, ___item, method) (( bool (*) (List_1_t8037 *, KeyValuePair_2_t7062 , const MethodInfo*))List_1_Contains_m56286_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m56287_gshared (List_1_t8037 * __this, KeyValuePair_2U5BU5D_t8036* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m56287(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t8037 *, KeyValuePair_2U5BU5D_t8036*, int32_t, const MethodInfo*))List_1_CopyTo_m56287_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t7062  List_1_Find_m56288_gshared (List_1_t8037 * __this, Predicate_1_t8044 * ___match, const MethodInfo* method);
#define List_1_Find_m56288(__this, ___match, method) (( KeyValuePair_2_t7062  (*) (List_1_t8037 *, Predicate_1_t8044 *, const MethodInfo*))List_1_Find_m56288_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m56289_gshared (Object_t * __this /* static, unused */, Predicate_1_t8044 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m56289(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8044 *, const MethodInfo*))List_1_CheckMatch_m56289_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m56290_gshared (List_1_t8037 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8044 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m56290(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t8037 *, int32_t, int32_t, Predicate_1_t8044 *, const MethodInfo*))List_1_GetIndex_m56290_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetEnumerator()
extern "C" Enumerator_t8038  List_1_GetEnumerator_m56291_gshared (List_1_t8037 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m56291(__this, method) (( Enumerator_t8038  (*) (List_1_t8037 *, const MethodInfo*))List_1_GetEnumerator_m56291_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t8037 * List_1_GetRange_m56292_gshared (List_1_t8037 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m56292(__this, ___index, ___count, method) (( List_1_t8037 * (*) (List_1_t8037 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m56292_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m56293_gshared (List_1_t8037 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define List_1_IndexOf_m56293(__this, ___item, method) (( int32_t (*) (List_1_t8037 *, KeyValuePair_2_t7062 , const MethodInfo*))List_1_IndexOf_m56293_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m56294_gshared (List_1_t8037 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m56294(__this, ___start, ___delta, method) (( void (*) (List_1_t8037 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m56294_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m56295_gshared (List_1_t8037 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m56295(__this, ___index, method) (( void (*) (List_1_t8037 *, int32_t, const MethodInfo*))List_1_CheckIndex_m56295_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m56296_gshared (List_1_t8037 * __this, int32_t ___index, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define List_1_Insert_m56296(__this, ___index, ___item, method) (( void (*) (List_1_t8037 *, int32_t, KeyValuePair_2_t7062 , const MethodInfo*))List_1_Insert_m56296_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m56297_gshared (List_1_t8037 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m56297(__this, ___collection, method) (( void (*) (List_1_t8037 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m56297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m56298_gshared (List_1_t8037 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m56298(__this, ___index, ___collection, method) (( void (*) (List_1_t8037 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m56298_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m56299_gshared (List_1_t8037 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m56299(__this, ___index, ___collection, method) (( void (*) (List_1_t8037 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m56299_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m56300_gshared (List_1_t8037 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m56300(__this, ___index, ___enumerable, method) (( void (*) (List_1_t8037 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m56300_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Remove(T)
extern "C" bool List_1_Remove_m56301_gshared (List_1_t8037 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define List_1_Remove_m56301(__this, ___item, method) (( bool (*) (List_1_t8037 *, KeyValuePair_2_t7062 , const MethodInfo*))List_1_Remove_m56301_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m56302_gshared (List_1_t8037 * __this, Predicate_1_t8044 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m56302(__this, ___match, method) (( int32_t (*) (List_1_t8037 *, Predicate_1_t8044 *, const MethodInfo*))List_1_RemoveAll_m56302_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m56303_gshared (List_1_t8037 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m56303(__this, ___index, method) (( void (*) (List_1_t8037 *, int32_t, const MethodInfo*))List_1_RemoveAt_m56303_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m56304_gshared (List_1_t8037 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m56304(__this, ___index, ___count, method) (( void (*) (List_1_t8037 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m56304_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Reverse()
extern "C" void List_1_Reverse_m56305_gshared (List_1_t8037 * __this, const MethodInfo* method);
#define List_1_Reverse_m56305(__this, method) (( void (*) (List_1_t8037 *, const MethodInfo*))List_1_Reverse_m56305_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort()
extern "C" void List_1_Sort_m56306_gshared (List_1_t8037 * __this, const MethodInfo* method);
#define List_1_Sort_m56306(__this, method) (( void (*) (List_1_t8037 *, const MethodInfo*))List_1_Sort_m56306_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m56307_gshared (List_1_t8037 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m56307(__this, ___comparer, method) (( void (*) (List_1_t8037 *, Object_t*, const MethodInfo*))List_1_Sort_m56307_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m56308_gshared (List_1_t8037 * __this, Comparison_1_t8047 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m56308(__this, ___comparison, method) (( void (*) (List_1_t8037 *, Comparison_1_t8047 *, const MethodInfo*))List_1_Sort_m56308_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t8036* List_1_ToArray_m56309_gshared (List_1_t8037 * __this, const MethodInfo* method);
#define List_1_ToArray_m56309(__this, method) (( KeyValuePair_2U5BU5D_t8036* (*) (List_1_t8037 *, const MethodInfo*))List_1_ToArray_m56309_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::TrimExcess()
extern "C" void List_1_TrimExcess_m56310_gshared (List_1_t8037 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m56310(__this, method) (( void (*) (List_1_t8037 *, const MethodInfo*))List_1_TrimExcess_m56310_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m56311_gshared (List_1_t8037 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m56311(__this, method) (( int32_t (*) (List_1_t8037 *, const MethodInfo*))List_1_get_Capacity_m56311_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m56312_gshared (List_1_t8037 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m56312(__this, ___value, method) (( void (*) (List_1_t8037 *, int32_t, const MethodInfo*))List_1_set_Capacity_m56312_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Count()
extern "C" int32_t List_1_get_Count_m56313_gshared (List_1_t8037 * __this, const MethodInfo* method);
#define List_1_get_Count_m56313(__this, method) (( int32_t (*) (List_1_t8037 *, const MethodInfo*))List_1_get_Count_m56313_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t7062  List_1_get_Item_m56314_gshared (List_1_t8037 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m56314(__this, ___index, method) (( KeyValuePair_2_t7062  (*) (List_1_t8037 *, int32_t, const MethodInfo*))List_1_get_Item_m56314_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m56315_gshared (List_1_t8037 * __this, int32_t ___index, KeyValuePair_2_t7062  ___value, const MethodInfo* method);
#define List_1_set_Item_m56315(__this, ___index, ___value, method) (( void (*) (List_1_t8037 *, int32_t, KeyValuePair_2_t7062 , const MethodInfo*))List_1_set_Item_m56315_gshared)(__this, ___index, ___value, method)
