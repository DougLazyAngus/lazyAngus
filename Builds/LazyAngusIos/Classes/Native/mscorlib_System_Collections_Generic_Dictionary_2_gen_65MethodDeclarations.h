#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.DateTime>
struct Dictionary_2_t7684;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9855;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.DateTime>
struct KeyCollection_t7686;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>
struct ValueCollection_t7687;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5778;
// System.Collections.Generic.IDictionary`2<System.String,System.DateTime>
struct IDictionary_2_t7600;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t8564;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct IEnumerator_1_t8547;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_59.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__53.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_66MethodDeclarations.h"
#define Dictionary_2__ctor_m49993(__this, method) (( void (*) (Dictionary_2_t7684 *, const MethodInfo*))Dictionary_2__ctor_m49994_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m49995(__this, ___comparer, method) (( void (*) (Dictionary_2_t7684 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49996_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m49997(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7684 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49998_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Int32)
#define Dictionary_2__ctor_m49999(__this, ___capacity, method) (( void (*) (Dictionary_2_t7684 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m50000_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m50001(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7684 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m50002_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m50003(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7684 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m50004_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m50005(__this, method) (( Object_t* (*) (Dictionary_2_t7684 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m50006_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m50007(__this, method) (( Object_t* (*) (Dictionary_2_t7684 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m50008_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m50009(__this, method) (( Object_t * (*) (Dictionary_2_t7684 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m50010_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m50011(__this, method) (( Object_t * (*) (Dictionary_2_t7684 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m50012_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m50013(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7684 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m50014_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m50015(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7684 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m50016_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m50017(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7684 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m50018_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m50019(__this, ___key, method) (( bool (*) (Dictionary_2_t7684 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m50020_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m50021(__this, ___key, method) (( void (*) (Dictionary_2_t7684 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m50022_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m50023(__this, method) (( bool (*) (Dictionary_2_t7684 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m50024_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50025(__this, method) (( Object_t * (*) (Dictionary_2_t7684 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50026_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m50027(__this, method) (( bool (*) (Dictionary_2_t7684 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m50028_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m50029(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7684 *, KeyValuePair_2_t7685 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m50030_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m50031(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7684 *, KeyValuePair_2_t7685 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m50032_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m50033(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7684 *, KeyValuePair_2U5BU5D_t8564*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m50034_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m50035(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7684 *, KeyValuePair_2_t7685 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m50036_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m50037(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7684 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m50038_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50039(__this, method) (( Object_t * (*) (Dictionary_2_t7684 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50040_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m50041(__this, method) (( Object_t* (*) (Dictionary_2_t7684 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m50042_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m50043(__this, method) (( Object_t * (*) (Dictionary_2_t7684 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m50044_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Count()
#define Dictionary_2_get_Count_m50045(__this, method) (( int32_t (*) (Dictionary_2_t7684 *, const MethodInfo*))Dictionary_2_get_Count_m50046_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Item(TKey)
#define Dictionary_2_get_Item_m50047(__this, ___key, method) (( DateTime_t287  (*) (Dictionary_2_t7684 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m50048_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m50049(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7684 *, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_set_Item_m50050_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m50051(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7684 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m50052_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m50053(__this, ___size, method) (( void (*) (Dictionary_2_t7684 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m50054_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m50055(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7684 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m50056_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m50057(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7685  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_make_pair_m50058_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m50059(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_key_m50060_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m50061(__this /* static, unused */, ___key, ___value, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_value_m50062_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m50063(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7684 *, KeyValuePair_2U5BU5D_t8564*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m50064_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Resize()
#define Dictionary_2_Resize_m50065(__this, method) (( void (*) (Dictionary_2_t7684 *, const MethodInfo*))Dictionary_2_Resize_m50066_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Add(TKey,TValue)
#define Dictionary_2_Add_m50067(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7684 *, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_Add_m50068_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Clear()
#define Dictionary_2_Clear_m50069(__this, method) (( void (*) (Dictionary_2_t7684 *, const MethodInfo*))Dictionary_2_Clear_m50070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m50071(__this, ___key, method) (( bool (*) (Dictionary_2_t7684 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m50072_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m50073(__this, ___value, method) (( bool (*) (Dictionary_2_t7684 *, DateTime_t287 , const MethodInfo*))Dictionary_2_ContainsValue_m50074_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m50075(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7684 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m50076_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m50077(__this, ___sender, method) (( void (*) (Dictionary_2_t7684 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m50078_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Remove(TKey)
#define Dictionary_2_Remove_m50079(__this, ___key, method) (( bool (*) (Dictionary_2_t7684 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m50080_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m50081(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7684 *, String_t*, DateTime_t287 *, const MethodInfo*))Dictionary_2_TryGetValue_m50082_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Keys()
#define Dictionary_2_get_Keys_m50083(__this, method) (( KeyCollection_t7686 * (*) (Dictionary_2_t7684 *, const MethodInfo*))Dictionary_2_get_Keys_m50084_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Values()
#define Dictionary_2_get_Values_m50085(__this, method) (( ValueCollection_t7687 * (*) (Dictionary_2_t7684 *, const MethodInfo*))Dictionary_2_get_Values_m50086_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m50087(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7684 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m50088_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m50089(__this, ___value, method) (( DateTime_t287  (*) (Dictionary_2_t7684 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m50090_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m50091(__this, ___pair, method) (( bool (*) (Dictionary_2_t7684 *, KeyValuePair_2_t7685 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m50092_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m50093(__this, method) (( Enumerator_t7688  (*) (Dictionary_2_t7684 *, const MethodInfo*))Dictionary_2_GetEnumerator_m50094_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m50095(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m50096_gshared)(__this /* static, unused */, ___key, ___value, method)
