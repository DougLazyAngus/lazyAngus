#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Parse.ParseGeoPoint>
struct List_1_t6778;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<Parse.ParseGeoPoint>
struct IEnumerable_1_t6771;
// Parse.ParseGeoPoint[]
struct ParseGeoPointU5BU5D_t6777;
// System.Collections.Generic.IEnumerator`1<Parse.ParseGeoPoint>
struct IEnumerator_1_t6772;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9108;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Parse.ParseGeoPoint>
struct ReadOnlyCollection_1_t6780;
// System.Predicate`1<Parse.ParseGeoPoint>
struct Predicate_1_t6784;
// System.Collections.Generic.IComparer`1<Parse.ParseGeoPoint>
struct IComparer_1_t9109;
// System.Comparison`1<Parse.ParseGeoPoint>
struct Comparison_1_t6787;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.List`1/Enumerator<Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_63.h"

// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor()
extern "C" void List_1__ctor_m41198_gshared (List_1_t6778 * __this, const MethodInfo* method);
#define List_1__ctor_m41198(__this, method) (( void (*) (List_1_t6778 *, const MethodInfo*))List_1__ctor_m41198_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m41199_gshared (List_1_t6778 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m41199(__this, ___collection, method) (( void (*) (List_1_t6778 *, Object_t*, const MethodInfo*))List_1__ctor_m41199_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(System.Int32)
extern "C" void List_1__ctor_m41200_gshared (List_1_t6778 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m41200(__this, ___capacity, method) (( void (*) (List_1_t6778 *, int32_t, const MethodInfo*))List_1__ctor_m41200_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m41201_gshared (List_1_t6778 * __this, ParseGeoPointU5BU5D_t6777* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m41201(__this, ___data, ___size, method) (( void (*) (List_1_t6778 *, ParseGeoPointU5BU5D_t6777*, int32_t, const MethodInfo*))List_1__ctor_m41201_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.cctor()
extern "C" void List_1__cctor_m41202_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m41202(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m41202_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41203_gshared (List_1_t6778 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41203(__this, method) (( Object_t* (*) (List_1_t6778 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41203_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m41204_gshared (List_1_t6778 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m41204(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6778 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m41204_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m41205_gshared (List_1_t6778 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m41205(__this, method) (( Object_t * (*) (List_1_t6778 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m41205_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m41206_gshared (List_1_t6778 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m41206(__this, ___item, method) (( int32_t (*) (List_1_t6778 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m41206_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m41207_gshared (List_1_t6778 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m41207(__this, ___item, method) (( bool (*) (List_1_t6778 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m41207_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m41208_gshared (List_1_t6778 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m41208(__this, ___item, method) (( int32_t (*) (List_1_t6778 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m41208_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m41209_gshared (List_1_t6778 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m41209(__this, ___index, ___item, method) (( void (*) (List_1_t6778 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m41209_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m41210_gshared (List_1_t6778 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m41210(__this, ___item, method) (( void (*) (List_1_t6778 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m41210_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41211_gshared (List_1_t6778 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41211(__this, method) (( bool (*) (List_1_t6778 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41211_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m41212_gshared (List_1_t6778 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m41212(__this, method) (( bool (*) (List_1_t6778 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m41212_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m41213_gshared (List_1_t6778 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m41213(__this, method) (( Object_t * (*) (List_1_t6778 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m41213_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m41214_gshared (List_1_t6778 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m41214(__this, method) (( bool (*) (List_1_t6778 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m41214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m41215_gshared (List_1_t6778 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m41215(__this, method) (( bool (*) (List_1_t6778 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m41215_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m41216_gshared (List_1_t6778 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m41216(__this, ___index, method) (( Object_t * (*) (List_1_t6778 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m41216_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m41217_gshared (List_1_t6778 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m41217(__this, ___index, ___value, method) (( void (*) (List_1_t6778 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m41217_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Add(T)
extern "C" void List_1_Add_m41218_gshared (List_1_t6778 * __this, ParseGeoPoint_t1185  ___item, const MethodInfo* method);
#define List_1_Add_m41218(__this, ___item, method) (( void (*) (List_1_t6778 *, ParseGeoPoint_t1185 , const MethodInfo*))List_1_Add_m41218_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m41219_gshared (List_1_t6778 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m41219(__this, ___newCount, method) (( void (*) (List_1_t6778 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m41219_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m41220_gshared (List_1_t6778 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m41220(__this, ___idx, ___count, method) (( void (*) (List_1_t6778 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m41220_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m41221_gshared (List_1_t6778 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m41221(__this, ___collection, method) (( void (*) (List_1_t6778 *, Object_t*, const MethodInfo*))List_1_AddCollection_m41221_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m41222_gshared (List_1_t6778 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m41222(__this, ___enumerable, method) (( void (*) (List_1_t6778 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m41222_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m41223_gshared (List_1_t6778 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m41223(__this, ___collection, method) (( void (*) (List_1_t6778 *, Object_t*, const MethodInfo*))List_1_AddRange_m41223_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6780 * List_1_AsReadOnly_m41224_gshared (List_1_t6778 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m41224(__this, method) (( ReadOnlyCollection_1_t6780 * (*) (List_1_t6778 *, const MethodInfo*))List_1_AsReadOnly_m41224_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Clear()
extern "C" void List_1_Clear_m41225_gshared (List_1_t6778 * __this, const MethodInfo* method);
#define List_1_Clear_m41225(__this, method) (( void (*) (List_1_t6778 *, const MethodInfo*))List_1_Clear_m41225_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Contains(T)
extern "C" bool List_1_Contains_m41226_gshared (List_1_t6778 * __this, ParseGeoPoint_t1185  ___item, const MethodInfo* method);
#define List_1_Contains_m41226(__this, ___item, method) (( bool (*) (List_1_t6778 *, ParseGeoPoint_t1185 , const MethodInfo*))List_1_Contains_m41226_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m41227_gshared (List_1_t6778 * __this, ParseGeoPointU5BU5D_t6777* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m41227(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6778 *, ParseGeoPointU5BU5D_t6777*, int32_t, const MethodInfo*))List_1_CopyTo_m41227_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Find(System.Predicate`1<T>)
extern "C" ParseGeoPoint_t1185  List_1_Find_m41228_gshared (List_1_t6778 * __this, Predicate_1_t6784 * ___match, const MethodInfo* method);
#define List_1_Find_m41228(__this, ___match, method) (( ParseGeoPoint_t1185  (*) (List_1_t6778 *, Predicate_1_t6784 *, const MethodInfo*))List_1_Find_m41228_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m41229_gshared (Object_t * __this /* static, unused */, Predicate_1_t6784 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m41229(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6784 *, const MethodInfo*))List_1_CheckMatch_m41229_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m41230_gshared (List_1_t6778 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6784 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m41230(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6778 *, int32_t, int32_t, Predicate_1_t6784 *, const MethodInfo*))List_1_GetIndex_m41230_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t6779  List_1_GetEnumerator_m41231_gshared (List_1_t6778 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m41231(__this, method) (( Enumerator_t6779  (*) (List_1_t6778 *, const MethodInfo*))List_1_GetEnumerator_m41231_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t6778 * List_1_GetRange_m41232_gshared (List_1_t6778 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m41232(__this, ___index, ___count, method) (( List_1_t6778 * (*) (List_1_t6778 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m41232_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m41233_gshared (List_1_t6778 * __this, ParseGeoPoint_t1185  ___item, const MethodInfo* method);
#define List_1_IndexOf_m41233(__this, ___item, method) (( int32_t (*) (List_1_t6778 *, ParseGeoPoint_t1185 , const MethodInfo*))List_1_IndexOf_m41233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m41234_gshared (List_1_t6778 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m41234(__this, ___start, ___delta, method) (( void (*) (List_1_t6778 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m41234_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m41235_gshared (List_1_t6778 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m41235(__this, ___index, method) (( void (*) (List_1_t6778 *, int32_t, const MethodInfo*))List_1_CheckIndex_m41235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m41236_gshared (List_1_t6778 * __this, int32_t ___index, ParseGeoPoint_t1185  ___item, const MethodInfo* method);
#define List_1_Insert_m41236(__this, ___index, ___item, method) (( void (*) (List_1_t6778 *, int32_t, ParseGeoPoint_t1185 , const MethodInfo*))List_1_Insert_m41236_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m41237_gshared (List_1_t6778 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m41237(__this, ___collection, method) (( void (*) (List_1_t6778 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m41237_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m41238_gshared (List_1_t6778 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m41238(__this, ___index, ___collection, method) (( void (*) (List_1_t6778 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m41238_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m41239_gshared (List_1_t6778 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m41239(__this, ___index, ___collection, method) (( void (*) (List_1_t6778 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m41239_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m41240_gshared (List_1_t6778 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m41240(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6778 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m41240_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Remove(T)
extern "C" bool List_1_Remove_m41241_gshared (List_1_t6778 * __this, ParseGeoPoint_t1185  ___item, const MethodInfo* method);
#define List_1_Remove_m41241(__this, ___item, method) (( bool (*) (List_1_t6778 *, ParseGeoPoint_t1185 , const MethodInfo*))List_1_Remove_m41241_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m41242_gshared (List_1_t6778 * __this, Predicate_1_t6784 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m41242(__this, ___match, method) (( int32_t (*) (List_1_t6778 *, Predicate_1_t6784 *, const MethodInfo*))List_1_RemoveAll_m41242_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m41243_gshared (List_1_t6778 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m41243(__this, ___index, method) (( void (*) (List_1_t6778 *, int32_t, const MethodInfo*))List_1_RemoveAt_m41243_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m41244_gshared (List_1_t6778 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m41244(__this, ___index, ___count, method) (( void (*) (List_1_t6778 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m41244_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Reverse()
extern "C" void List_1_Reverse_m41245_gshared (List_1_t6778 * __this, const MethodInfo* method);
#define List_1_Reverse_m41245(__this, method) (( void (*) (List_1_t6778 *, const MethodInfo*))List_1_Reverse_m41245_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort()
extern "C" void List_1_Sort_m41246_gshared (List_1_t6778 * __this, const MethodInfo* method);
#define List_1_Sort_m41246(__this, method) (( void (*) (List_1_t6778 *, const MethodInfo*))List_1_Sort_m41246_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m41247_gshared (List_1_t6778 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m41247(__this, ___comparer, method) (( void (*) (List_1_t6778 *, Object_t*, const MethodInfo*))List_1_Sort_m41247_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m41248_gshared (List_1_t6778 * __this, Comparison_1_t6787 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m41248(__this, ___comparison, method) (( void (*) (List_1_t6778 *, Comparison_1_t6787 *, const MethodInfo*))List_1_Sort_m41248_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Parse.ParseGeoPoint>::ToArray()
extern "C" ParseGeoPointU5BU5D_t6777* List_1_ToArray_m41249_gshared (List_1_t6778 * __this, const MethodInfo* method);
#define List_1_ToArray_m41249(__this, method) (( ParseGeoPointU5BU5D_t6777* (*) (List_1_t6778 *, const MethodInfo*))List_1_ToArray_m41249_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::TrimExcess()
extern "C" void List_1_TrimExcess_m41250_gshared (List_1_t6778 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m41250(__this, method) (( void (*) (List_1_t6778 *, const MethodInfo*))List_1_TrimExcess_m41250_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m41251_gshared (List_1_t6778 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m41251(__this, method) (( int32_t (*) (List_1_t6778 *, const MethodInfo*))List_1_get_Capacity_m41251_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m41252_gshared (List_1_t6778 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m41252(__this, ___value, method) (( void (*) (List_1_t6778 *, int32_t, const MethodInfo*))List_1_set_Capacity_m41252_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t List_1_get_Count_m41253_gshared (List_1_t6778 * __this, const MethodInfo* method);
#define List_1_get_Count_m41253(__this, method) (( int32_t (*) (List_1_t6778 *, const MethodInfo*))List_1_get_Count_m41253_gshared)(__this, method)
// T System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Item(System.Int32)
extern "C" ParseGeoPoint_t1185  List_1_get_Item_m41254_gshared (List_1_t6778 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m41254(__this, ___index, method) (( ParseGeoPoint_t1185  (*) (List_1_t6778 *, int32_t, const MethodInfo*))List_1_get_Item_m41254_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m41255_gshared (List_1_t6778 * __this, int32_t ___index, ParseGeoPoint_t1185  ___value, const MethodInfo* method);
#define List_1_set_Item_m41255(__this, ___index, ___value, method) (( void (*) (List_1_t6778 *, int32_t, ParseGeoPoint_t1185 , const MethodInfo*))List_1_set_Item_m41255_gshared)(__this, ___index, ___value, method)
