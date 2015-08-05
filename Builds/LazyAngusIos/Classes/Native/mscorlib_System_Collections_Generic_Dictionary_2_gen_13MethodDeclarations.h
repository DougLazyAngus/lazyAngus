#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>
struct Dictionary_2_t272;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<FacebookUserInfo>
struct ICollection_1_t8755;
// System.Collections.ICollection
struct ICollection_t706;
// System.Object
struct Object_t;
// FacebookUserInfo
struct FacebookUserInfo_t271;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,FacebookUserInfo>
struct KeyCollection_t5525;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FacebookUserInfo>
struct ValueCollection_t5526;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5335;
// System.Collections.Generic.IDictionary`2<System.String,FacebookUserInfo>
struct IDictionary_2_t8756;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.String,FacebookUserInfo>[]
struct KeyValuePair_2U5BU5D_t8757;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,FacebookUserInfo>>
struct IEnumerator_1_t8758;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,FacebookUserInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,FacebookUserInfo>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_47MethodDeclarations.h"
#define Dictionary_2__ctor_m3665(__this, method) (( void (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2__ctor_m21551_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24156(__this, ___comparer, method) (( void (*) (Dictionary_2_t272 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21553_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m24157(__this, ___dictionary, method) (( void (*) (Dictionary_2_t272 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21555_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor(System.Int32)
#define Dictionary_2__ctor_m24158(__this, ___capacity, method) (( void (*) (Dictionary_2_t272 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21557_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24159(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t272 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21559_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m24160(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t272 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m21561_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24161(__this, method) (( Object_t* (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21563_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24162(__this, method) (( Object_t* (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21565_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m24163(__this, method) (( Object_t * (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21567_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24164(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t272 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21569_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24165(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t272 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21571_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m24166(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t272 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21573_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m24167(__this, ___key, method) (( bool (*) (Dictionary_2_t272 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21575_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m24168(__this, ___key, method) (( void (*) (Dictionary_2_t272 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21577_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24169(__this, method) (( bool (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21579_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24170(__this, method) (( Object_t * (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24171(__this, method) (( bool (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21583_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24172(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t272 *, KeyValuePair_2_t702 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21585_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24173(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t272 *, KeyValuePair_2_t702 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21587_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24174(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t272 *, KeyValuePair_2U5BU5D_t8757*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21589_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24175(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t272 *, KeyValuePair_2_t702 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21591_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24176(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t272 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21593_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24177(__this, method) (( Object_t * (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21595_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24178(__this, method) (( Object_t* (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21597_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24179(__this, method) (( Object_t * (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21599_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::get_Count()
#define Dictionary_2_get_Count_m24180(__this, method) (( int32_t (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_get_Count_m21601_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::get_Item(TKey)
#define Dictionary_2_get_Item_m24181(__this, ___key, method) (( FacebookUserInfo_t271 * (*) (Dictionary_2_t272 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21603_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m24182(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t272 *, String_t*, FacebookUserInfo_t271 *, const MethodInfo*))Dictionary_2_set_Item_m21605_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m24183(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t272 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21607_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m24184(__this, ___size, method) (( void (*) (Dictionary_2_t272 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21609_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m24185(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t272 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21611_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m24186(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t702  (*) (Object_t * /* static, unused */, String_t*, FacebookUserInfo_t271 *, const MethodInfo*))Dictionary_2_make_pair_m21613_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m24187(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, FacebookUserInfo_t271 *, const MethodInfo*))Dictionary_2_pick_key_m21615_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m24188(__this /* static, unused */, ___key, ___value, method) (( FacebookUserInfo_t271 * (*) (Object_t * /* static, unused */, String_t*, FacebookUserInfo_t271 *, const MethodInfo*))Dictionary_2_pick_value_m21617_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m24189(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t272 *, KeyValuePair_2U5BU5D_t8757*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21619_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::Resize()
#define Dictionary_2_Resize_m24190(__this, method) (( void (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_Resize_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::Add(TKey,TValue)
#define Dictionary_2_Add_m24191(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t272 *, String_t*, FacebookUserInfo_t271 *, const MethodInfo*))Dictionary_2_Add_m21623_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::Clear()
#define Dictionary_2_Clear_m24192(__this, method) (( void (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_Clear_m21625_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m24193(__this, ___key, method) (( bool (*) (Dictionary_2_t272 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21627_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m24194(__this, ___value, method) (( bool (*) (Dictionary_2_t272 *, FacebookUserInfo_t271 *, const MethodInfo*))Dictionary_2_ContainsValue_m21629_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m24195(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t272 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m21631_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m24196(__this, ___sender, method) (( void (*) (Dictionary_2_t272 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21633_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::Remove(TKey)
#define Dictionary_2_Remove_m24197(__this, ___key, method) (( bool (*) (Dictionary_2_t272 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21635_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m24198(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t272 *, String_t*, FacebookUserInfo_t271 **, const MethodInfo*))Dictionary_2_TryGetValue_m21637_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::get_Keys()
#define Dictionary_2_get_Keys_m24199(__this, method) (( KeyCollection_t5525 * (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_get_Keys_m21638_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::get_Values()
#define Dictionary_2_get_Values_m24200(__this, method) (( ValueCollection_t5526 * (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_get_Values_m21640_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m24201(__this, ___key, method) (( String_t* (*) (Dictionary_2_t272 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21642_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m24202(__this, ___value, method) (( FacebookUserInfo_t271 * (*) (Dictionary_2_t272 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21644_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m24203(__this, ___pair, method) (( bool (*) (Dictionary_2_t272 *, KeyValuePair_2_t702 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21646_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3652(__this, method) (( Enumerator_t703  (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21647_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m24204(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, String_t*, FacebookUserInfo_t271 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21649_gshared)(__this /* static, unused */, ___key, ___value, method)
