#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3915;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t4524;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1246;
// System.Collections.ICollection
struct ICollection_t600;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t3919;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t3923;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t3913;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t4525;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t4526;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t4527;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1451;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__31.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m25839_gshared (Dictionary_2_t3915 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m25839(__this, method) (( void (*) (Dictionary_2_t3915 *, const MethodInfo*))Dictionary_2__ctor_m25839_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25841_gshared (Dictionary_2_t3915 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25841(__this, ___comparer, method) (( void (*) (Dictionary_2_t3915 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25841_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m25843_gshared (Dictionary_2_t3915 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m25843(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3915 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25843_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m25845_gshared (Dictionary_2_t3915 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m25845(__this, ___capacity, method) (( void (*) (Dictionary_2_t3915 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25845_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25847_gshared (Dictionary_2_t3915 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25847(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3915 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25847_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m25849_gshared (Dictionary_2_t3915 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m25849(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3915 *, SerializationInfo_t1255 *, StreamingContext_t1256 , const MethodInfo*))Dictionary_2__ctor_m25849_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25851_gshared (Dictionary_2_t3915 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25851(__this, method) (( Object_t* (*) (Dictionary_2_t3915 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25851_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25853_gshared (Dictionary_2_t3915 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25853(__this, method) (( Object_t* (*) (Dictionary_2_t3915 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25853_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m25855_gshared (Dictionary_2_t3915 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25855(__this, method) (( Object_t * (*) (Dictionary_2_t3915 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25855_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25857_gshared (Dictionary_2_t3915 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25857(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3915 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25857_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25859_gshared (Dictionary_2_t3915 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25859(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3915 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25859_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25861_gshared (Dictionary_2_t3915 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m25861(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3915 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25861_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m25863_gshared (Dictionary_2_t3915 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m25863(__this, ___key, method) (( bool (*) (Dictionary_2_t3915 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25863_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25865_gshared (Dictionary_2_t3915 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m25865(__this, ___key, method) (( void (*) (Dictionary_2_t3915 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25865_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25867_gshared (Dictionary_2_t3915 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25867(__this, method) (( bool (*) (Dictionary_2_t3915 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25867_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25869_gshared (Dictionary_2_t3915 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25869(__this, method) (( Object_t * (*) (Dictionary_2_t3915 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25869_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25871_gshared (Dictionary_2_t3915 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25871(__this, method) (( bool (*) (Dictionary_2_t3915 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25871_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25873_gshared (Dictionary_2_t3915 * __this, KeyValuePair_2_t3916  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25873(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3915 *, KeyValuePair_2_t3916 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25873_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25875_gshared (Dictionary_2_t3915 * __this, KeyValuePair_2_t3916  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25875(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3915 *, KeyValuePair_2_t3916 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25875_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25877_gshared (Dictionary_2_t3915 * __this, KeyValuePair_2U5BU5D_t4526* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25877(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3915 *, KeyValuePair_2U5BU5D_t4526*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25877_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25879_gshared (Dictionary_2_t3915 * __this, KeyValuePair_2_t3916  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25879(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3915 *, KeyValuePair_2_t3916 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25879_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25881_gshared (Dictionary_2_t3915 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25881(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3915 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25881_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25883_gshared (Dictionary_2_t3915 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25883(__this, method) (( Object_t * (*) (Dictionary_2_t3915 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25883_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25885_gshared (Dictionary_2_t3915 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25885(__this, method) (( Object_t* (*) (Dictionary_2_t3915 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25885_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25887_gshared (Dictionary_2_t3915 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25887(__this, method) (( Object_t * (*) (Dictionary_2_t3915 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25887_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25889_gshared (Dictionary_2_t3915 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m25889(__this, method) (( int32_t (*) (Dictionary_2_t3915 *, const MethodInfo*))Dictionary_2_get_Count_m25889_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m25891_gshared (Dictionary_2_t3915 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m25891(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3915 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m25891_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m25893_gshared (Dictionary_2_t3915 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m25893(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3915 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m25893_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m25895_gshared (Dictionary_2_t3915 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m25895(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3915 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25895_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m25897_gshared (Dictionary_2_t3915 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m25897(__this, ___size, method) (( void (*) (Dictionary_2_t3915 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25897_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m25899_gshared (Dictionary_2_t3915 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m25899(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3915 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25899_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3916  Dictionary_2_make_pair_m25901_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m25901(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3916  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m25901_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m25903_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m25903(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m25903_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m25905_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m25905(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m25905_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25907_gshared (Dictionary_2_t3915 * __this, KeyValuePair_2U5BU5D_t4526* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m25907(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3915 *, KeyValuePair_2U5BU5D_t4526*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25907_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m25909_gshared (Dictionary_2_t3915 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m25909(__this, method) (( void (*) (Dictionary_2_t3915 *, const MethodInfo*))Dictionary_2_Resize_m25909_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m25911_gshared (Dictionary_2_t3915 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m25911(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3915 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m25911_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m25913_gshared (Dictionary_2_t3915 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m25913(__this, method) (( void (*) (Dictionary_2_t3915 *, const MethodInfo*))Dictionary_2_Clear_m25913_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m25915_gshared (Dictionary_2_t3915 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m25915(__this, ___key, method) (( bool (*) (Dictionary_2_t3915 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m25915_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m25917_gshared (Dictionary_2_t3915 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m25917(__this, ___value, method) (( bool (*) (Dictionary_2_t3915 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m25917_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m25919_gshared (Dictionary_2_t3915 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m25919(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3915 *, SerializationInfo_t1255 *, StreamingContext_t1256 , const MethodInfo*))Dictionary_2_GetObjectData_m25919_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m25921_gshared (Dictionary_2_t3915 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m25921(__this, ___sender, method) (( void (*) (Dictionary_2_t3915 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25921_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25923_gshared (Dictionary_2_t3915 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m25923(__this, ___key, method) (( bool (*) (Dictionary_2_t3915 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m25923_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m25925_gshared (Dictionary_2_t3915 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m25925(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3915 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m25925_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t3919 * Dictionary_2_get_Keys_m25927_gshared (Dictionary_2_t3915 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m25927(__this, method) (( KeyCollection_t3919 * (*) (Dictionary_2_t3915 *, const MethodInfo*))Dictionary_2_get_Keys_m25927_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t3923 * Dictionary_2_get_Values_m25929_gshared (Dictionary_2_t3915 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m25929(__this, method) (( ValueCollection_t3923 * (*) (Dictionary_2_t3915 *, const MethodInfo*))Dictionary_2_get_Values_m25929_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m25931_gshared (Dictionary_2_t3915 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m25931(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t3915 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25931_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m25933_gshared (Dictionary_2_t3915 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m25933(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3915 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25933_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25935_gshared (Dictionary_2_t3915 * __this, KeyValuePair_2_t3916  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m25935(__this, ___pair, method) (( bool (*) (Dictionary_2_t3915 *, KeyValuePair_2_t3916 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25935_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3921  Dictionary_2_GetEnumerator_m25937_gshared (Dictionary_2_t3915 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m25937(__this, method) (( Enumerator_t3921  (*) (Dictionary_2_t3915 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25937_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1718  Dictionary_2_U3CCopyToU3Em__0_m25939_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m25939(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1718  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m25939_gshared)(__this /* static, unused */, ___key, ___value, method)
