#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3985;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1189;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t4558;
// System.Collections.ICollection
struct ICollection_t547;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t3988;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t3992;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3290;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t4559;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1198;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t4560;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t4561;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1396;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_42.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__37.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m27077_gshared (Dictionary_2_t3985 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m27077(__this, method) (( void (*) (Dictionary_2_t3985 *, const MethodInfo*))Dictionary_2__ctor_m27077_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27078_gshared (Dictionary_2_t3985 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27078(__this, ___comparer, method) (( void (*) (Dictionary_2_t3985 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27078_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m27080_gshared (Dictionary_2_t3985 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m27080(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3985 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27080_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m27082_gshared (Dictionary_2_t3985 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m27082(__this, ___capacity, method) (( void (*) (Dictionary_2_t3985 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m27082_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27084_gshared (Dictionary_2_t3985 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27084(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3985 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27084_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m27086_gshared (Dictionary_2_t3985 * __this, SerializationInfo_t1198 * ___info, StreamingContext_t1199  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m27086(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3985 *, SerializationInfo_t1198 *, StreamingContext_t1199 , const MethodInfo*))Dictionary_2__ctor_m27086_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27088_gshared (Dictionary_2_t3985 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27088(__this, method) (( Object_t* (*) (Dictionary_2_t3985 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27088_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27090_gshared (Dictionary_2_t3985 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27090(__this, method) (( Object_t* (*) (Dictionary_2_t3985 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27090_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m27092_gshared (Dictionary_2_t3985 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m27092(__this, method) (( Object_t * (*) (Dictionary_2_t3985 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m27092_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m27094_gshared (Dictionary_2_t3985 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m27094(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3985 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m27094_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m27096_gshared (Dictionary_2_t3985 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m27096(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3985 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m27096_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m27098_gshared (Dictionary_2_t3985 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m27098(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3985 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m27098_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m27100_gshared (Dictionary_2_t3985 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m27100(__this, ___key, method) (( bool (*) (Dictionary_2_t3985 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m27100_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m27102_gshared (Dictionary_2_t3985 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m27102(__this, ___key, method) (( void (*) (Dictionary_2_t3985 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m27102_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27104_gshared (Dictionary_2_t3985 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27104(__this, method) (( bool (*) (Dictionary_2_t3985 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27104_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27106_gshared (Dictionary_2_t3985 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27106(__this, method) (( Object_t * (*) (Dictionary_2_t3985 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27106_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27108_gshared (Dictionary_2_t3985 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27108(__this, method) (( bool (*) (Dictionary_2_t3985 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27108_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27110_gshared (Dictionary_2_t3985 * __this, KeyValuePair_2_t3986  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27110(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3985 *, KeyValuePair_2_t3986 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27110_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27112_gshared (Dictionary_2_t3985 * __this, KeyValuePair_2_t3986  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27112(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3985 *, KeyValuePair_2_t3986 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27112_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27114_gshared (Dictionary_2_t3985 * __this, KeyValuePair_2U5BU5D_t4560* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27114(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3985 *, KeyValuePair_2U5BU5D_t4560*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27114_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27116_gshared (Dictionary_2_t3985 * __this, KeyValuePair_2_t3986  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27116(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3985 *, KeyValuePair_2_t3986 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27116_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m27118_gshared (Dictionary_2_t3985 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m27118(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3985 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m27118_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27120_gshared (Dictionary_2_t3985 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27120(__this, method) (( Object_t * (*) (Dictionary_2_t3985 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27120_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27122_gshared (Dictionary_2_t3985 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27122(__this, method) (( Object_t* (*) (Dictionary_2_t3985 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27122_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27124_gshared (Dictionary_2_t3985 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27124(__this, method) (( Object_t * (*) (Dictionary_2_t3985 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27124_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m27126_gshared (Dictionary_2_t3985 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m27126(__this, method) (( int32_t (*) (Dictionary_2_t3985 *, const MethodInfo*))Dictionary_2_get_Count_m27126_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m27128_gshared (Dictionary_2_t3985 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m27128(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t3985 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m27128_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m27130_gshared (Dictionary_2_t3985 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m27130(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3985 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m27130_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m27132_gshared (Dictionary_2_t3985 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m27132(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3985 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m27132_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m27134_gshared (Dictionary_2_t3985 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m27134(__this, ___size, method) (( void (*) (Dictionary_2_t3985 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m27134_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m27136_gshared (Dictionary_2_t3985 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m27136(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3985 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m27136_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3986  Dictionary_2_make_pair_m27138_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m27138(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3986  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m27138_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m27140_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m27140(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m27140_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m27142_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m27142(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m27142_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m27144_gshared (Dictionary_2_t3985 * __this, KeyValuePair_2U5BU5D_t4560* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m27144(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3985 *, KeyValuePair_2U5BU5D_t4560*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m27144_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m27146_gshared (Dictionary_2_t3985 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m27146(__this, method) (( void (*) (Dictionary_2_t3985 *, const MethodInfo*))Dictionary_2_Resize_m27146_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m27148_gshared (Dictionary_2_t3985 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m27148(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3985 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m27148_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m27150_gshared (Dictionary_2_t3985 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m27150(__this, method) (( void (*) (Dictionary_2_t3985 *, const MethodInfo*))Dictionary_2_Clear_m27150_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m27152_gshared (Dictionary_2_t3985 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m27152(__this, ___key, method) (( bool (*) (Dictionary_2_t3985 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m27152_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m27154_gshared (Dictionary_2_t3985 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m27154(__this, ___value, method) (( bool (*) (Dictionary_2_t3985 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m27154_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m27156_gshared (Dictionary_2_t3985 * __this, SerializationInfo_t1198 * ___info, StreamingContext_t1199  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m27156(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3985 *, SerializationInfo_t1198 *, StreamingContext_t1199 , const MethodInfo*))Dictionary_2_GetObjectData_m27156_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m27158_gshared (Dictionary_2_t3985 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m27158(__this, ___sender, method) (( void (*) (Dictionary_2_t3985 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m27158_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m27160_gshared (Dictionary_2_t3985 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m27160(__this, ___key, method) (( bool (*) (Dictionary_2_t3985 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m27160_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m27162_gshared (Dictionary_2_t3985 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m27162(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3985 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m27162_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t3988 * Dictionary_2_get_Keys_m27164_gshared (Dictionary_2_t3985 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m27164(__this, method) (( KeyCollection_t3988 * (*) (Dictionary_2_t3985 *, const MethodInfo*))Dictionary_2_get_Keys_m27164_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t3992 * Dictionary_2_get_Values_m27166_gshared (Dictionary_2_t3985 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m27166(__this, method) (( ValueCollection_t3992 * (*) (Dictionary_2_t3985 *, const MethodInfo*))Dictionary_2_get_Values_m27166_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m27168_gshared (Dictionary_2_t3985 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m27168(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3985 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m27168_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m27170_gshared (Dictionary_2_t3985 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m27170(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t3985 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m27170_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m27172_gshared (Dictionary_2_t3985 * __this, KeyValuePair_2_t3986  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m27172(__this, ___pair, method) (( bool (*) (Dictionary_2_t3985 *, KeyValuePair_2_t3986 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m27172_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t3990  Dictionary_2_GetEnumerator_m27174_gshared (Dictionary_2_t3985 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m27174(__this, method) (( Enumerator_t3990  (*) (Dictionary_2_t3985 *, const MethodInfo*))Dictionary_2_GetEnumerator_m27174_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1663  Dictionary_2_U3CCopyToU3Em__0_m27176_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m27176(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1663  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m27176_gshared)(__this /* static, unused */, ___key, ___value, method)
