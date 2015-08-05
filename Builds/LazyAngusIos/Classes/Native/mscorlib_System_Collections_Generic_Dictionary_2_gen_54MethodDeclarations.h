#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6120;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8983;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9041;
// System.Collections.ICollection
struct ICollection_t707;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>
struct KeyCollection_t6121;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>
struct ValueCollection_t6125;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t5935;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>
struct IDictionary_2_t6114;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>[]
struct KeyValuePair_2U5BU5D_t9042;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
struct IEnumerator_1_t9043;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__39.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m32588_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m32588(__this, method) (( void (*) (Dictionary_2_t6120 *, const MethodInfo*))Dictionary_2__ctor_m32588_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m32589_gshared (Dictionary_2_t6120 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m32589(__this, ___comparer, method) (( void (*) (Dictionary_2_t6120 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32589_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m32590_gshared (Dictionary_2_t6120 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m32590(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6120 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32590_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m32591_gshared (Dictionary_2_t6120 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m32591(__this, ___capacity, method) (( void (*) (Dictionary_2_t6120 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m32591_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m32592_gshared (Dictionary_2_t6120 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m32592(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6120 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32592_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m32593_gshared (Dictionary_2_t6120 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m32593(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6120 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m32593_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32594_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32594(__this, method) (( Object_t* (*) (Dictionary_2_t6120 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32594_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32595_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32595(__this, method) (( Object_t* (*) (Dictionary_2_t6120 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32595_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m32596_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m32596(__this, method) (( Object_t * (*) (Dictionary_2_t6120 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m32596_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m32597_gshared (Dictionary_2_t6120 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m32597(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6120 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m32597_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m32598_gshared (Dictionary_2_t6120 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m32598(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6120 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m32598_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m32599_gshared (Dictionary_2_t6120 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m32599(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6120 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m32599_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m32600_gshared (Dictionary_2_t6120 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m32600(__this, ___key, method) (( bool (*) (Dictionary_2_t6120 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m32600_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m32601_gshared (Dictionary_2_t6120 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m32601(__this, ___key, method) (( void (*) (Dictionary_2_t6120 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m32601_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32602_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32602(__this, method) (( bool (*) (Dictionary_2_t6120 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32602_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32603_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32603(__this, method) (( Object_t * (*) (Dictionary_2_t6120 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32603_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32604_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32604(__this, method) (( bool (*) (Dictionary_2_t6120 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32604_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32605_gshared (Dictionary_2_t6120 * __this, KeyValuePair_2_t6117  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32605(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6120 *, KeyValuePair_2_t6117 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32605_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32606_gshared (Dictionary_2_t6120 * __this, KeyValuePair_2_t6117  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32606(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6120 *, KeyValuePair_2_t6117 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32606_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32607_gshared (Dictionary_2_t6120 * __this, KeyValuePair_2U5BU5D_t9042* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32607(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6120 *, KeyValuePair_2U5BU5D_t9042*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32607_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32608_gshared (Dictionary_2_t6120 * __this, KeyValuePair_2_t6117  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32608(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6120 *, KeyValuePair_2_t6117 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32608_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m32609_gshared (Dictionary_2_t6120 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m32609(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6120 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m32609_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32610_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32610(__this, method) (( Object_t * (*) (Dictionary_2_t6120 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32610_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32611_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32611(__this, method) (( Object_t* (*) (Dictionary_2_t6120 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32611_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32612_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32612(__this, method) (( Object_t * (*) (Dictionary_2_t6120 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32612_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m32613_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m32613(__this, method) (( int32_t (*) (Dictionary_2_t6120 *, const MethodInfo*))Dictionary_2_get_Count_m32613_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m32614_gshared (Dictionary_2_t6120 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m32614(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6120 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m32614_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m32615_gshared (Dictionary_2_t6120 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m32615(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6120 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m32615_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m32616_gshared (Dictionary_2_t6120 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m32616(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6120 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m32616_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m32617_gshared (Dictionary_2_t6120 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m32617(__this, ___size, method) (( void (*) (Dictionary_2_t6120 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m32617_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m32618_gshared (Dictionary_2_t6120 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m32618(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6120 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m32618_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6117  Dictionary_2_make_pair_m32619_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m32619(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6117  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m32619_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m32620_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m32620(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m32620_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m32621_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m32621(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m32621_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m32622_gshared (Dictionary_2_t6120 * __this, KeyValuePair_2U5BU5D_t9042* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m32622(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6120 *, KeyValuePair_2U5BU5D_t9042*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m32622_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m32623_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m32623(__this, method) (( void (*) (Dictionary_2_t6120 *, const MethodInfo*))Dictionary_2_Resize_m32623_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m32624_gshared (Dictionary_2_t6120 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m32624(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6120 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_Add_m32624_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m32625_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m32625(__this, method) (( void (*) (Dictionary_2_t6120 *, const MethodInfo*))Dictionary_2_Clear_m32625_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m32626_gshared (Dictionary_2_t6120 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m32626(__this, ___key, method) (( bool (*) (Dictionary_2_t6120 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m32626_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m32627_gshared (Dictionary_2_t6120 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m32627(__this, ___value, method) (( bool (*) (Dictionary_2_t6120 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m32627_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m32628_gshared (Dictionary_2_t6120 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m32628(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6120 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m32628_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m32629_gshared (Dictionary_2_t6120 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m32629(__this, ___sender, method) (( void (*) (Dictionary_2_t6120 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m32629_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m32630_gshared (Dictionary_2_t6120 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m32630(__this, ___key, method) (( bool (*) (Dictionary_2_t6120 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m32630_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m32631_gshared (Dictionary_2_t6120 * __this, int64_t ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m32631(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6120 *, int64_t, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m32631_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Keys()
extern "C" KeyCollection_t6121 * Dictionary_2_get_Keys_m32632_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m32632(__this, method) (( KeyCollection_t6121 * (*) (Dictionary_2_t6120 *, const MethodInfo*))Dictionary_2_get_Keys_m32632_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Values()
extern "C" ValueCollection_t6125 * Dictionary_2_get_Values_m32633_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m32633(__this, method) (( ValueCollection_t6125 * (*) (Dictionary_2_t6120 *, const MethodInfo*))Dictionary_2_get_Values_m32633_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m32634_gshared (Dictionary_2_t6120 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m32634(__this, ___key, method) (( int64_t (*) (Dictionary_2_t6120 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m32634_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m32635_gshared (Dictionary_2_t6120 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m32635(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6120 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m32635_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m32636_gshared (Dictionary_2_t6120 * __this, KeyValuePair_2_t6117  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m32636(__this, ___pair, method) (( bool (*) (Dictionary_2_t6120 *, KeyValuePair_2_t6117 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m32636_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6123  Dictionary_2_GetEnumerator_m32637_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m32637(__this, method) (( Enumerator_t6123  (*) (Dictionary_2_t6120 *, const MethodInfo*))Dictionary_2_GetEnumerator_m32637_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2090  Dictionary_2_U3CCopyToU3Em__0_m32638_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m32638(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m32638_gshared)(__this /* static, unused */, ___key, ___value, method)
