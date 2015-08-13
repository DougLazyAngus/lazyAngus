#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>
struct Dictionary_2_t590;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8706;
// System.Collections.Generic.ICollection`1<LevelDescription>
struct ICollection_1_t8934;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// LevelDescription
struct LevelDescription_t585;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,LevelDescription>
struct KeyCollection_t5741;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,LevelDescription>
struct ValueCollection_t5742;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5392;
// System.Collections.Generic.IDictionary`2<System.Int32,LevelDescription>
struct IDictionary_2_t8935;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Int32,LevelDescription>[]
struct KeyValuePair_2U5BU5D_t8936;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,LevelDescription>>
struct IEnumerator_1_t8937;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,LevelDescription>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,LevelDescription>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_45MethodDeclarations.h"
#define Dictionary_2__ctor_m4236(__this, method) (( void (*) (Dictionary_2_t590 *, const MethodInfo*))Dictionary_2__ctor_m10173_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m27312(__this, ___comparer, method) (( void (*) (Dictionary_2_t590 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21095_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m27313(__this, ___dictionary, method) (( void (*) (Dictionary_2_t590 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21097_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Int32)
#define Dictionary_2__ctor_m27314(__this, ___capacity, method) (( void (*) (Dictionary_2_t590 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21099_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m27315(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t590 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21101_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m27316(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t590 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m21103_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27317(__this, method) (( Object_t* (*) (Dictionary_2_t590 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21105_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27318(__this, method) (( Object_t* (*) (Dictionary_2_t590 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21107_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m27319(__this, method) (( Object_t * (*) (Dictionary_2_t590 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21109_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m27320(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t590 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21111_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m27321(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t590 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21113_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m27322(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t590 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21115_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m27323(__this, ___key, method) (( bool (*) (Dictionary_2_t590 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21117_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m27324(__this, ___key, method) (( void (*) (Dictionary_2_t590 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21119_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27325(__this, method) (( bool (*) (Dictionary_2_t590 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21121_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27326(__this, method) (( Object_t * (*) (Dictionary_2_t590 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21123_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27327(__this, method) (( bool (*) (Dictionary_2_t590 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21125_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27328(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t590 *, KeyValuePair_2_t5740 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21127_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27329(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t590 *, KeyValuePair_2_t5740 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21129_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27330(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t590 *, KeyValuePair_2U5BU5D_t8936*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21131_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27331(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t590 *, KeyValuePair_2_t5740 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21133_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m27332(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t590 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21135_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27333(__this, method) (( Object_t * (*) (Dictionary_2_t590 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21137_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27334(__this, method) (( Object_t* (*) (Dictionary_2_t590 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21139_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27335(__this, method) (( Object_t * (*) (Dictionary_2_t590 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21141_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Count()
#define Dictionary_2_get_Count_m27336(__this, method) (( int32_t (*) (Dictionary_2_t590 *, const MethodInfo*))Dictionary_2_get_Count_m21143_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(TKey)
#define Dictionary_2_get_Item_m27337(__this, ___key, method) (( LevelDescription_t585 * (*) (Dictionary_2_t590 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m21145_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m27338(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t590 *, int32_t, LevelDescription_t585 *, const MethodInfo*))Dictionary_2_set_Item_m21147_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m27339(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t590 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21149_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m27340(__this, ___size, method) (( void (*) (Dictionary_2_t590 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21151_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m27341(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t590 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21153_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m27342(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5740  (*) (Object_t * /* static, unused */, int32_t, LevelDescription_t585 *, const MethodInfo*))Dictionary_2_make_pair_m21155_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m27343(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, LevelDescription_t585 *, const MethodInfo*))Dictionary_2_pick_key_m21157_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m27344(__this /* static, unused */, ___key, ___value, method) (( LevelDescription_t585 * (*) (Object_t * /* static, unused */, int32_t, LevelDescription_t585 *, const MethodInfo*))Dictionary_2_pick_value_m21159_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m27345(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t590 *, KeyValuePair_2U5BU5D_t8936*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21161_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Resize()
#define Dictionary_2_Resize_m27346(__this, method) (( void (*) (Dictionary_2_t590 *, const MethodInfo*))Dictionary_2_Resize_m21163_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Add(TKey,TValue)
#define Dictionary_2_Add_m27347(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t590 *, int32_t, LevelDescription_t585 *, const MethodInfo*))Dictionary_2_Add_m21165_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Clear()
#define Dictionary_2_Clear_m27348(__this, method) (( void (*) (Dictionary_2_t590 *, const MethodInfo*))Dictionary_2_Clear_m21167_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m27349(__this, ___key, method) (( bool (*) (Dictionary_2_t590 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m21169_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m27350(__this, ___value, method) (( bool (*) (Dictionary_2_t590 *, LevelDescription_t585 *, const MethodInfo*))Dictionary_2_ContainsValue_m21171_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m27351(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t590 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m21173_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m27352(__this, ___sender, method) (( void (*) (Dictionary_2_t590 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21175_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Remove(TKey)
#define Dictionary_2_Remove_m27353(__this, ___key, method) (( bool (*) (Dictionary_2_t590 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m21177_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m27354(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t590 *, int32_t, LevelDescription_t585 **, const MethodInfo*))Dictionary_2_TryGetValue_m21179_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Keys()
#define Dictionary_2_get_Keys_m27355(__this, method) (( KeyCollection_t5741 * (*) (Dictionary_2_t590 *, const MethodInfo*))Dictionary_2_get_Keys_m21181_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Values()
#define Dictionary_2_get_Values_m27356(__this, method) (( ValueCollection_t5742 * (*) (Dictionary_2_t590 *, const MethodInfo*))Dictionary_2_get_Values_m21183_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m27357(__this, ___key, method) (( int32_t (*) (Dictionary_2_t590 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21185_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m27358(__this, ___value, method) (( LevelDescription_t585 * (*) (Dictionary_2_t590 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21187_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m27359(__this, ___pair, method) (( bool (*) (Dictionary_2_t590 *, KeyValuePair_2_t5740 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21189_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m27360(__this, method) (( Enumerator_t5743  (*) (Dictionary_2_t590 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21191_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m27361(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, int32_t, LevelDescription_t585 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21193_gshared)(__this /* static, unused */, ___key, ___value, method)
