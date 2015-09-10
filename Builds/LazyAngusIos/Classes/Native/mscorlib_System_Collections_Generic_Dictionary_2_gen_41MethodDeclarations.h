#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t2824;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9720;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>
struct KeyCollection_t9040;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>
struct ValueCollection_t9041;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5778;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7825;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8282;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7834;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__66.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_74MethodDeclarations.h"
#define Dictionary_2__ctor_m65839(__this, method) (( void (*) (Dictionary_2_t2824 *, const MethodInfo*))Dictionary_2__ctor_m65840_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m65841(__this, ___comparer, method) (( void (*) (Dictionary_2_t2824 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m65842_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m65843(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2824 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m65844_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Int32)
#define Dictionary_2__ctor_m65845(__this, ___capacity, method) (( void (*) (Dictionary_2_t2824 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m65846_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m65847(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2824 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m65848_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m65849(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2824 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m65850_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m65851(__this, method) (( Object_t* (*) (Dictionary_2_t2824 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m65852_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m65853(__this, method) (( Object_t* (*) (Dictionary_2_t2824 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m65854_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m65855(__this, method) (( Object_t * (*) (Dictionary_2_t2824 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m65856_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m65857(__this, method) (( Object_t * (*) (Dictionary_2_t2824 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m65858_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m65859(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2824 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m65860_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m65861(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2824 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m65862_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m65863(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2824 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m65864_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m65865(__this, ___key, method) (( bool (*) (Dictionary_2_t2824 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m65866_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m65867(__this, ___key, method) (( void (*) (Dictionary_2_t2824 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m65868_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m65869(__this, method) (( bool (*) (Dictionary_2_t2824 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m65870_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m65871(__this, method) (( Object_t * (*) (Dictionary_2_t2824 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m65872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m65873(__this, method) (( bool (*) (Dictionary_2_t2824 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m65874_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m65875(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2824 *, KeyValuePair_2_t7829 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m65876_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m65877(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2824 *, KeyValuePair_2_t7829 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m65878_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m65879(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2824 *, KeyValuePair_2U5BU5D_t8282*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m65880_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m65881(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2824 *, KeyValuePair_2_t7829 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m65882_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m65883(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2824 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m65884_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m65885(__this, method) (( Object_t * (*) (Dictionary_2_t2824 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m65886_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m65887(__this, method) (( Object_t* (*) (Dictionary_2_t2824 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m65888_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m65889(__this, method) (( Object_t * (*) (Dictionary_2_t2824 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m65890_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count()
#define Dictionary_2_get_Count_m65891(__this, method) (( int32_t (*) (Dictionary_2_t2824 *, const MethodInfo*))Dictionary_2_get_Count_m65892_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Item(TKey)
#define Dictionary_2_get_Item_m65893(__this, ___key, method) (( int64_t (*) (Dictionary_2_t2824 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m65894_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m65895(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2824 *, String_t*, int64_t, const MethodInfo*))Dictionary_2_set_Item_m65896_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m65897(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2824 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m65898_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m65899(__this, ___size, method) (( void (*) (Dictionary_2_t2824 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m65900_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m65901(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2824 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m65902_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m65903(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7829  (*) (Object_t * /* static, unused */, String_t*, int64_t, const MethodInfo*))Dictionary_2_make_pair_m65904_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int64>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m65905(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, int64_t, const MethodInfo*))Dictionary_2_pick_key_m65906_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m65907(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, String_t*, int64_t, const MethodInfo*))Dictionary_2_pick_value_m65908_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m65909(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2824 *, KeyValuePair_2U5BU5D_t8282*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m65910_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Resize()
#define Dictionary_2_Resize_m65911(__this, method) (( void (*) (Dictionary_2_t2824 *, const MethodInfo*))Dictionary_2_Resize_m65912_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Add(TKey,TValue)
#define Dictionary_2_Add_m65913(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2824 *, String_t*, int64_t, const MethodInfo*))Dictionary_2_Add_m65914_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Clear()
#define Dictionary_2_Clear_m65915(__this, method) (( void (*) (Dictionary_2_t2824 *, const MethodInfo*))Dictionary_2_Clear_m65916_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m65917(__this, ___key, method) (( bool (*) (Dictionary_2_t2824 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m65918_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m65919(__this, ___value, method) (( bool (*) (Dictionary_2_t2824 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m65920_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m65921(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2824 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m65922_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m65923(__this, ___sender, method) (( void (*) (Dictionary_2_t2824 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m65924_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Remove(TKey)
#define Dictionary_2_Remove_m65925(__this, ___key, method) (( bool (*) (Dictionary_2_t2824 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m65926_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m65927(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2824 *, String_t*, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m65928_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Keys()
#define Dictionary_2_get_Keys_m65929(__this, method) (( KeyCollection_t9040 * (*) (Dictionary_2_t2824 *, const MethodInfo*))Dictionary_2_get_Keys_m65930_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Values()
#define Dictionary_2_get_Values_m65931(__this, method) (( ValueCollection_t9041 * (*) (Dictionary_2_t2824 *, const MethodInfo*))Dictionary_2_get_Values_m65932_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m65933(__this, ___key, method) (( String_t* (*) (Dictionary_2_t2824 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m65934_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m65935(__this, ___value, method) (( int64_t (*) (Dictionary_2_t2824 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m65936_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m65937(__this, ___pair, method) (( bool (*) (Dictionary_2_t2824 *, KeyValuePair_2_t7829 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m65938_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m65939(__this, method) (( Enumerator_t9042  (*) (Dictionary_2_t2824 *, const MethodInfo*))Dictionary_2_GetEnumerator_m65940_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int64>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m65941(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, String_t*, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m65942_gshared)(__this /* static, unused */, ___key, ___value, method)
