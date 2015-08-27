#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1498;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t9144;
// System.Collections.ICollection
struct ICollection_t755;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t6223;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t6224;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5380;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t1280;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t9145;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerator_1_t9146;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t785;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_47.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__42.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_56MethodDeclarations.h"
#define Dictionary_2__ctor_m7597(__this, method) (( void (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2__ctor_m33543_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m15169(__this, ___comparer, method) (( void (*) (Dictionary_2_t1498 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33544_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m33545(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1498 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33546_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Int32)
#define Dictionary_2__ctor_m33547(__this, ___capacity, method) (( void (*) (Dictionary_2_t1498 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m33548_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33549(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1498 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33550_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m33551(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1498 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2__ctor_m33552_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33553(__this, method) (( Object_t* (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33554_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33555(__this, method) (( Object_t* (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33556_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33557(__this, method) (( Object_t * (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m33558_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33559(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1498 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m33560_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33561(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1498 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m33562_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m33563(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1498 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m33564_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m33565(__this, ___key, method) (( bool (*) (Dictionary_2_t1498 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m33566_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m33567(__this, ___key, method) (( void (*) (Dictionary_2_t1498 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m33568_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33569(__this, method) (( bool (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33570_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33571(__this, method) (( Object_t * (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33572_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33573(__this, method) (( bool (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33574_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33575(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1498 *, KeyValuePair_2_t6222 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33576_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33577(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1498 *, KeyValuePair_2_t6222 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33578_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33579(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1498 *, KeyValuePair_2U5BU5D_t9145*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33580_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33581(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1498 *, KeyValuePair_2_t6222 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33582_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33583(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1498 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m33584_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33585(__this, method) (( Object_t * (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33586_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33587(__this, method) (( Object_t* (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33588_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33589(__this, method) (( Object_t * (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33590_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Count()
#define Dictionary_2_get_Count_m33591(__this, method) (( int32_t (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_get_Count_m33592_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(TKey)
#define Dictionary_2_get_Item_m33593(__this, ___key, method) (( bool (*) (Dictionary_2_t1498 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m33594_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m33595(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1498 *, String_t*, bool, const MethodInfo*))Dictionary_2_set_Item_m33596_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m33597(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1498 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m33598_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m33599(__this, ___size, method) (( void (*) (Dictionary_2_t1498 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m33600_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m33601(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1498 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m33602_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m33603(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6222  (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_make_pair_m33604_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m33605(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_pick_key_m33606_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m33607(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_pick_value_m33608_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m33609(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1498 *, KeyValuePair_2U5BU5D_t9145*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m33610_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Resize()
#define Dictionary_2_Resize_m33611(__this, method) (( void (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_Resize_m33612_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
#define Dictionary_2_Add_m33613(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1498 *, String_t*, bool, const MethodInfo*))Dictionary_2_Add_m33614_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Clear()
#define Dictionary_2_Clear_m33615(__this, method) (( void (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_Clear_m33616_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m33617(__this, ___key, method) (( bool (*) (Dictionary_2_t1498 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m33618_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m33619(__this, ___value, method) (( bool (*) (Dictionary_2_t1498 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m33620_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m33621(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1498 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2_GetObjectData_m33622_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m33623(__this, ___sender, method) (( void (*) (Dictionary_2_t1498 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m33624_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Remove(TKey)
#define Dictionary_2_Remove_m33625(__this, ___key, method) (( bool (*) (Dictionary_2_t1498 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m33626_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m33627(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1498 *, String_t*, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m33628_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Keys()
#define Dictionary_2_get_Keys_m33629(__this, method) (( KeyCollection_t6223 * (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_get_Keys_m33630_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Values()
#define Dictionary_2_get_Values_m33631(__this, method) (( ValueCollection_t6224 * (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_get_Values_m33632_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m33633(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1498 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m33634_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m33635(__this, ___value, method) (( bool (*) (Dictionary_2_t1498 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m33636_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m33637(__this, ___pair, method) (( bool (*) (Dictionary_2_t1498 *, KeyValuePair_2_t6222 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m33638_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m33639(__this, method) (( Enumerator_t6225  (*) (Dictionary_2_t1498 *, const MethodInfo*))Dictionary_2_GetEnumerator_m33640_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m33641(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2140  (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m33642_gshared)(__this /* static, unused */, ___key, ___value, method)
