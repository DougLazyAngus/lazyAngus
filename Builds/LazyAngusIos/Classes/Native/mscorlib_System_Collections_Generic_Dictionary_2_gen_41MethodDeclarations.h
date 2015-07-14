#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4026;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1236;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t4583;
// System.Collections.ICollection
struct ICollection_t590;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t4029;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t4033;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3335;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t4584;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1245;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t4585;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t4586;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1441;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_42.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__37.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m27266_gshared (Dictionary_2_t4026 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m27266(__this, method) (( void (*) (Dictionary_2_t4026 *, const MethodInfo*))Dictionary_2__ctor_m27266_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27267_gshared (Dictionary_2_t4026 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27267(__this, ___comparer, method) (( void (*) (Dictionary_2_t4026 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27267_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m27269_gshared (Dictionary_2_t4026 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m27269(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4026 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27269_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m27271_gshared (Dictionary_2_t4026 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m27271(__this, ___capacity, method) (( void (*) (Dictionary_2_t4026 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m27271_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27273_gshared (Dictionary_2_t4026 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27273(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4026 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27273_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m27275_gshared (Dictionary_2_t4026 * __this, SerializationInfo_t1245 * ___info, StreamingContext_t1246  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m27275(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4026 *, SerializationInfo_t1245 *, StreamingContext_t1246 , const MethodInfo*))Dictionary_2__ctor_m27275_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27277_gshared (Dictionary_2_t4026 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27277(__this, method) (( Object_t* (*) (Dictionary_2_t4026 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27277_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27279_gshared (Dictionary_2_t4026 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27279(__this, method) (( Object_t* (*) (Dictionary_2_t4026 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27279_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m27281_gshared (Dictionary_2_t4026 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m27281(__this, method) (( Object_t * (*) (Dictionary_2_t4026 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m27281_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m27283_gshared (Dictionary_2_t4026 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m27283(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4026 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m27283_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m27285_gshared (Dictionary_2_t4026 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m27285(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4026 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m27285_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m27287_gshared (Dictionary_2_t4026 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m27287(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4026 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m27287_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m27289_gshared (Dictionary_2_t4026 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m27289(__this, ___key, method) (( bool (*) (Dictionary_2_t4026 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m27289_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m27291_gshared (Dictionary_2_t4026 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m27291(__this, ___key, method) (( void (*) (Dictionary_2_t4026 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m27291_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27293_gshared (Dictionary_2_t4026 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27293(__this, method) (( bool (*) (Dictionary_2_t4026 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27293_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27295_gshared (Dictionary_2_t4026 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27295(__this, method) (( Object_t * (*) (Dictionary_2_t4026 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27295_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27297_gshared (Dictionary_2_t4026 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27297(__this, method) (( bool (*) (Dictionary_2_t4026 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27297_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27299_gshared (Dictionary_2_t4026 * __this, KeyValuePair_2_t4027  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27299(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4026 *, KeyValuePair_2_t4027 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27299_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27301_gshared (Dictionary_2_t4026 * __this, KeyValuePair_2_t4027  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27301(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4026 *, KeyValuePair_2_t4027 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27301_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27303_gshared (Dictionary_2_t4026 * __this, KeyValuePair_2U5BU5D_t4585* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27303(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4026 *, KeyValuePair_2U5BU5D_t4585*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27303_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27305_gshared (Dictionary_2_t4026 * __this, KeyValuePair_2_t4027  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27305(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4026 *, KeyValuePair_2_t4027 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27305_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m27307_gshared (Dictionary_2_t4026 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m27307(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4026 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m27307_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27309_gshared (Dictionary_2_t4026 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27309(__this, method) (( Object_t * (*) (Dictionary_2_t4026 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27309_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27311_gshared (Dictionary_2_t4026 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27311(__this, method) (( Object_t* (*) (Dictionary_2_t4026 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27311_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27313_gshared (Dictionary_2_t4026 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27313(__this, method) (( Object_t * (*) (Dictionary_2_t4026 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27313_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m27315_gshared (Dictionary_2_t4026 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m27315(__this, method) (( int32_t (*) (Dictionary_2_t4026 *, const MethodInfo*))Dictionary_2_get_Count_m27315_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m27317_gshared (Dictionary_2_t4026 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m27317(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t4026 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m27317_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m27319_gshared (Dictionary_2_t4026 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m27319(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4026 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m27319_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m27321_gshared (Dictionary_2_t4026 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m27321(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4026 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m27321_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m27323_gshared (Dictionary_2_t4026 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m27323(__this, ___size, method) (( void (*) (Dictionary_2_t4026 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m27323_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m27325_gshared (Dictionary_2_t4026 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m27325(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4026 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m27325_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4027  Dictionary_2_make_pair_m27327_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m27327(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4027  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m27327_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m27329_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m27329(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m27329_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m27331_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m27331(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m27331_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m27333_gshared (Dictionary_2_t4026 * __this, KeyValuePair_2U5BU5D_t4585* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m27333(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4026 *, KeyValuePair_2U5BU5D_t4585*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m27333_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m27335_gshared (Dictionary_2_t4026 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m27335(__this, method) (( void (*) (Dictionary_2_t4026 *, const MethodInfo*))Dictionary_2_Resize_m27335_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m27337_gshared (Dictionary_2_t4026 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m27337(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4026 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m27337_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m27339_gshared (Dictionary_2_t4026 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m27339(__this, method) (( void (*) (Dictionary_2_t4026 *, const MethodInfo*))Dictionary_2_Clear_m27339_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m27341_gshared (Dictionary_2_t4026 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m27341(__this, ___key, method) (( bool (*) (Dictionary_2_t4026 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m27341_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m27343_gshared (Dictionary_2_t4026 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m27343(__this, ___value, method) (( bool (*) (Dictionary_2_t4026 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m27343_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m27345_gshared (Dictionary_2_t4026 * __this, SerializationInfo_t1245 * ___info, StreamingContext_t1246  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m27345(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4026 *, SerializationInfo_t1245 *, StreamingContext_t1246 , const MethodInfo*))Dictionary_2_GetObjectData_m27345_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m27347_gshared (Dictionary_2_t4026 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m27347(__this, ___sender, method) (( void (*) (Dictionary_2_t4026 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m27347_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m27349_gshared (Dictionary_2_t4026 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m27349(__this, ___key, method) (( bool (*) (Dictionary_2_t4026 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m27349_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m27351_gshared (Dictionary_2_t4026 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m27351(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4026 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m27351_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t4029 * Dictionary_2_get_Keys_m27353_gshared (Dictionary_2_t4026 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m27353(__this, method) (( KeyCollection_t4029 * (*) (Dictionary_2_t4026 *, const MethodInfo*))Dictionary_2_get_Keys_m27353_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t4033 * Dictionary_2_get_Values_m27355_gshared (Dictionary_2_t4026 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m27355(__this, method) (( ValueCollection_t4033 * (*) (Dictionary_2_t4026 *, const MethodInfo*))Dictionary_2_get_Values_m27355_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m27357_gshared (Dictionary_2_t4026 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m27357(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4026 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m27357_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m27359_gshared (Dictionary_2_t4026 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m27359(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t4026 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m27359_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m27361_gshared (Dictionary_2_t4026 * __this, KeyValuePair_2_t4027  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m27361(__this, ___pair, method) (( bool (*) (Dictionary_2_t4026 *, KeyValuePair_2_t4027 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m27361_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t4031  Dictionary_2_GetEnumerator_m27363_gshared (Dictionary_2_t4026 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m27363(__this, method) (( Enumerator_t4031  (*) (Dictionary_2_t4026 *, const MethodInfo*))Dictionary_2_GetEnumerator_m27363_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1708  Dictionary_2_U3CCopyToU3Em__0_m27365_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m27365(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1708  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m27365_gshared)(__this /* static, unused */, ___key, ___value, method)
