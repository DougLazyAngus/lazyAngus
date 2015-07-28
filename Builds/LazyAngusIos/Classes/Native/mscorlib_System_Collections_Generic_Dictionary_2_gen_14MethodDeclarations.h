#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,FBScore>
struct Dictionary_2_t273;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<FBScore>
struct ICollection_1_t8753;
// System.Collections.ICollection
struct ICollection_t697;
// System.Object
struct Object_t;
// FBScore
struct FBScore_t293;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,FBScore>
struct KeyCollection_t5522;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>
struct ValueCollection_t5523;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5324;
// System.Collections.Generic.IDictionary`2<System.String,FBScore>
struct IDictionary_2_t8754;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Collections.Generic.KeyValuePair`2<System.String,FBScore>[]
struct KeyValuePair_2U5BU5D_t8755;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,FBScore>>
struct IEnumerator_1_t8756;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3902;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,FBScore>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,FBScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_47MethodDeclarations.h"
#define Dictionary_2__ctor_m3565(__this, method) (( void (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2__ctor_m21476_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24277(__this, ___comparer, method) (( void (*) (Dictionary_2_t273 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21478_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m24278(__this, ___dictionary, method) (( void (*) (Dictionary_2_t273 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21480_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Int32)
#define Dictionary_2__ctor_m24279(__this, ___capacity, method) (( void (*) (Dictionary_2_t273 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21482_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24280(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t273 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21484_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m24281(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t273 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2__ctor_m21486_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24282(__this, method) (( Object_t* (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21488_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24283(__this, method) (( Object_t* (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21490_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m24284(__this, method) (( Object_t * (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21492_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24285(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t273 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21494_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24286(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t273 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21496_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m24287(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t273 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21498_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m24288(__this, ___key, method) (( bool (*) (Dictionary_2_t273 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21500_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m24289(__this, ___key, method) (( void (*) (Dictionary_2_t273 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21502_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24290(__this, method) (( bool (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21504_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24291(__this, method) (( Object_t * (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21506_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24292(__this, method) (( bool (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21508_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24293(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t273 *, KeyValuePair_2_t695 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21510_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24294(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t273 *, KeyValuePair_2_t695 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21512_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24295(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t273 *, KeyValuePair_2U5BU5D_t8755*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21514_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24296(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t273 *, KeyValuePair_2_t695 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21516_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24297(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t273 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21518_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24298(__this, method) (( Object_t * (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21520_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24299(__this, method) (( Object_t* (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21522_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24300(__this, method) (( Object_t * (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21524_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Count()
#define Dictionary_2_get_Count_m24301(__this, method) (( int32_t (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_get_Count_m21526_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Item(TKey)
#define Dictionary_2_get_Item_m24302(__this, ___key, method) (( FBScore_t293 * (*) (Dictionary_2_t273 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21528_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m24303(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t273 *, String_t*, FBScore_t293 *, const MethodInfo*))Dictionary_2_set_Item_m21530_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m24304(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t273 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21532_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m24305(__this, ___size, method) (( void (*) (Dictionary_2_t273 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21534_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m24306(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t273 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21536_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m24307(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t695  (*) (Object_t * /* static, unused */, String_t*, FBScore_t293 *, const MethodInfo*))Dictionary_2_make_pair_m21538_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBScore>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m24308(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, FBScore_t293 *, const MethodInfo*))Dictionary_2_pick_key_m21540_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m24309(__this /* static, unused */, ___key, ___value, method) (( FBScore_t293 * (*) (Object_t * /* static, unused */, String_t*, FBScore_t293 *, const MethodInfo*))Dictionary_2_pick_value_m21542_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m24310(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t273 *, KeyValuePair_2U5BU5D_t8755*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21544_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Resize()
#define Dictionary_2_Resize_m24311(__this, method) (( void (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_Resize_m21546_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Add(TKey,TValue)
#define Dictionary_2_Add_m24312(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t273 *, String_t*, FBScore_t293 *, const MethodInfo*))Dictionary_2_Add_m21548_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Clear()
#define Dictionary_2_Clear_m24313(__this, method) (( void (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_Clear_m21550_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m24314(__this, ___key, method) (( bool (*) (Dictionary_2_t273 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21552_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m24315(__this, ___value, method) (( bool (*) (Dictionary_2_t273 *, FBScore_t293 *, const MethodInfo*))Dictionary_2_ContainsValue_m21554_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m24316(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t273 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2_GetObjectData_m21556_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m24317(__this, ___sender, method) (( void (*) (Dictionary_2_t273 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21558_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::Remove(TKey)
#define Dictionary_2_Remove_m24318(__this, ___key, method) (( bool (*) (Dictionary_2_t273 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21560_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m24319(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t273 *, String_t*, FBScore_t293 **, const MethodInfo*))Dictionary_2_TryGetValue_m21562_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Keys()
#define Dictionary_2_get_Keys_m24320(__this, method) (( KeyCollection_t5522 * (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_get_Keys_m21563_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Values()
#define Dictionary_2_get_Values_m24321(__this, method) (( ValueCollection_t5523 * (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_get_Values_m21565_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBScore>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m24322(__this, ___key, method) (( String_t* (*) (Dictionary_2_t273 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21567_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m24323(__this, ___value, method) (( FBScore_t293 * (*) (Dictionary_2_t273 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21569_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m24324(__this, ___pair, method) (( bool (*) (Dictionary_2_t273 *, KeyValuePair_2_t695 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21571_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3593(__this, method) (( Enumerator_t696  (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21572_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,FBScore>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m24325(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2080  (*) (Object_t * /* static, unused */, String_t*, FBScore_t293 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21574_gshared)(__this /* static, unused */, ___key, ___value, method)
