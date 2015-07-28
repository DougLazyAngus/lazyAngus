﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>
struct Dictionary_2_t1449;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Type,System.String>>
struct ICollection_1_t9054;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.ICollection
struct ICollection_t697;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Tuple`2<System.Type,System.String>
struct Tuple_2_t1440;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>
struct KeyCollection_t6165;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>
struct ValueCollection_t6166;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<System.Type,System.String>>
struct IEqualityComparer_1_t6162;
// System.Collections.Generic.IDictionary`2<System.Tuple`2<System.Type,System.String>,System.String>
struct IDictionary_2_t1213;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>[]
struct KeyValuePair_2U5BU5D_t9055;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>>
struct IEnumerator_1_t9056;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3902;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_48.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.String>,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__44.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_47MethodDeclarations.h"
#define Dictionary_2__ctor_m7307(__this, method) (( void (*) (Dictionary_2_t1449 *, const MethodInfo*))Dictionary_2__ctor_m21476_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33323(__this, ___comparer, method) (( void (*) (Dictionary_2_t1449 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21478_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m33324(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1449 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21480_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Int32)
#define Dictionary_2__ctor_m33325(__this, ___capacity, method) (( void (*) (Dictionary_2_t1449 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21482_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33326(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1449 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21484_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m33327(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1449 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2__ctor_m21486_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33328(__this, method) (( Object_t* (*) (Dictionary_2_t1449 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21488_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33329(__this, method) (( Object_t* (*) (Dictionary_2_t1449 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21490_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33330(__this, method) (( Object_t * (*) (Dictionary_2_t1449 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21492_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33331(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1449 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21494_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33332(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1449 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21496_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m33333(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1449 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21498_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m33334(__this, ___key, method) (( bool (*) (Dictionary_2_t1449 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21500_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m33335(__this, ___key, method) (( void (*) (Dictionary_2_t1449 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21502_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33336(__this, method) (( bool (*) (Dictionary_2_t1449 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21504_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33337(__this, method) (( Object_t * (*) (Dictionary_2_t1449 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21506_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33338(__this, method) (( bool (*) (Dictionary_2_t1449 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21508_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33339(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1449 *, KeyValuePair_2_t6164 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21510_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33340(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1449 *, KeyValuePair_2_t6164 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21512_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33341(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1449 *, KeyValuePair_2U5BU5D_t9055*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21514_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33342(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1449 *, KeyValuePair_2_t6164 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21516_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33343(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1449 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21518_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33344(__this, method) (( Object_t * (*) (Dictionary_2_t1449 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21520_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33345(__this, method) (( Object_t* (*) (Dictionary_2_t1449 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21522_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33346(__this, method) (( Object_t * (*) (Dictionary_2_t1449 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21524_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::get_Count()
#define Dictionary_2_get_Count_m33347(__this, method) (( int32_t (*) (Dictionary_2_t1449 *, const MethodInfo*))Dictionary_2_get_Count_m21526_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::get_Item(TKey)
#define Dictionary_2_get_Item_m33348(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1449 *, Tuple_2_t1440 *, const MethodInfo*))Dictionary_2_get_Item_m21528_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m33349(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1449 *, Tuple_2_t1440 *, String_t*, const MethodInfo*))Dictionary_2_set_Item_m21530_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m33350(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1449 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21532_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m33351(__this, ___size, method) (( void (*) (Dictionary_2_t1449 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21534_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m33352(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1449 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21536_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m33353(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6164  (*) (Object_t * /* static, unused */, Tuple_2_t1440 *, String_t*, const MethodInfo*))Dictionary_2_make_pair_m21538_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m33354(__this /* static, unused */, ___key, ___value, method) (( Tuple_2_t1440 * (*) (Object_t * /* static, unused */, Tuple_2_t1440 *, String_t*, const MethodInfo*))Dictionary_2_pick_key_m21540_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m33355(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, Tuple_2_t1440 *, String_t*, const MethodInfo*))Dictionary_2_pick_value_m21542_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m33356(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1449 *, KeyValuePair_2U5BU5D_t9055*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21544_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Resize()
#define Dictionary_2_Resize_m33357(__this, method) (( void (*) (Dictionary_2_t1449 *, const MethodInfo*))Dictionary_2_Resize_m21546_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Add(TKey,TValue)
#define Dictionary_2_Add_m33358(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1449 *, Tuple_2_t1440 *, String_t*, const MethodInfo*))Dictionary_2_Add_m21548_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Clear()
#define Dictionary_2_Clear_m33359(__this, method) (( void (*) (Dictionary_2_t1449 *, const MethodInfo*))Dictionary_2_Clear_m21550_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m33360(__this, ___key, method) (( bool (*) (Dictionary_2_t1449 *, Tuple_2_t1440 *, const MethodInfo*))Dictionary_2_ContainsKey_m21552_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m33361(__this, ___value, method) (( bool (*) (Dictionary_2_t1449 *, String_t*, const MethodInfo*))Dictionary_2_ContainsValue_m21554_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m33362(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1449 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2_GetObjectData_m21556_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m33363(__this, ___sender, method) (( void (*) (Dictionary_2_t1449 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21558_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Remove(TKey)
#define Dictionary_2_Remove_m33364(__this, ___key, method) (( bool (*) (Dictionary_2_t1449 *, Tuple_2_t1440 *, const MethodInfo*))Dictionary_2_Remove_m21560_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m33365(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1449 *, Tuple_2_t1440 *, String_t**, const MethodInfo*))Dictionary_2_TryGetValue_m21562_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::get_Keys()
#define Dictionary_2_get_Keys_m33366(__this, method) (( KeyCollection_t6165 * (*) (Dictionary_2_t1449 *, const MethodInfo*))Dictionary_2_get_Keys_m21563_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::get_Values()
#define Dictionary_2_get_Values_m33367(__this, method) (( ValueCollection_t6166 * (*) (Dictionary_2_t1449 *, const MethodInfo*))Dictionary_2_get_Values_m21565_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m33368(__this, ___key, method) (( Tuple_2_t1440 * (*) (Dictionary_2_t1449 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21567_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m33369(__this, ___value, method) (( String_t* (*) (Dictionary_2_t1449 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21569_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m33370(__this, ___pair, method) (( bool (*) (Dictionary_2_t1449 *, KeyValuePair_2_t6164 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21571_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m33371(__this, method) (( Enumerator_t6167  (*) (Dictionary_2_t1449 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21572_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m33372(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2080  (*) (Object_t * /* static, unused */, Tuple_2_t1440 *, String_t*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21574_gshared)(__this /* static, unused */, ___key, ___value, method)
