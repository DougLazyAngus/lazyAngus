#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct Dictionary_2_t1450;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t8992;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct ICollection_1_t9065;
// System.Collections.ICollection
struct ICollection_t696;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t636;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct KeyCollection_t6177;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct ValueCollection_t6178;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t6174;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct IDictionary_2_t1214;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2860;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>[]
struct KeyValuePair_2U5BU5D_t9066;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>>
struct IEnumerator_1_t9067;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3901;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_50.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__46.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_47MethodDeclarations.h"
#define Dictionary_2__ctor_m7309(__this, method) (( void (*) (Dictionary_2_t1450 *, const MethodInfo*))Dictionary_2__ctor_m21476_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33527(__this, ___comparer, method) (( void (*) (Dictionary_2_t1450 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21478_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m33528(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1450 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21480_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m33529(__this, ___capacity, method) (( void (*) (Dictionary_2_t1450 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21482_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33530(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1450 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21484_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m33531(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1450 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2__ctor_m21486_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33532(__this, method) (( Object_t* (*) (Dictionary_2_t1450 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21488_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33533(__this, method) (( Object_t* (*) (Dictionary_2_t1450 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21490_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33534(__this, method) (( Object_t * (*) (Dictionary_2_t1450 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21492_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33535(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1450 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21494_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33536(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1450 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21496_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m33537(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1450 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21498_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m33538(__this, ___key, method) (( bool (*) (Dictionary_2_t1450 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21500_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m33539(__this, ___key, method) (( void (*) (Dictionary_2_t1450 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21502_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33540(__this, method) (( bool (*) (Dictionary_2_t1450 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21504_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33541(__this, method) (( Object_t * (*) (Dictionary_2_t1450 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21506_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33542(__this, method) (( bool (*) (Dictionary_2_t1450 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21508_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33543(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1450 *, KeyValuePair_2_t6176 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21510_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33544(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1450 *, KeyValuePair_2_t6176 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21512_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33545(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1450 *, KeyValuePair_2U5BU5D_t9066*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21514_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33546(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1450 *, KeyValuePair_2_t6176 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21516_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33547(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1450 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21518_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33548(__this, method) (( Object_t * (*) (Dictionary_2_t1450 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21520_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33549(__this, method) (( Object_t* (*) (Dictionary_2_t1450 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21522_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33550(__this, method) (( Object_t * (*) (Dictionary_2_t1450 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21524_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::get_Count()
#define Dictionary_2_get_Count_m33551(__this, method) (( int32_t (*) (Dictionary_2_t1450 *, const MethodInfo*))Dictionary_2_get_Count_m21526_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::get_Item(TKey)
#define Dictionary_2_get_Item_m33552(__this, ___key, method) (( Object_t* (*) (Dictionary_2_t1450 *, Type_t *, const MethodInfo*))Dictionary_2_get_Item_m21528_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m33553(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1450 *, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_set_Item_m21530_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m33554(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1450 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21532_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m33555(__this, ___size, method) (( void (*) (Dictionary_2_t1450 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21534_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m33556(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1450 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21536_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m33557(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6176  (*) (Object_t * /* static, unused */, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_make_pair_m21538_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m33558(__this /* static, unused */, ___key, ___value, method) (( Type_t * (*) (Object_t * /* static, unused */, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_pick_key_m21540_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m33559(__this /* static, unused */, ___key, ___value, method) (( Object_t* (*) (Object_t * /* static, unused */, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_pick_value_m21542_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m33560(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1450 *, KeyValuePair_2U5BU5D_t9066*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21544_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::Resize()
#define Dictionary_2_Resize_m33561(__this, method) (( void (*) (Dictionary_2_t1450 *, const MethodInfo*))Dictionary_2_Resize_m21546_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::Add(TKey,TValue)
#define Dictionary_2_Add_m33562(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1450 *, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_Add_m21548_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::Clear()
#define Dictionary_2_Clear_m33563(__this, method) (( void (*) (Dictionary_2_t1450 *, const MethodInfo*))Dictionary_2_Clear_m21550_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m33564(__this, ___key, method) (( bool (*) (Dictionary_2_t1450 *, Type_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21552_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m33565(__this, ___value, method) (( bool (*) (Dictionary_2_t1450 *, Object_t*, const MethodInfo*))Dictionary_2_ContainsValue_m21554_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m33566(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1450 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2_GetObjectData_m21556_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m33567(__this, ___sender, method) (( void (*) (Dictionary_2_t1450 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21558_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::Remove(TKey)
#define Dictionary_2_Remove_m33568(__this, ___key, method) (( bool (*) (Dictionary_2_t1450 *, Type_t *, const MethodInfo*))Dictionary_2_Remove_m21560_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m33569(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1450 *, Type_t *, Object_t**, const MethodInfo*))Dictionary_2_TryGetValue_m21562_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::get_Keys()
#define Dictionary_2_get_Keys_m33570(__this, method) (( KeyCollection_t6177 * (*) (Dictionary_2_t1450 *, const MethodInfo*))Dictionary_2_get_Keys_m21563_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::get_Values()
#define Dictionary_2_get_Values_m33571(__this, method) (( ValueCollection_t6178 * (*) (Dictionary_2_t1450 *, const MethodInfo*))Dictionary_2_get_Values_m21565_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m33572(__this, ___key, method) (( Type_t * (*) (Dictionary_2_t1450 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21567_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m33573(__this, ___value, method) (( Object_t* (*) (Dictionary_2_t1450 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21569_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m33574(__this, ___pair, method) (( bool (*) (Dictionary_2_t1450 *, KeyValuePair_2_t6176 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21571_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m33575(__this, method) (( Enumerator_t6179  (*) (Dictionary_2_t1450 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21572_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.String>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m33576(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2079  (*) (Object_t * /* static, unused */, Type_t *, Object_t*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21574_gshared)(__this /* static, unused */, ___key, ___value, method)
