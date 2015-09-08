#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>
struct Dictionary_2_t1247;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Type,System.Type>>
struct ICollection_1_t9723;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t9734;
// System.Collections.ICollection
struct ICollection_t772;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1462;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Type>
struct KeyCollection_t6676;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>
struct ValueCollection_t6677;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<System.Type,System.Type>>
struct IEqualityComparer_1_t6647;
// System.Collections.Generic.IDictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>
struct IDictionary_2_t9735;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Type>[]
struct KeyValuePair_2U5BU5D_t9736;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Type>>
struct IEnumerator_1_t9737;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t802;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Type>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_42.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Type>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__37.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_52MethodDeclarations.h"
#define Dictionary_2__ctor_m7630(__this, method) (( void (*) (Dictionary_2_t1247 *, const MethodInfo*))Dictionary_2__ctor_m26148_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m36975(__this, ___comparer, method) (( void (*) (Dictionary_2_t1247 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26150_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m36976(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1247 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26152_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Int32)
#define Dictionary_2__ctor_m36977(__this, ___capacity, method) (( void (*) (Dictionary_2_t1247 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26154_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m36978(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1247 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26156_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m36979(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1247 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2__ctor_m26158_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m36980(__this, method) (( Object_t* (*) (Dictionary_2_t1247 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26160_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m36981(__this, method) (( Object_t* (*) (Dictionary_2_t1247 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26162_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m36982(__this, method) (( Object_t * (*) (Dictionary_2_t1247 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26164_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m36983(__this, method) (( Object_t * (*) (Dictionary_2_t1247 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m26166_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m36984(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1247 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26168_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m36985(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1247 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26170_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m36986(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1247 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26172_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m36987(__this, ___key, method) (( bool (*) (Dictionary_2_t1247 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26174_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m36988(__this, ___key, method) (( void (*) (Dictionary_2_t1247 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26176_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m36989(__this, method) (( bool (*) (Dictionary_2_t1247 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26178_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m36990(__this, method) (( Object_t * (*) (Dictionary_2_t1247 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26180_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m36991(__this, method) (( bool (*) (Dictionary_2_t1247 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26182_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m36992(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1247 *, KeyValuePair_2_t6675 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26184_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m36993(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1247 *, KeyValuePair_2_t6675 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26186_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m36994(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1247 *, KeyValuePair_2U5BU5D_t9736*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26188_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m36995(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1247 *, KeyValuePair_2_t6675 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26190_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m36996(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1247 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26192_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m36997(__this, method) (( Object_t * (*) (Dictionary_2_t1247 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26194_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m36998(__this, method) (( Object_t* (*) (Dictionary_2_t1247 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26196_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m36999(__this, method) (( Object_t * (*) (Dictionary_2_t1247 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26198_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Count()
#define Dictionary_2_get_Count_m37000(__this, method) (( int32_t (*) (Dictionary_2_t1247 *, const MethodInfo*))Dictionary_2_get_Count_m26200_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Item(TKey)
#define Dictionary_2_get_Item_m37001(__this, ___key, method) (( Type_t * (*) (Dictionary_2_t1247 *, Tuple_2_t1462 *, const MethodInfo*))Dictionary_2_get_Item_m26202_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m37002(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1247 *, Tuple_2_t1462 *, Type_t *, const MethodInfo*))Dictionary_2_set_Item_m26204_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m37003(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1247 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26206_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m37004(__this, ___size, method) (( void (*) (Dictionary_2_t1247 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26208_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m37005(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1247 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26210_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m37006(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6675  (*) (Object_t * /* static, unused */, Tuple_2_t1462 *, Type_t *, const MethodInfo*))Dictionary_2_make_pair_m26212_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m37007(__this /* static, unused */, ___key, ___value, method) (( Tuple_2_t1462 * (*) (Object_t * /* static, unused */, Tuple_2_t1462 *, Type_t *, const MethodInfo*))Dictionary_2_pick_key_m26214_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m37008(__this /* static, unused */, ___key, ___value, method) (( Type_t * (*) (Object_t * /* static, unused */, Tuple_2_t1462 *, Type_t *, const MethodInfo*))Dictionary_2_pick_value_m26216_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m37009(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1247 *, KeyValuePair_2U5BU5D_t9736*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26218_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Resize()
#define Dictionary_2_Resize_m37010(__this, method) (( void (*) (Dictionary_2_t1247 *, const MethodInfo*))Dictionary_2_Resize_m26220_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Add(TKey,TValue)
#define Dictionary_2_Add_m37011(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1247 *, Tuple_2_t1462 *, Type_t *, const MethodInfo*))Dictionary_2_Add_m26222_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Clear()
#define Dictionary_2_Clear_m37012(__this, method) (( void (*) (Dictionary_2_t1247 *, const MethodInfo*))Dictionary_2_Clear_m26224_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m37013(__this, ___key, method) (( bool (*) (Dictionary_2_t1247 *, Tuple_2_t1462 *, const MethodInfo*))Dictionary_2_ContainsKey_m26226_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m37014(__this, ___value, method) (( bool (*) (Dictionary_2_t1247 *, Type_t *, const MethodInfo*))Dictionary_2_ContainsValue_m26228_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m37015(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1247 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2_GetObjectData_m26230_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m37016(__this, ___sender, method) (( void (*) (Dictionary_2_t1247 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26232_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Remove(TKey)
#define Dictionary_2_Remove_m37017(__this, ___key, method) (( bool (*) (Dictionary_2_t1247 *, Tuple_2_t1462 *, const MethodInfo*))Dictionary_2_Remove_m26234_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m37018(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1247 *, Tuple_2_t1462 *, Type_t **, const MethodInfo*))Dictionary_2_TryGetValue_m26236_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Keys()
#define Dictionary_2_get_Keys_m37019(__this, method) (( KeyCollection_t6676 * (*) (Dictionary_2_t1247 *, const MethodInfo*))Dictionary_2_get_Keys_m26237_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Values()
#define Dictionary_2_get_Values_m37020(__this, method) (( ValueCollection_t6677 * (*) (Dictionary_2_t1247 *, const MethodInfo*))Dictionary_2_get_Values_m26239_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m37021(__this, ___key, method) (( Tuple_2_t1462 * (*) (Dictionary_2_t1247 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26241_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m37022(__this, ___value, method) (( Type_t * (*) (Dictionary_2_t1247 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26243_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m37023(__this, ___pair, method) (( bool (*) (Dictionary_2_t1247 *, KeyValuePair_2_t6675 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26245_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m37024(__this, method) (( Enumerator_t6678  (*) (Dictionary_2_t1247 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26246_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m37025(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2160  (*) (Object_t * /* static, unused */, Tuple_2_t1462 *, Type_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m26248_gshared)(__this /* static, unused */, ___key, ___value, method)
