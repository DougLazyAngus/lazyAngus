#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Parse.ParseGeoPoint>
struct List_1_t7437;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<Parse.ParseGeoPoint>
struct IEnumerable_1_t7430;
// Parse.ParseGeoPoint[]
struct ParseGeoPointU5BU5D_t7436;
// System.Collections.Generic.IEnumerator`1<Parse.ParseGeoPoint>
struct IEnumerator_1_t7431;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9850;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Parse.ParseGeoPoint>
struct ReadOnlyCollection_1_t7439;
// System.Predicate`1<Parse.ParseGeoPoint>
struct Predicate_1_t7443;
// System.Collections.Generic.IComparer`1<Parse.ParseGeoPoint>
struct IComparer_1_t9851;
// System.Comparison`1<Parse.ParseGeoPoint>
struct Comparison_1_t7446;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.List`1/Enumerator<Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_70.h"

// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor()
extern "C" void List_1__ctor_m46673_gshared (List_1_t7437 * __this, const MethodInfo* method);
#define List_1__ctor_m46673(__this, method) (( void (*) (List_1_t7437 *, const MethodInfo*))List_1__ctor_m46673_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m46674_gshared (List_1_t7437 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m46674(__this, ___collection, method) (( void (*) (List_1_t7437 *, Object_t*, const MethodInfo*))List_1__ctor_m46674_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(System.Int32)
extern "C" void List_1__ctor_m46675_gshared (List_1_t7437 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m46675(__this, ___capacity, method) (( void (*) (List_1_t7437 *, int32_t, const MethodInfo*))List_1__ctor_m46675_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m46676_gshared (List_1_t7437 * __this, ParseGeoPointU5BU5D_t7436* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m46676(__this, ___data, ___size, method) (( void (*) (List_1_t7437 *, ParseGeoPointU5BU5D_t7436*, int32_t, const MethodInfo*))List_1__ctor_m46676_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.cctor()
extern "C" void List_1__cctor_m46677_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m46677(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m46677_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46678_gshared (List_1_t7437 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46678(__this, method) (( Object_t* (*) (List_1_t7437 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46678_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m46679_gshared (List_1_t7437 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m46679(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7437 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m46679_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m46680_gshared (List_1_t7437 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m46680(__this, method) (( Object_t * (*) (List_1_t7437 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m46680_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m46681_gshared (List_1_t7437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m46681(__this, ___item, method) (( int32_t (*) (List_1_t7437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m46681_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m46682_gshared (List_1_t7437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m46682(__this, ___item, method) (( bool (*) (List_1_t7437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m46682_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m46683_gshared (List_1_t7437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m46683(__this, ___item, method) (( int32_t (*) (List_1_t7437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m46683_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m46684_gshared (List_1_t7437 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m46684(__this, ___index, ___item, method) (( void (*) (List_1_t7437 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m46684_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m46685_gshared (List_1_t7437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m46685(__this, ___item, method) (( void (*) (List_1_t7437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m46685_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46686_gshared (List_1_t7437 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46686(__this, method) (( bool (*) (List_1_t7437 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46686_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m46687_gshared (List_1_t7437 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m46687(__this, method) (( bool (*) (List_1_t7437 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m46687_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m46688_gshared (List_1_t7437 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m46688(__this, method) (( Object_t * (*) (List_1_t7437 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m46688_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m46689_gshared (List_1_t7437 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m46689(__this, method) (( bool (*) (List_1_t7437 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m46689_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m46690_gshared (List_1_t7437 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m46690(__this, method) (( bool (*) (List_1_t7437 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m46690_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m46691_gshared (List_1_t7437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m46691(__this, ___index, method) (( Object_t * (*) (List_1_t7437 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m46691_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m46692_gshared (List_1_t7437 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m46692(__this, ___index, ___value, method) (( void (*) (List_1_t7437 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m46692_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Add(T)
extern "C" void List_1_Add_m46693_gshared (List_1_t7437 * __this, ParseGeoPoint_t1268  ___item, const MethodInfo* method);
#define List_1_Add_m46693(__this, ___item, method) (( void (*) (List_1_t7437 *, ParseGeoPoint_t1268 , const MethodInfo*))List_1_Add_m46693_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m46694_gshared (List_1_t7437 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m46694(__this, ___newCount, method) (( void (*) (List_1_t7437 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m46694_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m46695_gshared (List_1_t7437 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m46695(__this, ___idx, ___count, method) (( void (*) (List_1_t7437 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m46695_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m46696_gshared (List_1_t7437 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m46696(__this, ___collection, method) (( void (*) (List_1_t7437 *, Object_t*, const MethodInfo*))List_1_AddCollection_m46696_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m46697_gshared (List_1_t7437 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m46697(__this, ___enumerable, method) (( void (*) (List_1_t7437 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m46697_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m46698_gshared (List_1_t7437 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m46698(__this, ___collection, method) (( void (*) (List_1_t7437 *, Object_t*, const MethodInfo*))List_1_AddRange_m46698_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7439 * List_1_AsReadOnly_m46699_gshared (List_1_t7437 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m46699(__this, method) (( ReadOnlyCollection_1_t7439 * (*) (List_1_t7437 *, const MethodInfo*))List_1_AsReadOnly_m46699_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Clear()
extern "C" void List_1_Clear_m46700_gshared (List_1_t7437 * __this, const MethodInfo* method);
#define List_1_Clear_m46700(__this, method) (( void (*) (List_1_t7437 *, const MethodInfo*))List_1_Clear_m46700_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Contains(T)
extern "C" bool List_1_Contains_m46701_gshared (List_1_t7437 * __this, ParseGeoPoint_t1268  ___item, const MethodInfo* method);
#define List_1_Contains_m46701(__this, ___item, method) (( bool (*) (List_1_t7437 *, ParseGeoPoint_t1268 , const MethodInfo*))List_1_Contains_m46701_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m46702_gshared (List_1_t7437 * __this, ParseGeoPointU5BU5D_t7436* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m46702(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7437 *, ParseGeoPointU5BU5D_t7436*, int32_t, const MethodInfo*))List_1_CopyTo_m46702_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Find(System.Predicate`1<T>)
extern "C" ParseGeoPoint_t1268  List_1_Find_m46703_gshared (List_1_t7437 * __this, Predicate_1_t7443 * ___match, const MethodInfo* method);
#define List_1_Find_m46703(__this, ___match, method) (( ParseGeoPoint_t1268  (*) (List_1_t7437 *, Predicate_1_t7443 *, const MethodInfo*))List_1_Find_m46703_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m46704_gshared (Object_t * __this /* static, unused */, Predicate_1_t7443 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m46704(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7443 *, const MethodInfo*))List_1_CheckMatch_m46704_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m46705_gshared (List_1_t7437 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7443 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m46705(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7437 *, int32_t, int32_t, Predicate_1_t7443 *, const MethodInfo*))List_1_GetIndex_m46705_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t7438  List_1_GetEnumerator_m46706_gshared (List_1_t7437 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m46706(__this, method) (( Enumerator_t7438  (*) (List_1_t7437 *, const MethodInfo*))List_1_GetEnumerator_m46706_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7437 * List_1_GetRange_m46707_gshared (List_1_t7437 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m46707(__this, ___index, ___count, method) (( List_1_t7437 * (*) (List_1_t7437 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m46707_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m46708_gshared (List_1_t7437 * __this, ParseGeoPoint_t1268  ___item, const MethodInfo* method);
#define List_1_IndexOf_m46708(__this, ___item, method) (( int32_t (*) (List_1_t7437 *, ParseGeoPoint_t1268 , const MethodInfo*))List_1_IndexOf_m46708_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m46709_gshared (List_1_t7437 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m46709(__this, ___start, ___delta, method) (( void (*) (List_1_t7437 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m46709_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m46710_gshared (List_1_t7437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m46710(__this, ___index, method) (( void (*) (List_1_t7437 *, int32_t, const MethodInfo*))List_1_CheckIndex_m46710_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m46711_gshared (List_1_t7437 * __this, int32_t ___index, ParseGeoPoint_t1268  ___item, const MethodInfo* method);
#define List_1_Insert_m46711(__this, ___index, ___item, method) (( void (*) (List_1_t7437 *, int32_t, ParseGeoPoint_t1268 , const MethodInfo*))List_1_Insert_m46711_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m46712_gshared (List_1_t7437 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m46712(__this, ___collection, method) (( void (*) (List_1_t7437 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m46712_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m46713_gshared (List_1_t7437 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m46713(__this, ___index, ___collection, method) (( void (*) (List_1_t7437 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m46713_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m46714_gshared (List_1_t7437 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m46714(__this, ___index, ___collection, method) (( void (*) (List_1_t7437 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m46714_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m46715_gshared (List_1_t7437 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m46715(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7437 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m46715_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Remove(T)
extern "C" bool List_1_Remove_m46716_gshared (List_1_t7437 * __this, ParseGeoPoint_t1268  ___item, const MethodInfo* method);
#define List_1_Remove_m46716(__this, ___item, method) (( bool (*) (List_1_t7437 *, ParseGeoPoint_t1268 , const MethodInfo*))List_1_Remove_m46716_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m46717_gshared (List_1_t7437 * __this, Predicate_1_t7443 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m46717(__this, ___match, method) (( int32_t (*) (List_1_t7437 *, Predicate_1_t7443 *, const MethodInfo*))List_1_RemoveAll_m46717_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m46718_gshared (List_1_t7437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m46718(__this, ___index, method) (( void (*) (List_1_t7437 *, int32_t, const MethodInfo*))List_1_RemoveAt_m46718_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m46719_gshared (List_1_t7437 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m46719(__this, ___index, ___count, method) (( void (*) (List_1_t7437 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m46719_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Reverse()
extern "C" void List_1_Reverse_m46720_gshared (List_1_t7437 * __this, const MethodInfo* method);
#define List_1_Reverse_m46720(__this, method) (( void (*) (List_1_t7437 *, const MethodInfo*))List_1_Reverse_m46720_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort()
extern "C" void List_1_Sort_m46721_gshared (List_1_t7437 * __this, const MethodInfo* method);
#define List_1_Sort_m46721(__this, method) (( void (*) (List_1_t7437 *, const MethodInfo*))List_1_Sort_m46721_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m46722_gshared (List_1_t7437 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m46722(__this, ___comparer, method) (( void (*) (List_1_t7437 *, Object_t*, const MethodInfo*))List_1_Sort_m46722_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m46723_gshared (List_1_t7437 * __this, Comparison_1_t7446 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m46723(__this, ___comparison, method) (( void (*) (List_1_t7437 *, Comparison_1_t7446 *, const MethodInfo*))List_1_Sort_m46723_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Parse.ParseGeoPoint>::ToArray()
extern "C" ParseGeoPointU5BU5D_t7436* List_1_ToArray_m46724_gshared (List_1_t7437 * __this, const MethodInfo* method);
#define List_1_ToArray_m46724(__this, method) (( ParseGeoPointU5BU5D_t7436* (*) (List_1_t7437 *, const MethodInfo*))List_1_ToArray_m46724_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::TrimExcess()
extern "C" void List_1_TrimExcess_m46725_gshared (List_1_t7437 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m46725(__this, method) (( void (*) (List_1_t7437 *, const MethodInfo*))List_1_TrimExcess_m46725_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m46726_gshared (List_1_t7437 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m46726(__this, method) (( int32_t (*) (List_1_t7437 *, const MethodInfo*))List_1_get_Capacity_m46726_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m46727_gshared (List_1_t7437 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m46727(__this, ___value, method) (( void (*) (List_1_t7437 *, int32_t, const MethodInfo*))List_1_set_Capacity_m46727_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t List_1_get_Count_m46728_gshared (List_1_t7437 * __this, const MethodInfo* method);
#define List_1_get_Count_m46728(__this, method) (( int32_t (*) (List_1_t7437 *, const MethodInfo*))List_1_get_Count_m46728_gshared)(__this, method)
// T System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Item(System.Int32)
extern "C" ParseGeoPoint_t1268  List_1_get_Item_m46729_gshared (List_1_t7437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m46729(__this, ___index, method) (( ParseGeoPoint_t1268  (*) (List_1_t7437 *, int32_t, const MethodInfo*))List_1_get_Item_m46729_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m46730_gshared (List_1_t7437 * __this, int32_t ___index, ParseGeoPoint_t1268  ___value, const MethodInfo* method);
#define List_1_set_Item_m46730(__this, ___index, ___value, method) (( void (*) (List_1_t7437 *, int32_t, ParseGeoPoint_t1268 , const MethodInfo*))List_1_set_Item_m46730_gshared)(__this, ___index, ___value, method)
