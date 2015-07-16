#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>
struct Dictionary_2_t182;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1245;
// System.Collections.Generic.ICollection`1<GP_TBM_Match>
struct ICollection_1_t4244;
// System.Collections.ICollection
struct ICollection_t600;
// System.Object
struct Object_t;
// GP_TBM_Match
struct GP_TBM_Match_t179;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,GP_TBM_Match>
struct KeyCollection_t3471;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,GP_TBM_Match>
struct ValueCollection_t3472;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3309;
// System.Collections.Generic.IDictionary`2<System.String,GP_TBM_Match>
struct IDictionary_2_t4245;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Collections.Generic.KeyValuePair`2<System.String,GP_TBM_Match>[]
struct KeyValuePair_2U5BU5D_t4246;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,GP_TBM_Match>>
struct IEnumerator_1_t4247;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1451;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,GP_TBM_Match>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,GP_TBM_Match>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31MethodDeclarations.h"
#define Dictionary_2__ctor_m19125(__this, method) (( void (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2__ctor_m17069_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19126(__this, ___comparer, method) (( void (*) (Dictionary_2_t182 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17071_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m19127(__this, ___dictionary, method) (( void (*) (Dictionary_2_t182 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17073_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Int32)
#define Dictionary_2__ctor_m19128(__this, ___capacity, method) (( void (*) (Dictionary_2_t182 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17075_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19129(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t182 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17077_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m19130(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t182 *, SerializationInfo_t1255 *, StreamingContext_t1256 , const MethodInfo*))Dictionary_2__ctor_m17079_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19131(__this, method) (( Object_t* (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17081_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19132(__this, method) (( Object_t* (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17083_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m19133(__this, method) (( Object_t * (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17085_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19134(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t182 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17087_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19135(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t182 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17089_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m19136(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t182 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17091_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m19137(__this, ___key, method) (( bool (*) (Dictionary_2_t182 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17093_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m19138(__this, ___key, method) (( void (*) (Dictionary_2_t182 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17095_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19139(__this, method) (( bool (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17097_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19140(__this, method) (( Object_t * (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17099_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19141(__this, method) (( bool (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17101_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19142(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t182 *, KeyValuePair_2_t3470 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17103_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19143(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t182 *, KeyValuePair_2_t3470 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17105_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19144(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t182 *, KeyValuePair_2U5BU5D_t4246*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17107_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19145(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t182 *, KeyValuePair_2_t3470 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17109_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19146(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t182 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17111_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19147(__this, method) (( Object_t * (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17113_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19148(__this, method) (( Object_t* (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17115_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19149(__this, method) (( Object_t * (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17117_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::get_Count()
#define Dictionary_2_get_Count_m19150(__this, method) (( int32_t (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_get_Count_m17119_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::get_Item(TKey)
#define Dictionary_2_get_Item_m19151(__this, ___key, method) (( GP_TBM_Match_t179 * (*) (Dictionary_2_t182 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m17121_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m19152(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t182 *, String_t*, GP_TBM_Match_t179 *, const MethodInfo*))Dictionary_2_set_Item_m17123_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m19153(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t182 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17125_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m19154(__this, ___size, method) (( void (*) (Dictionary_2_t182 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17127_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m19155(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t182 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17129_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m19156(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3470  (*) (Object_t * /* static, unused */, String_t*, GP_TBM_Match_t179 *, const MethodInfo*))Dictionary_2_make_pair_m17131_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m19157(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, GP_TBM_Match_t179 *, const MethodInfo*))Dictionary_2_pick_key_m17133_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m19158(__this /* static, unused */, ___key, ___value, method) (( GP_TBM_Match_t179 * (*) (Object_t * /* static, unused */, String_t*, GP_TBM_Match_t179 *, const MethodInfo*))Dictionary_2_pick_value_m17135_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m19159(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t182 *, KeyValuePair_2U5BU5D_t4246*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17137_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Resize()
#define Dictionary_2_Resize_m19160(__this, method) (( void (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_Resize_m17139_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Add(TKey,TValue)
#define Dictionary_2_Add_m19161(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t182 *, String_t*, GP_TBM_Match_t179 *, const MethodInfo*))Dictionary_2_Add_m17141_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Clear()
#define Dictionary_2_Clear_m19162(__this, method) (( void (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_Clear_m17143_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m19163(__this, ___key, method) (( bool (*) (Dictionary_2_t182 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m17145_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m19164(__this, ___value, method) (( bool (*) (Dictionary_2_t182 *, GP_TBM_Match_t179 *, const MethodInfo*))Dictionary_2_ContainsValue_m17147_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m19165(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t182 *, SerializationInfo_t1255 *, StreamingContext_t1256 , const MethodInfo*))Dictionary_2_GetObjectData_m17149_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m19166(__this, ___sender, method) (( void (*) (Dictionary_2_t182 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17151_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Remove(TKey)
#define Dictionary_2_Remove_m19167(__this, ___key, method) (( bool (*) (Dictionary_2_t182 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m17153_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m19168(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t182 *, String_t*, GP_TBM_Match_t179 **, const MethodInfo*))Dictionary_2_TryGetValue_m17155_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::get_Keys()
#define Dictionary_2_get_Keys_m19169(__this, method) (( KeyCollection_t3471 * (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_get_Keys_m17156_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::get_Values()
#define Dictionary_2_get_Values_m19170(__this, method) (( ValueCollection_t3472 * (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_get_Values_m17158_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m19171(__this, ___key, method) (( String_t* (*) (Dictionary_2_t182 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17160_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m19172(__this, ___value, method) (( GP_TBM_Match_t179 * (*) (Dictionary_2_t182 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17162_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m19173(__this, ___pair, method) (( bool (*) (Dictionary_2_t182 *, KeyValuePair_2_t3470 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17164_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m19174(__this, method) (( Enumerator_t3473  (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17165_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m19175(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1718  (*) (Object_t * /* static, unused */, String_t*, GP_TBM_Match_t179 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17167_gshared)(__this /* static, unused */, ___key, ___value, method)
