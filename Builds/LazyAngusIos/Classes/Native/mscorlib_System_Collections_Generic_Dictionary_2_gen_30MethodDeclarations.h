#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1580;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1235;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t4579;
// System.Collections.ICollection
struct ICollection_t590;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t4042;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t4043;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3299;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t4580;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1245;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t4581;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerator_1_t4582;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1441;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_43.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__38.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_41MethodDeclarations.h"
#define Dictionary_2__ctor_m27265(__this, method) (( void (*) (Dictionary_2_t1580 *, const MethodInfo*))Dictionary_2__ctor_m27266_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m8818(__this, ___comparer, method) (( void (*) (Dictionary_2_t1580 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27267_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m27268(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1580 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27269_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Int32)
#define Dictionary_2__ctor_m27270(__this, ___capacity, method) (( void (*) (Dictionary_2_t1580 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m27271_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m27272(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1580 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27273_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m27274(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1580 *, SerializationInfo_t1245 *, StreamingContext_t1246 , const MethodInfo*))Dictionary_2__ctor_m27275_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27276(__this, method) (( Object_t* (*) (Dictionary_2_t1580 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27277_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27278(__this, method) (( Object_t* (*) (Dictionary_2_t1580 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27279_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m27280(__this, method) (( Object_t * (*) (Dictionary_2_t1580 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m27281_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m27282(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1580 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m27283_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m27284(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1580 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m27285_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m27286(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1580 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m27287_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m27288(__this, ___key, method) (( bool (*) (Dictionary_2_t1580 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m27289_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m27290(__this, ___key, method) (( void (*) (Dictionary_2_t1580 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m27291_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27292(__this, method) (( bool (*) (Dictionary_2_t1580 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27293_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27294(__this, method) (( Object_t * (*) (Dictionary_2_t1580 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27295_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27296(__this, method) (( bool (*) (Dictionary_2_t1580 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27297_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27298(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1580 *, KeyValuePair_2_t4041 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27299_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27300(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1580 *, KeyValuePair_2_t4041 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27301_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27302(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1580 *, KeyValuePair_2U5BU5D_t4581*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27303_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27304(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1580 *, KeyValuePair_2_t4041 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27305_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m27306(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1580 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m27307_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27308(__this, method) (( Object_t * (*) (Dictionary_2_t1580 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27309_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27310(__this, method) (( Object_t* (*) (Dictionary_2_t1580 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27311_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27312(__this, method) (( Object_t * (*) (Dictionary_2_t1580 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27313_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Count()
#define Dictionary_2_get_Count_m27314(__this, method) (( int32_t (*) (Dictionary_2_t1580 *, const MethodInfo*))Dictionary_2_get_Count_m27315_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(TKey)
#define Dictionary_2_get_Item_m27316(__this, ___key, method) (( bool (*) (Dictionary_2_t1580 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m27317_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m27318(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1580 *, String_t*, bool, const MethodInfo*))Dictionary_2_set_Item_m27319_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m27320(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1580 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m27321_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m27322(__this, ___size, method) (( void (*) (Dictionary_2_t1580 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m27323_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m27324(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1580 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m27325_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m27326(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4041  (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_make_pair_m27327_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m27328(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_pick_key_m27329_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m27330(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_pick_value_m27331_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m27332(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1580 *, KeyValuePair_2U5BU5D_t4581*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m27333_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Resize()
#define Dictionary_2_Resize_m27334(__this, method) (( void (*) (Dictionary_2_t1580 *, const MethodInfo*))Dictionary_2_Resize_m27335_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
#define Dictionary_2_Add_m27336(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1580 *, String_t*, bool, const MethodInfo*))Dictionary_2_Add_m27337_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Clear()
#define Dictionary_2_Clear_m27338(__this, method) (( void (*) (Dictionary_2_t1580 *, const MethodInfo*))Dictionary_2_Clear_m27339_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m27340(__this, ___key, method) (( bool (*) (Dictionary_2_t1580 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m27341_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m27342(__this, ___value, method) (( bool (*) (Dictionary_2_t1580 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m27343_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m27344(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1580 *, SerializationInfo_t1245 *, StreamingContext_t1246 , const MethodInfo*))Dictionary_2_GetObjectData_m27345_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m27346(__this, ___sender, method) (( void (*) (Dictionary_2_t1580 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m27347_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Remove(TKey)
#define Dictionary_2_Remove_m27348(__this, ___key, method) (( bool (*) (Dictionary_2_t1580 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m27349_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m27350(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1580 *, String_t*, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m27351_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Keys()
#define Dictionary_2_get_Keys_m27352(__this, method) (( KeyCollection_t4042 * (*) (Dictionary_2_t1580 *, const MethodInfo*))Dictionary_2_get_Keys_m27353_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Values()
#define Dictionary_2_get_Values_m27354(__this, method) (( ValueCollection_t4043 * (*) (Dictionary_2_t1580 *, const MethodInfo*))Dictionary_2_get_Values_m27355_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m27356(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1580 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m27357_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m27358(__this, ___value, method) (( bool (*) (Dictionary_2_t1580 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m27359_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m27360(__this, ___pair, method) (( bool (*) (Dictionary_2_t1580 *, KeyValuePair_2_t4041 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m27361_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m27362(__this, method) (( Enumerator_t4044  (*) (Dictionary_2_t1580 *, const MethodInfo*))Dictionary_2_GetEnumerator_m27363_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m27364(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1708  (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m27365_gshared)(__this /* static, unused */, ___key, ___value, method)
