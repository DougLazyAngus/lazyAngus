#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Parse.ParseGeoPoint>
struct List_1_t6786;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<Parse.ParseGeoPoint>
struct IEnumerable_1_t6779;
// Parse.ParseGeoPoint[]
struct ParseGeoPointU5BU5D_t6785;
// System.Collections.Generic.IEnumerator`1<Parse.ParseGeoPoint>
struct IEnumerator_1_t6780;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9116;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Parse.ParseGeoPoint>
struct ReadOnlyCollection_1_t6788;
// System.Predicate`1<Parse.ParseGeoPoint>
struct Predicate_1_t6792;
// System.Collections.Generic.IComparer`1<Parse.ParseGeoPoint>
struct IComparer_1_t9117;
// System.Comparison`1<Parse.ParseGeoPoint>
struct Comparison_1_t6795;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.List`1/Enumerator<Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_63.h"

// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor()
extern "C" void List_1__ctor_m41245_gshared (List_1_t6786 * __this, const MethodInfo* method);
#define List_1__ctor_m41245(__this, method) (( void (*) (List_1_t6786 *, const MethodInfo*))List_1__ctor_m41245_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m41246_gshared (List_1_t6786 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m41246(__this, ___collection, method) (( void (*) (List_1_t6786 *, Object_t*, const MethodInfo*))List_1__ctor_m41246_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(System.Int32)
extern "C" void List_1__ctor_m41247_gshared (List_1_t6786 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m41247(__this, ___capacity, method) (( void (*) (List_1_t6786 *, int32_t, const MethodInfo*))List_1__ctor_m41247_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m41248_gshared (List_1_t6786 * __this, ParseGeoPointU5BU5D_t6785* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m41248(__this, ___data, ___size, method) (( void (*) (List_1_t6786 *, ParseGeoPointU5BU5D_t6785*, int32_t, const MethodInfo*))List_1__ctor_m41248_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.cctor()
extern "C" void List_1__cctor_m41249_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m41249(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m41249_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41250_gshared (List_1_t6786 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41250(__this, method) (( Object_t* (*) (List_1_t6786 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m41251_gshared (List_1_t6786 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m41251(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6786 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m41251_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m41252_gshared (List_1_t6786 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m41252(__this, method) (( Object_t * (*) (List_1_t6786 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m41252_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m41253_gshared (List_1_t6786 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m41253(__this, ___item, method) (( int32_t (*) (List_1_t6786 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m41253_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m41254_gshared (List_1_t6786 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m41254(__this, ___item, method) (( bool (*) (List_1_t6786 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m41254_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m41255_gshared (List_1_t6786 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m41255(__this, ___item, method) (( int32_t (*) (List_1_t6786 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m41255_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m41256_gshared (List_1_t6786 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m41256(__this, ___index, ___item, method) (( void (*) (List_1_t6786 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m41256_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m41257_gshared (List_1_t6786 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m41257(__this, ___item, method) (( void (*) (List_1_t6786 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m41257_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41258_gshared (List_1_t6786 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41258(__this, method) (( bool (*) (List_1_t6786 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41258_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m41259_gshared (List_1_t6786 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m41259(__this, method) (( bool (*) (List_1_t6786 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m41259_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m41260_gshared (List_1_t6786 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m41260(__this, method) (( Object_t * (*) (List_1_t6786 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m41260_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m41261_gshared (List_1_t6786 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m41261(__this, method) (( bool (*) (List_1_t6786 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m41261_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m41262_gshared (List_1_t6786 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m41262(__this, method) (( bool (*) (List_1_t6786 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m41262_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m41263_gshared (List_1_t6786 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m41263(__this, ___index, method) (( Object_t * (*) (List_1_t6786 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m41263_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m41264_gshared (List_1_t6786 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m41264(__this, ___index, ___value, method) (( void (*) (List_1_t6786 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m41264_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Add(T)
extern "C" void List_1_Add_m41265_gshared (List_1_t6786 * __this, ParseGeoPoint_t1192  ___item, const MethodInfo* method);
#define List_1_Add_m41265(__this, ___item, method) (( void (*) (List_1_t6786 *, ParseGeoPoint_t1192 , const MethodInfo*))List_1_Add_m41265_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m41266_gshared (List_1_t6786 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m41266(__this, ___newCount, method) (( void (*) (List_1_t6786 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m41266_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m41267_gshared (List_1_t6786 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m41267(__this, ___idx, ___count, method) (( void (*) (List_1_t6786 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m41267_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m41268_gshared (List_1_t6786 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m41268(__this, ___collection, method) (( void (*) (List_1_t6786 *, Object_t*, const MethodInfo*))List_1_AddCollection_m41268_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m41269_gshared (List_1_t6786 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m41269(__this, ___enumerable, method) (( void (*) (List_1_t6786 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m41269_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m41270_gshared (List_1_t6786 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m41270(__this, ___collection, method) (( void (*) (List_1_t6786 *, Object_t*, const MethodInfo*))List_1_AddRange_m41270_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6788 * List_1_AsReadOnly_m41271_gshared (List_1_t6786 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m41271(__this, method) (( ReadOnlyCollection_1_t6788 * (*) (List_1_t6786 *, const MethodInfo*))List_1_AsReadOnly_m41271_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Clear()
extern "C" void List_1_Clear_m41272_gshared (List_1_t6786 * __this, const MethodInfo* method);
#define List_1_Clear_m41272(__this, method) (( void (*) (List_1_t6786 *, const MethodInfo*))List_1_Clear_m41272_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Contains(T)
extern "C" bool List_1_Contains_m41273_gshared (List_1_t6786 * __this, ParseGeoPoint_t1192  ___item, const MethodInfo* method);
#define List_1_Contains_m41273(__this, ___item, method) (( bool (*) (List_1_t6786 *, ParseGeoPoint_t1192 , const MethodInfo*))List_1_Contains_m41273_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m41274_gshared (List_1_t6786 * __this, ParseGeoPointU5BU5D_t6785* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m41274(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6786 *, ParseGeoPointU5BU5D_t6785*, int32_t, const MethodInfo*))List_1_CopyTo_m41274_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Find(System.Predicate`1<T>)
extern "C" ParseGeoPoint_t1192  List_1_Find_m41275_gshared (List_1_t6786 * __this, Predicate_1_t6792 * ___match, const MethodInfo* method);
#define List_1_Find_m41275(__this, ___match, method) (( ParseGeoPoint_t1192  (*) (List_1_t6786 *, Predicate_1_t6792 *, const MethodInfo*))List_1_Find_m41275_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m41276_gshared (Object_t * __this /* static, unused */, Predicate_1_t6792 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m41276(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6792 *, const MethodInfo*))List_1_CheckMatch_m41276_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m41277_gshared (List_1_t6786 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6792 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m41277(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6786 *, int32_t, int32_t, Predicate_1_t6792 *, const MethodInfo*))List_1_GetIndex_m41277_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t6787  List_1_GetEnumerator_m41278_gshared (List_1_t6786 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m41278(__this, method) (( Enumerator_t6787  (*) (List_1_t6786 *, const MethodInfo*))List_1_GetEnumerator_m41278_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6786 * List_1_GetRange_m41279_gshared (List_1_t6786 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m41279(__this, ___index, ___count, method) (( List_1_t6786 * (*) (List_1_t6786 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m41279_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m41280_gshared (List_1_t6786 * __this, ParseGeoPoint_t1192  ___item, const MethodInfo* method);
#define List_1_IndexOf_m41280(__this, ___item, method) (( int32_t (*) (List_1_t6786 *, ParseGeoPoint_t1192 , const MethodInfo*))List_1_IndexOf_m41280_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m41281_gshared (List_1_t6786 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m41281(__this, ___start, ___delta, method) (( void (*) (List_1_t6786 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m41281_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m41282_gshared (List_1_t6786 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m41282(__this, ___index, method) (( void (*) (List_1_t6786 *, int32_t, const MethodInfo*))List_1_CheckIndex_m41282_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m41283_gshared (List_1_t6786 * __this, int32_t ___index, ParseGeoPoint_t1192  ___item, const MethodInfo* method);
#define List_1_Insert_m41283(__this, ___index, ___item, method) (( void (*) (List_1_t6786 *, int32_t, ParseGeoPoint_t1192 , const MethodInfo*))List_1_Insert_m41283_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m41284_gshared (List_1_t6786 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m41284(__this, ___collection, method) (( void (*) (List_1_t6786 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m41284_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m41285_gshared (List_1_t6786 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m41285(__this, ___index, ___collection, method) (( void (*) (List_1_t6786 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m41285_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m41286_gshared (List_1_t6786 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m41286(__this, ___index, ___collection, method) (( void (*) (List_1_t6786 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m41286_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m41287_gshared (List_1_t6786 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m41287(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6786 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m41287_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Remove(T)
extern "C" bool List_1_Remove_m41288_gshared (List_1_t6786 * __this, ParseGeoPoint_t1192  ___item, const MethodInfo* method);
#define List_1_Remove_m41288(__this, ___item, method) (( bool (*) (List_1_t6786 *, ParseGeoPoint_t1192 , const MethodInfo*))List_1_Remove_m41288_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m41289_gshared (List_1_t6786 * __this, Predicate_1_t6792 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m41289(__this, ___match, method) (( int32_t (*) (List_1_t6786 *, Predicate_1_t6792 *, const MethodInfo*))List_1_RemoveAll_m41289_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m41290_gshared (List_1_t6786 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m41290(__this, ___index, method) (( void (*) (List_1_t6786 *, int32_t, const MethodInfo*))List_1_RemoveAt_m41290_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m41291_gshared (List_1_t6786 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m41291(__this, ___index, ___count, method) (( void (*) (List_1_t6786 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m41291_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Reverse()
extern "C" void List_1_Reverse_m41292_gshared (List_1_t6786 * __this, const MethodInfo* method);
#define List_1_Reverse_m41292(__this, method) (( void (*) (List_1_t6786 *, const MethodInfo*))List_1_Reverse_m41292_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort()
extern "C" void List_1_Sort_m41293_gshared (List_1_t6786 * __this, const MethodInfo* method);
#define List_1_Sort_m41293(__this, method) (( void (*) (List_1_t6786 *, const MethodInfo*))List_1_Sort_m41293_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m41294_gshared (List_1_t6786 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m41294(__this, ___comparer, method) (( void (*) (List_1_t6786 *, Object_t*, const MethodInfo*))List_1_Sort_m41294_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m41295_gshared (List_1_t6786 * __this, Comparison_1_t6795 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m41295(__this, ___comparison, method) (( void (*) (List_1_t6786 *, Comparison_1_t6795 *, const MethodInfo*))List_1_Sort_m41295_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Parse.ParseGeoPoint>::ToArray()
extern "C" ParseGeoPointU5BU5D_t6785* List_1_ToArray_m41296_gshared (List_1_t6786 * __this, const MethodInfo* method);
#define List_1_ToArray_m41296(__this, method) (( ParseGeoPointU5BU5D_t6785* (*) (List_1_t6786 *, const MethodInfo*))List_1_ToArray_m41296_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::TrimExcess()
extern "C" void List_1_TrimExcess_m41297_gshared (List_1_t6786 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m41297(__this, method) (( void (*) (List_1_t6786 *, const MethodInfo*))List_1_TrimExcess_m41297_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m41298_gshared (List_1_t6786 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m41298(__this, method) (( int32_t (*) (List_1_t6786 *, const MethodInfo*))List_1_get_Capacity_m41298_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m41299_gshared (List_1_t6786 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m41299(__this, ___value, method) (( void (*) (List_1_t6786 *, int32_t, const MethodInfo*))List_1_set_Capacity_m41299_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t List_1_get_Count_m41300_gshared (List_1_t6786 * __this, const MethodInfo* method);
#define List_1_get_Count_m41300(__this, method) (( int32_t (*) (List_1_t6786 *, const MethodInfo*))List_1_get_Count_m41300_gshared)(__this, method)
// T System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Item(System.Int32)
extern "C" ParseGeoPoint_t1192  List_1_get_Item_m41301_gshared (List_1_t6786 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m41301(__this, ___index, method) (( ParseGeoPoint_t1192  (*) (List_1_t6786 *, int32_t, const MethodInfo*))List_1_get_Item_m41301_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m41302_gshared (List_1_t6786 * __this, int32_t ___index, ParseGeoPoint_t1192  ___value, const MethodInfo* method);
#define List_1_set_Item_m41302(__this, ___index, ___value, method) (( void (*) (List_1_t6786 *, int32_t, ParseGeoPoint_t1192 , const MethodInfo*))List_1_set_Item_m41302_gshared)(__this, ___index, ___value, method)
