#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2805;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8636;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1172;
// System.Collections.ICollection
struct ICollection_t707;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t5357;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t5361;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5348;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t8640;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t8641;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t8642;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9930_gshared (Dictionary_2_t2805 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9930(__this, method) (( void (*) (Dictionary_2_t2805 *, const MethodInfo*))Dictionary_2__ctor_m9930_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20851_gshared (Dictionary_2_t2805 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20851(__this, ___comparer, method) (( void (*) (Dictionary_2_t2805 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20851_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m20853_gshared (Dictionary_2_t2805 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m20853(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2805 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20853_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20855_gshared (Dictionary_2_t2805 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m20855(__this, ___capacity, method) (( void (*) (Dictionary_2_t2805 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20855_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20857_gshared (Dictionary_2_t2805 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20857(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2805 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20857_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20859_gshared (Dictionary_2_t2805 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m20859(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2805 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m20859_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20861_gshared (Dictionary_2_t2805 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20861(__this, method) (( Object_t* (*) (Dictionary_2_t2805 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20861_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20863_gshared (Dictionary_2_t2805 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20863(__this, method) (( Object_t* (*) (Dictionary_2_t2805 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20863_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m20865_gshared (Dictionary_2_t2805 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m20865(__this, method) (( Object_t * (*) (Dictionary_2_t2805 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m20865_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20867_gshared (Dictionary_2_t2805 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20867(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2805 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20867_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20869_gshared (Dictionary_2_t2805 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20869(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2805 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20869_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20871_gshared (Dictionary_2_t2805 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20871(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2805 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20871_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20873_gshared (Dictionary_2_t2805 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20873(__this, ___key, method) (( bool (*) (Dictionary_2_t2805 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20873_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20875_gshared (Dictionary_2_t2805 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20875(__this, ___key, method) (( void (*) (Dictionary_2_t2805 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20875_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20877_gshared (Dictionary_2_t2805 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20877(__this, method) (( bool (*) (Dictionary_2_t2805 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20877_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20879_gshared (Dictionary_2_t2805 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20879(__this, method) (( Object_t * (*) (Dictionary_2_t2805 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20879_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20881_gshared (Dictionary_2_t2805 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20881(__this, method) (( bool (*) (Dictionary_2_t2805 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20881_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20883_gshared (Dictionary_2_t2805 * __this, KeyValuePair_2_t5351  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20883(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2805 *, KeyValuePair_2_t5351 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20883_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20885_gshared (Dictionary_2_t2805 * __this, KeyValuePair_2_t5351  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20885(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2805 *, KeyValuePair_2_t5351 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20885_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20887_gshared (Dictionary_2_t2805 * __this, KeyValuePair_2U5BU5D_t8641* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20887(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2805 *, KeyValuePair_2U5BU5D_t8641*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20887_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20889_gshared (Dictionary_2_t2805 * __this, KeyValuePair_2_t5351  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20889(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2805 *, KeyValuePair_2_t5351 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20889_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20891_gshared (Dictionary_2_t2805 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20891(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2805 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20891_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20893_gshared (Dictionary_2_t2805 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20893(__this, method) (( Object_t * (*) (Dictionary_2_t2805 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20893_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20895_gshared (Dictionary_2_t2805 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20895(__this, method) (( Object_t* (*) (Dictionary_2_t2805 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20895_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20897_gshared (Dictionary_2_t2805 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20897(__this, method) (( Object_t * (*) (Dictionary_2_t2805 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20897_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20899_gshared (Dictionary_2_t2805 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m20899(__this, method) (( int32_t (*) (Dictionary_2_t2805 *, const MethodInfo*))Dictionary_2_get_Count_m20899_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m20901_gshared (Dictionary_2_t2805 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m20901(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2805 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m20901_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20903_gshared (Dictionary_2_t2805 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m20903(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2805 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m20903_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20905_gshared (Dictionary_2_t2805 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m20905(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2805 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20905_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20907_gshared (Dictionary_2_t2805 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m20907(__this, ___size, method) (( void (*) (Dictionary_2_t2805 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20907_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20909_gshared (Dictionary_2_t2805 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20909(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2805 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20909_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5351  Dictionary_2_make_pair_m20911_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m20911(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5351  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m20911_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m20913_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m20913(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m20913_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m20915_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m20915(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m20915_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20917_gshared (Dictionary_2_t2805 * __this, KeyValuePair_2U5BU5D_t8641* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m20917(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2805 *, KeyValuePair_2U5BU5D_t8641*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20917_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m20919_gshared (Dictionary_2_t2805 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m20919(__this, method) (( void (*) (Dictionary_2_t2805 *, const MethodInfo*))Dictionary_2_Resize_m20919_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20921_gshared (Dictionary_2_t2805 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m20921(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2805 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m20921_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m20923_gshared (Dictionary_2_t2805 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m20923(__this, method) (( void (*) (Dictionary_2_t2805 *, const MethodInfo*))Dictionary_2_Clear_m20923_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20925_gshared (Dictionary_2_t2805 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m20925(__this, ___key, method) (( bool (*) (Dictionary_2_t2805 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m20925_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20927_gshared (Dictionary_2_t2805 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m20927(__this, ___value, method) (( bool (*) (Dictionary_2_t2805 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m20927_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20929_gshared (Dictionary_2_t2805 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m20929(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2805 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m20929_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20931_gshared (Dictionary_2_t2805 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20931(__this, ___sender, method) (( void (*) (Dictionary_2_t2805 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20931_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20933_gshared (Dictionary_2_t2805 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m20933(__this, ___key, method) (( bool (*) (Dictionary_2_t2805 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m20933_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20935_gshared (Dictionary_2_t2805 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m20935(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2805 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m20935_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t5357 * Dictionary_2_get_Keys_m20937_gshared (Dictionary_2_t2805 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m20937(__this, method) (( KeyCollection_t5357 * (*) (Dictionary_2_t2805 *, const MethodInfo*))Dictionary_2_get_Keys_m20937_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t5361 * Dictionary_2_get_Values_m20939_gshared (Dictionary_2_t2805 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m20939(__this, method) (( ValueCollection_t5361 * (*) (Dictionary_2_t2805 *, const MethodInfo*))Dictionary_2_get_Values_m20939_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m20941_gshared (Dictionary_2_t2805 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m20941(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2805 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m20941_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m20943_gshared (Dictionary_2_t2805 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m20943(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2805 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m20943_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20945_gshared (Dictionary_2_t2805 * __this, KeyValuePair_2_t5351  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20945(__this, ___pair, method) (( bool (*) (Dictionary_2_t2805 *, KeyValuePair_2_t5351 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20945_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t5359  Dictionary_2_GetEnumerator_m20947_gshared (Dictionary_2_t2805 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m20947(__this, method) (( Enumerator_t5359  (*) (Dictionary_2_t2805 *, const MethodInfo*))Dictionary_2_GetEnumerator_m20947_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2090  Dictionary_2_U3CCopyToU3Em__0_m20949_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m20949(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20949_gshared)(__this /* static, unused */, ___key, ___value, method)
