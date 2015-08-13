#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>
struct Dictionary_2_t749;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<FBLikeInfo>
struct ICollection_1_t8854;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// FBLikeInfo
struct FBLikeInfo_t289;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,FBLikeInfo>
struct KeyCollection_t5593;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBLikeInfo>
struct ValueCollection_t5594;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5379;
// System.Collections.Generic.IDictionary`2<System.String,FBLikeInfo>
struct IDictionary_2_t8855;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.String,FBLikeInfo>[]
struct KeyValuePair_2U5BU5D_t8856;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,FBLikeInfo>>
struct IEnumerator_1_t8857;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,FBLikeInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,FBLikeInfo>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_48MethodDeclarations.h"
#define Dictionary_2__ctor_m3891(__this, method) (( void (*) (Dictionary_2_t749 *, const MethodInfo*))Dictionary_2__ctor_m21798_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m25001(__this, ___comparer, method) (( void (*) (Dictionary_2_t749 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21800_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m25002(__this, ___dictionary, method) (( void (*) (Dictionary_2_t749 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21802_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Int32)
#define Dictionary_2__ctor_m25003(__this, ___capacity, method) (( void (*) (Dictionary_2_t749 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21804_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m25004(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t749 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21806_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m25005(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t749 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m21808_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25006(__this, method) (( Object_t* (*) (Dictionary_2_t749 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21810_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25007(__this, method) (( Object_t* (*) (Dictionary_2_t749 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21812_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25008(__this, method) (( Object_t * (*) (Dictionary_2_t749 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21814_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25009(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t749 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21816_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25010(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t749 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21818_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m25011(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t749 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21820_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m25012(__this, ___key, method) (( bool (*) (Dictionary_2_t749 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21822_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m25013(__this, ___key, method) (( void (*) (Dictionary_2_t749 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21824_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25014(__this, method) (( bool (*) (Dictionary_2_t749 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21826_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25015(__this, method) (( Object_t * (*) (Dictionary_2_t749 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21828_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25016(__this, method) (( bool (*) (Dictionary_2_t749 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21830_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25017(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t749 *, KeyValuePair_2_t747 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21832_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25018(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t749 *, KeyValuePair_2_t747 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21834_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25019(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t749 *, KeyValuePair_2U5BU5D_t8856*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21836_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25020(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t749 *, KeyValuePair_2_t747 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21838_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25021(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t749 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21840_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25022(__this, method) (( Object_t * (*) (Dictionary_2_t749 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21842_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25023(__this, method) (( Object_t* (*) (Dictionary_2_t749 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21844_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25024(__this, method) (( Object_t * (*) (Dictionary_2_t749 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21846_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::get_Count()
#define Dictionary_2_get_Count_m25025(__this, method) (( int32_t (*) (Dictionary_2_t749 *, const MethodInfo*))Dictionary_2_get_Count_m21848_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::get_Item(TKey)
#define Dictionary_2_get_Item_m25026(__this, ___key, method) (( FBLikeInfo_t289 * (*) (Dictionary_2_t749 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21850_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m25027(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t749 *, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_set_Item_m21852_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m25028(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t749 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21854_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m25029(__this, ___size, method) (( void (*) (Dictionary_2_t749 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21856_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m25030(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t749 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21858_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m25031(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t747  (*) (Object_t * /* static, unused */, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_make_pair_m21860_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m25032(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_pick_key_m21862_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m25033(__this /* static, unused */, ___key, ___value, method) (( FBLikeInfo_t289 * (*) (Object_t * /* static, unused */, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_pick_value_m21864_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m25034(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t749 *, KeyValuePair_2U5BU5D_t8856*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21866_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Resize()
#define Dictionary_2_Resize_m25035(__this, method) (( void (*) (Dictionary_2_t749 *, const MethodInfo*))Dictionary_2_Resize_m21868_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Add(TKey,TValue)
#define Dictionary_2_Add_m25036(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t749 *, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_Add_m21870_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Clear()
#define Dictionary_2_Clear_m25037(__this, method) (( void (*) (Dictionary_2_t749 *, const MethodInfo*))Dictionary_2_Clear_m21872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m25038(__this, ___key, method) (( bool (*) (Dictionary_2_t749 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21874_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m25039(__this, ___value, method) (( bool (*) (Dictionary_2_t749 *, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_ContainsValue_m21876_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m25040(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t749 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m21878_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m25041(__this, ___sender, method) (( void (*) (Dictionary_2_t749 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21880_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Remove(TKey)
#define Dictionary_2_Remove_m25042(__this, ___key, method) (( bool (*) (Dictionary_2_t749 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21882_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m25043(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t749 *, String_t*, FBLikeInfo_t289 **, const MethodInfo*))Dictionary_2_TryGetValue_m21884_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::get_Keys()
#define Dictionary_2_get_Keys_m25044(__this, method) (( KeyCollection_t5593 * (*) (Dictionary_2_t749 *, const MethodInfo*))Dictionary_2_get_Keys_m21885_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::get_Values()
#define Dictionary_2_get_Values_m25045(__this, method) (( ValueCollection_t5594 * (*) (Dictionary_2_t749 *, const MethodInfo*))Dictionary_2_get_Values_m21887_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m25046(__this, ___key, method) (( String_t* (*) (Dictionary_2_t749 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21889_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m25047(__this, ___value, method) (( FBLikeInfo_t289 * (*) (Dictionary_2_t749 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21891_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m25048(__this, ___pair, method) (( bool (*) (Dictionary_2_t749 *, KeyValuePair_2_t747 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21893_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3876(__this, method) (( Enumerator_t748  (*) (Dictionary_2_t749 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21894_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m25049(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21896_gshared)(__this /* static, unused */, ___key, ___value, method)
