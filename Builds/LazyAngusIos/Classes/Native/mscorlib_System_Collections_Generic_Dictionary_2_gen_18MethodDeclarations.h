#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>
struct Dictionary_2_t316;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<TweetTemplate>
struct ICollection_1_t9501;
// System.Collections.ICollection
struct ICollection_t772;
// System.Object
struct Object_t;
// TweetTemplate
struct TweetTemplate_t323;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,TweetTemplate>
struct KeyCollection_t6171;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>
struct ValueCollection_t6172;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5771;
// System.Collections.Generic.IDictionary`2<System.String,TweetTemplate>
struct IDictionary_2_t9502;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Collections.Generic.KeyValuePair`2<System.String,TweetTemplate>[]
struct KeyValuePair_2U5BU5D_t9503;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TweetTemplate>>
struct IEnumerator_1_t9504;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t802;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,TweetTemplate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,TweetTemplate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_52MethodDeclarations.h"
#define Dictionary_2__ctor_m4081(__this, method) (( void (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2__ctor_m26148_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m29717(__this, ___comparer, method) (( void (*) (Dictionary_2_t316 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26150_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m29718(__this, ___dictionary, method) (( void (*) (Dictionary_2_t316 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26152_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::.ctor(System.Int32)
#define Dictionary_2__ctor_m29719(__this, ___capacity, method) (( void (*) (Dictionary_2_t316 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26154_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m29720(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t316 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26156_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m29721(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t316 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2__ctor_m26158_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m29722(__this, method) (( Object_t* (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26160_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m29723(__this, method) (( Object_t* (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26162_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m29724(__this, method) (( Object_t * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26164_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m29725(__this, method) (( Object_t * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m26166_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m29726(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26168_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m29727(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t316 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26170_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m29728(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t316 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26172_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m29729(__this, ___key, method) (( bool (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26174_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m29730(__this, ___key, method) (( void (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26176_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m29731(__this, method) (( bool (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26178_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m29732(__this, method) (( Object_t * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26180_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m29733(__this, method) (( bool (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26182_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m29734(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t316 *, KeyValuePair_2_t6170 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26184_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m29735(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t316 *, KeyValuePair_2_t6170 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26186_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m29736(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t316 *, KeyValuePair_2U5BU5D_t9503*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26188_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m29737(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t316 *, KeyValuePair_2_t6170 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26190_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m29738(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t316 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26192_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m29739(__this, method) (( Object_t * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26194_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m29740(__this, method) (( Object_t* (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26196_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m29741(__this, method) (( Object_t * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26198_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::get_Count()
#define Dictionary_2_get_Count_m29742(__this, method) (( int32_t (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_get_Count_m26200_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::get_Item(TKey)
#define Dictionary_2_get_Item_m29743(__this, ___key, method) (( TweetTemplate_t323 * (*) (Dictionary_2_t316 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m26202_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m29744(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t316 *, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_set_Item_m26204_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m29745(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t316 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26206_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m29746(__this, ___size, method) (( void (*) (Dictionary_2_t316 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26208_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m29747(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t316 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26210_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m29748(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6170  (*) (Object_t * /* static, unused */, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_make_pair_m26212_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m29749(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_pick_key_m26214_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m29750(__this /* static, unused */, ___key, ___value, method) (( TweetTemplate_t323 * (*) (Object_t * /* static, unused */, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_pick_value_m26216_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m29751(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t316 *, KeyValuePair_2U5BU5D_t9503*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26218_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::Resize()
#define Dictionary_2_Resize_m29752(__this, method) (( void (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_Resize_m26220_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::Add(TKey,TValue)
#define Dictionary_2_Add_m29753(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t316 *, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_Add_m26222_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::Clear()
#define Dictionary_2_Clear_m29754(__this, method) (( void (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_Clear_m26224_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m29755(__this, ___key, method) (( bool (*) (Dictionary_2_t316 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m26226_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m29756(__this, ___value, method) (( bool (*) (Dictionary_2_t316 *, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_ContainsValue_m26228_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m29757(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t316 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2_GetObjectData_m26230_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m29758(__this, ___sender, method) (( void (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26232_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::Remove(TKey)
#define Dictionary_2_Remove_m29759(__this, ___key, method) (( bool (*) (Dictionary_2_t316 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m26234_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m29760(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t316 *, String_t*, TweetTemplate_t323 **, const MethodInfo*))Dictionary_2_TryGetValue_m26236_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::get_Keys()
#define Dictionary_2_get_Keys_m29761(__this, method) (( KeyCollection_t6171 * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_get_Keys_m26237_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::get_Values()
#define Dictionary_2_get_Values_m29762(__this, method) (( ValueCollection_t6172 * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_get_Values_m26239_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m29763(__this, ___key, method) (( String_t* (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26241_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m29764(__this, ___value, method) (( TweetTemplate_t323 * (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26243_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m29765(__this, ___pair, method) (( bool (*) (Dictionary_2_t316 *, KeyValuePair_2_t6170 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26245_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m29766(__this, method) (( Enumerator_t6173  (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26246_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m29767(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2160  (*) (Object_t * /* static, unused */, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m26248_gshared)(__this /* static, unused */, ___key, ___value, method)
