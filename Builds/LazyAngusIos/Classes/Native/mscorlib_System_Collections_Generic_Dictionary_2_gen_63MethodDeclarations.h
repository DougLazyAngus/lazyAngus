#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>
struct Dictionary_2_t7131;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9217;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseGeoPoint>
struct KeyCollection_t7133;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.ParseGeoPoint>
struct ValueCollection_t7134;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5377;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseGeoPoint>
struct IDictionary_2_t7029;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8016;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>
struct IEnumerator_1_t7999;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_61.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__56.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_64MethodDeclarations.h"
#define Dictionary_2__ctor_m45656(__this, method) (( void (*) (Dictionary_2_t7131 *, const MethodInfo*))Dictionary_2__ctor_m45657_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m45658(__this, ___comparer, method) (( void (*) (Dictionary_2_t7131 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45659_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m45660(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7131 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45661_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor(System.Int32)
#define Dictionary_2__ctor_m45662(__this, ___capacity, method) (( void (*) (Dictionary_2_t7131 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m45663_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m45664(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7131 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45665_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m45666(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7131 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m45667_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45668(__this, method) (( Object_t* (*) (Dictionary_2_t7131 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45669_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45670(__this, method) (( Object_t* (*) (Dictionary_2_t7131 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45671_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m45672(__this, method) (( Object_t * (*) (Dictionary_2_t7131 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m45673_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m45674(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7131 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m45675_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m45676(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7131 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m45677_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m45678(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7131 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m45679_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m45680(__this, ___key, method) (( bool (*) (Dictionary_2_t7131 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m45681_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m45682(__this, ___key, method) (( void (*) (Dictionary_2_t7131 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m45683_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45684(__this, method) (( bool (*) (Dictionary_2_t7131 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45685_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45686(__this, method) (( Object_t * (*) (Dictionary_2_t7131 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45687_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45688(__this, method) (( bool (*) (Dictionary_2_t7131 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45689_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45690(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7131 *, KeyValuePair_2_t7132 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45691_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45692(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7131 *, KeyValuePair_2_t7132 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45693_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45694(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7131 *, KeyValuePair_2U5BU5D_t8016*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45695_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45696(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7131 *, KeyValuePair_2_t7132 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45697_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m45698(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7131 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m45699_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45700(__this, method) (( Object_t * (*) (Dictionary_2_t7131 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45701_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45702(__this, method) (( Object_t* (*) (Dictionary_2_t7131 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45703_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45704(__this, method) (( Object_t * (*) (Dictionary_2_t7131 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45705_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::get_Count()
#define Dictionary_2_get_Count_m45706(__this, method) (( int32_t (*) (Dictionary_2_t7131 *, const MethodInfo*))Dictionary_2_get_Count_m45707_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::get_Item(TKey)
#define Dictionary_2_get_Item_m45708(__this, ___key, method) (( ParseGeoPoint_t1245  (*) (Dictionary_2_t7131 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m45709_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m45710(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7131 *, String_t*, ParseGeoPoint_t1245 , const MethodInfo*))Dictionary_2_set_Item_m45711_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m45712(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7131 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m45713_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m45714(__this, ___size, method) (( void (*) (Dictionary_2_t7131 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m45715_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m45716(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7131 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m45717_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m45718(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7132  (*) (Object_t * /* static, unused */, String_t*, ParseGeoPoint_t1245 , const MethodInfo*))Dictionary_2_make_pair_m45719_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m45720(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, ParseGeoPoint_t1245 , const MethodInfo*))Dictionary_2_pick_key_m45721_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m45722(__this /* static, unused */, ___key, ___value, method) (( ParseGeoPoint_t1245  (*) (Object_t * /* static, unused */, String_t*, ParseGeoPoint_t1245 , const MethodInfo*))Dictionary_2_pick_value_m45723_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m45724(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7131 *, KeyValuePair_2U5BU5D_t8016*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m45725_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::Resize()
#define Dictionary_2_Resize_m45726(__this, method) (( void (*) (Dictionary_2_t7131 *, const MethodInfo*))Dictionary_2_Resize_m45727_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::Add(TKey,TValue)
#define Dictionary_2_Add_m45728(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7131 *, String_t*, ParseGeoPoint_t1245 , const MethodInfo*))Dictionary_2_Add_m45729_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::Clear()
#define Dictionary_2_Clear_m45730(__this, method) (( void (*) (Dictionary_2_t7131 *, const MethodInfo*))Dictionary_2_Clear_m45731_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m45732(__this, ___key, method) (( bool (*) (Dictionary_2_t7131 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m45733_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m45734(__this, ___value, method) (( bool (*) (Dictionary_2_t7131 *, ParseGeoPoint_t1245 , const MethodInfo*))Dictionary_2_ContainsValue_m45735_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m45736(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7131 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m45737_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m45738(__this, ___sender, method) (( void (*) (Dictionary_2_t7131 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m45739_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::Remove(TKey)
#define Dictionary_2_Remove_m45740(__this, ___key, method) (( bool (*) (Dictionary_2_t7131 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m45741_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m45742(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7131 *, String_t*, ParseGeoPoint_t1245 *, const MethodInfo*))Dictionary_2_TryGetValue_m45743_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::get_Keys()
#define Dictionary_2_get_Keys_m45744(__this, method) (( KeyCollection_t7133 * (*) (Dictionary_2_t7131 *, const MethodInfo*))Dictionary_2_get_Keys_m45745_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::get_Values()
#define Dictionary_2_get_Values_m45746(__this, method) (( ValueCollection_t7134 * (*) (Dictionary_2_t7131 *, const MethodInfo*))Dictionary_2_get_Values_m45747_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m45748(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7131 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m45749_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m45750(__this, ___value, method) (( ParseGeoPoint_t1245  (*) (Dictionary_2_t7131 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m45751_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m45752(__this, ___pair, method) (( bool (*) (Dictionary_2_t7131 *, KeyValuePair_2_t7132 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m45753_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m45754(__this, method) (( Enumerator_t7135  (*) (Dictionary_2_t7131 *, const MethodInfo*))Dictionary_2_GetEnumerator_m45755_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m45756(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, String_t*, ParseGeoPoint_t1245 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m45757_gshared)(__this /* static, unused */, ___key, ___value, method)
