#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>
struct Dictionary_2_t182;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1210;
// System.Collections.Generic.ICollection`1<GP_TBM_Match>
struct ICollection_1_t4216;
// System.Collections.ICollection
struct ICollection_t571;
// System.Object
struct Object_t;
// GP_TBM_Match
struct GP_TBM_Match_t179;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,GP_TBM_Match>
struct KeyCollection_t3438;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,GP_TBM_Match>
struct ValueCollection_t3439;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3276;
// System.Collections.Generic.IDictionary`2<System.String,GP_TBM_Match>
struct IDictionary_2_t4217;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.Generic.KeyValuePair`2<System.String,GP_TBM_Match>[]
struct KeyValuePair_2U5BU5D_t4218;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,GP_TBM_Match>>
struct IEnumerator_1_t4219;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1418;
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
#define Dictionary_2__ctor_m18909(__this, method) (( void (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2__ctor_m16853_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m18910(__this, ___comparer, method) (( void (*) (Dictionary_2_t182 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16855_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m18911(__this, ___dictionary, method) (( void (*) (Dictionary_2_t182 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16857_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Int32)
#define Dictionary_2__ctor_m18912(__this, ___capacity, method) (( void (*) (Dictionary_2_t182 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16859_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m18913(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t182 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16861_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m18914(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t182 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2__ctor_m16863_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18915(__this, method) (( Object_t* (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16865_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18916(__this, method) (( Object_t* (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16867_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m18917(__this, method) (( Object_t * (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m16869_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18918(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t182 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16871_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18919(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t182 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16873_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m18920(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t182 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16875_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m18921(__this, ___key, method) (( bool (*) (Dictionary_2_t182 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16877_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m18922(__this, ___key, method) (( void (*) (Dictionary_2_t182 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16879_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18923(__this, method) (( bool (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16881_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18924(__this, method) (( Object_t * (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16883_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18925(__this, method) (( bool (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16885_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18926(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t182 *, KeyValuePair_2_t3437 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16887_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18927(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t182 *, KeyValuePair_2_t3437 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16889_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18928(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t182 *, KeyValuePair_2U5BU5D_t4218*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16891_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18929(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t182 *, KeyValuePair_2_t3437 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16893_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18930(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t182 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16895_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18931(__this, method) (( Object_t * (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16897_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18932(__this, method) (( Object_t* (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16899_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18933(__this, method) (( Object_t * (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16901_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::get_Count()
#define Dictionary_2_get_Count_m18934(__this, method) (( int32_t (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_get_Count_m16903_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::get_Item(TKey)
#define Dictionary_2_get_Item_m18935(__this, ___key, method) (( GP_TBM_Match_t179 * (*) (Dictionary_2_t182 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m16905_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m18936(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t182 *, String_t*, GP_TBM_Match_t179 *, const MethodInfo*))Dictionary_2_set_Item_m16907_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m18937(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t182 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16909_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m18938(__this, ___size, method) (( void (*) (Dictionary_2_t182 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16911_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m18939(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t182 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16913_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m18940(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3437  (*) (Object_t * /* static, unused */, String_t*, GP_TBM_Match_t179 *, const MethodInfo*))Dictionary_2_make_pair_m16915_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m18941(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, GP_TBM_Match_t179 *, const MethodInfo*))Dictionary_2_pick_key_m16917_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m18942(__this /* static, unused */, ___key, ___value, method) (( GP_TBM_Match_t179 * (*) (Object_t * /* static, unused */, String_t*, GP_TBM_Match_t179 *, const MethodInfo*))Dictionary_2_pick_value_m16919_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m18943(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t182 *, KeyValuePair_2U5BU5D_t4218*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16921_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Resize()
#define Dictionary_2_Resize_m18944(__this, method) (( void (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_Resize_m16923_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Add(TKey,TValue)
#define Dictionary_2_Add_m18945(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t182 *, String_t*, GP_TBM_Match_t179 *, const MethodInfo*))Dictionary_2_Add_m16925_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Clear()
#define Dictionary_2_Clear_m18946(__this, method) (( void (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_Clear_m16927_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m18947(__this, ___key, method) (( bool (*) (Dictionary_2_t182 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m16929_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m18948(__this, ___value, method) (( bool (*) (Dictionary_2_t182 *, GP_TBM_Match_t179 *, const MethodInfo*))Dictionary_2_ContainsValue_m16931_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m18949(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t182 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2_GetObjectData_m16933_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m18950(__this, ___sender, method) (( void (*) (Dictionary_2_t182 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16935_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Remove(TKey)
#define Dictionary_2_Remove_m18951(__this, ___key, method) (( bool (*) (Dictionary_2_t182 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m16937_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m18952(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t182 *, String_t*, GP_TBM_Match_t179 **, const MethodInfo*))Dictionary_2_TryGetValue_m16939_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::get_Keys()
#define Dictionary_2_get_Keys_m18953(__this, method) (( KeyCollection_t3438 * (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_get_Keys_m16940_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::get_Values()
#define Dictionary_2_get_Values_m18954(__this, method) (( ValueCollection_t3439 * (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_get_Values_m16942_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m18955(__this, ___key, method) (( String_t* (*) (Dictionary_2_t182 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16944_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m18956(__this, ___value, method) (( GP_TBM_Match_t179 * (*) (Dictionary_2_t182 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16946_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m18957(__this, ___pair, method) (( bool (*) (Dictionary_2_t182 *, KeyValuePair_2_t3437 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16948_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m18958(__this, method) (( Enumerator_t3440  (*) (Dictionary_2_t182 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16949_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m18959(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1685  (*) (Object_t * /* static, unused */, String_t*, GP_TBM_Match_t179 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16951_gshared)(__this /* static, unused */, ___key, ___value, method)
