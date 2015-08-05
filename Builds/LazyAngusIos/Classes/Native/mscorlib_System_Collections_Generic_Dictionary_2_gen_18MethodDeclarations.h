#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>
struct Dictionary_2_t316;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<TweetTemplate>
struct ICollection_1_t8801;
// System.Collections.ICollection
struct ICollection_t705;
// System.Object
struct Object_t;
// TweetTemplate
struct TweetTemplate_t323;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,TweetTemplate>
struct KeyCollection_t5572;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>
struct ValueCollection_t5573;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5334;
// System.Collections.Generic.IDictionary`2<System.String,TweetTemplate>
struct IDictionary_2_t8802;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2870;
// System.Collections.Generic.KeyValuePair`2<System.String,TweetTemplate>[]
struct KeyValuePair_2U5BU5D_t8803;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TweetTemplate>>
struct IEnumerator_1_t8804;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3912;
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_47MethodDeclarations.h"
#define Dictionary_2__ctor_m3689(__this, method) (( void (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2__ctor_m21546_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m25094(__this, ___comparer, method) (( void (*) (Dictionary_2_t316 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21548_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m25095(__this, ___dictionary, method) (( void (*) (Dictionary_2_t316 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21550_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::.ctor(System.Int32)
#define Dictionary_2__ctor_m25096(__this, ___capacity, method) (( void (*) (Dictionary_2_t316 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21552_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m25097(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t316 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21554_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m25098(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t316 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2__ctor_m21556_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25099(__this, method) (( Object_t* (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21558_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25100(__this, method) (( Object_t* (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21560_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25101(__this, method) (( Object_t * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21562_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25102(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21564_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25103(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t316 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21566_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m25104(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t316 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21568_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m25105(__this, ___key, method) (( bool (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21570_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m25106(__this, ___key, method) (( void (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21572_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25107(__this, method) (( bool (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21574_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25108(__this, method) (( Object_t * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21576_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25109(__this, method) (( bool (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21578_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25110(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t316 *, KeyValuePair_2_t5571 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21580_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25111(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t316 *, KeyValuePair_2_t5571 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21582_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25112(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t316 *, KeyValuePair_2U5BU5D_t8803*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21584_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25113(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t316 *, KeyValuePair_2_t5571 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21586_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25114(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t316 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21588_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25115(__this, method) (( Object_t * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21590_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25116(__this, method) (( Object_t* (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21592_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25117(__this, method) (( Object_t * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21594_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::get_Count()
#define Dictionary_2_get_Count_m25118(__this, method) (( int32_t (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_get_Count_m21596_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::get_Item(TKey)
#define Dictionary_2_get_Item_m25119(__this, ___key, method) (( TweetTemplate_t323 * (*) (Dictionary_2_t316 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21598_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m25120(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t316 *, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_set_Item_m21600_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m25121(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t316 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21602_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m25122(__this, ___size, method) (( void (*) (Dictionary_2_t316 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21604_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m25123(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t316 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21606_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m25124(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5571  (*) (Object_t * /* static, unused */, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_make_pair_m21608_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m25125(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_pick_key_m21610_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m25126(__this /* static, unused */, ___key, ___value, method) (( TweetTemplate_t323 * (*) (Object_t * /* static, unused */, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_pick_value_m21612_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m25127(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t316 *, KeyValuePair_2U5BU5D_t8803*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21614_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::Resize()
#define Dictionary_2_Resize_m25128(__this, method) (( void (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_Resize_m21616_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::Add(TKey,TValue)
#define Dictionary_2_Add_m25129(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t316 *, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_Add_m21618_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::Clear()
#define Dictionary_2_Clear_m25130(__this, method) (( void (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_Clear_m21620_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m25131(__this, ___key, method) (( bool (*) (Dictionary_2_t316 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21622_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m25132(__this, ___value, method) (( bool (*) (Dictionary_2_t316 *, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_ContainsValue_m21624_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m25133(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t316 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2_GetObjectData_m21626_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m25134(__this, ___sender, method) (( void (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21628_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::Remove(TKey)
#define Dictionary_2_Remove_m25135(__this, ___key, method) (( bool (*) (Dictionary_2_t316 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21630_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m25136(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t316 *, String_t*, TweetTemplate_t323 **, const MethodInfo*))Dictionary_2_TryGetValue_m21632_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::get_Keys()
#define Dictionary_2_get_Keys_m25137(__this, method) (( KeyCollection_t5572 * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_get_Keys_m21633_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::get_Values()
#define Dictionary_2_get_Values_m25138(__this, method) (( ValueCollection_t5573 * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_get_Values_m21635_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m25139(__this, ___key, method) (( String_t* (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21637_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m25140(__this, ___value, method) (( TweetTemplate_t323 * (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21639_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m25141(__this, ___pair, method) (( bool (*) (Dictionary_2_t316 *, KeyValuePair_2_t5571 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21641_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m25142(__this, method) (( Enumerator_t5574  (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21642_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m25143(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2089  (*) (Object_t * /* static, unused */, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21644_gshared)(__this /* static, unused */, ___key, ___value, method)
