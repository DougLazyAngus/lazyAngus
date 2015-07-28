#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6109;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8972;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9030;
// System.Collections.ICollection
struct ICollection_t697;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>
struct KeyCollection_t6110;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>
struct ValueCollection_t6114;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t5924;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>
struct IDictionary_2_t6103;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>[]
struct KeyValuePair_2U5BU5D_t9031;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
struct IEnumerator_1_t9032;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3902;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__39.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m32510_gshared (Dictionary_2_t6109 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m32510(__this, method) (( void (*) (Dictionary_2_t6109 *, const MethodInfo*))Dictionary_2__ctor_m32510_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m32511_gshared (Dictionary_2_t6109 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m32511(__this, ___comparer, method) (( void (*) (Dictionary_2_t6109 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32511_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m32512_gshared (Dictionary_2_t6109 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m32512(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6109 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32512_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m32513_gshared (Dictionary_2_t6109 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m32513(__this, ___capacity, method) (( void (*) (Dictionary_2_t6109 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m32513_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m32514_gshared (Dictionary_2_t6109 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m32514(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6109 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32514_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m32515_gshared (Dictionary_2_t6109 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m32515(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6109 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2__ctor_m32515_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32516_gshared (Dictionary_2_t6109 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32516(__this, method) (( Object_t* (*) (Dictionary_2_t6109 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32516_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32517_gshared (Dictionary_2_t6109 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32517(__this, method) (( Object_t* (*) (Dictionary_2_t6109 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32517_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m32518_gshared (Dictionary_2_t6109 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m32518(__this, method) (( Object_t * (*) (Dictionary_2_t6109 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m32518_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m32519_gshared (Dictionary_2_t6109 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m32519(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6109 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m32519_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m32520_gshared (Dictionary_2_t6109 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m32520(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6109 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m32520_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m32521_gshared (Dictionary_2_t6109 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m32521(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6109 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m32521_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m32522_gshared (Dictionary_2_t6109 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m32522(__this, ___key, method) (( bool (*) (Dictionary_2_t6109 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m32522_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m32523_gshared (Dictionary_2_t6109 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m32523(__this, ___key, method) (( void (*) (Dictionary_2_t6109 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m32523_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32524_gshared (Dictionary_2_t6109 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32524(__this, method) (( bool (*) (Dictionary_2_t6109 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32524_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32525_gshared (Dictionary_2_t6109 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32525(__this, method) (( Object_t * (*) (Dictionary_2_t6109 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32525_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32526_gshared (Dictionary_2_t6109 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32526(__this, method) (( bool (*) (Dictionary_2_t6109 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32526_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32527_gshared (Dictionary_2_t6109 * __this, KeyValuePair_2_t6106  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32527(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6109 *, KeyValuePair_2_t6106 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32527_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32528_gshared (Dictionary_2_t6109 * __this, KeyValuePair_2_t6106  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32528(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6109 *, KeyValuePair_2_t6106 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32528_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32529_gshared (Dictionary_2_t6109 * __this, KeyValuePair_2U5BU5D_t9031* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32529(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6109 *, KeyValuePair_2U5BU5D_t9031*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32529_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32530_gshared (Dictionary_2_t6109 * __this, KeyValuePair_2_t6106  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32530(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6109 *, KeyValuePair_2_t6106 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32530_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m32531_gshared (Dictionary_2_t6109 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m32531(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6109 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m32531_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32532_gshared (Dictionary_2_t6109 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32532(__this, method) (( Object_t * (*) (Dictionary_2_t6109 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32532_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32533_gshared (Dictionary_2_t6109 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32533(__this, method) (( Object_t* (*) (Dictionary_2_t6109 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32533_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32534_gshared (Dictionary_2_t6109 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32534(__this, method) (( Object_t * (*) (Dictionary_2_t6109 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32534_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m32535_gshared (Dictionary_2_t6109 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m32535(__this, method) (( int32_t (*) (Dictionary_2_t6109 *, const MethodInfo*))Dictionary_2_get_Count_m32535_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m32536_gshared (Dictionary_2_t6109 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m32536(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6109 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m32536_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m32537_gshared (Dictionary_2_t6109 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m32537(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6109 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m32537_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m32538_gshared (Dictionary_2_t6109 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m32538(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6109 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m32538_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m32539_gshared (Dictionary_2_t6109 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m32539(__this, ___size, method) (( void (*) (Dictionary_2_t6109 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m32539_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m32540_gshared (Dictionary_2_t6109 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m32540(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6109 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m32540_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6106  Dictionary_2_make_pair_m32541_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m32541(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6106  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m32541_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m32542_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m32542(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m32542_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m32543_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m32543(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m32543_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m32544_gshared (Dictionary_2_t6109 * __this, KeyValuePair_2U5BU5D_t9031* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m32544(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6109 *, KeyValuePair_2U5BU5D_t9031*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m32544_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m32545_gshared (Dictionary_2_t6109 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m32545(__this, method) (( void (*) (Dictionary_2_t6109 *, const MethodInfo*))Dictionary_2_Resize_m32545_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m32546_gshared (Dictionary_2_t6109 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m32546(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6109 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_Add_m32546_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m32547_gshared (Dictionary_2_t6109 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m32547(__this, method) (( void (*) (Dictionary_2_t6109 *, const MethodInfo*))Dictionary_2_Clear_m32547_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m32548_gshared (Dictionary_2_t6109 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m32548(__this, ___key, method) (( bool (*) (Dictionary_2_t6109 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m32548_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m32549_gshared (Dictionary_2_t6109 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m32549(__this, ___value, method) (( bool (*) (Dictionary_2_t6109 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m32549_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m32550_gshared (Dictionary_2_t6109 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m32550(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6109 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2_GetObjectData_m32550_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m32551_gshared (Dictionary_2_t6109 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m32551(__this, ___sender, method) (( void (*) (Dictionary_2_t6109 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m32551_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m32552_gshared (Dictionary_2_t6109 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m32552(__this, ___key, method) (( bool (*) (Dictionary_2_t6109 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m32552_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m32553_gshared (Dictionary_2_t6109 * __this, int64_t ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m32553(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6109 *, int64_t, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m32553_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Keys()
extern "C" KeyCollection_t6110 * Dictionary_2_get_Keys_m32554_gshared (Dictionary_2_t6109 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m32554(__this, method) (( KeyCollection_t6110 * (*) (Dictionary_2_t6109 *, const MethodInfo*))Dictionary_2_get_Keys_m32554_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Values()
extern "C" ValueCollection_t6114 * Dictionary_2_get_Values_m32555_gshared (Dictionary_2_t6109 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m32555(__this, method) (( ValueCollection_t6114 * (*) (Dictionary_2_t6109 *, const MethodInfo*))Dictionary_2_get_Values_m32555_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m32556_gshared (Dictionary_2_t6109 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m32556(__this, ___key, method) (( int64_t (*) (Dictionary_2_t6109 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m32556_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m32557_gshared (Dictionary_2_t6109 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m32557(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6109 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m32557_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m32558_gshared (Dictionary_2_t6109 * __this, KeyValuePair_2_t6106  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m32558(__this, ___pair, method) (( bool (*) (Dictionary_2_t6109 *, KeyValuePair_2_t6106 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m32558_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6112  Dictionary_2_GetEnumerator_m32559_gshared (Dictionary_2_t6109 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m32559(__this, method) (( Enumerator_t6112  (*) (Dictionary_2_t6109 *, const MethodInfo*))Dictionary_2_GetEnumerator_m32559_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2080  Dictionary_2_U3CCopyToU3Em__0_m32560_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m32560(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2080  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m32560_gshared)(__this /* static, unused */, ___key, ___value, method)
