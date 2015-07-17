#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,GPScore>
struct Dictionary_2_t183;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4251;
// System.Collections.Generic.ICollection`1<GPScore>
struct ICollection_1_t4328;
// System.Collections.ICollection
struct ICollection_t651;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t301;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,GPScore>
struct KeyCollection_t3527;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,GPScore>
struct ValueCollection_t633;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3430;
// System.Collections.Generic.IDictionary`2<System.Int32,GPScore>
struct IDictionary_2_t4330;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1299;
// System.Collections.Generic.KeyValuePair`2<System.Int32,GPScore>[]
struct KeyValuePair_2U5BU5D_t4331;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,GPScore>>
struct IEnumerator_1_t4332;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1941;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,GPScore>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,GPScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_33MethodDeclarations.h"
#define Dictionary_2__ctor_m3229(__this, method) (( void (*) (Dictionary_2_t183 *, const MethodInfo*))Dictionary_2__ctor_m7216_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19961(__this, ___comparer, method) (( void (*) (Dictionary_2_t183 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18405_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m19962(__this, ___dictionary, method) (( void (*) (Dictionary_2_t183 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18407_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Int32)
#define Dictionary_2__ctor_m19963(__this, ___capacity, method) (( void (*) (Dictionary_2_t183 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18409_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19964(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t183 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18411_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m19965(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t183 *, SerializationInfo_t1299 *, StreamingContext_t1300 , const MethodInfo*))Dictionary_2__ctor_m18413_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19966(__this, method) (( Object_t* (*) (Dictionary_2_t183 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18415_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19967(__this, method) (( Object_t* (*) (Dictionary_2_t183 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18417_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m19968(__this, method) (( Object_t * (*) (Dictionary_2_t183 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m18419_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19969(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t183 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18421_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19970(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t183 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18423_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m19971(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t183 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18425_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m19972(__this, ___key, method) (( bool (*) (Dictionary_2_t183 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18427_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m19973(__this, ___key, method) (( void (*) (Dictionary_2_t183 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18429_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19974(__this, method) (( bool (*) (Dictionary_2_t183 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18431_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19975(__this, method) (( Object_t * (*) (Dictionary_2_t183 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18433_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19976(__this, method) (( bool (*) (Dictionary_2_t183 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18435_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19977(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t183 *, KeyValuePair_2_t3526 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18437_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19978(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t183 *, KeyValuePair_2_t3526 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18439_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19979(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t183 *, KeyValuePair_2U5BU5D_t4331*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18441_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19980(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t183 *, KeyValuePair_2_t3526 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18443_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19981(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t183 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18445_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19982(__this, method) (( Object_t * (*) (Dictionary_2_t183 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18447_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19983(__this, method) (( Object_t* (*) (Dictionary_2_t183 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18449_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19984(__this, method) (( Object_t * (*) (Dictionary_2_t183 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18451_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Count()
#define Dictionary_2_get_Count_m19985(__this, method) (( int32_t (*) (Dictionary_2_t183 *, const MethodInfo*))Dictionary_2_get_Count_m18453_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Item(TKey)
#define Dictionary_2_get_Item_m19986(__this, ___key, method) (( GPScore_t301 * (*) (Dictionary_2_t183 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m18455_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m19987(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t183 *, int32_t, GPScore_t301 *, const MethodInfo*))Dictionary_2_set_Item_m18457_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m19988(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t183 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18459_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m19989(__this, ___size, method) (( void (*) (Dictionary_2_t183 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18461_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m19990(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t183 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18463_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m19991(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3526  (*) (Object_t * /* static, unused */, int32_t, GPScore_t301 *, const MethodInfo*))Dictionary_2_make_pair_m18465_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m19992(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, GPScore_t301 *, const MethodInfo*))Dictionary_2_pick_key_m18467_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m19993(__this /* static, unused */, ___key, ___value, method) (( GPScore_t301 * (*) (Object_t * /* static, unused */, int32_t, GPScore_t301 *, const MethodInfo*))Dictionary_2_pick_value_m18469_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m19994(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t183 *, KeyValuePair_2U5BU5D_t4331*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18471_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Resize()
#define Dictionary_2_Resize_m19995(__this, method) (( void (*) (Dictionary_2_t183 *, const MethodInfo*))Dictionary_2_Resize_m18473_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Add(TKey,TValue)
#define Dictionary_2_Add_m19996(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t183 *, int32_t, GPScore_t301 *, const MethodInfo*))Dictionary_2_Add_m18475_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Clear()
#define Dictionary_2_Clear_m19997(__this, method) (( void (*) (Dictionary_2_t183 *, const MethodInfo*))Dictionary_2_Clear_m18477_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m19998(__this, ___key, method) (( bool (*) (Dictionary_2_t183 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m18479_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m19999(__this, ___value, method) (( bool (*) (Dictionary_2_t183 *, GPScore_t301 *, const MethodInfo*))Dictionary_2_ContainsValue_m18481_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m20000(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t183 *, SerializationInfo_t1299 *, StreamingContext_t1300 , const MethodInfo*))Dictionary_2_GetObjectData_m18483_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m20001(__this, ___sender, method) (( void (*) (Dictionary_2_t183 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18485_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Remove(TKey)
#define Dictionary_2_Remove_m20002(__this, ___key, method) (( bool (*) (Dictionary_2_t183 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m18487_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m20003(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t183 *, int32_t, GPScore_t301 **, const MethodInfo*))Dictionary_2_TryGetValue_m18489_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Keys()
#define Dictionary_2_get_Keys_m20004(__this, method) (( KeyCollection_t3527 * (*) (Dictionary_2_t183 *, const MethodInfo*))Dictionary_2_get_Keys_m18490_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Values()
#define Dictionary_2_get_Values_m3224(__this, method) (( ValueCollection_t633 * (*) (Dictionary_2_t183 *, const MethodInfo*))Dictionary_2_get_Values_m18492_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m20005(__this, ___key, method) (( int32_t (*) (Dictionary_2_t183 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18494_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m20006(__this, ___value, method) (( GPScore_t301 * (*) (Dictionary_2_t183 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18496_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m20007(__this, ___pair, method) (( bool (*) (Dictionary_2_t183 *, KeyValuePair_2_t3526 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18498_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m20008(__this, method) (( Enumerator_t3528  (*) (Dictionary_2_t183 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18499_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m20009(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2179  (*) (Object_t * /* static, unused */, int32_t, GPScore_t301 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18501_gshared)(__this /* static, unused */, ___key, ___value, method)
