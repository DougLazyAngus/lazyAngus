#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8405;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9112;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1170;
// System.Collections.ICollection
struct ICollection_t704;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t8408;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t8412;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t8403;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t9539;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2869;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t9540;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t9541;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3911;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_133.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__66.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m60786_gshared (Dictionary_2_t8405 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m60786(__this, method) (( void (*) (Dictionary_2_t8405 *, const MethodInfo*))Dictionary_2__ctor_m60786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m60788_gshared (Dictionary_2_t8405 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m60788(__this, ___comparer, method) (( void (*) (Dictionary_2_t8405 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60788_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m60790_gshared (Dictionary_2_t8405 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m60790(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8405 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60790_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m60792_gshared (Dictionary_2_t8405 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m60792(__this, ___capacity, method) (( void (*) (Dictionary_2_t8405 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m60792_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m60794_gshared (Dictionary_2_t8405 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m60794(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8405 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60794_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m60796_gshared (Dictionary_2_t8405 * __this, SerializationInfo_t2869 * ___info, StreamingContext_t2870  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m60796(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8405 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2__ctor_m60796_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60798_gshared (Dictionary_2_t8405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60798(__this, method) (( Object_t* (*) (Dictionary_2_t8405 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60798_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60800_gshared (Dictionary_2_t8405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60800(__this, method) (( Object_t* (*) (Dictionary_2_t8405 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60800_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m60802_gshared (Dictionary_2_t8405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m60802(__this, method) (( Object_t * (*) (Dictionary_2_t8405 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m60802_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m60804_gshared (Dictionary_2_t8405 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m60804(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8405 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m60804_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m60806_gshared (Dictionary_2_t8405 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m60806(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8405 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m60806_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m60808_gshared (Dictionary_2_t8405 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m60808(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8405 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m60808_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m60810_gshared (Dictionary_2_t8405 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m60810(__this, ___key, method) (( bool (*) (Dictionary_2_t8405 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m60810_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m60812_gshared (Dictionary_2_t8405 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m60812(__this, ___key, method) (( void (*) (Dictionary_2_t8405 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m60812_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60814_gshared (Dictionary_2_t8405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60814(__this, method) (( bool (*) (Dictionary_2_t8405 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60814_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60816_gshared (Dictionary_2_t8405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60816(__this, method) (( Object_t * (*) (Dictionary_2_t8405 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60816_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60818_gshared (Dictionary_2_t8405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60818(__this, method) (( bool (*) (Dictionary_2_t8405 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60818_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60820_gshared (Dictionary_2_t8405 * __this, KeyValuePair_2_t8406  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60820(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8405 *, KeyValuePair_2_t8406 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60820_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60822_gshared (Dictionary_2_t8405 * __this, KeyValuePair_2_t8406  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60822(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8405 *, KeyValuePair_2_t8406 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60822_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60824_gshared (Dictionary_2_t8405 * __this, KeyValuePair_2U5BU5D_t9540* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60824(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8405 *, KeyValuePair_2U5BU5D_t9540*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60824_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60826_gshared (Dictionary_2_t8405 * __this, KeyValuePair_2_t8406  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60826(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8405 *, KeyValuePair_2_t8406 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60826_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m60828_gshared (Dictionary_2_t8405 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m60828(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8405 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m60828_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60830_gshared (Dictionary_2_t8405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60830(__this, method) (( Object_t * (*) (Dictionary_2_t8405 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60830_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60832_gshared (Dictionary_2_t8405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60832(__this, method) (( Object_t* (*) (Dictionary_2_t8405 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60832_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60834_gshared (Dictionary_2_t8405 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60834(__this, method) (( Object_t * (*) (Dictionary_2_t8405 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60834_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m60836_gshared (Dictionary_2_t8405 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m60836(__this, method) (( int32_t (*) (Dictionary_2_t8405 *, const MethodInfo*))Dictionary_2_get_Count_m60836_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m60838_gshared (Dictionary_2_t8405 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m60838(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8405 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m60838_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m60840_gshared (Dictionary_2_t8405 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m60840(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8405 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m60840_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m60842_gshared (Dictionary_2_t8405 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m60842(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8405 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m60842_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m60844_gshared (Dictionary_2_t8405 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m60844(__this, ___size, method) (( void (*) (Dictionary_2_t8405 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m60844_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m60846_gshared (Dictionary_2_t8405 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m60846(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8405 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m60846_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8406  Dictionary_2_make_pair_m60848_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m60848(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8406  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m60848_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m60850_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m60850(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m60850_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m60852_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m60852(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m60852_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m60854_gshared (Dictionary_2_t8405 * __this, KeyValuePair_2U5BU5D_t9540* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m60854(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8405 *, KeyValuePair_2U5BU5D_t9540*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m60854_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m60856_gshared (Dictionary_2_t8405 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m60856(__this, method) (( void (*) (Dictionary_2_t8405 *, const MethodInfo*))Dictionary_2_Resize_m60856_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m60858_gshared (Dictionary_2_t8405 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m60858(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8405 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m60858_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m60860_gshared (Dictionary_2_t8405 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m60860(__this, method) (( void (*) (Dictionary_2_t8405 *, const MethodInfo*))Dictionary_2_Clear_m60860_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m60862_gshared (Dictionary_2_t8405 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m60862(__this, ___key, method) (( bool (*) (Dictionary_2_t8405 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m60862_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m60864_gshared (Dictionary_2_t8405 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m60864(__this, ___value, method) (( bool (*) (Dictionary_2_t8405 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m60864_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m60866_gshared (Dictionary_2_t8405 * __this, SerializationInfo_t2869 * ___info, StreamingContext_t2870  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m60866(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8405 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2_GetObjectData_m60866_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m60868_gshared (Dictionary_2_t8405 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m60868(__this, ___sender, method) (( void (*) (Dictionary_2_t8405 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m60868_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m60870_gshared (Dictionary_2_t8405 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m60870(__this, ___key, method) (( bool (*) (Dictionary_2_t8405 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m60870_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m60872_gshared (Dictionary_2_t8405 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m60872(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8405 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m60872_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t8408 * Dictionary_2_get_Keys_m60874_gshared (Dictionary_2_t8405 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m60874(__this, method) (( KeyCollection_t8408 * (*) (Dictionary_2_t8405 *, const MethodInfo*))Dictionary_2_get_Keys_m60874_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t8412 * Dictionary_2_get_Values_m60876_gshared (Dictionary_2_t8405 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m60876(__this, method) (( ValueCollection_t8412 * (*) (Dictionary_2_t8405 *, const MethodInfo*))Dictionary_2_get_Values_m60876_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m60878_gshared (Dictionary_2_t8405 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m60878(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t8405 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m60878_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m60880_gshared (Dictionary_2_t8405 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m60880(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t8405 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m60880_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m60882_gshared (Dictionary_2_t8405 * __this, KeyValuePair_2_t8406  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m60882(__this, ___pair, method) (( bool (*) (Dictionary_2_t8405 *, KeyValuePair_2_t8406 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m60882_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t8410  Dictionary_2_GetEnumerator_m60884_gshared (Dictionary_2_t8405 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m60884(__this, method) (( Enumerator_t8410  (*) (Dictionary_2_t8405 *, const MethodInfo*))Dictionary_2_GetEnumerator_m60884_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2088  Dictionary_2_U3CCopyToU3Em__0_m60886_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m60886(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2088  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m60886_gshared)(__this /* static, unused */, ___key, ___value, method)
