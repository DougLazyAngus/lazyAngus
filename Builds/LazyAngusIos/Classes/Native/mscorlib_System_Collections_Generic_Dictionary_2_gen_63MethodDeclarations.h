#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7051;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9108;
// System.Collections.ICollection
struct ICollection_t696;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Parse.ParseGeoPoint>
struct KeyCollection_t7052;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>
struct ValueCollection_t7056;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1125;
// System.Collections.Generic.IDictionary`2<System.Object,Parse.ParseGeoPoint>
struct IDictionary_2_t9225;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2860;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t7918;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerator_1_t7911;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3901;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__56.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor()
extern "C" void Dictionary_2__ctor_m44821_gshared (Dictionary_2_t7051 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m44821(__this, method) (( void (*) (Dictionary_2_t7051 *, const MethodInfo*))Dictionary_2__ctor_m44821_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44823_gshared (Dictionary_2_t7051 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44823(__this, ___comparer, method) (( void (*) (Dictionary_2_t7051 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44823_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m44825_gshared (Dictionary_2_t7051 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m44825(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7051 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44825_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m44827_gshared (Dictionary_2_t7051 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m44827(__this, ___capacity, method) (( void (*) (Dictionary_2_t7051 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44827_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44829_gshared (Dictionary_2_t7051 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44829(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7051 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44829_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m44831_gshared (Dictionary_2_t7051 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m44831(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7051 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2__ctor_m44831_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44833_gshared (Dictionary_2_t7051 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44833(__this, method) (( Object_t* (*) (Dictionary_2_t7051 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44833_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44835_gshared (Dictionary_2_t7051 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44835(__this, method) (( Object_t* (*) (Dictionary_2_t7051 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44835_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m44837_gshared (Dictionary_2_t7051 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44837(__this, method) (( Object_t * (*) (Dictionary_2_t7051 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44837_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m44839_gshared (Dictionary_2_t7051 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44839(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7051 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44839_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m44841_gshared (Dictionary_2_t7051 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44841(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7051 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44841_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m44843_gshared (Dictionary_2_t7051 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m44843(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7051 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44843_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m44845_gshared (Dictionary_2_t7051 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m44845(__this, ___key, method) (( bool (*) (Dictionary_2_t7051 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44845_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m44847_gshared (Dictionary_2_t7051 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m44847(__this, ___key, method) (( void (*) (Dictionary_2_t7051 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44847_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44849_gshared (Dictionary_2_t7051 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44849(__this, method) (( bool (*) (Dictionary_2_t7051 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44849_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44851_gshared (Dictionary_2_t7051 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44851(__this, method) (( Object_t * (*) (Dictionary_2_t7051 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44851_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44853_gshared (Dictionary_2_t7051 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44853(__this, method) (( bool (*) (Dictionary_2_t7051 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44853_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44855_gshared (Dictionary_2_t7051 * __this, KeyValuePair_2_t6944  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44855(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7051 *, KeyValuePair_2_t6944 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44855_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44857_gshared (Dictionary_2_t7051 * __this, KeyValuePair_2_t6944  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44857(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7051 *, KeyValuePair_2_t6944 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44857_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44859_gshared (Dictionary_2_t7051 * __this, KeyValuePair_2U5BU5D_t7918* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44859(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7051 *, KeyValuePair_2U5BU5D_t7918*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44859_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44861_gshared (Dictionary_2_t7051 * __this, KeyValuePair_2_t6944  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44861(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7051 *, KeyValuePair_2_t6944 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44861_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m44863_gshared (Dictionary_2_t7051 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44863(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7051 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44863_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44865_gshared (Dictionary_2_t7051 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44865(__this, method) (( Object_t * (*) (Dictionary_2_t7051 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44865_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44867_gshared (Dictionary_2_t7051 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44867(__this, method) (( Object_t* (*) (Dictionary_2_t7051 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44867_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44869_gshared (Dictionary_2_t7051 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44869(__this, method) (( Object_t * (*) (Dictionary_2_t7051 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44869_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m44871_gshared (Dictionary_2_t7051 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m44871(__this, method) (( int32_t (*) (Dictionary_2_t7051 *, const MethodInfo*))Dictionary_2_get_Count_m44871_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Item(TKey)
extern "C" ParseGeoPoint_t1185  Dictionary_2_get_Item_m44873_gshared (Dictionary_2_t7051 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m44873(__this, ___key, method) (( ParseGeoPoint_t1185  (*) (Dictionary_2_t7051 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m44873_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m44875_gshared (Dictionary_2_t7051 * __this, Object_t * ___key, ParseGeoPoint_t1185  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m44875(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7051 *, Object_t *, ParseGeoPoint_t1185 , const MethodInfo*))Dictionary_2_set_Item_m44875_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m44877_gshared (Dictionary_2_t7051 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m44877(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7051 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44877_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m44879_gshared (Dictionary_2_t7051 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m44879(__this, ___size, method) (( void (*) (Dictionary_2_t7051 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44879_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m44881_gshared (Dictionary_2_t7051 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m44881(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7051 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44881_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6944  Dictionary_2_make_pair_m44883_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1185  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m44883(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6944  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1185 , const MethodInfo*))Dictionary_2_make_pair_m44883_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m44885_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1185  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m44885(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1185 , const MethodInfo*))Dictionary_2_pick_key_m44885_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_value(TKey,TValue)
extern "C" ParseGeoPoint_t1185  Dictionary_2_pick_value_m44887_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1185  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m44887(__this /* static, unused */, ___key, ___value, method) (( ParseGeoPoint_t1185  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1185 , const MethodInfo*))Dictionary_2_pick_value_m44887_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m44889_gshared (Dictionary_2_t7051 * __this, KeyValuePair_2U5BU5D_t7918* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m44889(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7051 *, KeyValuePair_2U5BU5D_t7918*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44889_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Resize()
extern "C" void Dictionary_2_Resize_m44891_gshared (Dictionary_2_t7051 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m44891(__this, method) (( void (*) (Dictionary_2_t7051 *, const MethodInfo*))Dictionary_2_Resize_m44891_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m44893_gshared (Dictionary_2_t7051 * __this, Object_t * ___key, ParseGeoPoint_t1185  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m44893(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7051 *, Object_t *, ParseGeoPoint_t1185 , const MethodInfo*))Dictionary_2_Add_m44893_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Clear()
extern "C" void Dictionary_2_Clear_m44895_gshared (Dictionary_2_t7051 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m44895(__this, method) (( void (*) (Dictionary_2_t7051 *, const MethodInfo*))Dictionary_2_Clear_m44895_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m44897_gshared (Dictionary_2_t7051 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m44897(__this, ___key, method) (( bool (*) (Dictionary_2_t7051 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m44897_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m44899_gshared (Dictionary_2_t7051 * __this, ParseGeoPoint_t1185  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m44899(__this, ___value, method) (( bool (*) (Dictionary_2_t7051 *, ParseGeoPoint_t1185 , const MethodInfo*))Dictionary_2_ContainsValue_m44899_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m44901_gshared (Dictionary_2_t7051 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m44901(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7051 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2_GetObjectData_m44901_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m44903_gshared (Dictionary_2_t7051 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m44903(__this, ___sender, method) (( void (*) (Dictionary_2_t7051 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44903_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m44905_gshared (Dictionary_2_t7051 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m44905(__this, ___key, method) (( bool (*) (Dictionary_2_t7051 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m44905_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m44907_gshared (Dictionary_2_t7051 * __this, Object_t * ___key, ParseGeoPoint_t1185 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m44907(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7051 *, Object_t *, ParseGeoPoint_t1185 *, const MethodInfo*))Dictionary_2_TryGetValue_m44907_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Keys()
extern "C" KeyCollection_t7052 * Dictionary_2_get_Keys_m44909_gshared (Dictionary_2_t7051 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m44909(__this, method) (( KeyCollection_t7052 * (*) (Dictionary_2_t7051 *, const MethodInfo*))Dictionary_2_get_Keys_m44909_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Values()
extern "C" ValueCollection_t7056 * Dictionary_2_get_Values_m44911_gshared (Dictionary_2_t7051 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m44911(__this, method) (( ValueCollection_t7056 * (*) (Dictionary_2_t7051 *, const MethodInfo*))Dictionary_2_get_Values_m44911_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m44913_gshared (Dictionary_2_t7051 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m44913(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7051 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44913_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTValue(System.Object)
extern "C" ParseGeoPoint_t1185  Dictionary_2_ToTValue_m44915_gshared (Dictionary_2_t7051 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m44915(__this, ___value, method) (( ParseGeoPoint_t1185  (*) (Dictionary_2_t7051 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44915_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m44917_gshared (Dictionary_2_t7051 * __this, KeyValuePair_2_t6944  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m44917(__this, ___pair, method) (( bool (*) (Dictionary_2_t7051 *, KeyValuePair_2_t6944 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44917_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t7054  Dictionary_2_GetEnumerator_m44919_gshared (Dictionary_2_t7051 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m44919(__this, method) (( Enumerator_t7054  (*) (Dictionary_2_t7051 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44919_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2079  Dictionary_2_U3CCopyToU3Em__0_m44921_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1185  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m44921(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2079  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1185 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44921_gshared)(__this /* static, unused */, ___key, ___value, method)
