#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t2738;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t9518;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t2858;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t9519;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t1019;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t8362;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t8366;
// System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
struct IComparer_1_t9520;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t8369;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_98.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m60187_gshared (List_1_t2738 * __this, const MethodInfo* method);
#define List_1__ctor_m60187(__this, method) (( void (*) (List_1_t2738 *, const MethodInfo*))List_1__ctor_m60187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m60188_gshared (List_1_t2738 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m60188(__this, ___collection, method) (( void (*) (List_1_t2738 *, Object_t*, const MethodInfo*))List_1__ctor_m60188_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m9845_gshared (List_1_t2738 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m9845(__this, ___capacity, method) (( void (*) (List_1_t2738 *, int32_t, const MethodInfo*))List_1__ctor_m9845_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m60189_gshared (List_1_t2738 * __this, UILineInfoU5BU5D_t2858* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m60189(__this, ___data, ___size, method) (( void (*) (List_1_t2738 *, UILineInfoU5BU5D_t2858*, int32_t, const MethodInfo*))List_1__ctor_m60189_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m60190_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m60190(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m60190_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60191_gshared (List_1_t2738 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60191(__this, method) (( Object_t* (*) (List_1_t2738 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60191_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m60192_gshared (List_1_t2738 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m60192(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2738 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m60192_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m60193_gshared (List_1_t2738 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60193(__this, method) (( Object_t * (*) (List_1_t2738 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m60193_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m60194_gshared (List_1_t2738 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m60194(__this, ___item, method) (( int32_t (*) (List_1_t2738 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m60194_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m60195_gshared (List_1_t2738 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m60195(__this, ___item, method) (( bool (*) (List_1_t2738 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m60195_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m60196_gshared (List_1_t2738 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m60196(__this, ___item, method) (( int32_t (*) (List_1_t2738 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m60196_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m60197_gshared (List_1_t2738 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m60197(__this, ___index, ___item, method) (( void (*) (List_1_t2738 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m60197_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m60198_gshared (List_1_t2738 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m60198(__this, ___item, method) (( void (*) (List_1_t2738 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m60198_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60199_gshared (List_1_t2738 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60199(__this, method) (( bool (*) (List_1_t2738 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60199_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m60200_gshared (List_1_t2738 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60200(__this, method) (( bool (*) (List_1_t2738 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m60200_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m60201_gshared (List_1_t2738 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m60201(__this, method) (( Object_t * (*) (List_1_t2738 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m60201_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m60202_gshared (List_1_t2738 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m60202(__this, method) (( bool (*) (List_1_t2738 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m60202_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m60203_gshared (List_1_t2738 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m60203(__this, method) (( bool (*) (List_1_t2738 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m60203_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m60204_gshared (List_1_t2738 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m60204(__this, ___index, method) (( Object_t * (*) (List_1_t2738 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m60204_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m60205_gshared (List_1_t2738 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m60205(__this, ___index, ___value, method) (( void (*) (List_1_t2738 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m60205_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m60206_gshared (List_1_t2738 * __this, UILineInfo_t1015  ___item, const MethodInfo* method);
#define List_1_Add_m60206(__this, ___item, method) (( void (*) (List_1_t2738 *, UILineInfo_t1015 , const MethodInfo*))List_1_Add_m60206_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m60207_gshared (List_1_t2738 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m60207(__this, ___newCount, method) (( void (*) (List_1_t2738 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m60207_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m60208_gshared (List_1_t2738 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m60208(__this, ___idx, ___count, method) (( void (*) (List_1_t2738 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m60208_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m60209_gshared (List_1_t2738 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m60209(__this, ___collection, method) (( void (*) (List_1_t2738 *, Object_t*, const MethodInfo*))List_1_AddCollection_m60209_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m60210_gshared (List_1_t2738 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m60210(__this, ___enumerable, method) (( void (*) (List_1_t2738 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m60210_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m60211_gshared (List_1_t2738 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m60211(__this, ___collection, method) (( void (*) (List_1_t2738 *, Object_t*, const MethodInfo*))List_1_AddRange_m60211_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8362 * List_1_AsReadOnly_m60212_gshared (List_1_t2738 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m60212(__this, method) (( ReadOnlyCollection_1_t8362 * (*) (List_1_t2738 *, const MethodInfo*))List_1_AsReadOnly_m60212_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m60213_gshared (List_1_t2738 * __this, const MethodInfo* method);
#define List_1_Clear_m60213(__this, method) (( void (*) (List_1_t2738 *, const MethodInfo*))List_1_Clear_m60213_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m60214_gshared (List_1_t2738 * __this, UILineInfo_t1015  ___item, const MethodInfo* method);
#define List_1_Contains_m60214(__this, ___item, method) (( bool (*) (List_1_t2738 *, UILineInfo_t1015 , const MethodInfo*))List_1_Contains_m60214_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m60215_gshared (List_1_t2738 * __this, UILineInfoU5BU5D_t2858* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m60215(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2738 *, UILineInfoU5BU5D_t2858*, int32_t, const MethodInfo*))List_1_CopyTo_m60215_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t1015  List_1_Find_m60216_gshared (List_1_t2738 * __this, Predicate_1_t8366 * ___match, const MethodInfo* method);
#define List_1_Find_m60216(__this, ___match, method) (( UILineInfo_t1015  (*) (List_1_t2738 *, Predicate_1_t8366 *, const MethodInfo*))List_1_Find_m60216_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m60217_gshared (Object_t * __this /* static, unused */, Predicate_1_t8366 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m60217(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8366 *, const MethodInfo*))List_1_CheckMatch_m60217_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m60218_gshared (List_1_t2738 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8366 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m60218(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2738 *, int32_t, int32_t, Predicate_1_t8366 *, const MethodInfo*))List_1_GetIndex_m60218_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t8361  List_1_GetEnumerator_m60219_gshared (List_1_t2738 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m60219(__this, method) (( Enumerator_t8361  (*) (List_1_t2738 *, const MethodInfo*))List_1_GetEnumerator_m60219_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2738 * List_1_GetRange_m60220_gshared (List_1_t2738 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m60220(__this, ___index, ___count, method) (( List_1_t2738 * (*) (List_1_t2738 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m60220_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m60221_gshared (List_1_t2738 * __this, UILineInfo_t1015  ___item, const MethodInfo* method);
#define List_1_IndexOf_m60221(__this, ___item, method) (( int32_t (*) (List_1_t2738 *, UILineInfo_t1015 , const MethodInfo*))List_1_IndexOf_m60221_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m60222_gshared (List_1_t2738 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m60222(__this, ___start, ___delta, method) (( void (*) (List_1_t2738 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m60222_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m60223_gshared (List_1_t2738 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m60223(__this, ___index, method) (( void (*) (List_1_t2738 *, int32_t, const MethodInfo*))List_1_CheckIndex_m60223_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m60224_gshared (List_1_t2738 * __this, int32_t ___index, UILineInfo_t1015  ___item, const MethodInfo* method);
#define List_1_Insert_m60224(__this, ___index, ___item, method) (( void (*) (List_1_t2738 *, int32_t, UILineInfo_t1015 , const MethodInfo*))List_1_Insert_m60224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m60225_gshared (List_1_t2738 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m60225(__this, ___collection, method) (( void (*) (List_1_t2738 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m60225_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m60226_gshared (List_1_t2738 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m60226(__this, ___index, ___collection, method) (( void (*) (List_1_t2738 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m60226_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m60227_gshared (List_1_t2738 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m60227(__this, ___index, ___collection, method) (( void (*) (List_1_t2738 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m60227_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m60228_gshared (List_1_t2738 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m60228(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2738 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m60228_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m60229_gshared (List_1_t2738 * __this, UILineInfo_t1015  ___item, const MethodInfo* method);
#define List_1_Remove_m60229(__this, ___item, method) (( bool (*) (List_1_t2738 *, UILineInfo_t1015 , const MethodInfo*))List_1_Remove_m60229_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m60230_gshared (List_1_t2738 * __this, Predicate_1_t8366 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m60230(__this, ___match, method) (( int32_t (*) (List_1_t2738 *, Predicate_1_t8366 *, const MethodInfo*))List_1_RemoveAll_m60230_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m60231_gshared (List_1_t2738 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m60231(__this, ___index, method) (( void (*) (List_1_t2738 *, int32_t, const MethodInfo*))List_1_RemoveAt_m60231_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m60232_gshared (List_1_t2738 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m60232(__this, ___index, ___count, method) (( void (*) (List_1_t2738 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m60232_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m60233_gshared (List_1_t2738 * __this, const MethodInfo* method);
#define List_1_Reverse_m60233(__this, method) (( void (*) (List_1_t2738 *, const MethodInfo*))List_1_Reverse_m60233_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m60234_gshared (List_1_t2738 * __this, const MethodInfo* method);
#define List_1_Sort_m60234(__this, method) (( void (*) (List_1_t2738 *, const MethodInfo*))List_1_Sort_m60234_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m60235_gshared (List_1_t2738 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m60235(__this, ___comparer, method) (( void (*) (List_1_t2738 *, Object_t*, const MethodInfo*))List_1_Sort_m60235_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m60236_gshared (List_1_t2738 * __this, Comparison_1_t8369 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m60236(__this, ___comparison, method) (( void (*) (List_1_t2738 *, Comparison_1_t8369 *, const MethodInfo*))List_1_Sort_m60236_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t2858* List_1_ToArray_m60237_gshared (List_1_t2738 * __this, const MethodInfo* method);
#define List_1_ToArray_m60237(__this, method) (( UILineInfoU5BU5D_t2858* (*) (List_1_t2738 *, const MethodInfo*))List_1_ToArray_m60237_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m60238_gshared (List_1_t2738 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m60238(__this, method) (( void (*) (List_1_t2738 *, const MethodInfo*))List_1_TrimExcess_m60238_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m60239_gshared (List_1_t2738 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m60239(__this, method) (( int32_t (*) (List_1_t2738 *, const MethodInfo*))List_1_get_Capacity_m60239_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m60240_gshared (List_1_t2738 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m60240(__this, ___value, method) (( void (*) (List_1_t2738 *, int32_t, const MethodInfo*))List_1_set_Capacity_m60240_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m60241_gshared (List_1_t2738 * __this, const MethodInfo* method);
#define List_1_get_Count_m60241(__this, method) (( int32_t (*) (List_1_t2738 *, const MethodInfo*))List_1_get_Count_m60241_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t1015  List_1_get_Item_m60242_gshared (List_1_t2738 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m60242(__this, ___index, method) (( UILineInfo_t1015  (*) (List_1_t2738 *, int32_t, const MethodInfo*))List_1_get_Item_m60242_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m60243_gshared (List_1_t2738 * __this, int32_t ___index, UILineInfo_t1015  ___value, const MethodInfo* method);
#define List_1_set_Item_m60243(__this, ___index, ___value, method) (( void (*) (List_1_t2738 *, int32_t, UILineInfo_t1015 , const MethodInfo*))List_1_set_Item_m60243_gshared)(__this, ___index, ___value, method)
