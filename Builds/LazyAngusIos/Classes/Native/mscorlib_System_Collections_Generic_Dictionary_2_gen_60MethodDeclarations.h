#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.DateTime>
struct Dictionary_2_t7030;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9118;
// System.Collections.ICollection
struct ICollection_t706;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.DateTime>
struct KeyCollection_t7032;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>
struct ValueCollection_t7033;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5335;
// System.Collections.Generic.IDictionary`2<System.String,System.DateTime>
struct IDictionary_2_t6946;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7910;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct IEnumerator_1_t7893;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__52.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_61MethodDeclarations.h"
#define Dictionary_2__ctor_m44532(__this, method) (( void (*) (Dictionary_2_t7030 *, const MethodInfo*))Dictionary_2__ctor_m44533_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44534(__this, ___comparer, method) (( void (*) (Dictionary_2_t7030 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44535_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m44536(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7030 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44537_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Int32)
#define Dictionary_2__ctor_m44538(__this, ___capacity, method) (( void (*) (Dictionary_2_t7030 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44539_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44540(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7030 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44541_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m44542(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7030 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m44543_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44544(__this, method) (( Object_t* (*) (Dictionary_2_t7030 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44545_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44546(__this, method) (( Object_t* (*) (Dictionary_2_t7030 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44547_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44548(__this, method) (( Object_t * (*) (Dictionary_2_t7030 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44549_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44550(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7030 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44551_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44552(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7030 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44553_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m44554(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7030 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44555_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m44556(__this, ___key, method) (( bool (*) (Dictionary_2_t7030 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44557_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m44558(__this, ___key, method) (( void (*) (Dictionary_2_t7030 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44559_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44560(__this, method) (( bool (*) (Dictionary_2_t7030 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44561_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44562(__this, method) (( Object_t * (*) (Dictionary_2_t7030 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44563_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44564(__this, method) (( bool (*) (Dictionary_2_t7030 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44565_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44566(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7030 *, KeyValuePair_2_t7031 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44567_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44568(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7030 *, KeyValuePair_2_t7031 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44569_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44570(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7030 *, KeyValuePair_2U5BU5D_t7910*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44571_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44572(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7030 *, KeyValuePair_2_t7031 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44573_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44574(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7030 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44575_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44576(__this, method) (( Object_t * (*) (Dictionary_2_t7030 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44577_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44578(__this, method) (( Object_t* (*) (Dictionary_2_t7030 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44579_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44580(__this, method) (( Object_t * (*) (Dictionary_2_t7030 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44581_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Count()
#define Dictionary_2_get_Count_m44582(__this, method) (( int32_t (*) (Dictionary_2_t7030 *, const MethodInfo*))Dictionary_2_get_Count_m44583_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Item(TKey)
#define Dictionary_2_get_Item_m44584(__this, ___key, method) (( DateTime_t287  (*) (Dictionary_2_t7030 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m44585_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m44586(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7030 *, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_set_Item_m44587_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m44588(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7030 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44589_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m44590(__this, ___size, method) (( void (*) (Dictionary_2_t7030 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44591_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m44592(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7030 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44593_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m44594(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7031  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_make_pair_m44595_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m44596(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_key_m44597_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m44598(__this /* static, unused */, ___key, ___value, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_value_m44599_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m44600(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7030 *, KeyValuePair_2U5BU5D_t7910*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44601_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Resize()
#define Dictionary_2_Resize_m44602(__this, method) (( void (*) (Dictionary_2_t7030 *, const MethodInfo*))Dictionary_2_Resize_m44603_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Add(TKey,TValue)
#define Dictionary_2_Add_m44604(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7030 *, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_Add_m44605_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Clear()
#define Dictionary_2_Clear_m44606(__this, method) (( void (*) (Dictionary_2_t7030 *, const MethodInfo*))Dictionary_2_Clear_m44607_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m44608(__this, ___key, method) (( bool (*) (Dictionary_2_t7030 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m44609_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m44610(__this, ___value, method) (( bool (*) (Dictionary_2_t7030 *, DateTime_t287 , const MethodInfo*))Dictionary_2_ContainsValue_m44611_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m44612(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7030 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m44613_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m44614(__this, ___sender, method) (( void (*) (Dictionary_2_t7030 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44615_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Remove(TKey)
#define Dictionary_2_Remove_m44616(__this, ___key, method) (( bool (*) (Dictionary_2_t7030 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m44617_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m44618(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7030 *, String_t*, DateTime_t287 *, const MethodInfo*))Dictionary_2_TryGetValue_m44619_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Keys()
#define Dictionary_2_get_Keys_m44620(__this, method) (( KeyCollection_t7032 * (*) (Dictionary_2_t7030 *, const MethodInfo*))Dictionary_2_get_Keys_m44621_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Values()
#define Dictionary_2_get_Values_m44622(__this, method) (( ValueCollection_t7033 * (*) (Dictionary_2_t7030 *, const MethodInfo*))Dictionary_2_get_Values_m44623_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m44624(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7030 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44625_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m44626(__this, ___value, method) (( DateTime_t287  (*) (Dictionary_2_t7030 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44627_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m44628(__this, ___pair, method) (( bool (*) (Dictionary_2_t7030 *, KeyValuePair_2_t7031 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44629_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m44630(__this, method) (( Enumerator_t7034  (*) (Dictionary_2_t7030 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44631_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m44632(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44633_gshared)(__this /* static, unused */, ___key, ___value, method)
