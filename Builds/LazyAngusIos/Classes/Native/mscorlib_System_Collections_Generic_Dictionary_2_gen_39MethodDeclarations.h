#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3982;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t4621;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1292;
// System.Collections.ICollection
struct ICollection_t653;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t3986;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t3990;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t3980;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t4622;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1301;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t4623;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t4624;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1943;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_38.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__35.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m26872_gshared (Dictionary_2_t3982 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m26872(__this, method) (( void (*) (Dictionary_2_t3982 *, const MethodInfo*))Dictionary_2__ctor_m26872_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26874_gshared (Dictionary_2_t3982 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26874(__this, ___comparer, method) (( void (*) (Dictionary_2_t3982 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26874_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m26876_gshared (Dictionary_2_t3982 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m26876(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3982 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26876_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m26878_gshared (Dictionary_2_t3982 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m26878(__this, ___capacity, method) (( void (*) (Dictionary_2_t3982 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26878_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26880_gshared (Dictionary_2_t3982 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26880(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3982 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26880_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m26882_gshared (Dictionary_2_t3982 * __this, SerializationInfo_t1301 * ___info, StreamingContext_t1302  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m26882(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3982 *, SerializationInfo_t1301 *, StreamingContext_t1302 , const MethodInfo*))Dictionary_2__ctor_m26882_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26884_gshared (Dictionary_2_t3982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26884(__this, method) (( Object_t* (*) (Dictionary_2_t3982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26884_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26886_gshared (Dictionary_2_t3982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26886(__this, method) (( Object_t* (*) (Dictionary_2_t3982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26886_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m26888_gshared (Dictionary_2_t3982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m26888(__this, method) (( Object_t * (*) (Dictionary_2_t3982 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26888_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m26890_gshared (Dictionary_2_t3982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m26890(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3982 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26890_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m26892_gshared (Dictionary_2_t3982 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m26892(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3982 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26892_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m26894_gshared (Dictionary_2_t3982 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m26894(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3982 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26894_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m26896_gshared (Dictionary_2_t3982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m26896(__this, ___key, method) (( bool (*) (Dictionary_2_t3982 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26896_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m26898_gshared (Dictionary_2_t3982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m26898(__this, ___key, method) (( void (*) (Dictionary_2_t3982 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26898_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26900_gshared (Dictionary_2_t3982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26900(__this, method) (( bool (*) (Dictionary_2_t3982 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26900_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26902_gshared (Dictionary_2_t3982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26902(__this, method) (( Object_t * (*) (Dictionary_2_t3982 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26902_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26904_gshared (Dictionary_2_t3982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26904(__this, method) (( bool (*) (Dictionary_2_t3982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26904_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26906_gshared (Dictionary_2_t3982 * __this, KeyValuePair_2_t3983  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26906(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3982 *, KeyValuePair_2_t3983 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26906_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26908_gshared (Dictionary_2_t3982 * __this, KeyValuePair_2_t3983  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26908(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3982 *, KeyValuePair_2_t3983 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26908_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26910_gshared (Dictionary_2_t3982 * __this, KeyValuePair_2U5BU5D_t4623* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26910(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3982 *, KeyValuePair_2U5BU5D_t4623*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26910_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26912_gshared (Dictionary_2_t3982 * __this, KeyValuePair_2_t3983  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26912(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3982 *, KeyValuePair_2_t3983 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26912_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m26914_gshared (Dictionary_2_t3982 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m26914(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3982 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26914_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26916_gshared (Dictionary_2_t3982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26916(__this, method) (( Object_t * (*) (Dictionary_2_t3982 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26916_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26918_gshared (Dictionary_2_t3982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26918(__this, method) (( Object_t* (*) (Dictionary_2_t3982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26918_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26920_gshared (Dictionary_2_t3982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26920(__this, method) (( Object_t * (*) (Dictionary_2_t3982 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26920_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m26922_gshared (Dictionary_2_t3982 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m26922(__this, method) (( int32_t (*) (Dictionary_2_t3982 *, const MethodInfo*))Dictionary_2_get_Count_m26922_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m26924_gshared (Dictionary_2_t3982 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m26924(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3982 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m26924_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m26926_gshared (Dictionary_2_t3982 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m26926(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3982 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m26926_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m26928_gshared (Dictionary_2_t3982 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m26928(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3982 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26928_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m26930_gshared (Dictionary_2_t3982 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m26930(__this, ___size, method) (( void (*) (Dictionary_2_t3982 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26930_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m26932_gshared (Dictionary_2_t3982 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m26932(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3982 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26932_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3983  Dictionary_2_make_pair_m26934_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m26934(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3983  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m26934_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m26936_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m26936(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m26936_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m26938_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m26938(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m26938_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m26940_gshared (Dictionary_2_t3982 * __this, KeyValuePair_2U5BU5D_t4623* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m26940(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3982 *, KeyValuePair_2U5BU5D_t4623*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26940_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m26942_gshared (Dictionary_2_t3982 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m26942(__this, method) (( void (*) (Dictionary_2_t3982 *, const MethodInfo*))Dictionary_2_Resize_m26942_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m26944_gshared (Dictionary_2_t3982 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m26944(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3982 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m26944_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m26946_gshared (Dictionary_2_t3982 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m26946(__this, method) (( void (*) (Dictionary_2_t3982 *, const MethodInfo*))Dictionary_2_Clear_m26946_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m26948_gshared (Dictionary_2_t3982 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m26948(__this, ___key, method) (( bool (*) (Dictionary_2_t3982 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m26948_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m26950_gshared (Dictionary_2_t3982 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m26950(__this, ___value, method) (( bool (*) (Dictionary_2_t3982 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m26950_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m26952_gshared (Dictionary_2_t3982 * __this, SerializationInfo_t1301 * ___info, StreamingContext_t1302  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m26952(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3982 *, SerializationInfo_t1301 *, StreamingContext_t1302 , const MethodInfo*))Dictionary_2_GetObjectData_m26952_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m26954_gshared (Dictionary_2_t3982 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m26954(__this, ___sender, method) (( void (*) (Dictionary_2_t3982 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26954_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m26956_gshared (Dictionary_2_t3982 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m26956(__this, ___key, method) (( bool (*) (Dictionary_2_t3982 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m26956_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m26958_gshared (Dictionary_2_t3982 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m26958(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3982 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m26958_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t3986 * Dictionary_2_get_Keys_m26960_gshared (Dictionary_2_t3982 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m26960(__this, method) (( KeyCollection_t3986 * (*) (Dictionary_2_t3982 *, const MethodInfo*))Dictionary_2_get_Keys_m26960_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t3990 * Dictionary_2_get_Values_m26962_gshared (Dictionary_2_t3982 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m26962(__this, method) (( ValueCollection_t3990 * (*) (Dictionary_2_t3982 *, const MethodInfo*))Dictionary_2_get_Values_m26962_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m26964_gshared (Dictionary_2_t3982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m26964(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t3982 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26964_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m26966_gshared (Dictionary_2_t3982 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m26966(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3982 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26966_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m26968_gshared (Dictionary_2_t3982 * __this, KeyValuePair_2_t3983  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m26968(__this, ___pair, method) (( bool (*) (Dictionary_2_t3982 *, KeyValuePair_2_t3983 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26968_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3988  Dictionary_2_GetEnumerator_m26970_gshared (Dictionary_2_t3982 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m26970(__this, method) (( Enumerator_t3988  (*) (Dictionary_2_t3982 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26970_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2181  Dictionary_2_U3CCopyToU3Em__0_m26972_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m26972(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2181  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m26972_gshared)(__this /* static, unused */, ___key, ___value, method)
