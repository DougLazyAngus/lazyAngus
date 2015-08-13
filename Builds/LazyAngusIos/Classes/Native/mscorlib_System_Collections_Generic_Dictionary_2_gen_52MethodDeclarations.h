#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6008;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9072;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t6009;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_t6013;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6006;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Object>
struct IDictionary_2_t6000;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t9073;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct IEnumerator_1_t9074;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__35.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m31090_gshared (Dictionary_2_t6008 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m31090(__this, method) (( void (*) (Dictionary_2_t6008 *, const MethodInfo*))Dictionary_2__ctor_m31090_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31091_gshared (Dictionary_2_t6008 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m31091(__this, ___comparer, method) (( void (*) (Dictionary_2_t6008 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31091_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m31092_gshared (Dictionary_2_t6008 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m31092(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6008 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31092_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m31093_gshared (Dictionary_2_t6008 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m31093(__this, ___capacity, method) (( void (*) (Dictionary_2_t6008 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m31093_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31094_gshared (Dictionary_2_t6008 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m31094(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6008 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31094_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m31095_gshared (Dictionary_2_t6008 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m31095(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6008 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m31095_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31096_gshared (Dictionary_2_t6008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31096(__this, method) (( Object_t* (*) (Dictionary_2_t6008 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31096_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31097_gshared (Dictionary_2_t6008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31097(__this, method) (( Object_t* (*) (Dictionary_2_t6008 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31097_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m31098_gshared (Dictionary_2_t6008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m31098(__this, method) (( Object_t * (*) (Dictionary_2_t6008 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m31098_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m31099_gshared (Dictionary_2_t6008 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m31099(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6008 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m31099_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m31100_gshared (Dictionary_2_t6008 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m31100(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6008 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m31100_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m31101_gshared (Dictionary_2_t6008 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m31101(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6008 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m31101_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m31102_gshared (Dictionary_2_t6008 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m31102(__this, ___key, method) (( bool (*) (Dictionary_2_t6008 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m31102_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m31103_gshared (Dictionary_2_t6008 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m31103(__this, ___key, method) (( void (*) (Dictionary_2_t6008 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m31103_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31104_gshared (Dictionary_2_t6008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31104(__this, method) (( bool (*) (Dictionary_2_t6008 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31104_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31105_gshared (Dictionary_2_t6008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31105(__this, method) (( Object_t * (*) (Dictionary_2_t6008 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31105_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31106_gshared (Dictionary_2_t6008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31106(__this, method) (( bool (*) (Dictionary_2_t6008 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31106_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31107_gshared (Dictionary_2_t6008 * __this, KeyValuePair_2_t6003  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31107(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6008 *, KeyValuePair_2_t6003 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31107_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31108_gshared (Dictionary_2_t6008 * __this, KeyValuePair_2_t6003  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31108(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6008 *, KeyValuePair_2_t6003 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31108_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31109_gshared (Dictionary_2_t6008 * __this, KeyValuePair_2U5BU5D_t9073* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31109(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6008 *, KeyValuePair_2U5BU5D_t9073*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31109_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31110_gshared (Dictionary_2_t6008 * __this, KeyValuePair_2_t6003  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31110(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6008 *, KeyValuePair_2_t6003 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31110_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m31111_gshared (Dictionary_2_t6008 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m31111(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6008 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m31111_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31112_gshared (Dictionary_2_t6008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31112(__this, method) (( Object_t * (*) (Dictionary_2_t6008 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31112_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31113_gshared (Dictionary_2_t6008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31113(__this, method) (( Object_t* (*) (Dictionary_2_t6008 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31113_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31114_gshared (Dictionary_2_t6008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31114(__this, method) (( Object_t * (*) (Dictionary_2_t6008 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31114_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m31115_gshared (Dictionary_2_t6008 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m31115(__this, method) (( int32_t (*) (Dictionary_2_t6008 *, const MethodInfo*))Dictionary_2_get_Count_m31115_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m31116_gshared (Dictionary_2_t6008 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m31116(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6008 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m31116_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m31117_gshared (Dictionary_2_t6008 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m31117(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6008 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m31117_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m31118_gshared (Dictionary_2_t6008 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m31118(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6008 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m31118_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m31119_gshared (Dictionary_2_t6008 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m31119(__this, ___size, method) (( void (*) (Dictionary_2_t6008 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m31119_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m31120_gshared (Dictionary_2_t6008 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m31120(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6008 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m31120_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6003  Dictionary_2_make_pair_m31121_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m31121(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6003  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m31121_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m31122_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m31122(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m31122_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m31123_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m31123(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m31123_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m31124_gshared (Dictionary_2_t6008 * __this, KeyValuePair_2U5BU5D_t9073* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m31124(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6008 *, KeyValuePair_2U5BU5D_t9073*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m31124_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m31125_gshared (Dictionary_2_t6008 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m31125(__this, method) (( void (*) (Dictionary_2_t6008 *, const MethodInfo*))Dictionary_2_Resize_m31125_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m31126_gshared (Dictionary_2_t6008 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m31126(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6008 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m31126_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m31127_gshared (Dictionary_2_t6008 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m31127(__this, method) (( void (*) (Dictionary_2_t6008 *, const MethodInfo*))Dictionary_2_Clear_m31127_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m31128_gshared (Dictionary_2_t6008 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m31128(__this, ___key, method) (( bool (*) (Dictionary_2_t6008 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m31128_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m31129_gshared (Dictionary_2_t6008 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m31129(__this, ___value, method) (( bool (*) (Dictionary_2_t6008 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m31129_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m31130_gshared (Dictionary_2_t6008 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m31130(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6008 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m31130_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m31131_gshared (Dictionary_2_t6008 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m31131(__this, ___sender, method) (( void (*) (Dictionary_2_t6008 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m31131_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m31132_gshared (Dictionary_2_t6008 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m31132(__this, ___key, method) (( bool (*) (Dictionary_2_t6008 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m31132_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m31133_gshared (Dictionary_2_t6008 * __this, int64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m31133(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6008 *, int64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m31133_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Keys()
extern "C" KeyCollection_t6009 * Dictionary_2_get_Keys_m31134_gshared (Dictionary_2_t6008 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m31134(__this, method) (( KeyCollection_t6009 * (*) (Dictionary_2_t6008 *, const MethodInfo*))Dictionary_2_get_Keys_m31134_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Values()
extern "C" ValueCollection_t6013 * Dictionary_2_get_Values_m31135_gshared (Dictionary_2_t6008 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m31135(__this, method) (( ValueCollection_t6013 * (*) (Dictionary_2_t6008 *, const MethodInfo*))Dictionary_2_get_Values_m31135_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m31136_gshared (Dictionary_2_t6008 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m31136(__this, ___key, method) (( int64_t (*) (Dictionary_2_t6008 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m31136_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m31137_gshared (Dictionary_2_t6008 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m31137(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t6008 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m31137_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m31138_gshared (Dictionary_2_t6008 * __this, KeyValuePair_2_t6003  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m31138(__this, ___pair, method) (( bool (*) (Dictionary_2_t6008 *, KeyValuePair_2_t6003 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m31138_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t6011  Dictionary_2_GetEnumerator_m31139_gshared (Dictionary_2_t6008 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m31139(__this, method) (( Enumerator_t6011  (*) (Dictionary_2_t6008 *, const MethodInfo*))Dictionary_2_GetEnumerator_m31139_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2139  Dictionary_2_U3CCopyToU3Em__0_m31140_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m31140(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m31140_gshared)(__this /* static, unused */, ___key, ___value, method)
