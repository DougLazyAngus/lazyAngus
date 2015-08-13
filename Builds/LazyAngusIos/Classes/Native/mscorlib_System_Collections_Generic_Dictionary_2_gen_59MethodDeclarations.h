#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Double>
struct Dictionary_2_t7074;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9205;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Double>
struct KeyCollection_t7076;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>
struct ValueCollection_t7077;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5379;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7005;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7841;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7271;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__51.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_60MethodDeclarations.h"
#define Dictionary_2__ctor_m44853(__this, method) (( void (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2__ctor_m44854_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44855(__this, ___comparer, method) (( void (*) (Dictionary_2_t7074 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44856_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m44857(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7074 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44858_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Int32)
#define Dictionary_2__ctor_m44859(__this, ___capacity, method) (( void (*) (Dictionary_2_t7074 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44860_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44861(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7074 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44862_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m44863(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7074 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m44864_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44865(__this, method) (( Object_t* (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44866_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44867(__this, method) (( Object_t* (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44868_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44869(__this, method) (( Object_t * (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44870_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44871(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7074 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44872_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44873(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7074 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44874_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m44875(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7074 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44876_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m44877(__this, ___key, method) (( bool (*) (Dictionary_2_t7074 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44878_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m44879(__this, ___key, method) (( void (*) (Dictionary_2_t7074 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44880_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44881(__this, method) (( bool (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44882_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44883(__this, method) (( Object_t * (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44884_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44885(__this, method) (( bool (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44886_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44887(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7074 *, KeyValuePair_2_t7075 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44888_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44889(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7074 *, KeyValuePair_2_t7075 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44890_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44891(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7074 *, KeyValuePair_2U5BU5D_t7841*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44892_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44893(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7074 *, KeyValuePair_2_t7075 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44894_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44895(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7074 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44896_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44897(__this, method) (( Object_t * (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44898_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44899(__this, method) (( Object_t* (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44900_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44901(__this, method) (( Object_t * (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44902_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Count()
#define Dictionary_2_get_Count_m44903(__this, method) (( int32_t (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_get_Count_m44904_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Item(TKey)
#define Dictionary_2_get_Item_m44905(__this, ___key, method) (( double (*) (Dictionary_2_t7074 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m44906_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m44907(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7074 *, String_t*, double, const MethodInfo*))Dictionary_2_set_Item_m44908_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m44909(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7074 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44910_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m44911(__this, ___size, method) (( void (*) (Dictionary_2_t7074 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44912_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m44913(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7074 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44914_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m44915(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7075  (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_make_pair_m44916_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Double>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m44917(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_pick_key_m44918_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m44919(__this /* static, unused */, ___key, ___value, method) (( double (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_pick_value_m44920_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m44921(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7074 *, KeyValuePair_2U5BU5D_t7841*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44922_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Resize()
#define Dictionary_2_Resize_m44923(__this, method) (( void (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_Resize_m44924_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Add(TKey,TValue)
#define Dictionary_2_Add_m44925(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7074 *, String_t*, double, const MethodInfo*))Dictionary_2_Add_m44926_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Clear()
#define Dictionary_2_Clear_m44927(__this, method) (( void (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_Clear_m44928_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m44929(__this, ___key, method) (( bool (*) (Dictionary_2_t7074 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m44930_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m44931(__this, ___value, method) (( bool (*) (Dictionary_2_t7074 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m44932_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m44933(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7074 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m44934_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m44935(__this, ___sender, method) (( void (*) (Dictionary_2_t7074 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44936_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::Remove(TKey)
#define Dictionary_2_Remove_m44937(__this, ___key, method) (( bool (*) (Dictionary_2_t7074 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m44938_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m44939(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7074 *, String_t*, double*, const MethodInfo*))Dictionary_2_TryGetValue_m44940_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Keys()
#define Dictionary_2_get_Keys_m44941(__this, method) (( KeyCollection_t7076 * (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_get_Keys_m44942_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Values()
#define Dictionary_2_get_Values_m44943(__this, method) (( ValueCollection_t7077 * (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_get_Values_m44944_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Double>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m44945(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7074 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44946_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m44947(__this, ___value, method) (( double (*) (Dictionary_2_t7074 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44948_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m44949(__this, ___pair, method) (( bool (*) (Dictionary_2_t7074 *, KeyValuePair_2_t7075 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44950_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m44951(__this, method) (( Enumerator_t7078  (*) (Dictionary_2_t7074 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44952_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Double>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m44953(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44954_gshared)(__this /* static, unused */, ___key, ___value, method)
