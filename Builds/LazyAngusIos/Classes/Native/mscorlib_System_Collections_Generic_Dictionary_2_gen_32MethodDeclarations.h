#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct Dictionary_2_t1485;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<Parse.Internal.IParseFieldOperation>
struct ICollection_1_t9146;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1376;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.Internal.IParseFieldOperation>
struct KeyCollection_t6227;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.Internal.IParseFieldOperation>
struct ValueCollection_t6228;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5379;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t1252;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>[]
struct KeyValuePair_2U5BU5D_t9147;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>>
struct IEnumerator_1_t1503;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Parse.Internal.IParseFieldOperation>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__44.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_48MethodDeclarations.h"
#define Dictionary_2__ctor_m7582(__this, method) (( void (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2__ctor_m21798_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33753(__this, ___comparer, method) (( void (*) (Dictionary_2_t1485 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21800_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m33754(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1485 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21802_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Int32)
#define Dictionary_2__ctor_m33755(__this, ___capacity, method) (( void (*) (Dictionary_2_t1485 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21804_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33756(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1485 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21806_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m33757(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1485 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m21808_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33758(__this, method) (( Object_t* (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21810_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33759(__this, method) (( Object_t* (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21812_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33760(__this, method) (( Object_t * (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21814_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33761(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1485 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21816_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33762(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1485 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21818_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m33763(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1485 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21820_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m33764(__this, ___key, method) (( bool (*) (Dictionary_2_t1485 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21822_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m33765(__this, ___key, method) (( void (*) (Dictionary_2_t1485 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21824_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33766(__this, method) (( bool (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21826_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33767(__this, method) (( Object_t * (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21828_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33768(__this, method) (( bool (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21830_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33769(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1485 *, KeyValuePair_2_t1402 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21832_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33770(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1485 *, KeyValuePair_2_t1402 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21834_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33771(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1485 *, KeyValuePair_2U5BU5D_t9147*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21836_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33772(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1485 *, KeyValuePair_2_t1402 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21838_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33773(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1485 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21840_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33774(__this, method) (( Object_t * (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21842_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33775(__this, method) (( Object_t* (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21844_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33776(__this, method) (( Object_t * (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21846_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::get_Count()
#define Dictionary_2_get_Count_m33777(__this, method) (( int32_t (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_get_Count_m21848_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::get_Item(TKey)
#define Dictionary_2_get_Item_m33778(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1485 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21850_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m33779(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1485 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m21852_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m33780(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1485 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21854_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m33781(__this, ___size, method) (( void (*) (Dictionary_2_t1485 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21856_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m33782(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1485 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21858_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m33783(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1402  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m21860_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m33784(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m21862_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m33785(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m21864_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m33786(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1485 *, KeyValuePair_2U5BU5D_t9147*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21866_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Resize()
#define Dictionary_2_Resize_m33787(__this, method) (( void (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_Resize_m21868_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Add(TKey,TValue)
#define Dictionary_2_Add_m33788(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1485 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_Add_m21870_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Clear()
#define Dictionary_2_Clear_m33789(__this, method) (( void (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_Clear_m21872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m33790(__this, ___key, method) (( bool (*) (Dictionary_2_t1485 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21874_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m33791(__this, ___value, method) (( bool (*) (Dictionary_2_t1485 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m21876_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m33792(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1485 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m21878_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m33793(__this, ___sender, method) (( void (*) (Dictionary_2_t1485 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21880_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::Remove(TKey)
#define Dictionary_2_Remove_m33794(__this, ___key, method) (( bool (*) (Dictionary_2_t1485 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21882_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m33795(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1485 *, String_t*, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m21884_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::get_Keys()
#define Dictionary_2_get_Keys_m33796(__this, method) (( KeyCollection_t6227 * (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_get_Keys_m21885_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::get_Values()
#define Dictionary_2_get_Values_m33797(__this, method) (( ValueCollection_t6228 * (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_get_Values_m21887_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m33798(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1485 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21889_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m33799(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1485 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21891_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m33800(__this, ___pair, method) (( bool (*) (Dictionary_2_t1485 *, KeyValuePair_2_t1402 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21893_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m33801(__this, method) (( Enumerator_t6229  (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21894_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseFieldOperation>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m33802(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21896_gshared)(__this /* static, unused */, ___key, ___value, method)
