#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t116;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.String[]>
struct ICollection_1_t8727;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t75;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String[]>
struct KeyCollection_t5459;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String[]>
struct ValueCollection_t5460;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5377;
// System.Collections.Generic.IDictionary`2<System.String,System.String[]>
struct IDictionary_2_t8728;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String[]>[]
struct KeyValuePair_2U5BU5D_t8729;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String[]>>
struct IEnumerator_1_t8730;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_48MethodDeclarations.h"
#define Dictionary_2__ctor_m3694(__this, method) (( void (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2__ctor_m21784_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m22296(__this, ___comparer, method) (( void (*) (Dictionary_2_t116 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21786_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m22297(__this, ___dictionary, method) (( void (*) (Dictionary_2_t116 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21788_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::.ctor(System.Int32)
#define Dictionary_2__ctor_m22298(__this, ___capacity, method) (( void (*) (Dictionary_2_t116 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21790_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m22299(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t116 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21792_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m22300(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t116 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m21794_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22301(__this, method) (( Object_t* (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21796_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22302(__this, method) (( Object_t* (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21798_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m22303(__this, method) (( Object_t * (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21800_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m22304(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t116 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21802_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m22305(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t116 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21804_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m22306(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t116 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21806_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m22307(__this, ___key, method) (( bool (*) (Dictionary_2_t116 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21808_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m22308(__this, ___key, method) (( void (*) (Dictionary_2_t116 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21810_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22309(__this, method) (( bool (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21812_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22310(__this, method) (( Object_t * (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21814_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22311(__this, method) (( bool (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21816_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22312(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t116 *, KeyValuePair_2_t771 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21818_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22313(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t116 *, KeyValuePair_2_t771 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21820_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22314(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t116 *, KeyValuePair_2U5BU5D_t8729*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21822_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22315(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t116 *, KeyValuePair_2_t771 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21824_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m22316(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t116 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21826_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22317(__this, method) (( Object_t * (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21828_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22318(__this, method) (( Object_t* (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21830_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22319(__this, method) (( Object_t * (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21832_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String[]>::get_Count()
#define Dictionary_2_get_Count_m22320(__this, method) (( int32_t (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_get_Count_m21834_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String[]>::get_Item(TKey)
#define Dictionary_2_get_Item_m22321(__this, ___key, method) (( StringU5BU5D_t75* (*) (Dictionary_2_t116 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21836_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m22322(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t116 *, String_t*, StringU5BU5D_t75*, const MethodInfo*))Dictionary_2_set_Item_m21838_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m22323(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t116 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21840_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m22324(__this, ___size, method) (( void (*) (Dictionary_2_t116 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21842_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m22325(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t116 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21844_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String[]>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m22326(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t771  (*) (Object_t * /* static, unused */, String_t*, StringU5BU5D_t75*, const MethodInfo*))Dictionary_2_make_pair_m21846_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String[]>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m22327(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, StringU5BU5D_t75*, const MethodInfo*))Dictionary_2_pick_key_m21848_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String[]>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m22328(__this /* static, unused */, ___key, ___value, method) (( StringU5BU5D_t75* (*) (Object_t * /* static, unused */, String_t*, StringU5BU5D_t75*, const MethodInfo*))Dictionary_2_pick_value_m21850_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m22329(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t116 *, KeyValuePair_2U5BU5D_t8729*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21852_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::Resize()
#define Dictionary_2_Resize_m22330(__this, method) (( void (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_Resize_m21854_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::Add(TKey,TValue)
#define Dictionary_2_Add_m22331(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t116 *, String_t*, StringU5BU5D_t75*, const MethodInfo*))Dictionary_2_Add_m21856_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::Clear()
#define Dictionary_2_Clear_m22332(__this, method) (( void (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_Clear_m21858_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m22333(__this, ___key, method) (( bool (*) (Dictionary_2_t116 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21860_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m22334(__this, ___value, method) (( bool (*) (Dictionary_2_t116 *, StringU5BU5D_t75*, const MethodInfo*))Dictionary_2_ContainsValue_m21862_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m22335(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t116 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m21864_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m22336(__this, ___sender, method) (( void (*) (Dictionary_2_t116 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21866_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::Remove(TKey)
#define Dictionary_2_Remove_m22337(__this, ___key, method) (( bool (*) (Dictionary_2_t116 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21868_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m22338(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t116 *, String_t*, StringU5BU5D_t75**, const MethodInfo*))Dictionary_2_TryGetValue_m21870_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String[]>::get_Keys()
#define Dictionary_2_get_Keys_m22339(__this, method) (( KeyCollection_t5459 * (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_get_Keys_m21871_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String[]>::get_Values()
#define Dictionary_2_get_Values_m22340(__this, method) (( ValueCollection_t5460 * (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_get_Values_m21873_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String[]>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m22341(__this, ___key, method) (( String_t* (*) (Dictionary_2_t116 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21875_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String[]>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m22342(__this, ___value, method) (( StringU5BU5D_t75* (*) (Dictionary_2_t116 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21877_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m22343(__this, ___pair, method) (( bool (*) (Dictionary_2_t116 *, KeyValuePair_2_t771 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21879_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String[]>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m4063(__this, method) (( Enumerator_t772  (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21880_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.String[]>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m22344(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, String_t*, StringU5BU5D_t75*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21882_gshared)(__this /* static, unused */, ___key, ___value, method)
