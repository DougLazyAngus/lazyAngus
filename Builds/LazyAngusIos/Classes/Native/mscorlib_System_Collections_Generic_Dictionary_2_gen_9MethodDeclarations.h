#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>
struct Dictionary_2_t203;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1188;
// System.Collections.Generic.ICollection`1<FacebookUserInfo>
struct ICollection_1_t4199;
// System.Collections.ICollection
struct ICollection_t547;
// System.Object
struct Object_t;
// FacebookUserInfo
struct FacebookUserInfo_t202;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,FacebookUserInfo>
struct KeyCollection_t3422;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FacebookUserInfo>
struct ValueCollection_t3423;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3254;
// System.Collections.Generic.IDictionary`2<System.String,FacebookUserInfo>
struct IDictionary_2_t4200;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1198;
// System.Collections.Generic.KeyValuePair`2<System.String,FacebookUserInfo>[]
struct KeyValuePair_2U5BU5D_t4201;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,FacebookUserInfo>>
struct IEnumerator_1_t4202;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1396;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,FacebookUserInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,FacebookUserInfo>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31MethodDeclarations.h"
#define Dictionary_2__ctor_m2468(__this, method) (( void (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2__ctor_m16705_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m18872(__this, ___comparer, method) (( void (*) (Dictionary_2_t203 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16707_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m18873(__this, ___dictionary, method) (( void (*) (Dictionary_2_t203 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16709_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor(System.Int32)
#define Dictionary_2__ctor_m18874(__this, ___capacity, method) (( void (*) (Dictionary_2_t203 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16711_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m18875(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t203 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16713_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m18876(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t203 *, SerializationInfo_t1198 *, StreamingContext_t1199 , const MethodInfo*))Dictionary_2__ctor_m16715_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18877(__this, method) (( Object_t* (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16717_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18878(__this, method) (( Object_t* (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16719_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m18879(__this, method) (( Object_t * (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m16721_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18880(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t203 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16723_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18881(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t203 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16725_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m18882(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t203 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16727_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m18883(__this, ___key, method) (( bool (*) (Dictionary_2_t203 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16729_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m18884(__this, ___key, method) (( void (*) (Dictionary_2_t203 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16731_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18885(__this, method) (( bool (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16733_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18886(__this, method) (( Object_t * (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16735_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18887(__this, method) (( bool (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16737_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18888(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t203 *, KeyValuePair_2_t543 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16739_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18889(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t203 *, KeyValuePair_2_t543 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16741_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18890(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t203 *, KeyValuePair_2U5BU5D_t4201*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16743_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18891(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t203 *, KeyValuePair_2_t543 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16745_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18892(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t203 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16747_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18893(__this, method) (( Object_t * (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16749_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18894(__this, method) (( Object_t* (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16751_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18895(__this, method) (( Object_t * (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16753_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::get_Count()
#define Dictionary_2_get_Count_m18896(__this, method) (( int32_t (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_get_Count_m16755_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::get_Item(TKey)
#define Dictionary_2_get_Item_m18897(__this, ___key, method) (( FacebookUserInfo_t202 * (*) (Dictionary_2_t203 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m16757_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m18898(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t203 *, String_t*, FacebookUserInfo_t202 *, const MethodInfo*))Dictionary_2_set_Item_m16759_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m18899(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t203 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16761_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m18900(__this, ___size, method) (( void (*) (Dictionary_2_t203 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16763_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m18901(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t203 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16765_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m18902(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t543  (*) (Object_t * /* static, unused */, String_t*, FacebookUserInfo_t202 *, const MethodInfo*))Dictionary_2_make_pair_m16767_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m18903(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, FacebookUserInfo_t202 *, const MethodInfo*))Dictionary_2_pick_key_m16769_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m18904(__this /* static, unused */, ___key, ___value, method) (( FacebookUserInfo_t202 * (*) (Object_t * /* static, unused */, String_t*, FacebookUserInfo_t202 *, const MethodInfo*))Dictionary_2_pick_value_m16771_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m18905(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t203 *, KeyValuePair_2U5BU5D_t4201*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16773_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::Resize()
#define Dictionary_2_Resize_m18906(__this, method) (( void (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_Resize_m16775_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::Add(TKey,TValue)
#define Dictionary_2_Add_m18907(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t203 *, String_t*, FacebookUserInfo_t202 *, const MethodInfo*))Dictionary_2_Add_m16777_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::Clear()
#define Dictionary_2_Clear_m18908(__this, method) (( void (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_Clear_m16779_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m18909(__this, ___key, method) (( bool (*) (Dictionary_2_t203 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m16781_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m18910(__this, ___value, method) (( bool (*) (Dictionary_2_t203 *, FacebookUserInfo_t202 *, const MethodInfo*))Dictionary_2_ContainsValue_m16783_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m18911(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t203 *, SerializationInfo_t1198 *, StreamingContext_t1199 , const MethodInfo*))Dictionary_2_GetObjectData_m16785_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m18912(__this, ___sender, method) (( void (*) (Dictionary_2_t203 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16787_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::Remove(TKey)
#define Dictionary_2_Remove_m18913(__this, ___key, method) (( bool (*) (Dictionary_2_t203 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m16789_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m18914(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t203 *, String_t*, FacebookUserInfo_t202 **, const MethodInfo*))Dictionary_2_TryGetValue_m16791_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::get_Keys()
#define Dictionary_2_get_Keys_m18915(__this, method) (( KeyCollection_t3422 * (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_get_Keys_m16792_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::get_Values()
#define Dictionary_2_get_Values_m18916(__this, method) (( ValueCollection_t3423 * (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_get_Values_m16794_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m18917(__this, ___key, method) (( String_t* (*) (Dictionary_2_t203 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16796_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m18918(__this, ___value, method) (( FacebookUserInfo_t202 * (*) (Dictionary_2_t203 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16798_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m18919(__this, ___pair, method) (( bool (*) (Dictionary_2_t203 *, KeyValuePair_2_t543 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16800_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m2455(__this, method) (( Enumerator_t544  (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16801_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m18920(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1663  (*) (Object_t * /* static, unused */, String_t*, FacebookUserInfo_t202 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16803_gshared)(__this /* static, unused */, ___key, ___value, method)
