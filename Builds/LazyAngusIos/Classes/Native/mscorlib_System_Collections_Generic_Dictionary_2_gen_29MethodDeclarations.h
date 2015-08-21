#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>
struct Dictionary_2_t1224;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Type,System.Type>>
struct ICollection_1_t9090;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t9101;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1439;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Type>
struct KeyCollection_t6105;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>
struct ValueCollection_t6106;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<System.Type,System.Type>>
struct IEqualityComparer_1_t6076;
// System.Collections.Generic.IDictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>
struct IDictionary_2_t9102;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Type>[]
struct KeyValuePair_2U5BU5D_t9103;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Type>>
struct IEnumerator_1_t9104;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_48MethodDeclarations.h"
#define Dictionary_2__ctor_m7448(__this, method) (( void (*) (Dictionary_2_t1224 *, const MethodInfo*))Dictionary_2__ctor_m21784_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m32354(__this, ___comparer, method) (( void (*) (Dictionary_2_t1224 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21786_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m32355(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1224 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21788_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Int32)
#define Dictionary_2__ctor_m32356(__this, ___capacity, method) (( void (*) (Dictionary_2_t1224 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21790_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m32357(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1224 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21792_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m32358(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1224 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m21794_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32359(__this, method) (( Object_t* (*) (Dictionary_2_t1224 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21796_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32360(__this, method) (( Object_t* (*) (Dictionary_2_t1224 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21798_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m32361(__this, method) (( Object_t * (*) (Dictionary_2_t1224 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21800_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m32362(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1224 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21802_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m32363(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1224 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21804_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m32364(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1224 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21806_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m32365(__this, ___key, method) (( bool (*) (Dictionary_2_t1224 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21808_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m32366(__this, ___key, method) (( void (*) (Dictionary_2_t1224 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21810_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32367(__this, method) (( bool (*) (Dictionary_2_t1224 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21812_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32368(__this, method) (( Object_t * (*) (Dictionary_2_t1224 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21814_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32369(__this, method) (( bool (*) (Dictionary_2_t1224 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21816_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32370(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1224 *, KeyValuePair_2_t6104 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21818_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32371(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1224 *, KeyValuePair_2_t6104 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21820_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32372(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1224 *, KeyValuePair_2U5BU5D_t9103*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21822_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32373(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1224 *, KeyValuePair_2_t6104 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21824_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m32374(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1224 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21826_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32375(__this, method) (( Object_t * (*) (Dictionary_2_t1224 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21828_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32376(__this, method) (( Object_t* (*) (Dictionary_2_t1224 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21830_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32377(__this, method) (( Object_t * (*) (Dictionary_2_t1224 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21832_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Count()
#define Dictionary_2_get_Count_m32378(__this, method) (( int32_t (*) (Dictionary_2_t1224 *, const MethodInfo*))Dictionary_2_get_Count_m21834_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Item(TKey)
#define Dictionary_2_get_Item_m32379(__this, ___key, method) (( Type_t * (*) (Dictionary_2_t1224 *, Tuple_2_t1439 *, const MethodInfo*))Dictionary_2_get_Item_m21836_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m32380(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1224 *, Tuple_2_t1439 *, Type_t *, const MethodInfo*))Dictionary_2_set_Item_m21838_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m32381(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1224 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21840_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m32382(__this, ___size, method) (( void (*) (Dictionary_2_t1224 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21842_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m32383(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1224 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21844_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m32384(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6104  (*) (Object_t * /* static, unused */, Tuple_2_t1439 *, Type_t *, const MethodInfo*))Dictionary_2_make_pair_m21846_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m32385(__this /* static, unused */, ___key, ___value, method) (( Tuple_2_t1439 * (*) (Object_t * /* static, unused */, Tuple_2_t1439 *, Type_t *, const MethodInfo*))Dictionary_2_pick_key_m21848_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m32386(__this /* static, unused */, ___key, ___value, method) (( Type_t * (*) (Object_t * /* static, unused */, Tuple_2_t1439 *, Type_t *, const MethodInfo*))Dictionary_2_pick_value_m21850_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m32387(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1224 *, KeyValuePair_2U5BU5D_t9103*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21852_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Resize()
#define Dictionary_2_Resize_m32388(__this, method) (( void (*) (Dictionary_2_t1224 *, const MethodInfo*))Dictionary_2_Resize_m21854_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Add(TKey,TValue)
#define Dictionary_2_Add_m32389(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1224 *, Tuple_2_t1439 *, Type_t *, const MethodInfo*))Dictionary_2_Add_m21856_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Clear()
#define Dictionary_2_Clear_m32390(__this, method) (( void (*) (Dictionary_2_t1224 *, const MethodInfo*))Dictionary_2_Clear_m21858_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m32391(__this, ___key, method) (( bool (*) (Dictionary_2_t1224 *, Tuple_2_t1439 *, const MethodInfo*))Dictionary_2_ContainsKey_m21860_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m32392(__this, ___value, method) (( bool (*) (Dictionary_2_t1224 *, Type_t *, const MethodInfo*))Dictionary_2_ContainsValue_m21862_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m32393(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1224 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m21864_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m32394(__this, ___sender, method) (( void (*) (Dictionary_2_t1224 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21866_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Remove(TKey)
#define Dictionary_2_Remove_m32395(__this, ___key, method) (( bool (*) (Dictionary_2_t1224 *, Tuple_2_t1439 *, const MethodInfo*))Dictionary_2_Remove_m21868_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m32396(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1224 *, Tuple_2_t1439 *, Type_t **, const MethodInfo*))Dictionary_2_TryGetValue_m21870_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Keys()
#define Dictionary_2_get_Keys_m32397(__this, method) (( KeyCollection_t6105 * (*) (Dictionary_2_t1224 *, const MethodInfo*))Dictionary_2_get_Keys_m21871_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Values()
#define Dictionary_2_get_Values_m32398(__this, method) (( ValueCollection_t6106 * (*) (Dictionary_2_t1224 *, const MethodInfo*))Dictionary_2_get_Values_m21873_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m32399(__this, ___key, method) (( Tuple_2_t1439 * (*) (Dictionary_2_t1224 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21875_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m32400(__this, ___value, method) (( Type_t * (*) (Dictionary_2_t1224 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21877_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m32401(__this, ___pair, method) (( bool (*) (Dictionary_2_t1224 *, KeyValuePair_2_t6104 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21879_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m32402(__this, method) (( Enumerator_t6107  (*) (Dictionary_2_t1224 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21880_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m32403(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, Tuple_2_t1439 *, Type_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21882_gshared)(__this /* static, unused */, ___key, ___value, method)
