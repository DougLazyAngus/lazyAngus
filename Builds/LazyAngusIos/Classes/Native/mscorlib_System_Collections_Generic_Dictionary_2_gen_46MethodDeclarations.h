#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t2117;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4253;
// System.Collections.ICollection
struct ICollection_t653;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t4155;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t4159;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3432;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t4702;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1301;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t4703;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t4704;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1943;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_48.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__43.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m28901_gshared (Dictionary_2_t2117 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m28901(__this, method) (( void (*) (Dictionary_2_t2117 *, const MethodInfo*))Dictionary_2__ctor_m28901_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m28902_gshared (Dictionary_2_t2117 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m28902(__this, ___comparer, method) (( void (*) (Dictionary_2_t2117 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m28903_gshared (Dictionary_2_t2117 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m28903(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2117 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28903_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m28904_gshared (Dictionary_2_t2117 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m28904(__this, ___capacity, method) (( void (*) (Dictionary_2_t2117 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m28904_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m28905_gshared (Dictionary_2_t2117 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m28905(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2117 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28905_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m28906_gshared (Dictionary_2_t2117 * __this, SerializationInfo_t1301 * ___info, StreamingContext_t1302  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m28906(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2117 *, SerializationInfo_t1301 *, StreamingContext_t1302 , const MethodInfo*))Dictionary_2__ctor_m28906_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28907_gshared (Dictionary_2_t2117 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28907(__this, method) (( Object_t* (*) (Dictionary_2_t2117 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28907_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28908_gshared (Dictionary_2_t2117 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28908(__this, method) (( Object_t* (*) (Dictionary_2_t2117 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28908_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m28909_gshared (Dictionary_2_t2117 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m28909(__this, method) (( Object_t * (*) (Dictionary_2_t2117 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m28909_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m28910_gshared (Dictionary_2_t2117 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m28910(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2117 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m28910_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m28911_gshared (Dictionary_2_t2117 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m28911(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2117 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m28911_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m28912_gshared (Dictionary_2_t2117 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m28912(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2117 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m28912_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m28913_gshared (Dictionary_2_t2117 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m28913(__this, ___key, method) (( bool (*) (Dictionary_2_t2117 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m28913_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m28914_gshared (Dictionary_2_t2117 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m28914(__this, ___key, method) (( void (*) (Dictionary_2_t2117 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m28914_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28915_gshared (Dictionary_2_t2117 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28915(__this, method) (( bool (*) (Dictionary_2_t2117 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28915_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28916_gshared (Dictionary_2_t2117 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28916(__this, method) (( Object_t * (*) (Dictionary_2_t2117 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28916_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28917_gshared (Dictionary_2_t2117 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28917(__this, method) (( bool (*) (Dictionary_2_t2117 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28917_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28918_gshared (Dictionary_2_t2117 * __this, KeyValuePair_2_t4153  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28918(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2117 *, KeyValuePair_2_t4153 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28918_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28919_gshared (Dictionary_2_t2117 * __this, KeyValuePair_2_t4153  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28919(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2117 *, KeyValuePair_2_t4153 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28919_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28920_gshared (Dictionary_2_t2117 * __this, KeyValuePair_2U5BU5D_t4703* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28920(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2117 *, KeyValuePair_2U5BU5D_t4703*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28920_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28921_gshared (Dictionary_2_t2117 * __this, KeyValuePair_2_t4153  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28921(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2117 *, KeyValuePair_2_t4153 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28921_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m28922_gshared (Dictionary_2_t2117 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m28922(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2117 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m28922_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28923_gshared (Dictionary_2_t2117 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28923(__this, method) (( Object_t * (*) (Dictionary_2_t2117 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28923_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28924_gshared (Dictionary_2_t2117 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28924(__this, method) (( Object_t* (*) (Dictionary_2_t2117 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28924_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28925_gshared (Dictionary_2_t2117 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28925(__this, method) (( Object_t * (*) (Dictionary_2_t2117 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28925_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m28926_gshared (Dictionary_2_t2117 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m28926(__this, method) (( int32_t (*) (Dictionary_2_t2117 *, const MethodInfo*))Dictionary_2_get_Count_m28926_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m28927_gshared (Dictionary_2_t2117 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m28927(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2117 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m28927_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m28928_gshared (Dictionary_2_t2117 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m28928(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2117 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m28928_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m28929_gshared (Dictionary_2_t2117 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m28929(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2117 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m28929_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m28930_gshared (Dictionary_2_t2117 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m28930(__this, ___size, method) (( void (*) (Dictionary_2_t2117 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m28930_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m28931_gshared (Dictionary_2_t2117 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m28931(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2117 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m28931_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4153  Dictionary_2_make_pair_m28932_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m28932(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4153  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m28932_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m28933_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m28933(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m28933_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m28934_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m28934(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m28934_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m28935_gshared (Dictionary_2_t2117 * __this, KeyValuePair_2U5BU5D_t4703* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m28935(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2117 *, KeyValuePair_2U5BU5D_t4703*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m28935_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m28936_gshared (Dictionary_2_t2117 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m28936(__this, method) (( void (*) (Dictionary_2_t2117 *, const MethodInfo*))Dictionary_2_Resize_m28936_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m28937_gshared (Dictionary_2_t2117 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m28937(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2117 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m28937_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m28938_gshared (Dictionary_2_t2117 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m28938(__this, method) (( void (*) (Dictionary_2_t2117 *, const MethodInfo*))Dictionary_2_Clear_m28938_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m28939_gshared (Dictionary_2_t2117 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m28939(__this, ___key, method) (( bool (*) (Dictionary_2_t2117 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m28939_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m28940_gshared (Dictionary_2_t2117 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m28940(__this, ___value, method) (( bool (*) (Dictionary_2_t2117 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m28940_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m28941_gshared (Dictionary_2_t2117 * __this, SerializationInfo_t1301 * ___info, StreamingContext_t1302  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m28941(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2117 *, SerializationInfo_t1301 *, StreamingContext_t1302 , const MethodInfo*))Dictionary_2_GetObjectData_m28941_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m28942_gshared (Dictionary_2_t2117 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m28942(__this, ___sender, method) (( void (*) (Dictionary_2_t2117 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m28942_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m28943_gshared (Dictionary_2_t2117 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m28943(__this, ___key, method) (( bool (*) (Dictionary_2_t2117 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m28943_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m28944_gshared (Dictionary_2_t2117 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m28944(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2117 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m28944_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t4155 * Dictionary_2_get_Keys_m28945_gshared (Dictionary_2_t2117 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m28945(__this, method) (( KeyCollection_t4155 * (*) (Dictionary_2_t2117 *, const MethodInfo*))Dictionary_2_get_Keys_m28945_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t4159 * Dictionary_2_get_Values_m28946_gshared (Dictionary_2_t2117 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m28946(__this, method) (( ValueCollection_t4159 * (*) (Dictionary_2_t2117 *, const MethodInfo*))Dictionary_2_get_Values_m28946_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m28947_gshared (Dictionary_2_t2117 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m28947(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2117 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m28947_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m28948_gshared (Dictionary_2_t2117 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m28948(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2117 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m28948_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m28949_gshared (Dictionary_2_t2117 * __this, KeyValuePair_2_t4153  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m28949(__this, ___pair, method) (( bool (*) (Dictionary_2_t2117 *, KeyValuePair_2_t4153 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m28949_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t4157  Dictionary_2_GetEnumerator_m28950_gshared (Dictionary_2_t2117 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m28950(__this, method) (( Enumerator_t4157  (*) (Dictionary_2_t2117 *, const MethodInfo*))Dictionary_2_GetEnumerator_m28950_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2181  Dictionary_2_U3CCopyToU3Em__0_m28951_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m28951(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2181  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m28951_gshared)(__this /* static, unused */, ___key, ___value, method)
