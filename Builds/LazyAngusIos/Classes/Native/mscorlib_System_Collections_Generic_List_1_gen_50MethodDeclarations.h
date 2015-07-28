#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t2732;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t9511;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t2852;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t9512;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t1013;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t8355;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t8359;
// System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
struct IComparer_1_t9513;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t8362;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_98.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m60140_gshared (List_1_t2732 * __this, const MethodInfo* method);
#define List_1__ctor_m60140(__this, method) (( void (*) (List_1_t2732 *, const MethodInfo*))List_1__ctor_m60140_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m60141_gshared (List_1_t2732 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m60141(__this, ___collection, method) (( void (*) (List_1_t2732 *, Object_t*, const MethodInfo*))List_1__ctor_m60141_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m9799_gshared (List_1_t2732 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m9799(__this, ___capacity, method) (( void (*) (List_1_t2732 *, int32_t, const MethodInfo*))List_1__ctor_m9799_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m60142_gshared (List_1_t2732 * __this, UILineInfoU5BU5D_t2852* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m60142(__this, ___data, ___size, method) (( void (*) (List_1_t2732 *, UILineInfoU5BU5D_t2852*, int32_t, const MethodInfo*))List_1__ctor_m60142_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m60143_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m60143(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m60143_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60144_gshared (List_1_t2732 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60144(__this, method) (( Object_t* (*) (List_1_t2732 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m60144_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m60145_gshared (List_1_t2732 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m60145(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2732 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m60145_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m60146_gshared (List_1_t2732 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m60146(__this, method) (( Object_t * (*) (List_1_t2732 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m60146_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m60147_gshared (List_1_t2732 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m60147(__this, ___item, method) (( int32_t (*) (List_1_t2732 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m60147_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m60148_gshared (List_1_t2732 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m60148(__this, ___item, method) (( bool (*) (List_1_t2732 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m60148_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m60149_gshared (List_1_t2732 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m60149(__this, ___item, method) (( int32_t (*) (List_1_t2732 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m60149_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m60150_gshared (List_1_t2732 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m60150(__this, ___index, ___item, method) (( void (*) (List_1_t2732 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m60150_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m60151_gshared (List_1_t2732 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m60151(__this, ___item, method) (( void (*) (List_1_t2732 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m60151_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60152_gshared (List_1_t2732 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60152(__this, method) (( bool (*) (List_1_t2732 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m60152_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m60153_gshared (List_1_t2732 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m60153(__this, method) (( bool (*) (List_1_t2732 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m60153_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m60154_gshared (List_1_t2732 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m60154(__this, method) (( Object_t * (*) (List_1_t2732 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m60154_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m60155_gshared (List_1_t2732 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m60155(__this, method) (( bool (*) (List_1_t2732 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m60155_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m60156_gshared (List_1_t2732 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m60156(__this, method) (( bool (*) (List_1_t2732 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m60156_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m60157_gshared (List_1_t2732 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m60157(__this, ___index, method) (( Object_t * (*) (List_1_t2732 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m60157_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m60158_gshared (List_1_t2732 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m60158(__this, ___index, ___value, method) (( void (*) (List_1_t2732 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m60158_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m60159_gshared (List_1_t2732 * __this, UILineInfo_t1009  ___item, const MethodInfo* method);
#define List_1_Add_m60159(__this, ___item, method) (( void (*) (List_1_t2732 *, UILineInfo_t1009 , const MethodInfo*))List_1_Add_m60159_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m60160_gshared (List_1_t2732 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m60160(__this, ___newCount, method) (( void (*) (List_1_t2732 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m60160_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m60161_gshared (List_1_t2732 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m60161(__this, ___idx, ___count, method) (( void (*) (List_1_t2732 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m60161_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m60162_gshared (List_1_t2732 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m60162(__this, ___collection, method) (( void (*) (List_1_t2732 *, Object_t*, const MethodInfo*))List_1_AddCollection_m60162_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m60163_gshared (List_1_t2732 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m60163(__this, ___enumerable, method) (( void (*) (List_1_t2732 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m60163_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m60164_gshared (List_1_t2732 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m60164(__this, ___collection, method) (( void (*) (List_1_t2732 *, Object_t*, const MethodInfo*))List_1_AddRange_m60164_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8355 * List_1_AsReadOnly_m60165_gshared (List_1_t2732 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m60165(__this, method) (( ReadOnlyCollection_1_t8355 * (*) (List_1_t2732 *, const MethodInfo*))List_1_AsReadOnly_m60165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m60166_gshared (List_1_t2732 * __this, const MethodInfo* method);
#define List_1_Clear_m60166(__this, method) (( void (*) (List_1_t2732 *, const MethodInfo*))List_1_Clear_m60166_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m60167_gshared (List_1_t2732 * __this, UILineInfo_t1009  ___item, const MethodInfo* method);
#define List_1_Contains_m60167(__this, ___item, method) (( bool (*) (List_1_t2732 *, UILineInfo_t1009 , const MethodInfo*))List_1_Contains_m60167_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m60168_gshared (List_1_t2732 * __this, UILineInfoU5BU5D_t2852* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m60168(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2732 *, UILineInfoU5BU5D_t2852*, int32_t, const MethodInfo*))List_1_CopyTo_m60168_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t1009  List_1_Find_m60169_gshared (List_1_t2732 * __this, Predicate_1_t8359 * ___match, const MethodInfo* method);
#define List_1_Find_m60169(__this, ___match, method) (( UILineInfo_t1009  (*) (List_1_t2732 *, Predicate_1_t8359 *, const MethodInfo*))List_1_Find_m60169_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m60170_gshared (Object_t * __this /* static, unused */, Predicate_1_t8359 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m60170(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8359 *, const MethodInfo*))List_1_CheckMatch_m60170_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m60171_gshared (List_1_t2732 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8359 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m60171(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2732 *, int32_t, int32_t, Predicate_1_t8359 *, const MethodInfo*))List_1_GetIndex_m60171_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t8354  List_1_GetEnumerator_m60172_gshared (List_1_t2732 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m60172(__this, method) (( Enumerator_t8354  (*) (List_1_t2732 *, const MethodInfo*))List_1_GetEnumerator_m60172_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2732 * List_1_GetRange_m60173_gshared (List_1_t2732 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m60173(__this, ___index, ___count, method) (( List_1_t2732 * (*) (List_1_t2732 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m60173_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m60174_gshared (List_1_t2732 * __this, UILineInfo_t1009  ___item, const MethodInfo* method);
#define List_1_IndexOf_m60174(__this, ___item, method) (( int32_t (*) (List_1_t2732 *, UILineInfo_t1009 , const MethodInfo*))List_1_IndexOf_m60174_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m60175_gshared (List_1_t2732 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m60175(__this, ___start, ___delta, method) (( void (*) (List_1_t2732 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m60175_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m60176_gshared (List_1_t2732 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m60176(__this, ___index, method) (( void (*) (List_1_t2732 *, int32_t, const MethodInfo*))List_1_CheckIndex_m60176_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m60177_gshared (List_1_t2732 * __this, int32_t ___index, UILineInfo_t1009  ___item, const MethodInfo* method);
#define List_1_Insert_m60177(__this, ___index, ___item, method) (( void (*) (List_1_t2732 *, int32_t, UILineInfo_t1009 , const MethodInfo*))List_1_Insert_m60177_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m60178_gshared (List_1_t2732 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m60178(__this, ___collection, method) (( void (*) (List_1_t2732 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m60178_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m60179_gshared (List_1_t2732 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m60179(__this, ___index, ___collection, method) (( void (*) (List_1_t2732 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m60179_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m60180_gshared (List_1_t2732 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m60180(__this, ___index, ___collection, method) (( void (*) (List_1_t2732 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m60180_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m60181_gshared (List_1_t2732 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m60181(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2732 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m60181_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m60182_gshared (List_1_t2732 * __this, UILineInfo_t1009  ___item, const MethodInfo* method);
#define List_1_Remove_m60182(__this, ___item, method) (( bool (*) (List_1_t2732 *, UILineInfo_t1009 , const MethodInfo*))List_1_Remove_m60182_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m60183_gshared (List_1_t2732 * __this, Predicate_1_t8359 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m60183(__this, ___match, method) (( int32_t (*) (List_1_t2732 *, Predicate_1_t8359 *, const MethodInfo*))List_1_RemoveAll_m60183_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m60184_gshared (List_1_t2732 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m60184(__this, ___index, method) (( void (*) (List_1_t2732 *, int32_t, const MethodInfo*))List_1_RemoveAt_m60184_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m60185_gshared (List_1_t2732 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m60185(__this, ___index, ___count, method) (( void (*) (List_1_t2732 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m60185_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m60186_gshared (List_1_t2732 * __this, const MethodInfo* method);
#define List_1_Reverse_m60186(__this, method) (( void (*) (List_1_t2732 *, const MethodInfo*))List_1_Reverse_m60186_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m60187_gshared (List_1_t2732 * __this, const MethodInfo* method);
#define List_1_Sort_m60187(__this, method) (( void (*) (List_1_t2732 *, const MethodInfo*))List_1_Sort_m60187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m60188_gshared (List_1_t2732 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m60188(__this, ___comparer, method) (( void (*) (List_1_t2732 *, Object_t*, const MethodInfo*))List_1_Sort_m60188_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m60189_gshared (List_1_t2732 * __this, Comparison_1_t8362 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m60189(__this, ___comparison, method) (( void (*) (List_1_t2732 *, Comparison_1_t8362 *, const MethodInfo*))List_1_Sort_m60189_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t2852* List_1_ToArray_m60190_gshared (List_1_t2732 * __this, const MethodInfo* method);
#define List_1_ToArray_m60190(__this, method) (( UILineInfoU5BU5D_t2852* (*) (List_1_t2732 *, const MethodInfo*))List_1_ToArray_m60190_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m60191_gshared (List_1_t2732 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m60191(__this, method) (( void (*) (List_1_t2732 *, const MethodInfo*))List_1_TrimExcess_m60191_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m60192_gshared (List_1_t2732 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m60192(__this, method) (( int32_t (*) (List_1_t2732 *, const MethodInfo*))List_1_get_Capacity_m60192_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m60193_gshared (List_1_t2732 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m60193(__this, ___value, method) (( void (*) (List_1_t2732 *, int32_t, const MethodInfo*))List_1_set_Capacity_m60193_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m60194_gshared (List_1_t2732 * __this, const MethodInfo* method);
#define List_1_get_Count_m60194(__this, method) (( int32_t (*) (List_1_t2732 *, const MethodInfo*))List_1_get_Count_m60194_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t1009  List_1_get_Item_m60195_gshared (List_1_t2732 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m60195(__this, ___index, method) (( UILineInfo_t1009  (*) (List_1_t2732 *, int32_t, const MethodInfo*))List_1_get_Item_m60195_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m60196_gshared (List_1_t2732 * __this, int32_t ___index, UILineInfo_t1009  ___value, const MethodInfo* method);
#define List_1_set_Item_m60196(__this, ___index, ___value, method) (( void (*) (List_1_t2732 *, int32_t, UILineInfo_t1009 , const MethodInfo*))List_1_set_Item_m60196_gshared)(__this, ___index, ___value, method)
