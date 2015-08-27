#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.DateTime>
struct Dictionary_2_t7107;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9218;
// System.Collections.ICollection
struct ICollection_t755;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.DateTime>
struct KeyCollection_t7109;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>
struct ValueCollection_t7110;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5380;
// System.Collections.Generic.IDictionary`2<System.String,System.DateTime>
struct IDictionary_2_t7023;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7987;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct IEnumerator_1_t7970;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t785;
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_62MethodDeclarations.h"
#define Dictionary_2__ctor_m45325(__this, method) (( void (*) (Dictionary_2_t7107 *, const MethodInfo*))Dictionary_2__ctor_m45326_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m45327(__this, ___comparer, method) (( void (*) (Dictionary_2_t7107 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45328_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m45329(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7107 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45330_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Int32)
#define Dictionary_2__ctor_m45331(__this, ___capacity, method) (( void (*) (Dictionary_2_t7107 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m45332_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m45333(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7107 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45334_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m45335(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7107 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2__ctor_m45336_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45337(__this, method) (( Object_t* (*) (Dictionary_2_t7107 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45338_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45339(__this, method) (( Object_t* (*) (Dictionary_2_t7107 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45340_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m45341(__this, method) (( Object_t * (*) (Dictionary_2_t7107 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m45342_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m45343(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7107 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m45344_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m45345(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7107 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m45346_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m45347(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7107 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m45348_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m45349(__this, ___key, method) (( bool (*) (Dictionary_2_t7107 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m45350_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m45351(__this, ___key, method) (( void (*) (Dictionary_2_t7107 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m45352_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45353(__this, method) (( bool (*) (Dictionary_2_t7107 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45354_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45355(__this, method) (( Object_t * (*) (Dictionary_2_t7107 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45357(__this, method) (( bool (*) (Dictionary_2_t7107 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45358_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45359(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7107 *, KeyValuePair_2_t7108 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45360_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45361(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7107 *, KeyValuePair_2_t7108 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45362_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45363(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7107 *, KeyValuePair_2U5BU5D_t7987*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45364_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45365(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7107 *, KeyValuePair_2_t7108 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45366_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m45367(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7107 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m45368_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45369(__this, method) (( Object_t * (*) (Dictionary_2_t7107 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45370_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45371(__this, method) (( Object_t* (*) (Dictionary_2_t7107 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45372_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45373(__this, method) (( Object_t * (*) (Dictionary_2_t7107 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45374_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Count()
#define Dictionary_2_get_Count_m45375(__this, method) (( int32_t (*) (Dictionary_2_t7107 *, const MethodInfo*))Dictionary_2_get_Count_m45376_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Item(TKey)
#define Dictionary_2_get_Item_m45377(__this, ___key, method) (( DateTime_t287  (*) (Dictionary_2_t7107 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m45378_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m45379(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7107 *, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_set_Item_m45380_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m45381(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7107 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m45382_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m45383(__this, ___size, method) (( void (*) (Dictionary_2_t7107 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m45384_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m45385(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7107 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m45386_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m45387(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7108  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_make_pair_m45388_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m45389(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_key_m45390_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m45391(__this /* static, unused */, ___key, ___value, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_value_m45392_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m45393(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7107 *, KeyValuePair_2U5BU5D_t7987*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m45394_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Resize()
#define Dictionary_2_Resize_m45395(__this, method) (( void (*) (Dictionary_2_t7107 *, const MethodInfo*))Dictionary_2_Resize_m45396_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Add(TKey,TValue)
#define Dictionary_2_Add_m45397(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7107 *, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_Add_m45398_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Clear()
#define Dictionary_2_Clear_m45399(__this, method) (( void (*) (Dictionary_2_t7107 *, const MethodInfo*))Dictionary_2_Clear_m45400_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m45401(__this, ___key, method) (( bool (*) (Dictionary_2_t7107 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m45402_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m45403(__this, ___value, method) (( bool (*) (Dictionary_2_t7107 *, DateTime_t287 , const MethodInfo*))Dictionary_2_ContainsValue_m45404_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m45405(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7107 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2_GetObjectData_m45406_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m45407(__this, ___sender, method) (( void (*) (Dictionary_2_t7107 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m45408_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Remove(TKey)
#define Dictionary_2_Remove_m45409(__this, ___key, method) (( bool (*) (Dictionary_2_t7107 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m45410_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m45411(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7107 *, String_t*, DateTime_t287 *, const MethodInfo*))Dictionary_2_TryGetValue_m45412_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Keys()
#define Dictionary_2_get_Keys_m45413(__this, method) (( KeyCollection_t7109 * (*) (Dictionary_2_t7107 *, const MethodInfo*))Dictionary_2_get_Keys_m45414_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Values()
#define Dictionary_2_get_Values_m45415(__this, method) (( ValueCollection_t7110 * (*) (Dictionary_2_t7107 *, const MethodInfo*))Dictionary_2_get_Values_m45416_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m45417(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7107 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m45418_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m45419(__this, ___value, method) (( DateTime_t287  (*) (Dictionary_2_t7107 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m45420_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m45421(__this, ___pair, method) (( bool (*) (Dictionary_2_t7107 *, KeyValuePair_2_t7108 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m45422_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m45423(__this, method) (( Enumerator_t7111  (*) (Dictionary_2_t7107 *, const MethodInfo*))Dictionary_2_GetEnumerator_m45424_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m45425(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2140  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m45426_gshared)(__this /* static, unused */, ___key, ___value, method)
