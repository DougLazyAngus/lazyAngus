#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct Dictionary_2_t1435;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<Parse.Internal.IParseFieldOperation>
struct ICollection_1_t9056;
// System.Collections.ICollection
struct ICollection_t705;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1326;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>
struct KeyCollection_t6156;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>
struct ValueCollection_t6157;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5334;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t1200;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2870;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>[]
struct KeyValuePair_2U5BU5D_t9057;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>>
struct IEnumerator_1_t1453;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3912;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Parse.Internal.IParseFieldOperation>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__43.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_47MethodDeclarations.h"
#define Dictionary_2__ctor_m7329(__this, method) (( void (*) (Dictionary_2_t1435 *, const MethodInfo*))Dictionary_2__ctor_m21546_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33076(__this, ___comparer, method) (( void (*) (Dictionary_2_t1435 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21548_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m33077(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1435 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21550_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Int32)
#define Dictionary_2__ctor_m33078(__this, ___capacity, method) (( void (*) (Dictionary_2_t1435 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21552_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33079(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1435 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21554_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m33080(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1435 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2__ctor_m21556_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33081(__this, method) (( Object_t* (*) (Dictionary_2_t1435 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21558_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33082(__this, method) (( Object_t* (*) (Dictionary_2_t1435 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21560_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33083(__this, method) (( Object_t * (*) (Dictionary_2_t1435 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21562_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33084(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1435 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21564_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33085(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1435 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21566_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m33086(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1435 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21568_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m33087(__this, ___key, method) (( bool (*) (Dictionary_2_t1435 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21570_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m33088(__this, ___key, method) (( void (*) (Dictionary_2_t1435 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21572_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33089(__this, method) (( bool (*) (Dictionary_2_t1435 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21574_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33090(__this, method) (( Object_t * (*) (Dictionary_2_t1435 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21576_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33091(__this, method) (( bool (*) (Dictionary_2_t1435 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21578_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33092(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1435 *, KeyValuePair_2_t1352 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21580_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33093(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1435 *, KeyValuePair_2_t1352 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21582_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33094(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1435 *, KeyValuePair_2U5BU5D_t9057*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21584_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33095(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1435 *, KeyValuePair_2_t1352 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21586_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33096(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1435 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21588_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33097(__this, method) (( Object_t * (*) (Dictionary_2_t1435 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21590_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33098(__this, method) (( Object_t* (*) (Dictionary_2_t1435 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21592_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33099(__this, method) (( Object_t * (*) (Dictionary_2_t1435 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21594_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::get_Count()
#define Dictionary_2_get_Count_m33100(__this, method) (( int32_t (*) (Dictionary_2_t1435 *, const MethodInfo*))Dictionary_2_get_Count_m21596_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::get_Item(TKey)
#define Dictionary_2_get_Item_m33101(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1435 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21598_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m33102(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1435 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m21600_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m33103(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1435 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21602_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m33104(__this, ___size, method) (( void (*) (Dictionary_2_t1435 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21604_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m33105(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1435 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21606_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m33106(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1352  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m21608_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m33107(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m21610_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m33108(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m21612_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m33109(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1435 *, KeyValuePair_2U5BU5D_t9057*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21614_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Resize()
#define Dictionary_2_Resize_m33110(__this, method) (( void (*) (Dictionary_2_t1435 *, const MethodInfo*))Dictionary_2_Resize_m21616_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Add(TKey,TValue)
#define Dictionary_2_Add_m33111(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1435 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_Add_m21618_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Clear()
#define Dictionary_2_Clear_m33112(__this, method) (( void (*) (Dictionary_2_t1435 *, const MethodInfo*))Dictionary_2_Clear_m21620_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m33113(__this, ___key, method) (( bool (*) (Dictionary_2_t1435 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21622_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m33114(__this, ___value, method) (( bool (*) (Dictionary_2_t1435 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m21624_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m33115(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1435 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2_GetObjectData_m21626_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m33116(__this, ___sender, method) (( void (*) (Dictionary_2_t1435 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21628_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Remove(TKey)
#define Dictionary_2_Remove_m33117(__this, ___key, method) (( bool (*) (Dictionary_2_t1435 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21630_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m33118(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1435 *, String_t*, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m21632_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::get_Keys()
#define Dictionary_2_get_Keys_m33119(__this, method) (( KeyCollection_t6156 * (*) (Dictionary_2_t1435 *, const MethodInfo*))Dictionary_2_get_Keys_m21633_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::get_Values()
#define Dictionary_2_get_Values_m33120(__this, method) (( ValueCollection_t6157 * (*) (Dictionary_2_t1435 *, const MethodInfo*))Dictionary_2_get_Values_m21635_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m33121(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1435 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21637_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m33122(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1435 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21639_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m33123(__this, ___pair, method) (( bool (*) (Dictionary_2_t1435 *, KeyValuePair_2_t1352 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21641_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m33124(__this, method) (( Enumerator_t6158  (*) (Dictionary_2_t1435 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21642_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m33125(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2089  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21644_gshared)(__this /* static, unused */, ___key, ___value, method)
