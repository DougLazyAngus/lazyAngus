#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8481;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9211;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1221;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t8484;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t8488;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t8479;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t9638;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t9639;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t9640;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_134.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__67.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m61558_gshared (Dictionary_2_t8481 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m61558(__this, method) (( void (*) (Dictionary_2_t8481 *, const MethodInfo*))Dictionary_2__ctor_m61558_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61560_gshared (Dictionary_2_t8481 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61560(__this, ___comparer, method) (( void (*) (Dictionary_2_t8481 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61560_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m61562_gshared (Dictionary_2_t8481 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m61562(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8481 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61562_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m61564_gshared (Dictionary_2_t8481 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m61564(__this, ___capacity, method) (( void (*) (Dictionary_2_t8481 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m61564_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61566_gshared (Dictionary_2_t8481 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61566(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8481 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61566_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m61568_gshared (Dictionary_2_t8481 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m61568(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8481 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m61568_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61570_gshared (Dictionary_2_t8481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61570(__this, method) (( Object_t* (*) (Dictionary_2_t8481 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61570_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61572_gshared (Dictionary_2_t8481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61572(__this, method) (( Object_t* (*) (Dictionary_2_t8481 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61572_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m61574_gshared (Dictionary_2_t8481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m61574(__this, method) (( Object_t * (*) (Dictionary_2_t8481 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m61574_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m61576_gshared (Dictionary_2_t8481 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m61576(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8481 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m61576_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m61578_gshared (Dictionary_2_t8481 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m61578(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8481 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m61578_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m61580_gshared (Dictionary_2_t8481 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m61580(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8481 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m61580_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m61582_gshared (Dictionary_2_t8481 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m61582(__this, ___key, method) (( bool (*) (Dictionary_2_t8481 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m61582_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m61584_gshared (Dictionary_2_t8481 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m61584(__this, ___key, method) (( void (*) (Dictionary_2_t8481 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m61584_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61586_gshared (Dictionary_2_t8481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61586(__this, method) (( bool (*) (Dictionary_2_t8481 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61586_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61588_gshared (Dictionary_2_t8481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61588(__this, method) (( Object_t * (*) (Dictionary_2_t8481 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61588_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61590_gshared (Dictionary_2_t8481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61590(__this, method) (( bool (*) (Dictionary_2_t8481 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61590_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61592_gshared (Dictionary_2_t8481 * __this, KeyValuePair_2_t8482  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61592(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8481 *, KeyValuePair_2_t8482 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61592_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61594_gshared (Dictionary_2_t8481 * __this, KeyValuePair_2_t8482  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61594(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8481 *, KeyValuePair_2_t8482 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61594_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61596_gshared (Dictionary_2_t8481 * __this, KeyValuePair_2U5BU5D_t9639* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61596(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8481 *, KeyValuePair_2U5BU5D_t9639*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61596_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61598_gshared (Dictionary_2_t8481 * __this, KeyValuePair_2_t8482  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61598(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8481 *, KeyValuePair_2_t8482 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61598_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m61600_gshared (Dictionary_2_t8481 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m61600(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8481 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m61600_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61602_gshared (Dictionary_2_t8481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61602(__this, method) (( Object_t * (*) (Dictionary_2_t8481 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61602_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61604_gshared (Dictionary_2_t8481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61604(__this, method) (( Object_t* (*) (Dictionary_2_t8481 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61604_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61606_gshared (Dictionary_2_t8481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61606(__this, method) (( Object_t * (*) (Dictionary_2_t8481 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61606_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m61608_gshared (Dictionary_2_t8481 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m61608(__this, method) (( int32_t (*) (Dictionary_2_t8481 *, const MethodInfo*))Dictionary_2_get_Count_m61608_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m61610_gshared (Dictionary_2_t8481 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m61610(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8481 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m61610_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m61612_gshared (Dictionary_2_t8481 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m61612(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8481 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m61612_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m61614_gshared (Dictionary_2_t8481 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m61614(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8481 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m61614_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m61616_gshared (Dictionary_2_t8481 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m61616(__this, ___size, method) (( void (*) (Dictionary_2_t8481 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m61616_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m61618_gshared (Dictionary_2_t8481 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m61618(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8481 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m61618_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8482  Dictionary_2_make_pair_m61620_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m61620(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8482  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m61620_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m61622_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m61622(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m61622_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m61624_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m61624(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m61624_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m61626_gshared (Dictionary_2_t8481 * __this, KeyValuePair_2U5BU5D_t9639* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m61626(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8481 *, KeyValuePair_2U5BU5D_t9639*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m61626_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m61628_gshared (Dictionary_2_t8481 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m61628(__this, method) (( void (*) (Dictionary_2_t8481 *, const MethodInfo*))Dictionary_2_Resize_m61628_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m61630_gshared (Dictionary_2_t8481 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m61630(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8481 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m61630_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m61632_gshared (Dictionary_2_t8481 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m61632(__this, method) (( void (*) (Dictionary_2_t8481 *, const MethodInfo*))Dictionary_2_Clear_m61632_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m61634_gshared (Dictionary_2_t8481 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m61634(__this, ___key, method) (( bool (*) (Dictionary_2_t8481 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m61634_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m61636_gshared (Dictionary_2_t8481 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m61636(__this, ___value, method) (( bool (*) (Dictionary_2_t8481 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m61636_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m61638_gshared (Dictionary_2_t8481 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m61638(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8481 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m61638_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m61640_gshared (Dictionary_2_t8481 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m61640(__this, ___sender, method) (( void (*) (Dictionary_2_t8481 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m61640_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m61642_gshared (Dictionary_2_t8481 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m61642(__this, ___key, method) (( bool (*) (Dictionary_2_t8481 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m61642_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m61644_gshared (Dictionary_2_t8481 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m61644(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8481 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m61644_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t8484 * Dictionary_2_get_Keys_m61646_gshared (Dictionary_2_t8481 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m61646(__this, method) (( KeyCollection_t8484 * (*) (Dictionary_2_t8481 *, const MethodInfo*))Dictionary_2_get_Keys_m61646_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t8488 * Dictionary_2_get_Values_m61648_gshared (Dictionary_2_t8481 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m61648(__this, method) (( ValueCollection_t8488 * (*) (Dictionary_2_t8481 *, const MethodInfo*))Dictionary_2_get_Values_m61648_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m61650_gshared (Dictionary_2_t8481 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m61650(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t8481 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m61650_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m61652_gshared (Dictionary_2_t8481 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m61652(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t8481 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m61652_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m61654_gshared (Dictionary_2_t8481 * __this, KeyValuePair_2_t8482  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m61654(__this, ___pair, method) (( bool (*) (Dictionary_2_t8481 *, KeyValuePair_2_t8482 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m61654_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t8486  Dictionary_2_GetEnumerator_m61656_gshared (Dictionary_2_t8481 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m61656(__this, method) (( Enumerator_t8486  (*) (Dictionary_2_t8481 *, const MethodInfo*))Dictionary_2_GetEnumerator_m61656_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2137  Dictionary_2_U3CCopyToU3Em__0_m61658_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m61658(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m61658_gshared)(__this /* static, unused */, ___key, ___value, method)
