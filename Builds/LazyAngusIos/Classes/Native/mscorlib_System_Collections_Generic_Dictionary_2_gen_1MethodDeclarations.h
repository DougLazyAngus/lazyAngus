#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t80;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1210;
// System.Collections.ICollection
struct ICollection_t571;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t548;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t3334;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3276;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1236;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t4138;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerator_1_t4139;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1418;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31MethodDeclarations.h"
#define Dictionary_2__ctor_m2463(__this, method) (( void (*) (Dictionary_2_t80 *, const MethodInfo*))Dictionary_2__ctor_m16853_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17179(__this, ___comparer, method) (( void (*) (Dictionary_2_t80 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16855_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m17180(__this, ___dictionary, method) (( void (*) (Dictionary_2_t80 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16857_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Int32)
#define Dictionary_2__ctor_m2755(__this, ___capacity, method) (( void (*) (Dictionary_2_t80 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16859_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17181(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t80 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16861_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m17182(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t80 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2__ctor_m16863_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17183(__this, method) (( Object_t* (*) (Dictionary_2_t80 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16865_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17184(__this, method) (( Object_t* (*) (Dictionary_2_t80 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16867_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m17185(__this, method) (( Object_t * (*) (Dictionary_2_t80 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m16869_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17186(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t80 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16871_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17187(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t80 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16873_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m17188(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t80 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16875_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m17189(__this, ___key, method) (( bool (*) (Dictionary_2_t80 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16877_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m17190(__this, ___key, method) (( void (*) (Dictionary_2_t80 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16879_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17191(__this, method) (( bool (*) (Dictionary_2_t80 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16881_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17192(__this, method) (( Object_t * (*) (Dictionary_2_t80 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16883_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17193(__this, method) (( bool (*) (Dictionary_2_t80 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16885_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17194(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t80 *, KeyValuePair_2_t234 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16887_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17195(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t80 *, KeyValuePair_2_t234 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16889_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17196(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t80 *, KeyValuePair_2U5BU5D_t4138*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16891_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17197(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t80 *, KeyValuePair_2_t234 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16893_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17198(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t80 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16895_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17199(__this, method) (( Object_t * (*) (Dictionary_2_t80 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16897_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17200(__this, method) (( Object_t* (*) (Dictionary_2_t80 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16899_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17201(__this, method) (( Object_t * (*) (Dictionary_2_t80 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16901_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count()
#define Dictionary_2_get_Count_m17202(__this, method) (( int32_t (*) (Dictionary_2_t80 *, const MethodInfo*))Dictionary_2_get_Count_m16903_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
#define Dictionary_2_get_Item_m17203(__this, ___key, method) (( String_t* (*) (Dictionary_2_t80 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m16905_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m17204(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t80 *, String_t*, String_t*, const MethodInfo*))Dictionary_2_set_Item_m16907_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m17205(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t80 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16909_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m17206(__this, ___size, method) (( void (*) (Dictionary_2_t80 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16911_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m17207(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t80 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16913_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m17208(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t234  (*) (Object_t * /* static, unused */, String_t*, String_t*, const MethodInfo*))Dictionary_2_make_pair_m16915_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m17209(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, String_t*, const MethodInfo*))Dictionary_2_pick_key_m16917_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m17210(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, String_t*, const MethodInfo*))Dictionary_2_pick_value_m16919_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m17211(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t80 *, KeyValuePair_2U5BU5D_t4138*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16921_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Resize()
#define Dictionary_2_Resize_m17212(__this, method) (( void (*) (Dictionary_2_t80 *, const MethodInfo*))Dictionary_2_Resize_m16923_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
#define Dictionary_2_Add_m17213(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t80 *, String_t*, String_t*, const MethodInfo*))Dictionary_2_Add_m16925_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
#define Dictionary_2_Clear_m17214(__this, method) (( void (*) (Dictionary_2_t80 *, const MethodInfo*))Dictionary_2_Clear_m16927_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m17215(__this, ___key, method) (( bool (*) (Dictionary_2_t80 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m16929_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m17216(__this, ___value, method) (( bool (*) (Dictionary_2_t80 *, String_t*, const MethodInfo*))Dictionary_2_ContainsValue_m16931_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m17217(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t80 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2_GetObjectData_m16933_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m17218(__this, ___sender, method) (( void (*) (Dictionary_2_t80 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16935_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(TKey)
#define Dictionary_2_Remove_m17219(__this, ___key, method) (( bool (*) (Dictionary_2_t80 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m16937_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m17220(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t80 *, String_t*, String_t**, const MethodInfo*))Dictionary_2_TryGetValue_m16939_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
#define Dictionary_2_get_Keys_m2507(__this, method) (( KeyCollection_t548 * (*) (Dictionary_2_t80 *, const MethodInfo*))Dictionary_2_get_Keys_m16940_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Values()
#define Dictionary_2_get_Values_m17221(__this, method) (( ValueCollection_t3334 * (*) (Dictionary_2_t80 *, const MethodInfo*))Dictionary_2_get_Values_m16942_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m17222(__this, ___key, method) (( String_t* (*) (Dictionary_2_t80 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16944_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m17223(__this, ___value, method) (( String_t* (*) (Dictionary_2_t80 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16946_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m17224(__this, ___pair, method) (( bool (*) (Dictionary_2_t80 *, KeyValuePair_2_t234 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16948_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m2621(__this, method) (( Enumerator_t233  (*) (Dictionary_2_t80 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16949_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.String>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m17225(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1685  (*) (Object_t * /* static, unused */, String_t*, String_t*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16951_gshared)(__this /* static, unused */, ___key, ___value, method)
