#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.DateTime>
struct Dictionary_2_t7100;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9207;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.DateTime>
struct KeyCollection_t7102;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>
struct ValueCollection_t7103;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5379;
// System.Collections.Generic.IDictionary`2<System.String,System.DateTime>
struct IDictionary_2_t7016;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7980;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct IEnumerator_1_t7963;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
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
#define Dictionary_2__ctor_m45204(__this, method) (( void (*) (Dictionary_2_t7100 *, const MethodInfo*))Dictionary_2__ctor_m45205_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m45206(__this, ___comparer, method) (( void (*) (Dictionary_2_t7100 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45207_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m45208(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7100 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45209_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Int32)
#define Dictionary_2__ctor_m45210(__this, ___capacity, method) (( void (*) (Dictionary_2_t7100 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m45211_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m45212(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7100 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45213_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m45214(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7100 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m45215_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45216(__this, method) (( Object_t* (*) (Dictionary_2_t7100 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45217_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45218(__this, method) (( Object_t* (*) (Dictionary_2_t7100 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45219_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m45220(__this, method) (( Object_t * (*) (Dictionary_2_t7100 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m45221_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m45222(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7100 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m45223_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m45224(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7100 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m45225_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m45226(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7100 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m45227_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m45228(__this, ___key, method) (( bool (*) (Dictionary_2_t7100 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m45229_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m45230(__this, ___key, method) (( void (*) (Dictionary_2_t7100 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m45231_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45232(__this, method) (( bool (*) (Dictionary_2_t7100 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45233_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45234(__this, method) (( Object_t * (*) (Dictionary_2_t7100 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45235_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45236(__this, method) (( bool (*) (Dictionary_2_t7100 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45237_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45238(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7100 *, KeyValuePair_2_t7101 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45239_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45240(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7100 *, KeyValuePair_2_t7101 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45241_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45242(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7100 *, KeyValuePair_2U5BU5D_t7980*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45243_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45244(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7100 *, KeyValuePair_2_t7101 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45245_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m45246(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7100 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m45247_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45248(__this, method) (( Object_t * (*) (Dictionary_2_t7100 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45249_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45250(__this, method) (( Object_t* (*) (Dictionary_2_t7100 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45251_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45252(__this, method) (( Object_t * (*) (Dictionary_2_t7100 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45253_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Count()
#define Dictionary_2_get_Count_m45254(__this, method) (( int32_t (*) (Dictionary_2_t7100 *, const MethodInfo*))Dictionary_2_get_Count_m45255_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Item(TKey)
#define Dictionary_2_get_Item_m45256(__this, ___key, method) (( DateTime_t287  (*) (Dictionary_2_t7100 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m45257_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m45258(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7100 *, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_set_Item_m45259_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m45260(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7100 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m45261_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m45262(__this, ___size, method) (( void (*) (Dictionary_2_t7100 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m45263_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m45264(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7100 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m45265_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m45266(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7101  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_make_pair_m45267_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m45268(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_key_m45269_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m45270(__this /* static, unused */, ___key, ___value, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_value_m45271_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m45272(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7100 *, KeyValuePair_2U5BU5D_t7980*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m45273_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Resize()
#define Dictionary_2_Resize_m45274(__this, method) (( void (*) (Dictionary_2_t7100 *, const MethodInfo*))Dictionary_2_Resize_m45275_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Add(TKey,TValue)
#define Dictionary_2_Add_m45276(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7100 *, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_Add_m45277_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Clear()
#define Dictionary_2_Clear_m45278(__this, method) (( void (*) (Dictionary_2_t7100 *, const MethodInfo*))Dictionary_2_Clear_m45279_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m45280(__this, ___key, method) (( bool (*) (Dictionary_2_t7100 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m45281_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m45282(__this, ___value, method) (( bool (*) (Dictionary_2_t7100 *, DateTime_t287 , const MethodInfo*))Dictionary_2_ContainsValue_m45283_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m45284(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7100 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m45285_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m45286(__this, ___sender, method) (( void (*) (Dictionary_2_t7100 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m45287_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Remove(TKey)
#define Dictionary_2_Remove_m45288(__this, ___key, method) (( bool (*) (Dictionary_2_t7100 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m45289_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m45290(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7100 *, String_t*, DateTime_t287 *, const MethodInfo*))Dictionary_2_TryGetValue_m45291_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Keys()
#define Dictionary_2_get_Keys_m45292(__this, method) (( KeyCollection_t7102 * (*) (Dictionary_2_t7100 *, const MethodInfo*))Dictionary_2_get_Keys_m45293_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Values()
#define Dictionary_2_get_Values_m45294(__this, method) (( ValueCollection_t7103 * (*) (Dictionary_2_t7100 *, const MethodInfo*))Dictionary_2_get_Values_m45295_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m45296(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7100 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m45297_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m45298(__this, ___value, method) (( DateTime_t287  (*) (Dictionary_2_t7100 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m45299_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m45300(__this, ___pair, method) (( bool (*) (Dictionary_2_t7100 *, KeyValuePair_2_t7101 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m45301_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m45302(__this, method) (( Enumerator_t7104  (*) (Dictionary_2_t7100 *, const MethodInfo*))Dictionary_2_GetEnumerator_m45303_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m45304(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m45305_gshared)(__this /* static, unused */, ___key, ___value, method)
