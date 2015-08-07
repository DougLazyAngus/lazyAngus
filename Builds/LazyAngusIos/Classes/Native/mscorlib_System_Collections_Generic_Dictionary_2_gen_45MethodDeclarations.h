#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t103;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8634;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.ICollection
struct ICollection_t705;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.String>
struct KeyCollection_t5372;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_t5373;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5346;
// System.Collections.Generic.IDictionary`2<System.Int32,System.String>
struct IDictionary_2_t8635;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2869;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>[]
struct KeyValuePair_2U5BU5D_t8636;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>>
struct IEnumerator_1_t8637;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3911;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_44MethodDeclarations.h"
#define Dictionary_2__ctor_m11602(__this, method) (( void (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2__ctor_m9915_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m20835(__this, ___comparer, method) (( void (*) (Dictionary_2_t103 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20836_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m20837(__this, ___dictionary, method) (( void (*) (Dictionary_2_t103 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20838_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Int32)
#define Dictionary_2__ctor_m20839(__this, ___capacity, method) (( void (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20840_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m20841(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t103 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20842_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m20843(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t103 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2__ctor_m20844_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20845(__this, method) (( Object_t* (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20846_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20847(__this, method) (( Object_t* (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20848_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m20849(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m20850_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20851(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20852_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20853(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20854_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m20855(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20856_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m20857(__this, ___key, method) (( bool (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20858_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m20859(__this, ___key, method) (( void (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20860_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20861(__this, method) (( bool (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20862_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20863(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20864_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20865(__this, method) (( bool (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20866_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20867(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t103 *, KeyValuePair_2_t5371 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20868_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20869(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t103 *, KeyValuePair_2_t5371 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20870_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20871(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, KeyValuePair_2U5BU5D_t8636*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20872_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20873(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t103 *, KeyValuePair_2_t5371 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20874_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20875(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20876_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20877(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20878_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20879(__this, method) (( Object_t* (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20880_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20881(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20882_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Count()
#define Dictionary_2_get_Count_m20883(__this, method) (( int32_t (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_get_Count_m20884_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Item(TKey)
#define Dictionary_2_get_Item_m20885(__this, ___key, method) (( String_t* (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m20886_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m20887(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, int32_t, String_t*, const MethodInfo*))Dictionary_2_set_Item_m20888_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m20889(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t103 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20890_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m20891(__this, ___size, method) (( void (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20892_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m20893(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20894_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m20895(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5371  (*) (Object_t * /* static, unused */, int32_t, String_t*, const MethodInfo*))Dictionary_2_make_pair_m20896_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.String>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m20897(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, String_t*, const MethodInfo*))Dictionary_2_pick_key_m20898_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.String>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m20899(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, int32_t, String_t*, const MethodInfo*))Dictionary_2_pick_value_m20900_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m20901(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, KeyValuePair_2U5BU5D_t8636*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20902_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Resize()
#define Dictionary_2_Resize_m20903(__this, method) (( void (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_Resize_m20904_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(TKey,TValue)
#define Dictionary_2_Add_m20905(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, int32_t, String_t*, const MethodInfo*))Dictionary_2_Add_m20906_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Clear()
#define Dictionary_2_Clear_m20907(__this, method) (( void (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_Clear_m20908_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m20909(__this, ___key, method) (( bool (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m20910_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m20911(__this, ___value, method) (( bool (*) (Dictionary_2_t103 *, String_t*, const MethodInfo*))Dictionary_2_ContainsValue_m20912_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m20913(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t103 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2_GetObjectData_m20914_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m20915(__this, ___sender, method) (( void (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20916_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Remove(TKey)
#define Dictionary_2_Remove_m20917(__this, ___key, method) (( bool (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m20918_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m20919(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t103 *, int32_t, String_t**, const MethodInfo*))Dictionary_2_TryGetValue_m20920_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Keys()
#define Dictionary_2_get_Keys_m20921(__this, method) (( KeyCollection_t5372 * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_get_Keys_m20922_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Values()
#define Dictionary_2_get_Values_m20923(__this, method) (( ValueCollection_t5373 * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_get_Values_m20924_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m20925(__this, ___key, method) (( int32_t (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m20926_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m20927(__this, ___value, method) (( String_t* (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m20928_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m20929(__this, ___pair, method) (( bool (*) (Dictionary_2_t103 *, KeyValuePair_2_t5371 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20930_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m20931(__this, method) (( Enumerator_t5374  (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_GetEnumerator_m20932_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.String>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m20933(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2088  (*) (Object_t * /* static, unused */, int32_t, String_t*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20934_gshared)(__this /* static, unused */, ___key, ___value, method)
