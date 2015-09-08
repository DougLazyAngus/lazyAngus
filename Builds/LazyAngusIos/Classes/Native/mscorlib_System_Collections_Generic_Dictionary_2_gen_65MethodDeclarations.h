#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.DateTime>
struct Dictionary_2_t7677;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9848;
// System.Collections.ICollection
struct ICollection_t772;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.DateTime>
struct KeyCollection_t7679;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>
struct ValueCollection_t7680;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5771;
// System.Collections.Generic.IDictionary`2<System.String,System.DateTime>
struct IDictionary_2_t7593;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t8557;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct IEnumerator_1_t8540;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t802;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_59.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__53.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_66MethodDeclarations.h"
#define Dictionary_2__ctor_m49936(__this, method) (( void (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2__ctor_m49937_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m49938(__this, ___comparer, method) (( void (*) (Dictionary_2_t7677 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49939_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m49940(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7677 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49941_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Int32)
#define Dictionary_2__ctor_m49942(__this, ___capacity, method) (( void (*) (Dictionary_2_t7677 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m49943_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m49944(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7677 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49945_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m49946(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7677 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2__ctor_m49947_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49948(__this, method) (( Object_t* (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49949_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49950(__this, method) (( Object_t* (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49951_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m49952(__this, method) (( Object_t * (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m49953_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m49954(__this, method) (( Object_t * (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m49955_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m49956(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7677 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m49957_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m49958(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7677 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m49959_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m49960(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7677 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m49961_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m49962(__this, ___key, method) (( bool (*) (Dictionary_2_t7677 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m49963_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m49964(__this, ___key, method) (( void (*) (Dictionary_2_t7677 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m49965_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49966(__this, method) (( bool (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49967_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49968(__this, method) (( Object_t * (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49969_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49970(__this, method) (( bool (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49971_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49972(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7677 *, KeyValuePair_2_t7678 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49973_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49974(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7677 *, KeyValuePair_2_t7678 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49975_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49976(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7677 *, KeyValuePair_2U5BU5D_t8557*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49977_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49978(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7677 *, KeyValuePair_2_t7678 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49979_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m49980(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7677 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m49981_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49982(__this, method) (( Object_t * (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49983_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49984(__this, method) (( Object_t* (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49985_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49986(__this, method) (( Object_t * (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49987_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Count()
#define Dictionary_2_get_Count_m49988(__this, method) (( int32_t (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_get_Count_m49989_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Item(TKey)
#define Dictionary_2_get_Item_m49990(__this, ___key, method) (( DateTime_t287  (*) (Dictionary_2_t7677 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m49991_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m49992(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7677 *, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_set_Item_m49993_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m49994(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7677 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m49995_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m49996(__this, ___size, method) (( void (*) (Dictionary_2_t7677 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m49997_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m49998(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7677 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m49999_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m50000(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7678  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_make_pair_m50001_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m50002(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_key_m50003_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m50004(__this /* static, unused */, ___key, ___value, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_value_m50005_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m50006(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7677 *, KeyValuePair_2U5BU5D_t8557*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m50007_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Resize()
#define Dictionary_2_Resize_m50008(__this, method) (( void (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_Resize_m50009_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Add(TKey,TValue)
#define Dictionary_2_Add_m50010(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7677 *, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_Add_m50011_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Clear()
#define Dictionary_2_Clear_m50012(__this, method) (( void (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_Clear_m50013_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m50014(__this, ___key, method) (( bool (*) (Dictionary_2_t7677 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m50015_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m50016(__this, ___value, method) (( bool (*) (Dictionary_2_t7677 *, DateTime_t287 , const MethodInfo*))Dictionary_2_ContainsValue_m50017_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m50018(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7677 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2_GetObjectData_m50019_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m50020(__this, ___sender, method) (( void (*) (Dictionary_2_t7677 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m50021_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Remove(TKey)
#define Dictionary_2_Remove_m50022(__this, ___key, method) (( bool (*) (Dictionary_2_t7677 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m50023_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m50024(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7677 *, String_t*, DateTime_t287 *, const MethodInfo*))Dictionary_2_TryGetValue_m50025_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Keys()
#define Dictionary_2_get_Keys_m50026(__this, method) (( KeyCollection_t7679 * (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_get_Keys_m50027_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Values()
#define Dictionary_2_get_Values_m50028(__this, method) (( ValueCollection_t7680 * (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_get_Values_m50029_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m50030(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7677 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m50031_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m50032(__this, ___value, method) (( DateTime_t287  (*) (Dictionary_2_t7677 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m50033_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m50034(__this, ___pair, method) (( bool (*) (Dictionary_2_t7677 *, KeyValuePair_2_t7678 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m50035_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m50036(__this, method) (( Enumerator_t7681  (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_GetEnumerator_m50037_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m50038(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2160  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m50039_gshared)(__this /* static, unused */, ___key, ___value, method)
