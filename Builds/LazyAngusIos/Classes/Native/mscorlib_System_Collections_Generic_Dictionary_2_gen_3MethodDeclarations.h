#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct Dictionary_2_t79;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1235;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct ICollection_1_t4165;
// System.Collections.ICollection
struct ICollection_t590;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<AN_PropertyTemplate>
struct List_1_t81;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct KeyCollection_t564;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct ValueCollection_t3374;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3299;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct IDictionary_2_t4166;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1245;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>[]
struct KeyValuePair_2U5BU5D_t4167;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>>
struct IEnumerator_1_t4168;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1441;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31MethodDeclarations.h"
#define Dictionary_2__ctor_m2591(__this, method) (( void (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2__ctor_m17008_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17617(__this, ___comparer, method) (( void (*) (Dictionary_2_t79 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17010_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m17618(__this, ___dictionary, method) (( void (*) (Dictionary_2_t79 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17012_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m17619(__this, ___capacity, method) (( void (*) (Dictionary_2_t79 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17014_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17620(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t79 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17016_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m17621(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t79 *, SerializationInfo_t1245 *, StreamingContext_t1246 , const MethodInfo*))Dictionary_2__ctor_m17018_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17622(__this, method) (( Object_t* (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17020_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17623(__this, method) (( Object_t* (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17022_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m17624(__this, method) (( Object_t * (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17024_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17625(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t79 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17026_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17626(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t79 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17028_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m17627(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t79 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17030_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m17628(__this, ___key, method) (( bool (*) (Dictionary_2_t79 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17032_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m17629(__this, ___key, method) (( void (*) (Dictionary_2_t79 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17034_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17630(__this, method) (( bool (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17036_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17631(__this, method) (( Object_t * (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17038_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17632(__this, method) (( bool (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17040_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17633(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t79 *, KeyValuePair_2_t3373 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17042_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17634(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t79 *, KeyValuePair_2_t3373 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17044_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17635(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t79 *, KeyValuePair_2U5BU5D_t4167*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17046_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17636(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t79 *, KeyValuePair_2_t3373 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17048_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17637(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t79 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17050_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17638(__this, method) (( Object_t * (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17052_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17639(__this, method) (( Object_t* (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17054_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17640(__this, method) (( Object_t * (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17056_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Count()
#define Dictionary_2_get_Count_m17641(__this, method) (( int32_t (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_get_Count_m17058_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(TKey)
#define Dictionary_2_get_Item_m17642(__this, ___key, method) (( List_1_t81 * (*) (Dictionary_2_t79 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m17060_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m17643(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t79 *, String_t*, List_1_t81 *, const MethodInfo*))Dictionary_2_set_Item_m17062_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m17644(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t79 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17064_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m17645(__this, ___size, method) (( void (*) (Dictionary_2_t79 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17066_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m17646(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t79 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17068_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m17647(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3373  (*) (Object_t * /* static, unused */, String_t*, List_1_t81 *, const MethodInfo*))Dictionary_2_make_pair_m17070_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m17648(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, List_1_t81 *, const MethodInfo*))Dictionary_2_pick_key_m17072_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m17649(__this /* static, unused */, ___key, ___value, method) (( List_1_t81 * (*) (Object_t * /* static, unused */, String_t*, List_1_t81 *, const MethodInfo*))Dictionary_2_pick_value_m17074_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m17650(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t79 *, KeyValuePair_2U5BU5D_t4167*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17076_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Resize()
#define Dictionary_2_Resize_m17651(__this, method) (( void (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_Resize_m17078_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Add(TKey,TValue)
#define Dictionary_2_Add_m17652(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t79 *, String_t*, List_1_t81 *, const MethodInfo*))Dictionary_2_Add_m17080_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Clear()
#define Dictionary_2_Clear_m17653(__this, method) (( void (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_Clear_m17082_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m17654(__this, ___key, method) (( bool (*) (Dictionary_2_t79 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m17084_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m17655(__this, ___value, method) (( bool (*) (Dictionary_2_t79 *, List_1_t81 *, const MethodInfo*))Dictionary_2_ContainsValue_m17086_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m17656(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t79 *, SerializationInfo_t1245 *, StreamingContext_t1246 , const MethodInfo*))Dictionary_2_GetObjectData_m17088_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m17657(__this, ___sender, method) (( void (*) (Dictionary_2_t79 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17090_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Remove(TKey)
#define Dictionary_2_Remove_m17658(__this, ___key, method) (( bool (*) (Dictionary_2_t79 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m17092_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m17659(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t79 *, String_t*, List_1_t81 **, const MethodInfo*))Dictionary_2_TryGetValue_m17094_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Keys()
#define Dictionary_2_get_Keys_m2606(__this, method) (( KeyCollection_t564 * (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_get_Keys_m17095_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Values()
#define Dictionary_2_get_Values_m17660(__this, method) (( ValueCollection_t3374 * (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_get_Values_m17097_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m17661(__this, ___key, method) (( String_t* (*) (Dictionary_2_t79 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17099_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m17662(__this, ___value, method) (( List_1_t81 * (*) (Dictionary_2_t79 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17101_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m17663(__this, ___pair, method) (( bool (*) (Dictionary_2_t79 *, KeyValuePair_2_t3373 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17103_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m17664(__this, method) (( Enumerator_t3375  (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17104_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m17665(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1708  (*) (Object_t * /* static, unused */, String_t*, List_1_t81 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17106_gshared)(__this /* static, unused */, ___key, ___value, method)
