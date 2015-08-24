#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t2791;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t9622;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t2911;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t9623;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t1081;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t8443;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t8447;
// System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
struct IComparer_1_t9624;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t8450;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_102.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m61008_gshared (List_1_t2791 * __this, const MethodInfo* method);
#define List_1__ctor_m61008(__this, method) (( void (*) (List_1_t2791 *, const MethodInfo*))List_1__ctor_m61008_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m61009_gshared (List_1_t2791 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m61009(__this, ___collection, method) (( void (*) (List_1_t2791 *, Object_t*, const MethodInfo*))List_1__ctor_m61009_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10143_gshared (List_1_t2791 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10143(__this, ___capacity, method) (( void (*) (List_1_t2791 *, int32_t, const MethodInfo*))List_1__ctor_m10143_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m61010_gshared (List_1_t2791 * __this, UILineInfoU5BU5D_t2911* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m61010(__this, ___data, ___size, method) (( void (*) (List_1_t2791 *, UILineInfoU5BU5D_t2911*, int32_t, const MethodInfo*))List_1__ctor_m61010_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m61011_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m61011(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m61011_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m61012_gshared (List_1_t2791 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m61012(__this, method) (( Object_t* (*) (List_1_t2791 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m61012_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m61013_gshared (List_1_t2791 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m61013(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2791 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m61013_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m61014_gshared (List_1_t2791 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m61014(__this, method) (( Object_t * (*) (List_1_t2791 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m61014_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m61015_gshared (List_1_t2791 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m61015(__this, ___item, method) (( int32_t (*) (List_1_t2791 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m61015_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m61016_gshared (List_1_t2791 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m61016(__this, ___item, method) (( bool (*) (List_1_t2791 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m61016_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m61017_gshared (List_1_t2791 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m61017(__this, ___item, method) (( int32_t (*) (List_1_t2791 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m61017_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m61018_gshared (List_1_t2791 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m61018(__this, ___index, ___item, method) (( void (*) (List_1_t2791 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m61018_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m61019_gshared (List_1_t2791 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m61019(__this, ___item, method) (( void (*) (List_1_t2791 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m61019_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m61020_gshared (List_1_t2791 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m61020(__this, method) (( bool (*) (List_1_t2791 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m61020_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m61021_gshared (List_1_t2791 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m61021(__this, method) (( bool (*) (List_1_t2791 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m61021_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m61022_gshared (List_1_t2791 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m61022(__this, method) (( Object_t * (*) (List_1_t2791 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m61022_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m61023_gshared (List_1_t2791 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m61023(__this, method) (( bool (*) (List_1_t2791 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m61023_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m61024_gshared (List_1_t2791 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m61024(__this, method) (( bool (*) (List_1_t2791 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m61024_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m61025_gshared (List_1_t2791 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m61025(__this, ___index, method) (( Object_t * (*) (List_1_t2791 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m61025_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m61026_gshared (List_1_t2791 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m61026(__this, ___index, ___value, method) (( void (*) (List_1_t2791 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m61026_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m61027_gshared (List_1_t2791 * __this, UILineInfo_t1077  ___item, const MethodInfo* method);
#define List_1_Add_m61027(__this, ___item, method) (( void (*) (List_1_t2791 *, UILineInfo_t1077 , const MethodInfo*))List_1_Add_m61027_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m61028_gshared (List_1_t2791 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m61028(__this, ___newCount, method) (( void (*) (List_1_t2791 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m61028_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m61029_gshared (List_1_t2791 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m61029(__this, ___idx, ___count, method) (( void (*) (List_1_t2791 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m61029_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m61030_gshared (List_1_t2791 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m61030(__this, ___collection, method) (( void (*) (List_1_t2791 *, Object_t*, const MethodInfo*))List_1_AddCollection_m61030_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m61031_gshared (List_1_t2791 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m61031(__this, ___enumerable, method) (( void (*) (List_1_t2791 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m61031_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m61032_gshared (List_1_t2791 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m61032(__this, ___collection, method) (( void (*) (List_1_t2791 *, Object_t*, const MethodInfo*))List_1_AddRange_m61032_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t8443 * List_1_AsReadOnly_m61033_gshared (List_1_t2791 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m61033(__this, method) (( ReadOnlyCollection_1_t8443 * (*) (List_1_t2791 *, const MethodInfo*))List_1_AsReadOnly_m61033_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m61034_gshared (List_1_t2791 * __this, const MethodInfo* method);
#define List_1_Clear_m61034(__this, method) (( void (*) (List_1_t2791 *, const MethodInfo*))List_1_Clear_m61034_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m61035_gshared (List_1_t2791 * __this, UILineInfo_t1077  ___item, const MethodInfo* method);
#define List_1_Contains_m61035(__this, ___item, method) (( bool (*) (List_1_t2791 *, UILineInfo_t1077 , const MethodInfo*))List_1_Contains_m61035_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m61036_gshared (List_1_t2791 * __this, UILineInfoU5BU5D_t2911* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m61036(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2791 *, UILineInfoU5BU5D_t2911*, int32_t, const MethodInfo*))List_1_CopyTo_m61036_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t1077  List_1_Find_m61037_gshared (List_1_t2791 * __this, Predicate_1_t8447 * ___match, const MethodInfo* method);
#define List_1_Find_m61037(__this, ___match, method) (( UILineInfo_t1077  (*) (List_1_t2791 *, Predicate_1_t8447 *, const MethodInfo*))List_1_Find_m61037_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m61038_gshared (Object_t * __this /* static, unused */, Predicate_1_t8447 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m61038(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t8447 *, const MethodInfo*))List_1_CheckMatch_m61038_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m61039_gshared (List_1_t2791 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t8447 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m61039(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2791 *, int32_t, int32_t, Predicate_1_t8447 *, const MethodInfo*))List_1_GetIndex_m61039_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t8442  List_1_GetEnumerator_m61040_gshared (List_1_t2791 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m61040(__this, method) (( Enumerator_t8442  (*) (List_1_t2791 *, const MethodInfo*))List_1_GetEnumerator_m61040_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2791 * List_1_GetRange_m61041_gshared (List_1_t2791 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m61041(__this, ___index, ___count, method) (( List_1_t2791 * (*) (List_1_t2791 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m61041_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m61042_gshared (List_1_t2791 * __this, UILineInfo_t1077  ___item, const MethodInfo* method);
#define List_1_IndexOf_m61042(__this, ___item, method) (( int32_t (*) (List_1_t2791 *, UILineInfo_t1077 , const MethodInfo*))List_1_IndexOf_m61042_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m61043_gshared (List_1_t2791 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m61043(__this, ___start, ___delta, method) (( void (*) (List_1_t2791 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m61043_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m61044_gshared (List_1_t2791 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m61044(__this, ___index, method) (( void (*) (List_1_t2791 *, int32_t, const MethodInfo*))List_1_CheckIndex_m61044_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m61045_gshared (List_1_t2791 * __this, int32_t ___index, UILineInfo_t1077  ___item, const MethodInfo* method);
#define List_1_Insert_m61045(__this, ___index, ___item, method) (( void (*) (List_1_t2791 *, int32_t, UILineInfo_t1077 , const MethodInfo*))List_1_Insert_m61045_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m61046_gshared (List_1_t2791 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m61046(__this, ___collection, method) (( void (*) (List_1_t2791 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m61046_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m61047_gshared (List_1_t2791 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m61047(__this, ___index, ___collection, method) (( void (*) (List_1_t2791 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m61047_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m61048_gshared (List_1_t2791 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m61048(__this, ___index, ___collection, method) (( void (*) (List_1_t2791 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m61048_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m61049_gshared (List_1_t2791 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m61049(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2791 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m61049_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m61050_gshared (List_1_t2791 * __this, UILineInfo_t1077  ___item, const MethodInfo* method);
#define List_1_Remove_m61050(__this, ___item, method) (( bool (*) (List_1_t2791 *, UILineInfo_t1077 , const MethodInfo*))List_1_Remove_m61050_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m61051_gshared (List_1_t2791 * __this, Predicate_1_t8447 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m61051(__this, ___match, method) (( int32_t (*) (List_1_t2791 *, Predicate_1_t8447 *, const MethodInfo*))List_1_RemoveAll_m61051_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m61052_gshared (List_1_t2791 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m61052(__this, ___index, method) (( void (*) (List_1_t2791 *, int32_t, const MethodInfo*))List_1_RemoveAt_m61052_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m61053_gshared (List_1_t2791 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m61053(__this, ___index, ___count, method) (( void (*) (List_1_t2791 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m61053_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m61054_gshared (List_1_t2791 * __this, const MethodInfo* method);
#define List_1_Reverse_m61054(__this, method) (( void (*) (List_1_t2791 *, const MethodInfo*))List_1_Reverse_m61054_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m61055_gshared (List_1_t2791 * __this, const MethodInfo* method);
#define List_1_Sort_m61055(__this, method) (( void (*) (List_1_t2791 *, const MethodInfo*))List_1_Sort_m61055_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m61056_gshared (List_1_t2791 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m61056(__this, ___comparer, method) (( void (*) (List_1_t2791 *, Object_t*, const MethodInfo*))List_1_Sort_m61056_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m61057_gshared (List_1_t2791 * __this, Comparison_1_t8450 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m61057(__this, ___comparison, method) (( void (*) (List_1_t2791 *, Comparison_1_t8450 *, const MethodInfo*))List_1_Sort_m61057_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t2911* List_1_ToArray_m61058_gshared (List_1_t2791 * __this, const MethodInfo* method);
#define List_1_ToArray_m61058(__this, method) (( UILineInfoU5BU5D_t2911* (*) (List_1_t2791 *, const MethodInfo*))List_1_ToArray_m61058_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m61059_gshared (List_1_t2791 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m61059(__this, method) (( void (*) (List_1_t2791 *, const MethodInfo*))List_1_TrimExcess_m61059_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m61060_gshared (List_1_t2791 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m61060(__this, method) (( int32_t (*) (List_1_t2791 *, const MethodInfo*))List_1_get_Capacity_m61060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m61061_gshared (List_1_t2791 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m61061(__this, ___value, method) (( void (*) (List_1_t2791 *, int32_t, const MethodInfo*))List_1_set_Capacity_m61061_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m61062_gshared (List_1_t2791 * __this, const MethodInfo* method);
#define List_1_get_Count_m61062(__this, method) (( int32_t (*) (List_1_t2791 *, const MethodInfo*))List_1_get_Count_m61062_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t1077  List_1_get_Item_m61063_gshared (List_1_t2791 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m61063(__this, ___index, method) (( UILineInfo_t1077  (*) (List_1_t2791 *, int32_t, const MethodInfo*))List_1_get_Item_m61063_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m61064_gshared (List_1_t2791 * __this, int32_t ___index, UILineInfo_t1077  ___value, const MethodInfo* method);
#define List_1_set_Item_m61064(__this, ___index, ___value, method) (( void (*) (List_1_t2791 *, int32_t, UILineInfo_t1077 , const MethodInfo*))List_1_set_Item_m61064_gshared)(__this, ___index, ___value, method)
