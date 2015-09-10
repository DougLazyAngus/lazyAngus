#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Parse.ParseGeoPoint>
struct List_1_t7444;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<Parse.ParseGeoPoint>
struct IEnumerable_1_t7437;
// Parse.ParseGeoPoint[]
struct ParseGeoPointU5BU5D_t7443;
// System.Collections.Generic.IEnumerator`1<Parse.ParseGeoPoint>
struct IEnumerator_1_t7438;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9857;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Parse.ParseGeoPoint>
struct ReadOnlyCollection_1_t7446;
// System.Predicate`1<Parse.ParseGeoPoint>
struct Predicate_1_t7450;
// System.Collections.Generic.IComparer`1<Parse.ParseGeoPoint>
struct IComparer_1_t9858;
// System.Comparison`1<Parse.ParseGeoPoint>
struct Comparison_1_t7453;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.List`1/Enumerator<Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_70.h"

// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor()
extern "C" void List_1__ctor_m46730_gshared (List_1_t7444 * __this, const MethodInfo* method);
#define List_1__ctor_m46730(__this, method) (( void (*) (List_1_t7444 *, const MethodInfo*))List_1__ctor_m46730_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m46731_gshared (List_1_t7444 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m46731(__this, ___collection, method) (( void (*) (List_1_t7444 *, Object_t*, const MethodInfo*))List_1__ctor_m46731_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(System.Int32)
extern "C" void List_1__ctor_m46732_gshared (List_1_t7444 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m46732(__this, ___capacity, method) (( void (*) (List_1_t7444 *, int32_t, const MethodInfo*))List_1__ctor_m46732_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m46733_gshared (List_1_t7444 * __this, ParseGeoPointU5BU5D_t7443* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m46733(__this, ___data, ___size, method) (( void (*) (List_1_t7444 *, ParseGeoPointU5BU5D_t7443*, int32_t, const MethodInfo*))List_1__ctor_m46733_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::.cctor()
extern "C" void List_1__cctor_m46734_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m46734(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m46734_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46735_gshared (List_1_t7444 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46735(__this, method) (( Object_t* (*) (List_1_t7444 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m46735_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m46736_gshared (List_1_t7444 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m46736(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7444 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m46736_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m46737_gshared (List_1_t7444 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m46737(__this, method) (( Object_t * (*) (List_1_t7444 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m46737_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m46738_gshared (List_1_t7444 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m46738(__this, ___item, method) (( int32_t (*) (List_1_t7444 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m46738_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m46739_gshared (List_1_t7444 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m46739(__this, ___item, method) (( bool (*) (List_1_t7444 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m46739_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m46740_gshared (List_1_t7444 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m46740(__this, ___item, method) (( int32_t (*) (List_1_t7444 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m46740_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m46741_gshared (List_1_t7444 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m46741(__this, ___index, ___item, method) (( void (*) (List_1_t7444 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m46741_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m46742_gshared (List_1_t7444 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m46742(__this, ___item, method) (( void (*) (List_1_t7444 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m46742_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46743_gshared (List_1_t7444 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46743(__this, method) (( bool (*) (List_1_t7444 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m46743_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m46744_gshared (List_1_t7444 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m46744(__this, method) (( bool (*) (List_1_t7444 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m46744_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m46745_gshared (List_1_t7444 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m46745(__this, method) (( Object_t * (*) (List_1_t7444 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m46745_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m46746_gshared (List_1_t7444 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m46746(__this, method) (( bool (*) (List_1_t7444 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m46746_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m46747_gshared (List_1_t7444 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m46747(__this, method) (( bool (*) (List_1_t7444 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m46747_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m46748_gshared (List_1_t7444 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m46748(__this, ___index, method) (( Object_t * (*) (List_1_t7444 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m46748_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m46749_gshared (List_1_t7444 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m46749(__this, ___index, ___value, method) (( void (*) (List_1_t7444 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m46749_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Add(T)
extern "C" void List_1_Add_m46750_gshared (List_1_t7444 * __this, ParseGeoPoint_t1275  ___item, const MethodInfo* method);
#define List_1_Add_m46750(__this, ___item, method) (( void (*) (List_1_t7444 *, ParseGeoPoint_t1275 , const MethodInfo*))List_1_Add_m46750_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m46751_gshared (List_1_t7444 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m46751(__this, ___newCount, method) (( void (*) (List_1_t7444 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m46751_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m46752_gshared (List_1_t7444 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m46752(__this, ___idx, ___count, method) (( void (*) (List_1_t7444 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m46752_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m46753_gshared (List_1_t7444 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m46753(__this, ___collection, method) (( void (*) (List_1_t7444 *, Object_t*, const MethodInfo*))List_1_AddCollection_m46753_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m46754_gshared (List_1_t7444 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m46754(__this, ___enumerable, method) (( void (*) (List_1_t7444 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m46754_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m46755_gshared (List_1_t7444 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m46755(__this, ___collection, method) (( void (*) (List_1_t7444 *, Object_t*, const MethodInfo*))List_1_AddRange_m46755_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t7446 * List_1_AsReadOnly_m46756_gshared (List_1_t7444 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m46756(__this, method) (( ReadOnlyCollection_1_t7446 * (*) (List_1_t7444 *, const MethodInfo*))List_1_AsReadOnly_m46756_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Clear()
extern "C" void List_1_Clear_m46757_gshared (List_1_t7444 * __this, const MethodInfo* method);
#define List_1_Clear_m46757(__this, method) (( void (*) (List_1_t7444 *, const MethodInfo*))List_1_Clear_m46757_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Contains(T)
extern "C" bool List_1_Contains_m46758_gshared (List_1_t7444 * __this, ParseGeoPoint_t1275  ___item, const MethodInfo* method);
#define List_1_Contains_m46758(__this, ___item, method) (( bool (*) (List_1_t7444 *, ParseGeoPoint_t1275 , const MethodInfo*))List_1_Contains_m46758_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m46759_gshared (List_1_t7444 * __this, ParseGeoPointU5BU5D_t7443* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m46759(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t7444 *, ParseGeoPointU5BU5D_t7443*, int32_t, const MethodInfo*))List_1_CopyTo_m46759_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Find(System.Predicate`1<T>)
extern "C" ParseGeoPoint_t1275  List_1_Find_m46760_gshared (List_1_t7444 * __this, Predicate_1_t7450 * ___match, const MethodInfo* method);
#define List_1_Find_m46760(__this, ___match, method) (( ParseGeoPoint_t1275  (*) (List_1_t7444 *, Predicate_1_t7450 *, const MethodInfo*))List_1_Find_m46760_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m46761_gshared (Object_t * __this /* static, unused */, Predicate_1_t7450 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m46761(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7450 *, const MethodInfo*))List_1_CheckMatch_m46761_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m46762_gshared (List_1_t7444 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t7450 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m46762(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t7444 *, int32_t, int32_t, Predicate_1_t7450 *, const MethodInfo*))List_1_GetIndex_m46762_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t7445  List_1_GetEnumerator_m46763_gshared (List_1_t7444 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m46763(__this, method) (( Enumerator_t7445  (*) (List_1_t7444 *, const MethodInfo*))List_1_GetEnumerator_m46763_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Parse.ParseGeoPoint>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t7444 * List_1_GetRange_m46764_gshared (List_1_t7444 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m46764(__this, ___index, ___count, method) (( List_1_t7444 * (*) (List_1_t7444 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m46764_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m46765_gshared (List_1_t7444 * __this, ParseGeoPoint_t1275  ___item, const MethodInfo* method);
#define List_1_IndexOf_m46765(__this, ___item, method) (( int32_t (*) (List_1_t7444 *, ParseGeoPoint_t1275 , const MethodInfo*))List_1_IndexOf_m46765_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m46766_gshared (List_1_t7444 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m46766(__this, ___start, ___delta, method) (( void (*) (List_1_t7444 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m46766_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m46767_gshared (List_1_t7444 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m46767(__this, ___index, method) (( void (*) (List_1_t7444 *, int32_t, const MethodInfo*))List_1_CheckIndex_m46767_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m46768_gshared (List_1_t7444 * __this, int32_t ___index, ParseGeoPoint_t1275  ___item, const MethodInfo* method);
#define List_1_Insert_m46768(__this, ___index, ___item, method) (( void (*) (List_1_t7444 *, int32_t, ParseGeoPoint_t1275 , const MethodInfo*))List_1_Insert_m46768_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m46769_gshared (List_1_t7444 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m46769(__this, ___collection, method) (( void (*) (List_1_t7444 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m46769_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m46770_gshared (List_1_t7444 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m46770(__this, ___index, ___collection, method) (( void (*) (List_1_t7444 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m46770_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m46771_gshared (List_1_t7444 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m46771(__this, ___index, ___collection, method) (( void (*) (List_1_t7444 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m46771_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m46772_gshared (List_1_t7444 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m46772(__this, ___index, ___enumerable, method) (( void (*) (List_1_t7444 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m46772_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Remove(T)
extern "C" bool List_1_Remove_m46773_gshared (List_1_t7444 * __this, ParseGeoPoint_t1275  ___item, const MethodInfo* method);
#define List_1_Remove_m46773(__this, ___item, method) (( bool (*) (List_1_t7444 *, ParseGeoPoint_t1275 , const MethodInfo*))List_1_Remove_m46773_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m46774_gshared (List_1_t7444 * __this, Predicate_1_t7450 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m46774(__this, ___match, method) (( int32_t (*) (List_1_t7444 *, Predicate_1_t7450 *, const MethodInfo*))List_1_RemoveAll_m46774_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m46775_gshared (List_1_t7444 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m46775(__this, ___index, method) (( void (*) (List_1_t7444 *, int32_t, const MethodInfo*))List_1_RemoveAt_m46775_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m46776_gshared (List_1_t7444 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m46776(__this, ___index, ___count, method) (( void (*) (List_1_t7444 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m46776_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Reverse()
extern "C" void List_1_Reverse_m46777_gshared (List_1_t7444 * __this, const MethodInfo* method);
#define List_1_Reverse_m46777(__this, method) (( void (*) (List_1_t7444 *, const MethodInfo*))List_1_Reverse_m46777_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort()
extern "C" void List_1_Sort_m46778_gshared (List_1_t7444 * __this, const MethodInfo* method);
#define List_1_Sort_m46778(__this, method) (( void (*) (List_1_t7444 *, const MethodInfo*))List_1_Sort_m46778_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m46779_gshared (List_1_t7444 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m46779(__this, ___comparer, method) (( void (*) (List_1_t7444 *, Object_t*, const MethodInfo*))List_1_Sort_m46779_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m46780_gshared (List_1_t7444 * __this, Comparison_1_t7453 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m46780(__this, ___comparison, method) (( void (*) (List_1_t7444 *, Comparison_1_t7453 *, const MethodInfo*))List_1_Sort_m46780_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Parse.ParseGeoPoint>::ToArray()
extern "C" ParseGeoPointU5BU5D_t7443* List_1_ToArray_m46781_gshared (List_1_t7444 * __this, const MethodInfo* method);
#define List_1_ToArray_m46781(__this, method) (( ParseGeoPointU5BU5D_t7443* (*) (List_1_t7444 *, const MethodInfo*))List_1_ToArray_m46781_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::TrimExcess()
extern "C" void List_1_TrimExcess_m46782_gshared (List_1_t7444 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m46782(__this, method) (( void (*) (List_1_t7444 *, const MethodInfo*))List_1_TrimExcess_m46782_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m46783_gshared (List_1_t7444 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m46783(__this, method) (( int32_t (*) (List_1_t7444 *, const MethodInfo*))List_1_get_Capacity_m46783_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m46784_gshared (List_1_t7444 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m46784(__this, ___value, method) (( void (*) (List_1_t7444 *, int32_t, const MethodInfo*))List_1_set_Capacity_m46784_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t List_1_get_Count_m46785_gshared (List_1_t7444 * __this, const MethodInfo* method);
#define List_1_get_Count_m46785(__this, method) (( int32_t (*) (List_1_t7444 *, const MethodInfo*))List_1_get_Count_m46785_gshared)(__this, method)
// T System.Collections.Generic.List`1<Parse.ParseGeoPoint>::get_Item(System.Int32)
extern "C" ParseGeoPoint_t1275  List_1_get_Item_m46786_gshared (List_1_t7444 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m46786(__this, ___index, method) (( ParseGeoPoint_t1275  (*) (List_1_t7444 *, int32_t, const MethodInfo*))List_1_get_Item_m46786_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Parse.ParseGeoPoint>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m46787_gshared (List_1_t7444 * __this, int32_t ___index, ParseGeoPoint_t1275  ___value, const MethodInfo* method);
#define List_1_set_Item_m46787(__this, ___index, ___value, method) (( void (*) (List_1_t7444 *, int32_t, ParseGeoPoint_t1275 , const MethodInfo*))List_1_set_Item_m46787_gshared)(__this, ___index, ___value, method)
