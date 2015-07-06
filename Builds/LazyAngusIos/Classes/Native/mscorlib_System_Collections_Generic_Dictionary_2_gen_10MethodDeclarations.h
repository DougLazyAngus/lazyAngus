#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,FBScore>
struct Dictionary_2_t204;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1210;
// System.Collections.Generic.ICollection`1<FBScore>
struct ICollection_1_t4232;
// System.Collections.ICollection
struct ICollection_t571;
// System.Object
struct Object_t;
// FBScore
struct FBScore_t225;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,FBScore>
struct KeyCollection_t3452;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>
struct ValueCollection_t3453;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3276;
// System.Collections.Generic.IDictionary`2<System.String,FBScore>
struct IDictionary_2_t4233;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.Generic.KeyValuePair`2<System.String,FBScore>[]
struct KeyValuePair_2U5BU5D_t4234;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,FBScore>>
struct IEnumerator_1_t4235;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1418;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,FBScore>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,FBScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31MethodDeclarations.h"
#define Dictionary_2__ctor_m2571(__this, method) (( void (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2__ctor_m16853_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19206(__this, ___comparer, method) (( void (*) (Dictionary_2_t204 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16855_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m19207(__this, ___dictionary, method) (( void (*) (Dictionary_2_t204 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16857_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Int32)
#define Dictionary_2__ctor_m19208(__this, ___capacity, method) (( void (*) (Dictionary_2_t204 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16859_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19209(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t204 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16861_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m19210(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t204 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2__ctor_m16863_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19211(__this, method) (( Object_t* (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16865_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19212(__this, method) (( Object_t* (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16867_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m19213(__this, method) (( Object_t * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m16869_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19214(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16871_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19215(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t204 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16873_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m19216(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t204 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16875_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m19217(__this, ___key, method) (( bool (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16877_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m19218(__this, ___key, method) (( void (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16879_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19219(__this, method) (( bool (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16881_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19220(__this, method) (( Object_t * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16883_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19221(__this, method) (( bool (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16885_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19222(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t204 *, KeyValuePair_2_t569 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16887_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19223(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t204 *, KeyValuePair_2_t569 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16889_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19224(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t204 *, KeyValuePair_2U5BU5D_t4234*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16891_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19225(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t204 *, KeyValuePair_2_t569 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16893_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19226(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t204 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16895_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19227(__this, method) (( Object_t * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16897_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19228(__this, method) (( Object_t* (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16899_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19229(__this, method) (( Object_t * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16901_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Count()
#define Dictionary_2_get_Count_m19230(__this, method) (( int32_t (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_get_Count_m16903_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Item(TKey)
#define Dictionary_2_get_Item_m19231(__this, ___key, method) (( FBScore_t225 * (*) (Dictionary_2_t204 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m16905_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m19232(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t204 *, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_set_Item_m16907_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m19233(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t204 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16909_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m19234(__this, ___size, method) (( void (*) (Dictionary_2_t204 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16911_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m19235(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t204 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16913_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m19236(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t569  (*) (Object_t * /* static, unused */, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_make_pair_m16915_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBScore>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m19237(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_pick_key_m16917_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m19238(__this /* static, unused */, ___key, ___value, method) (( FBScore_t225 * (*) (Object_t * /* static, unused */, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_pick_value_m16919_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m19239(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t204 *, KeyValuePair_2U5BU5D_t4234*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16921_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Resize()
#define Dictionary_2_Resize_m19240(__this, method) (( void (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_Resize_m16923_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Add(TKey,TValue)
#define Dictionary_2_Add_m19241(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t204 *, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_Add_m16925_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Clear()
#define Dictionary_2_Clear_m19242(__this, method) (( void (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_Clear_m16927_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m19243(__this, ___key, method) (( bool (*) (Dictionary_2_t204 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m16929_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m19244(__this, ___value, method) (( bool (*) (Dictionary_2_t204 *, FBScore_t225 *, const MethodInfo*))Dictionary_2_ContainsValue_m16931_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m19245(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t204 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2_GetObjectData_m16933_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m19246(__this, ___sender, method) (( void (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16935_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::Remove(TKey)
#define Dictionary_2_Remove_m19247(__this, ___key, method) (( bool (*) (Dictionary_2_t204 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m16937_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m19248(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t204 *, String_t*, FBScore_t225 **, const MethodInfo*))Dictionary_2_TryGetValue_m16939_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Keys()
#define Dictionary_2_get_Keys_m19249(__this, method) (( KeyCollection_t3452 * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_get_Keys_m16940_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Values()
#define Dictionary_2_get_Values_m19250(__this, method) (( ValueCollection_t3453 * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_get_Values_m16942_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBScore>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m19251(__this, ___key, method) (( String_t* (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16944_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m19252(__this, ___value, method) (( FBScore_t225 * (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16946_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m19253(__this, ___pair, method) (( bool (*) (Dictionary_2_t204 *, KeyValuePair_2_t569 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16948_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m2602(__this, method) (( Enumerator_t570  (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16949_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,FBScore>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m19254(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1685  (*) (Object_t * /* static, unused */, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16951_gshared)(__this /* static, unused */, ___key, ___value, method)
