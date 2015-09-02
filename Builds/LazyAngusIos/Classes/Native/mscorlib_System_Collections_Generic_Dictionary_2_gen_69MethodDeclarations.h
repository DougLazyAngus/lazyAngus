#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8376;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9120;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8742;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>
struct KeyCollection_t8377;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>
struct ValueCollection_t8381;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6042;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>
struct IDictionary_2_t8372;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>[]
struct KeyValuePair_2U5BU5D_t9620;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
struct IEnumerator_1_t9621;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_131.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__62.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m60116_gshared (Dictionary_2_t8376 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m60116(__this, method) (( void (*) (Dictionary_2_t8376 *, const MethodInfo*))Dictionary_2__ctor_m60116_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m60117_gshared (Dictionary_2_t8376 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m60117(__this, ___comparer, method) (( void (*) (Dictionary_2_t8376 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60117_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m60118_gshared (Dictionary_2_t8376 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m60118(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8376 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60118_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m60119_gshared (Dictionary_2_t8376 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m60119(__this, ___capacity, method) (( void (*) (Dictionary_2_t8376 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m60119_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m60120_gshared (Dictionary_2_t8376 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m60120(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8376 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60120_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m60121_gshared (Dictionary_2_t8376 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m60121(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8376 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m60121_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60122_gshared (Dictionary_2_t8376 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60122(__this, method) (( Object_t* (*) (Dictionary_2_t8376 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60122_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60123_gshared (Dictionary_2_t8376 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60123(__this, method) (( Object_t* (*) (Dictionary_2_t8376 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60123_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m60124_gshared (Dictionary_2_t8376 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m60124(__this, method) (( Object_t * (*) (Dictionary_2_t8376 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m60124_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m60125_gshared (Dictionary_2_t8376 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m60125(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8376 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m60125_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m60126_gshared (Dictionary_2_t8376 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m60126(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8376 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m60126_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m60127_gshared (Dictionary_2_t8376 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m60127(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8376 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m60127_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m60128_gshared (Dictionary_2_t8376 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m60128(__this, ___key, method) (( bool (*) (Dictionary_2_t8376 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m60128_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m60129_gshared (Dictionary_2_t8376 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m60129(__this, ___key, method) (( void (*) (Dictionary_2_t8376 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m60129_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60130_gshared (Dictionary_2_t8376 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60130(__this, method) (( bool (*) (Dictionary_2_t8376 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60130_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60131_gshared (Dictionary_2_t8376 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60131(__this, method) (( Object_t * (*) (Dictionary_2_t8376 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60131_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60132_gshared (Dictionary_2_t8376 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60132(__this, method) (( bool (*) (Dictionary_2_t8376 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60132_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60133_gshared (Dictionary_2_t8376 * __this, KeyValuePair_2_t8373  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60133(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8376 *, KeyValuePair_2_t8373 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60133_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60134_gshared (Dictionary_2_t8376 * __this, KeyValuePair_2_t8373  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60134(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8376 *, KeyValuePair_2_t8373 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60134_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60135_gshared (Dictionary_2_t8376 * __this, KeyValuePair_2U5BU5D_t9620* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60135(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8376 *, KeyValuePair_2U5BU5D_t9620*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60135_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60136_gshared (Dictionary_2_t8376 * __this, KeyValuePair_2_t8373  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60136(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8376 *, KeyValuePair_2_t8373 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60136_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m60137_gshared (Dictionary_2_t8376 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m60137(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8376 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m60137_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60138_gshared (Dictionary_2_t8376 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60138(__this, method) (( Object_t * (*) (Dictionary_2_t8376 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60138_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60139_gshared (Dictionary_2_t8376 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60139(__this, method) (( Object_t* (*) (Dictionary_2_t8376 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60139_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60140_gshared (Dictionary_2_t8376 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60140(__this, method) (( Object_t * (*) (Dictionary_2_t8376 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60140_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m60141_gshared (Dictionary_2_t8376 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m60141(__this, method) (( int32_t (*) (Dictionary_2_t8376 *, const MethodInfo*))Dictionary_2_get_Count_m60141_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m60142_gshared (Dictionary_2_t8376 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m60142(__this, ___key, method) (( int32_t (*) (Dictionary_2_t8376 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m60142_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m60143_gshared (Dictionary_2_t8376 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m60143(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8376 *, int64_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m60143_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m60144_gshared (Dictionary_2_t8376 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m60144(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8376 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m60144_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m60145_gshared (Dictionary_2_t8376 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m60145(__this, ___size, method) (( void (*) (Dictionary_2_t8376 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m60145_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m60146_gshared (Dictionary_2_t8376 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m60146(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8376 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m60146_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8373  Dictionary_2_make_pair_m60147_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m60147(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8373  (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m60147_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m60148_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m60148(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m60148_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m60149_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m60149(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m60149_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m60150_gshared (Dictionary_2_t8376 * __this, KeyValuePair_2U5BU5D_t9620* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m60150(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8376 *, KeyValuePair_2U5BU5D_t9620*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m60150_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m60151_gshared (Dictionary_2_t8376 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m60151(__this, method) (( void (*) (Dictionary_2_t8376 *, const MethodInfo*))Dictionary_2_Resize_m60151_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m60152_gshared (Dictionary_2_t8376 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m60152(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8376 *, int64_t, int32_t, const MethodInfo*))Dictionary_2_Add_m60152_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m60153_gshared (Dictionary_2_t8376 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m60153(__this, method) (( void (*) (Dictionary_2_t8376 *, const MethodInfo*))Dictionary_2_Clear_m60153_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m60154_gshared (Dictionary_2_t8376 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m60154(__this, ___key, method) (( bool (*) (Dictionary_2_t8376 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m60154_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m60155_gshared (Dictionary_2_t8376 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m60155(__this, ___value, method) (( bool (*) (Dictionary_2_t8376 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m60155_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m60156_gshared (Dictionary_2_t8376 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m60156(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8376 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m60156_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m60157_gshared (Dictionary_2_t8376 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m60157(__this, ___sender, method) (( void (*) (Dictionary_2_t8376 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m60157_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m60158_gshared (Dictionary_2_t8376 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m60158(__this, ___key, method) (( bool (*) (Dictionary_2_t8376 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m60158_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m60159_gshared (Dictionary_2_t8376 * __this, int64_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m60159(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8376 *, int64_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m60159_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Keys()
extern "C" KeyCollection_t8377 * Dictionary_2_get_Keys_m60160_gshared (Dictionary_2_t8376 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m60160(__this, method) (( KeyCollection_t8377 * (*) (Dictionary_2_t8376 *, const MethodInfo*))Dictionary_2_get_Keys_m60160_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Values()
extern "C" ValueCollection_t8381 * Dictionary_2_get_Values_m60161_gshared (Dictionary_2_t8376 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m60161(__this, method) (( ValueCollection_t8381 * (*) (Dictionary_2_t8376 *, const MethodInfo*))Dictionary_2_get_Values_m60161_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m60162_gshared (Dictionary_2_t8376 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m60162(__this, ___key, method) (( int64_t (*) (Dictionary_2_t8376 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m60162_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m60163_gshared (Dictionary_2_t8376 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m60163(__this, ___value, method) (( int32_t (*) (Dictionary_2_t8376 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m60163_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m60164_gshared (Dictionary_2_t8376 * __this, KeyValuePair_2_t8373  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m60164(__this, ___pair, method) (( bool (*) (Dictionary_2_t8376 *, KeyValuePair_2_t8373 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m60164_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8379  Dictionary_2_GetEnumerator_m60165_gshared (Dictionary_2_t8376 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m60165(__this, method) (( Enumerator_t8379  (*) (Dictionary_2_t8376 *, const MethodInfo*))Dictionary_2_GetEnumerator_m60165_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__0_m60166_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m60166(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m60166_gshared)(__this /* static, unused */, ___key, ___value, method)
