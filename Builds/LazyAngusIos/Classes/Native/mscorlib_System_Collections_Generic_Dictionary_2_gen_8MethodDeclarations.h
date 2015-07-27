#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>
struct Dictionary_2_t109;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4252;
// System.Collections.Generic.ICollection`1<IOSADBanner>
struct ICollection_1_t4298;
// System.Collections.ICollection
struct ICollection_t652;
// System.Object
struct Object_t;
// IOSADBanner
struct IOSADBanner_t108;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,IOSADBanner>
struct KeyCollection_t3493;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,IOSADBanner>
struct ValueCollection_t3494;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3431;
// System.Collections.Generic.IDictionary`2<System.Int32,IOSADBanner>
struct IDictionary_2_t4299;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1300;
// System.Collections.Generic.KeyValuePair`2<System.Int32,IOSADBanner>[]
struct KeyValuePair_2U5BU5D_t4300;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,IOSADBanner>>
struct IEnumerator_1_t4301;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1942;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,IOSADBanner>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,IOSADBanner>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_33MethodDeclarations.h"
#define Dictionary_2__ctor_m3191(__this, method) (( void (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2__ctor_m7224_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19373(__this, ___comparer, method) (( void (*) (Dictionary_2_t109 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18413_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m19374(__this, ___dictionary, method) (( void (*) (Dictionary_2_t109 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18415_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Int32)
#define Dictionary_2__ctor_m19375(__this, ___capacity, method) (( void (*) (Dictionary_2_t109 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18417_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19376(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t109 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18419_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m19377(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t109 *, SerializationInfo_t1300 *, StreamingContext_t1301 , const MethodInfo*))Dictionary_2__ctor_m18421_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19378(__this, method) (( Object_t* (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18423_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19379(__this, method) (( Object_t* (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18425_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m19380(__this, method) (( Object_t * (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m18427_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19381(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t109 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18429_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19382(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t109 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18431_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m19383(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t109 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18433_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m19384(__this, ___key, method) (( bool (*) (Dictionary_2_t109 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18435_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m19385(__this, ___key, method) (( void (*) (Dictionary_2_t109 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18437_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19386(__this, method) (( bool (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18439_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19387(__this, method) (( Object_t * (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18441_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19388(__this, method) (( bool (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18443_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19389(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t109 *, KeyValuePair_2_t625 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18445_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19390(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t109 *, KeyValuePair_2_t625 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18447_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19391(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t109 *, KeyValuePair_2U5BU5D_t4300*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18449_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19392(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t109 *, KeyValuePair_2_t625 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18451_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19393(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t109 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18453_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19394(__this, method) (( Object_t * (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18455_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19395(__this, method) (( Object_t* (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18457_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19396(__this, method) (( Object_t * (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18459_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Count()
#define Dictionary_2_get_Count_m19397(__this, method) (( int32_t (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_get_Count_m18461_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Item(TKey)
#define Dictionary_2_get_Item_m19398(__this, ___key, method) (( IOSADBanner_t108 * (*) (Dictionary_2_t109 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m18463_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m19399(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t109 *, int32_t, IOSADBanner_t108 *, const MethodInfo*))Dictionary_2_set_Item_m18465_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m19400(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t109 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18467_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m19401(__this, ___size, method) (( void (*) (Dictionary_2_t109 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18469_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m19402(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t109 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18471_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m19403(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t625  (*) (Object_t * /* static, unused */, int32_t, IOSADBanner_t108 *, const MethodInfo*))Dictionary_2_make_pair_m18473_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m19404(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, IOSADBanner_t108 *, const MethodInfo*))Dictionary_2_pick_key_m18475_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m19405(__this /* static, unused */, ___key, ___value, method) (( IOSADBanner_t108 * (*) (Object_t * /* static, unused */, int32_t, IOSADBanner_t108 *, const MethodInfo*))Dictionary_2_pick_value_m18477_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m19406(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t109 *, KeyValuePair_2U5BU5D_t4300*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18479_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Resize()
#define Dictionary_2_Resize_m19407(__this, method) (( void (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_Resize_m18481_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Add(TKey,TValue)
#define Dictionary_2_Add_m19408(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t109 *, int32_t, IOSADBanner_t108 *, const MethodInfo*))Dictionary_2_Add_m18483_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Clear()
#define Dictionary_2_Clear_m19409(__this, method) (( void (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_Clear_m18485_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m19410(__this, ___key, method) (( bool (*) (Dictionary_2_t109 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m18487_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m19411(__this, ___value, method) (( bool (*) (Dictionary_2_t109 *, IOSADBanner_t108 *, const MethodInfo*))Dictionary_2_ContainsValue_m18489_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m19412(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t109 *, SerializationInfo_t1300 *, StreamingContext_t1301 , const MethodInfo*))Dictionary_2_GetObjectData_m18491_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m19413(__this, ___sender, method) (( void (*) (Dictionary_2_t109 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18493_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Remove(TKey)
#define Dictionary_2_Remove_m19414(__this, ___key, method) (( bool (*) (Dictionary_2_t109 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m18495_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m19415(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t109 *, int32_t, IOSADBanner_t108 **, const MethodInfo*))Dictionary_2_TryGetValue_m18497_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Keys()
#define Dictionary_2_get_Keys_m19416(__this, method) (( KeyCollection_t3493 * (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_get_Keys_m18498_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Values()
#define Dictionary_2_get_Values_m19417(__this, method) (( ValueCollection_t3494 * (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_get_Values_m18500_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m19418(__this, ___key, method) (( int32_t (*) (Dictionary_2_t109 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18502_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m19419(__this, ___value, method) (( IOSADBanner_t108 * (*) (Dictionary_2_t109 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18504_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m19420(__this, ___pair, method) (( bool (*) (Dictionary_2_t109 *, KeyValuePair_2_t625 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18506_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3194(__this, method) (( Enumerator_t626  (*) (Dictionary_2_t109 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18507_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m19421(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2180  (*) (Object_t * /* static, unused */, int32_t, IOSADBanner_t108 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18509_gshared)(__this /* static, unused */, ___key, ___value, method)
