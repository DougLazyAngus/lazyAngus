#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t103;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8710;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.String>
struct KeyCollection_t5416;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_t5417;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5390;
// System.Collections.Generic.IDictionary`2<System.Int32,System.String>
struct IDictionary_2_t8711;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>[]
struct KeyValuePair_2U5BU5D_t8712;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>>
struct IEnumerator_1_t8713;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_45MethodDeclarations.h"
#define Dictionary_2__ctor_m11850(__this, method) (( void (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2__ctor_m10164_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m21081(__this, ___comparer, method) (( void (*) (Dictionary_2_t103 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21082_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m21083(__this, ___dictionary, method) (( void (*) (Dictionary_2_t103 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21084_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Int32)
#define Dictionary_2__ctor_m21085(__this, ___capacity, method) (( void (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21086_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m21087(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t103 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21088_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m21089(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t103 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m21090_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21091(__this, method) (( Object_t* (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21092_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21093(__this, method) (( Object_t* (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21094_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m21095(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21096_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21097(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21098_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21099(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21100_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m21101(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21102_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m21103(__this, ___key, method) (( bool (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21104_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m21105(__this, ___key, method) (( void (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21106_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21107(__this, method) (( bool (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21108_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21109(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21111(__this, method) (( bool (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21112_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21113(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t103 *, KeyValuePair_2_t5415 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21114_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21115(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t103 *, KeyValuePair_2_t5415 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21116_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21117(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, KeyValuePair_2U5BU5D_t8712*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21118_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21119(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t103 *, KeyValuePair_2_t5415 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21120_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21121(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21122_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21123(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21124_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21125(__this, method) (( Object_t* (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21126_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21127(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21128_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Count()
#define Dictionary_2_get_Count_m21129(__this, method) (( int32_t (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_get_Count_m21130_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Item(TKey)
#define Dictionary_2_get_Item_m21131(__this, ___key, method) (( String_t* (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m21132_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m21133(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, int32_t, String_t*, const MethodInfo*))Dictionary_2_set_Item_m21134_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m21135(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t103 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21136_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m21137(__this, ___size, method) (( void (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21138_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m21139(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21140_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m21141(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5415  (*) (Object_t * /* static, unused */, int32_t, String_t*, const MethodInfo*))Dictionary_2_make_pair_m21142_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.String>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m21143(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, String_t*, const MethodInfo*))Dictionary_2_pick_key_m21144_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.String>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m21145(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, int32_t, String_t*, const MethodInfo*))Dictionary_2_pick_value_m21146_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m21147(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, KeyValuePair_2U5BU5D_t8712*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21148_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Resize()
#define Dictionary_2_Resize_m21149(__this, method) (( void (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_Resize_m21150_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(TKey,TValue)
#define Dictionary_2_Add_m21151(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, int32_t, String_t*, const MethodInfo*))Dictionary_2_Add_m21152_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Clear()
#define Dictionary_2_Clear_m21153(__this, method) (( void (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_Clear_m21154_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m21155(__this, ___key, method) (( bool (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m21156_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m21157(__this, ___value, method) (( bool (*) (Dictionary_2_t103 *, String_t*, const MethodInfo*))Dictionary_2_ContainsValue_m21158_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m21159(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t103 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m21160_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m21161(__this, ___sender, method) (( void (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21162_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Remove(TKey)
#define Dictionary_2_Remove_m21163(__this, ___key, method) (( bool (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m21164_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m21165(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t103 *, int32_t, String_t**, const MethodInfo*))Dictionary_2_TryGetValue_m21166_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Keys()
#define Dictionary_2_get_Keys_m21167(__this, method) (( KeyCollection_t5416 * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_get_Keys_m21168_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Values()
#define Dictionary_2_get_Values_m21169(__this, method) (( ValueCollection_t5417 * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_get_Values_m21170_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m21171(__this, ___key, method) (( int32_t (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21172_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m21173(__this, ___value, method) (( String_t* (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21174_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m21175(__this, ___pair, method) (( bool (*) (Dictionary_2_t103 *, KeyValuePair_2_t5415 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21176_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m21177(__this, method) (( Enumerator_t5418  (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21178_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.String>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m21179(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, int32_t, String_t*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21180_gshared)(__this /* static, unused */, ___key, ___value, method)
