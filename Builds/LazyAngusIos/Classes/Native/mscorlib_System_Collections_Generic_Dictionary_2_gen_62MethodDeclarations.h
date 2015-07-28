#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>
struct Dictionary_2_t7046;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9109;
// System.Collections.ICollection
struct ICollection_t697;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseGeoPoint>
struct KeyCollection_t7048;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.ParseGeoPoint>
struct ValueCollection_t7049;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5324;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseGeoPoint>
struct IDictionary_2_t6944;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t7931;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>
struct IEnumerator_1_t7914;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3902;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_60.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__55.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_63MethodDeclarations.h"
#define Dictionary_2__ctor_m44820(__this, method) (( void (*) (Dictionary_2_t7046 *, const MethodInfo*))Dictionary_2__ctor_m44821_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44822(__this, ___comparer, method) (( void (*) (Dictionary_2_t7046 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44823_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m44824(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7046 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44825_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor(System.Int32)
#define Dictionary_2__ctor_m44826(__this, ___capacity, method) (( void (*) (Dictionary_2_t7046 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44827_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44828(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7046 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44829_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m44830(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7046 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2__ctor_m44831_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44832(__this, method) (( Object_t* (*) (Dictionary_2_t7046 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44833_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44834(__this, method) (( Object_t* (*) (Dictionary_2_t7046 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44835_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44836(__this, method) (( Object_t * (*) (Dictionary_2_t7046 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44837_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44838(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7046 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44839_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44840(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7046 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44841_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m44842(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7046 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44843_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m44844(__this, ___key, method) (( bool (*) (Dictionary_2_t7046 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44845_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m44846(__this, ___key, method) (( void (*) (Dictionary_2_t7046 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44847_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44848(__this, method) (( bool (*) (Dictionary_2_t7046 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44849_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44850(__this, method) (( Object_t * (*) (Dictionary_2_t7046 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44851_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44852(__this, method) (( bool (*) (Dictionary_2_t7046 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44853_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44854(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7046 *, KeyValuePair_2_t7047 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44855_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44856(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7046 *, KeyValuePair_2_t7047 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44857_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44858(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7046 *, KeyValuePair_2U5BU5D_t7931*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44859_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44860(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7046 *, KeyValuePair_2_t7047 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44861_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44862(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7046 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44863_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44864(__this, method) (( Object_t * (*) (Dictionary_2_t7046 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44865_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44866(__this, method) (( Object_t* (*) (Dictionary_2_t7046 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44867_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44868(__this, method) (( Object_t * (*) (Dictionary_2_t7046 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44869_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::get_Count()
#define Dictionary_2_get_Count_m44870(__this, method) (( int32_t (*) (Dictionary_2_t7046 *, const MethodInfo*))Dictionary_2_get_Count_m44871_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::get_Item(TKey)
#define Dictionary_2_get_Item_m44872(__this, ___key, method) (( ParseGeoPoint_t1186  (*) (Dictionary_2_t7046 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m44873_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m44874(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7046 *, String_t*, ParseGeoPoint_t1186 , const MethodInfo*))Dictionary_2_set_Item_m44875_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m44876(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7046 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44877_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m44878(__this, ___size, method) (( void (*) (Dictionary_2_t7046 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44879_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m44880(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7046 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44881_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m44882(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7047  (*) (Object_t * /* static, unused */, String_t*, ParseGeoPoint_t1186 , const MethodInfo*))Dictionary_2_make_pair_m44883_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m44884(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, ParseGeoPoint_t1186 , const MethodInfo*))Dictionary_2_pick_key_m44885_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m44886(__this /* static, unused */, ___key, ___value, method) (( ParseGeoPoint_t1186  (*) (Object_t * /* static, unused */, String_t*, ParseGeoPoint_t1186 , const MethodInfo*))Dictionary_2_pick_value_m44887_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m44888(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7046 *, KeyValuePair_2U5BU5D_t7931*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44889_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::Resize()
#define Dictionary_2_Resize_m44890(__this, method) (( void (*) (Dictionary_2_t7046 *, const MethodInfo*))Dictionary_2_Resize_m44891_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::Add(TKey,TValue)
#define Dictionary_2_Add_m44892(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7046 *, String_t*, ParseGeoPoint_t1186 , const MethodInfo*))Dictionary_2_Add_m44893_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::Clear()
#define Dictionary_2_Clear_m44894(__this, method) (( void (*) (Dictionary_2_t7046 *, const MethodInfo*))Dictionary_2_Clear_m44895_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m44896(__this, ___key, method) (( bool (*) (Dictionary_2_t7046 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m44897_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m44898(__this, ___value, method) (( bool (*) (Dictionary_2_t7046 *, ParseGeoPoint_t1186 , const MethodInfo*))Dictionary_2_ContainsValue_m44899_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m44900(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7046 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2_GetObjectData_m44901_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m44902(__this, ___sender, method) (( void (*) (Dictionary_2_t7046 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44903_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::Remove(TKey)
#define Dictionary_2_Remove_m44904(__this, ___key, method) (( bool (*) (Dictionary_2_t7046 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m44905_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m44906(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7046 *, String_t*, ParseGeoPoint_t1186 *, const MethodInfo*))Dictionary_2_TryGetValue_m44907_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::get_Keys()
#define Dictionary_2_get_Keys_m44908(__this, method) (( KeyCollection_t7048 * (*) (Dictionary_2_t7046 *, const MethodInfo*))Dictionary_2_get_Keys_m44909_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::get_Values()
#define Dictionary_2_get_Values_m44910(__this, method) (( ValueCollection_t7049 * (*) (Dictionary_2_t7046 *, const MethodInfo*))Dictionary_2_get_Values_m44911_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m44912(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7046 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44913_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m44914(__this, ___value, method) (( ParseGeoPoint_t1186  (*) (Dictionary_2_t7046 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44915_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m44916(__this, ___pair, method) (( bool (*) (Dictionary_2_t7046 *, KeyValuePair_2_t7047 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44917_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m44918(__this, method) (( Enumerator_t7050  (*) (Dictionary_2_t7046 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44919_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m44920(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2080  (*) (Object_t * /* static, unused */, String_t*, ParseGeoPoint_t1186 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44921_gshared)(__this /* static, unused */, ___key, ___value, method)
