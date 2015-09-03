#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6774;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9765;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t6775;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t6779;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1204;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t9771;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7855;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7757;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__41.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m38113_gshared (Dictionary_2_t6774 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m38113(__this, method) (( void (*) (Dictionary_2_t6774 *, const MethodInfo*))Dictionary_2__ctor_m38113_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m38114_gshared (Dictionary_2_t6774 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m38114(__this, ___comparer, method) (( void (*) (Dictionary_2_t6774 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m38114_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m38116_gshared (Dictionary_2_t6774 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m38116(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6774 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m38116_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m38118_gshared (Dictionary_2_t6774 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m38118(__this, ___capacity, method) (( void (*) (Dictionary_2_t6774 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m38118_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m38120_gshared (Dictionary_2_t6774 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m38120(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6774 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m38120_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m38122_gshared (Dictionary_2_t6774 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m38122(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6774 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m38122_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38124_gshared (Dictionary_2_t6774 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38124(__this, method) (( Object_t* (*) (Dictionary_2_t6774 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38124_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38126_gshared (Dictionary_2_t6774 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38126(__this, method) (( Object_t* (*) (Dictionary_2_t6774 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38126_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m38128_gshared (Dictionary_2_t6774 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m38128(__this, method) (( Object_t * (*) (Dictionary_2_t6774 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m38128_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m38130_gshared (Dictionary_2_t6774 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m38130(__this, method) (( Object_t * (*) (Dictionary_2_t6774 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m38130_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m38132_gshared (Dictionary_2_t6774 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m38132(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6774 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m38132_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m38134_gshared (Dictionary_2_t6774 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m38134(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6774 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m38134_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m38136_gshared (Dictionary_2_t6774 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m38136(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6774 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m38136_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m38138_gshared (Dictionary_2_t6774 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m38138(__this, ___key, method) (( bool (*) (Dictionary_2_t6774 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m38138_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m38140_gshared (Dictionary_2_t6774 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m38140(__this, ___key, method) (( void (*) (Dictionary_2_t6774 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m38140_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38142_gshared (Dictionary_2_t6774 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38142(__this, method) (( bool (*) (Dictionary_2_t6774 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38142_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38144_gshared (Dictionary_2_t6774 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38144(__this, method) (( Object_t * (*) (Dictionary_2_t6774 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38144_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38146_gshared (Dictionary_2_t6774 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38146(__this, method) (( bool (*) (Dictionary_2_t6774 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38146_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38148_gshared (Dictionary_2_t6774 * __this, KeyValuePair_2_t6751  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38148(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6774 *, KeyValuePair_2_t6751 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38148_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38150_gshared (Dictionary_2_t6774 * __this, KeyValuePair_2_t6751  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38150(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6774 *, KeyValuePair_2_t6751 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38150_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38152_gshared (Dictionary_2_t6774 * __this, KeyValuePair_2U5BU5D_t7855* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38152(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6774 *, KeyValuePair_2U5BU5D_t7855*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38152_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38154_gshared (Dictionary_2_t6774 * __this, KeyValuePair_2_t6751  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38154(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6774 *, KeyValuePair_2_t6751 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38154_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m38156_gshared (Dictionary_2_t6774 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m38156(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6774 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m38156_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38158_gshared (Dictionary_2_t6774 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38158(__this, method) (( Object_t * (*) (Dictionary_2_t6774 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38158_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38160_gshared (Dictionary_2_t6774 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38160(__this, method) (( Object_t* (*) (Dictionary_2_t6774 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38160_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38162_gshared (Dictionary_2_t6774 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38162(__this, method) (( Object_t * (*) (Dictionary_2_t6774 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38162_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m38164_gshared (Dictionary_2_t6774 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m38164(__this, method) (( int32_t (*) (Dictionary_2_t6774 *, const MethodInfo*))Dictionary_2_get_Count_m38164_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m38166_gshared (Dictionary_2_t6774 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m38166(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6774 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m38166_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m38168_gshared (Dictionary_2_t6774 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m38168(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6774 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m38168_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m38170_gshared (Dictionary_2_t6774 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m38170(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6774 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m38170_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m38172_gshared (Dictionary_2_t6774 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m38172(__this, ___size, method) (( void (*) (Dictionary_2_t6774 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m38172_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m38174_gshared (Dictionary_2_t6774 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m38174(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6774 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m38174_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6751  Dictionary_2_make_pair_m38176_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m38176(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6751  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m38176_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m38178_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m38178(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m38178_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m38180_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m38180(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m38180_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m38182_gshared (Dictionary_2_t6774 * __this, KeyValuePair_2U5BU5D_t7855* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m38182(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6774 *, KeyValuePair_2U5BU5D_t7855*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m38182_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m38184_gshared (Dictionary_2_t6774 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m38184(__this, method) (( void (*) (Dictionary_2_t6774 *, const MethodInfo*))Dictionary_2_Resize_m38184_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m38186_gshared (Dictionary_2_t6774 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m38186(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6774 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m38186_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m38188_gshared (Dictionary_2_t6774 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m38188(__this, method) (( void (*) (Dictionary_2_t6774 *, const MethodInfo*))Dictionary_2_Clear_m38188_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m38190_gshared (Dictionary_2_t6774 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m38190(__this, ___key, method) (( bool (*) (Dictionary_2_t6774 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m38190_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m38192_gshared (Dictionary_2_t6774 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m38192(__this, ___value, method) (( bool (*) (Dictionary_2_t6774 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m38192_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m38194_gshared (Dictionary_2_t6774 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m38194(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6774 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m38194_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m38196_gshared (Dictionary_2_t6774 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m38196(__this, ___sender, method) (( void (*) (Dictionary_2_t6774 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m38196_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m38198_gshared (Dictionary_2_t6774 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m38198(__this, ___key, method) (( bool (*) (Dictionary_2_t6774 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m38198_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m38200_gshared (Dictionary_2_t6774 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m38200(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6774 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m38200_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t6775 * Dictionary_2_get_Keys_m38202_gshared (Dictionary_2_t6774 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m38202(__this, method) (( KeyCollection_t6775 * (*) (Dictionary_2_t6774 *, const MethodInfo*))Dictionary_2_get_Keys_m38202_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t6779 * Dictionary_2_get_Values_m38204_gshared (Dictionary_2_t6774 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m38204(__this, method) (( ValueCollection_t6779 * (*) (Dictionary_2_t6774 *, const MethodInfo*))Dictionary_2_get_Values_m38204_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m38206_gshared (Dictionary_2_t6774 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m38206(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6774 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m38206_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m38208_gshared (Dictionary_2_t6774 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m38208(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6774 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m38208_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m38210_gshared (Dictionary_2_t6774 * __this, KeyValuePair_2_t6751  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m38210(__this, ___pair, method) (( bool (*) (Dictionary_2_t6774 *, KeyValuePair_2_t6751 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m38210_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6777  Dictionary_2_GetEnumerator_m38212_gshared (Dictionary_2_t6774 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m38212(__this, method) (( Enumerator_t6777  (*) (Dictionary_2_t6774 *, const MethodInfo*))Dictionary_2_GetEnumerator_m38212_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__2_m38214_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m38214(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m38214_gshared)(__this /* static, unused */, ___key, ___value, method)
