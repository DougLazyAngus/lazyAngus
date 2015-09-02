#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t2807;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t9659;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t2927;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t9660;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t1097;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t8472;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t8476;
// System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
struct IComparer_1_t9661;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t8479;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_104.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m61340_gshared (List_1_t2807 * __this, const MethodInfo* method);
#define List_1__ctor_m61340(__this, method) (( void (*) (List_1_t2807 *, const MethodInfo*))List_1__ctor_m61340_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m61341_gshared (List_1_t2807 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m61341(__this, ___collection, method) (( void (*) (List_1_t2807 *, Object_t*, const MethodInfo*))List_1__ctor_m61341_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10272_gshared (List_1_t2807 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10272(__this, ___capacity, method) (( void (*) (List_1_t2807 *, int32_t, const MethodInfo*))List_1__ctor_m10272_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m61342_gshared (List_1_t2807 * __this, UILineInfoU5BU5D_t2927* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m61342(__this, ___data, ___size, method) (( void (*) (List_1_t2807 *, UILineInfoU5BU5D_t2927*, int32_t, const MethodInfo*))List_1__ctor_m61342_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m61343_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m61343(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m61343_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m61344_gshared (List_1_t2807 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m61344(__this, method) (( Object_t* (*) (List_1_t2807 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m61344_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m61345_gshared (List_1_t2807 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m61345(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2807 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m61345_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m61346_gshared (List_1_t2807 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m61346(__this, method) (( Object_t * (*) (List_1_t2807 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m61346_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m61347_gshared (List_1_t2807 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m61347(__this, ___item, method) (( int32_t (*) (List_1_t2807 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m61347_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m61348_gshared (List_1_t2807 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m61348(__this, ___item, method) (( bool (*) (List_1_t2807 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m61348_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m61349_gshared (List_1_t2807 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m61349(__this, ___item, method) (( int32_t (*) (List_1_t2807 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m61349_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m61350_gshared (List_1_t2807 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m61350(__this, ___index, ___item, method) (( void (*) (List_1_t2807 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m61350_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m61351_gshared (List_1_t2807 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m61351(__this, ___item, method) (( void (*) (List_1_t2807 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m61351_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m61352_gshared (List_1_t2807 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m61352(__this, method) (( bool (*) (List_1_t2807 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m61352_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m61353_gshared (List_1_t2807 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m61353(__this, method) (( bool (*) (List_1_t2807 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m61353_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m61354_gshared (List_1_t2807 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m61354(__this, method) (( Object_t * (*) (List_1_t2807 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m61354_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m61355_gshared (List_1_t2807 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m61355(__this, method) (( bool (*) (List_1_t2807 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m61355_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m61356_gshared (List_1_t2807 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m61356(__this, method) (( bool (*) (List_1_t2807 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m61356_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m61357_gshared (List_1_t2807 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m61357(__this, ___index, method) (( Object_t * (*) (List_1_t2807 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m61357_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m61358_gshared (List_1_t2807 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m61358(__this, ___index, ___value, method) (( void (*) (List_1_t2807 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m61358_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m61359_gshared (List_1_t2807 * __this, UILineInfo_t1093  ___item, const MethodInfo* method);
#define List_1_Add_m61359(__this, ___item, method) (( void (*) (List_1_t2807 *, UILineInfo_t1093 , const MethodInfo*))List_1_Add_m61359_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m61360_gshared (List_1_t2807 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m61360(__this, ___newCount, method) (( void (*) (List_1_t2807 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m61360_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m61361_gshared (List_1_t2807 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m61361(__this, ___idx, ___count, method) (( void (*) (List_1_t2807 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m61361_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m61362_gshared (List_1_t2807 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m61362(__this, ___collection, method) (( void (*) (List_1_t2807 *, Object_t*, const MethodInfo*))List_1_AddCollection_m61362_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m61363_gshared (List_1_t2807 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m61363(__this, ___enumerable, method) (( void (*) (List_1_t2807 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m61363_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m61364_gshared (List_1_t2807 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m61364(__this, ___collection, method) (( void (*) (List_1_t2807 *, Object_t*, const MethodInfo*))List_1_AddRange_m61364_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8472 * List_1_AsReadOnly_m61365_gshared (List_1_t2807 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m61365(__this, method) (( ReadOnlyCollection_1_t8472 * (*) (List_1_t2807 *, const MethodInfo*))List_1_AsReadOnly_m61365_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m61366_gshared (List_1_t2807 * __this, const MethodInfo* method);
#define List_1_Clear_m61366(__this, method) (( void (*) (List_1_t2807 *, const MethodInfo*))List_1_Clear_m61366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m61367_gshared (List_1_t2807 * __this, UILineInfo_t1093  ___item, const MethodInfo* method);
#define List_1_Contains_m61367(__this, ___item, method) (( bool (*) (List_1_t2807 *, UILineInfo_t1093 , const MethodInfo*))List_1_Contains_m61367_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m61368_gshared (List_1_t2807 * __this, UILineInfoU5BU5D_t2927* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m61368(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2807 *, UILineInfoU5BU5D_t2927*, int32_t, const MethodInfo*))List_1_CopyTo_m61368_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t1093  List_1_Find_m61369_gshared (List_1_t2807 * __this, Predicate_1_t8476 * ___match, const MethodInfo* method);
#define List_1_Find_m61369(__this, ___match, method) (( UILineInfo_t1093  (*) (List_1_t2807 *, Predicate_1_t8476 *, const MethodInfo*))List_1_Find_m61369_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m61370_gshared (Object_t * __this /* static, unused */, Predicate_1_t8476 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m61370(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8476 *, const MethodInfo*))List_1_CheckMatch_m61370_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m61371_gshared (List_1_t2807 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8476 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m61371(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2807 *, int32_t, int32_t, Predicate_1_t8476 *, const MethodInfo*))List_1_GetIndex_m61371_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t8471  List_1_GetEnumerator_m61372_gshared (List_1_t2807 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m61372(__this, method) (( Enumerator_t8471  (*) (List_1_t2807 *, const MethodInfo*))List_1_GetEnumerator_m61372_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2807 * List_1_GetRange_m61373_gshared (List_1_t2807 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m61373(__this, ___index, ___count, method) (( List_1_t2807 * (*) (List_1_t2807 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m61373_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m61374_gshared (List_1_t2807 * __this, UILineInfo_t1093  ___item, const MethodInfo* method);
#define List_1_IndexOf_m61374(__this, ___item, method) (( int32_t (*) (List_1_t2807 *, UILineInfo_t1093 , const MethodInfo*))List_1_IndexOf_m61374_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m61375_gshared (List_1_t2807 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m61375(__this, ___start, ___delta, method) (( void (*) (List_1_t2807 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m61375_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m61376_gshared (List_1_t2807 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m61376(__this, ___index, method) (( void (*) (List_1_t2807 *, int32_t, const MethodInfo*))List_1_CheckIndex_m61376_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m61377_gshared (List_1_t2807 * __this, int32_t ___index, UILineInfo_t1093  ___item, const MethodInfo* method);
#define List_1_Insert_m61377(__this, ___index, ___item, method) (( void (*) (List_1_t2807 *, int32_t, UILineInfo_t1093 , const MethodInfo*))List_1_Insert_m61377_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m61378_gshared (List_1_t2807 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m61378(__this, ___collection, method) (( void (*) (List_1_t2807 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m61378_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m61379_gshared (List_1_t2807 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m61379(__this, ___index, ___collection, method) (( void (*) (List_1_t2807 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m61379_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m61380_gshared (List_1_t2807 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m61380(__this, ___index, ___collection, method) (( void (*) (List_1_t2807 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m61380_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m61381_gshared (List_1_t2807 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m61381(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2807 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m61381_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m61382_gshared (List_1_t2807 * __this, UILineInfo_t1093  ___item, const MethodInfo* method);
#define List_1_Remove_m61382(__this, ___item, method) (( bool (*) (List_1_t2807 *, UILineInfo_t1093 , const MethodInfo*))List_1_Remove_m61382_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m61383_gshared (List_1_t2807 * __this, Predicate_1_t8476 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m61383(__this, ___match, method) (( int32_t (*) (List_1_t2807 *, Predicate_1_t8476 *, const MethodInfo*))List_1_RemoveAll_m61383_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m61384_gshared (List_1_t2807 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m61384(__this, ___index, method) (( void (*) (List_1_t2807 *, int32_t, const MethodInfo*))List_1_RemoveAt_m61384_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m61385_gshared (List_1_t2807 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m61385(__this, ___index, ___count, method) (( void (*) (List_1_t2807 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m61385_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m61386_gshared (List_1_t2807 * __this, const MethodInfo* method);
#define List_1_Reverse_m61386(__this, method) (( void (*) (List_1_t2807 *, const MethodInfo*))List_1_Reverse_m61386_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m61387_gshared (List_1_t2807 * __this, const MethodInfo* method);
#define List_1_Sort_m61387(__this, method) (( void (*) (List_1_t2807 *, const MethodInfo*))List_1_Sort_m61387_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m61388_gshared (List_1_t2807 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m61388(__this, ___comparer, method) (( void (*) (List_1_t2807 *, Object_t*, const MethodInfo*))List_1_Sort_m61388_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m61389_gshared (List_1_t2807 * __this, Comparison_1_t8479 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m61389(__this, ___comparison, method) (( void (*) (List_1_t2807 *, Comparison_1_t8479 *, const MethodInfo*))List_1_Sort_m61389_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t2927* List_1_ToArray_m61390_gshared (List_1_t2807 * __this, const MethodInfo* method);
#define List_1_ToArray_m61390(__this, method) (( UILineInfoU5BU5D_t2927* (*) (List_1_t2807 *, const MethodInfo*))List_1_ToArray_m61390_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m61391_gshared (List_1_t2807 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m61391(__this, method) (( void (*) (List_1_t2807 *, const MethodInfo*))List_1_TrimExcess_m61391_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m61392_gshared (List_1_t2807 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m61392(__this, method) (( int32_t (*) (List_1_t2807 *, const MethodInfo*))List_1_get_Capacity_m61392_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m61393_gshared (List_1_t2807 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m61393(__this, ___value, method) (( void (*) (List_1_t2807 *, int32_t, const MethodInfo*))List_1_set_Capacity_m61393_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m61394_gshared (List_1_t2807 * __this, const MethodInfo* method);
#define List_1_get_Count_m61394(__this, method) (( int32_t (*) (List_1_t2807 *, const MethodInfo*))List_1_get_Count_m61394_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t1093  List_1_get_Item_m61395_gshared (List_1_t2807 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m61395(__this, ___index, method) (( UILineInfo_t1093  (*) (List_1_t2807 *, int32_t, const MethodInfo*))List_1_get_Item_m61395_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m61396_gshared (List_1_t2807 * __this, int32_t ___index, UILineInfo_t1093  ___value, const MethodInfo* method);
#define List_1_set_Item_m61396(__this, ___index, ___value, method) (( void (*) (List_1_t2807 *, int32_t, UILineInfo_t1093 , const MethodInfo*))List_1_set_Item_m61396_gshared)(__this, ___index, ___value, method)
