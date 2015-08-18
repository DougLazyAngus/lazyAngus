#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Double>
struct Dictionary_2_t7074;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9205;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Double>
struct KeyCollection_t7076;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>
struct ValueCollection_t7077;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5379;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7005;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7841;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7271;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__51.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_60MethodDeclarations.h"
#define Dictionary_2__ctor_m44850(__this, method) (( void (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2__ctor_m44851_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44852(__this, ___comparer, method) (( void (*) (Dictionary_2_t7074 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44853_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m44854(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7074 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44855_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Int32)
#define Dictionary_2__ctor_m44856(__this, ___capacity, method) (( void (*) (Dictionary_2_t7074 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44857_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44858(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7074 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44859_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m44860(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7074 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m44861_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44862(__this, method) (( Object_t* (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44863_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44864(__this, method) (( Object_t* (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44865_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44866(__this, method) (( Object_t * (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44867_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44868(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7074 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44869_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44870(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7074 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44871_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m44872(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7074 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44873_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m44874(__this, ___key, method) (( bool (*) (Dictionary_2_t7074 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44875_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m44876(__this, ___key, method) (( void (*) (Dictionary_2_t7074 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44877_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44878(__this, method) (( bool (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44879_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44880(__this, method) (( Object_t * (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44881_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44882(__this, method) (( bool (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44883_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44884(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7074 *, KeyValuePair_2_t7075 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44885_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44886(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7074 *, KeyValuePair_2_t7075 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44887_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44888(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7074 *, KeyValuePair_2U5BU5D_t7841*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44889_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44890(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7074 *, KeyValuePair_2_t7075 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44891_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44892(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7074 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44893_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44894(__this, method) (( Object_t * (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44895_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44896(__this, method) (( Object_t* (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44897_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44898(__this, method) (( Object_t * (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44899_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Count()
#define Dictionary_2_get_Count_m44900(__this, method) (( int32_t (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_get_Count_m44901_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Item(TKey)
#define Dictionary_2_get_Item_m44902(__this, ___key, method) (( double (*) (Dictionary_2_t7074 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m44903_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m44904(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7074 *, String_t*, double, const MethodInfo*))Dictionary_2_set_Item_m44905_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m44906(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7074 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44907_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m44908(__this, ___size, method) (( void (*) (Dictionary_2_t7074 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44909_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m44910(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7074 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44911_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m44912(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7075  (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_make_pair_m44913_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Double>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m44914(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_pick_key_m44915_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m44916(__this /* static, unused */, ___key, ___value, method) (( double (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_pick_value_m44917_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m44918(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7074 *, KeyValuePair_2U5BU5D_t7841*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44919_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Resize()
#define Dictionary_2_Resize_m44920(__this, method) (( void (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_Resize_m44921_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Add(TKey,TValue)
#define Dictionary_2_Add_m44922(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7074 *, String_t*, double, const MethodInfo*))Dictionary_2_Add_m44923_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Clear()
#define Dictionary_2_Clear_m44924(__this, method) (( void (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_Clear_m44925_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m44926(__this, ___key, method) (( bool (*) (Dictionary_2_t7074 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m44927_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m44928(__this, ___value, method) (( bool (*) (Dictionary_2_t7074 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m44929_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m44930(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7074 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m44931_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m44932(__this, ___sender, method) (( void (*) (Dictionary_2_t7074 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44933_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::Remove(TKey)
#define Dictionary_2_Remove_m44934(__this, ___key, method) (( bool (*) (Dictionary_2_t7074 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m44935_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m44936(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7074 *, String_t*, double*, const MethodInfo*))Dictionary_2_TryGetValue_m44937_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Keys()
#define Dictionary_2_get_Keys_m44938(__this, method) (( KeyCollection_t7076 * (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_get_Keys_m44939_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Values()
#define Dictionary_2_get_Values_m44940(__this, method) (( ValueCollection_t7077 * (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_get_Values_m44941_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Double>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m44942(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7074 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44943_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m44944(__this, ___value, method) (( double (*) (Dictionary_2_t7074 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44945_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m44946(__this, ___pair, method) (( bool (*) (Dictionary_2_t7074 *, KeyValuePair_2_t7075 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44947_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m44948(__this, method) (( Enumerator_t7078  (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44949_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Double>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m44950(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44951_gshared)(__this /* static, unused */, ___key, ___value, method)
