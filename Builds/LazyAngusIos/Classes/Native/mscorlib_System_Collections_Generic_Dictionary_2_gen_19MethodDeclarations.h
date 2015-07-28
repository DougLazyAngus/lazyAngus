#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>
struct Dictionary_2_t317;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<TwitterUserInfo>
struct ICollection_1_t8798;
// System.Collections.ICollection
struct ICollection_t697;
// System.Object
struct Object_t;
// TwitterUserInfo
struct TwitterUserInfo_t308;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,TwitterUserInfo>
struct KeyCollection_t5568;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TwitterUserInfo>
struct ValueCollection_t5569;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5324;
// System.Collections.Generic.IDictionary`2<System.String,TwitterUserInfo>
struct IDictionary_2_t8799;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Collections.Generic.KeyValuePair`2<System.String,TwitterUserInfo>[]
struct KeyValuePair_2U5BU5D_t8800;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TwitterUserInfo>>
struct IEnumerator_1_t8801;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3902;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,TwitterUserInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_31.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,TwitterUserInfo>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__26.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_47MethodDeclarations.h"
#define Dictionary_2__ctor_m3628(__this, method) (( void (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2__ctor_m21476_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m25126(__this, ___comparer, method) (( void (*) (Dictionary_2_t317 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21478_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m25127(__this, ___dictionary, method) (( void (*) (Dictionary_2_t317 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21480_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::.ctor(System.Int32)
#define Dictionary_2__ctor_m25128(__this, ___capacity, method) (( void (*) (Dictionary_2_t317 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21482_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m25129(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t317 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21484_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m25130(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t317 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2__ctor_m21486_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25131(__this, method) (( Object_t* (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21488_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25132(__this, method) (( Object_t* (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21490_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25133(__this, method) (( Object_t * (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21492_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25134(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t317 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21494_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25135(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t317 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21496_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m25136(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t317 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21498_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m25137(__this, ___key, method) (( bool (*) (Dictionary_2_t317 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21500_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m25138(__this, ___key, method) (( void (*) (Dictionary_2_t317 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21502_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25139(__this, method) (( bool (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21504_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25140(__this, method) (( Object_t * (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21506_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25141(__this, method) (( bool (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21508_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25142(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t317 *, KeyValuePair_2_t5567 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21510_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25143(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t317 *, KeyValuePair_2_t5567 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21512_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25144(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t317 *, KeyValuePair_2U5BU5D_t8800*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21514_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25145(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t317 *, KeyValuePair_2_t5567 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21516_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25146(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t317 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21518_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25147(__this, method) (( Object_t * (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21520_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25148(__this, method) (( Object_t* (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21522_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25149(__this, method) (( Object_t * (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21524_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::get_Count()
#define Dictionary_2_get_Count_m25150(__this, method) (( int32_t (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_get_Count_m21526_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::get_Item(TKey)
#define Dictionary_2_get_Item_m25151(__this, ___key, method) (( TwitterUserInfo_t308 * (*) (Dictionary_2_t317 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21528_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m25152(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t317 *, String_t*, TwitterUserInfo_t308 *, const MethodInfo*))Dictionary_2_set_Item_m21530_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m25153(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t317 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21532_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m25154(__this, ___size, method) (( void (*) (Dictionary_2_t317 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21534_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m25155(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t317 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21536_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m25156(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5567  (*) (Object_t * /* static, unused */, String_t*, TwitterUserInfo_t308 *, const MethodInfo*))Dictionary_2_make_pair_m21538_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m25157(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, TwitterUserInfo_t308 *, const MethodInfo*))Dictionary_2_pick_key_m21540_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m25158(__this /* static, unused */, ___key, ___value, method) (( TwitterUserInfo_t308 * (*) (Object_t * /* static, unused */, String_t*, TwitterUserInfo_t308 *, const MethodInfo*))Dictionary_2_pick_value_m21542_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m25159(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t317 *, KeyValuePair_2U5BU5D_t8800*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21544_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::Resize()
#define Dictionary_2_Resize_m25160(__this, method) (( void (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_Resize_m21546_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::Add(TKey,TValue)
#define Dictionary_2_Add_m25161(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t317 *, String_t*, TwitterUserInfo_t308 *, const MethodInfo*))Dictionary_2_Add_m21548_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::Clear()
#define Dictionary_2_Clear_m25162(__this, method) (( void (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_Clear_m21550_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m25163(__this, ___key, method) (( bool (*) (Dictionary_2_t317 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21552_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m25164(__this, ___value, method) (( bool (*) (Dictionary_2_t317 *, TwitterUserInfo_t308 *, const MethodInfo*))Dictionary_2_ContainsValue_m21554_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m25165(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t317 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2_GetObjectData_m21556_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m25166(__this, ___sender, method) (( void (*) (Dictionary_2_t317 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21558_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::Remove(TKey)
#define Dictionary_2_Remove_m25167(__this, ___key, method) (( bool (*) (Dictionary_2_t317 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21560_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m25168(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t317 *, String_t*, TwitterUserInfo_t308 **, const MethodInfo*))Dictionary_2_TryGetValue_m21562_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::get_Keys()
#define Dictionary_2_get_Keys_m25169(__this, method) (( KeyCollection_t5568 * (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_get_Keys_m21563_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::get_Values()
#define Dictionary_2_get_Values_m25170(__this, method) (( ValueCollection_t5569 * (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_get_Values_m21565_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m25171(__this, ___key, method) (( String_t* (*) (Dictionary_2_t317 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21567_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m25172(__this, ___value, method) (( TwitterUserInfo_t308 * (*) (Dictionary_2_t317 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21569_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m25173(__this, ___pair, method) (( bool (*) (Dictionary_2_t317 *, KeyValuePair_2_t5567 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21571_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m25174(__this, method) (( Enumerator_t5570  (*) (Dictionary_2_t317 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21572_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m25175(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2080  (*) (Object_t * /* static, unused */, String_t*, TwitterUserInfo_t308 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21574_gshared)(__this /* static, unused */, ___key, ___value, method)
