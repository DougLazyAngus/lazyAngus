#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t7061;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8939;
// System.Collections.ICollection
struct ICollection_t755;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>
struct KeyCollection_t7063;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_t7064;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5380;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7006;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7913;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7285;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t785;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__49.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_58MethodDeclarations.h"
#define Dictionary_2__ctor_m44703(__this, method) (( void (*) (Dictionary_2_t7061 *, const MethodInfo*))Dictionary_2__ctor_m44704_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44705(__this, ___comparer, method) (( void (*) (Dictionary_2_t7061 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44706_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m44707(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7061 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44708_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Int32)
#define Dictionary_2__ctor_m44709(__this, ___capacity, method) (( void (*) (Dictionary_2_t7061 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44710_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44711(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7061 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44712_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m44713(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7061 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2__ctor_m44714_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44715(__this, method) (( Object_t* (*) (Dictionary_2_t7061 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44716_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44717(__this, method) (( Object_t* (*) (Dictionary_2_t7061 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44718_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44719(__this, method) (( Object_t * (*) (Dictionary_2_t7061 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44720_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44721(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7061 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44722_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44723(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7061 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44724_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m44725(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7061 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44726_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m44727(__this, ___key, method) (( bool (*) (Dictionary_2_t7061 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44728_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m44729(__this, ___key, method) (( void (*) (Dictionary_2_t7061 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44730_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44731(__this, method) (( bool (*) (Dictionary_2_t7061 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44732_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44733(__this, method) (( Object_t * (*) (Dictionary_2_t7061 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44734_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44735(__this, method) (( bool (*) (Dictionary_2_t7061 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44736_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44737(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7061 *, KeyValuePair_2_t7062 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44738_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44739(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7061 *, KeyValuePair_2_t7062 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44740_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44741(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7061 *, KeyValuePair_2U5BU5D_t7913*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44742_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44743(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7061 *, KeyValuePair_2_t7062 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44744_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44745(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7061 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44746_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44747(__this, method) (( Object_t * (*) (Dictionary_2_t7061 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44748_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44749(__this, method) (( Object_t* (*) (Dictionary_2_t7061 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44750_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Single>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44751(__this, method) (( Object_t * (*) (Dictionary_2_t7061 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44752_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Count()
#define Dictionary_2_get_Count_m44753(__this, method) (( int32_t (*) (Dictionary_2_t7061 *, const MethodInfo*))Dictionary_2_get_Count_m44754_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Item(TKey)
#define Dictionary_2_get_Item_m44755(__this, ___key, method) (( float (*) (Dictionary_2_t7061 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m44756_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m44757(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7061 *, String_t*, float, const MethodInfo*))Dictionary_2_set_Item_m44758_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m44759(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7061 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44760_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m44761(__this, ___size, method) (( void (*) (Dictionary_2_t7061 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44762_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m44763(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7061 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44764_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m44765(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7062  (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_make_pair_m44766_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Single>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m44767(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_pick_key_m44768_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Single>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m44769(__this /* static, unused */, ___key, ___value, method) (( float (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_pick_value_m44770_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m44771(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7061 *, KeyValuePair_2U5BU5D_t7913*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44772_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Resize()
#define Dictionary_2_Resize_m44773(__this, method) (( void (*) (Dictionary_2_t7061 *, const MethodInfo*))Dictionary_2_Resize_m44774_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Add(TKey,TValue)
#define Dictionary_2_Add_m44775(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7061 *, String_t*, float, const MethodInfo*))Dictionary_2_Add_m44776_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Clear()
#define Dictionary_2_Clear_m44777(__this, method) (( void (*) (Dictionary_2_t7061 *, const MethodInfo*))Dictionary_2_Clear_m44778_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m44779(__this, ___key, method) (( bool (*) (Dictionary_2_t7061 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m44780_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m44781(__this, ___value, method) (( bool (*) (Dictionary_2_t7061 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m44782_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m44783(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7061 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2_GetObjectData_m44784_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m44785(__this, ___sender, method) (( void (*) (Dictionary_2_t7061 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44786_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::Remove(TKey)
#define Dictionary_2_Remove_m44787(__this, ___key, method) (( bool (*) (Dictionary_2_t7061 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m44788_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m44789(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7061 *, String_t*, float*, const MethodInfo*))Dictionary_2_TryGetValue_m44790_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Keys()
#define Dictionary_2_get_Keys_m44791(__this, method) (( KeyCollection_t7063 * (*) (Dictionary_2_t7061 *, const MethodInfo*))Dictionary_2_get_Keys_m44792_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::get_Values()
#define Dictionary_2_get_Values_m44793(__this, method) (( ValueCollection_t7064 * (*) (Dictionary_2_t7061 *, const MethodInfo*))Dictionary_2_get_Values_m44794_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Single>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m44795(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7061 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44796_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Single>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m44797(__this, ___value, method) (( float (*) (Dictionary_2_t7061 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44798_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m44799(__this, ___pair, method) (( bool (*) (Dictionary_2_t7061 *, KeyValuePair_2_t7062 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44800_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Single>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m44801(__this, method) (( Enumerator_t7065  (*) (Dictionary_2_t7061 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44802_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Single>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m44803(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2140  (*) (Object_t * /* static, unused */, String_t*, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44804_gshared)(__this /* static, unused */, ___key, ___value, method)
