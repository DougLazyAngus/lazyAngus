#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t9048;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9838;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t9051;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t9055;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t9046;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t10265;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t10266;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t10267;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_134.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__67.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m66190_gshared (Dictionary_2_t9048 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m66190(__this, method) (( void (*) (Dictionary_2_t9048 *, const MethodInfo*))Dictionary_2__ctor_m66190_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m66192_gshared (Dictionary_2_t9048 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m66192(__this, ___comparer, method) (( void (*) (Dictionary_2_t9048 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m66192_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m66194_gshared (Dictionary_2_t9048 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m66194(__this, ___dictionary, method) (( void (*) (Dictionary_2_t9048 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m66194_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m66196_gshared (Dictionary_2_t9048 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m66196(__this, ___capacity, method) (( void (*) (Dictionary_2_t9048 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m66196_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m66198_gshared (Dictionary_2_t9048 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m66198(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t9048 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m66198_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m66200_gshared (Dictionary_2_t9048 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m66200(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t9048 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m66200_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m66202_gshared (Dictionary_2_t9048 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m66202(__this, method) (( Object_t* (*) (Dictionary_2_t9048 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m66202_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m66204_gshared (Dictionary_2_t9048 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m66204(__this, method) (( Object_t* (*) (Dictionary_2_t9048 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m66204_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m66206_gshared (Dictionary_2_t9048 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m66206(__this, method) (( Object_t * (*) (Dictionary_2_t9048 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m66206_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m66208_gshared (Dictionary_2_t9048 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m66208(__this, method) (( Object_t * (*) (Dictionary_2_t9048 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m66208_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m66210_gshared (Dictionary_2_t9048 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m66210(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t9048 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m66210_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m66212_gshared (Dictionary_2_t9048 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m66212(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9048 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m66212_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m66214_gshared (Dictionary_2_t9048 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m66214(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9048 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m66214_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m66216_gshared (Dictionary_2_t9048 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m66216(__this, ___key, method) (( bool (*) (Dictionary_2_t9048 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m66216_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m66218_gshared (Dictionary_2_t9048 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m66218(__this, ___key, method) (( void (*) (Dictionary_2_t9048 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m66218_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m66220_gshared (Dictionary_2_t9048 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m66220(__this, method) (( bool (*) (Dictionary_2_t9048 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m66220_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m66222_gshared (Dictionary_2_t9048 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m66222(__this, method) (( Object_t * (*) (Dictionary_2_t9048 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m66222_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m66224_gshared (Dictionary_2_t9048 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m66224(__this, method) (( bool (*) (Dictionary_2_t9048 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m66224_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m66226_gshared (Dictionary_2_t9048 * __this, KeyValuePair_2_t9049  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m66226(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t9048 *, KeyValuePair_2_t9049 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m66226_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m66228_gshared (Dictionary_2_t9048 * __this, KeyValuePair_2_t9049  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m66228(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t9048 *, KeyValuePair_2_t9049 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m66228_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m66230_gshared (Dictionary_2_t9048 * __this, KeyValuePair_2U5BU5D_t10266* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m66230(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9048 *, KeyValuePair_2U5BU5D_t10266*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m66230_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m66232_gshared (Dictionary_2_t9048 * __this, KeyValuePair_2_t9049  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m66232(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t9048 *, KeyValuePair_2_t9049 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m66232_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m66234_gshared (Dictionary_2_t9048 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m66234(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9048 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m66234_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m66236_gshared (Dictionary_2_t9048 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m66236(__this, method) (( Object_t * (*) (Dictionary_2_t9048 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m66236_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m66238_gshared (Dictionary_2_t9048 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m66238(__this, method) (( Object_t* (*) (Dictionary_2_t9048 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m66238_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m66240_gshared (Dictionary_2_t9048 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m66240(__this, method) (( Object_t * (*) (Dictionary_2_t9048 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m66240_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m66242_gshared (Dictionary_2_t9048 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m66242(__this, method) (( int32_t (*) (Dictionary_2_t9048 *, const MethodInfo*))Dictionary_2_get_Count_m66242_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m66244_gshared (Dictionary_2_t9048 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m66244(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t9048 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m66244_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m66246_gshared (Dictionary_2_t9048 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m66246(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9048 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m66246_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m66248_gshared (Dictionary_2_t9048 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m66248(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t9048 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m66248_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m66250_gshared (Dictionary_2_t9048 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m66250(__this, ___size, method) (( void (*) (Dictionary_2_t9048 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m66250_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m66252_gshared (Dictionary_2_t9048 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m66252(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9048 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m66252_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t9049  Dictionary_2_make_pair_m66254_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m66254(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t9049  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m66254_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m66256_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m66256(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m66256_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m66258_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m66258(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m66258_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m66260_gshared (Dictionary_2_t9048 * __this, KeyValuePair_2U5BU5D_t10266* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m66260(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9048 *, KeyValuePair_2U5BU5D_t10266*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m66260_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m66262_gshared (Dictionary_2_t9048 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m66262(__this, method) (( void (*) (Dictionary_2_t9048 *, const MethodInfo*))Dictionary_2_Resize_m66262_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m66264_gshared (Dictionary_2_t9048 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m66264(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9048 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m66264_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m66266_gshared (Dictionary_2_t9048 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m66266(__this, method) (( void (*) (Dictionary_2_t9048 *, const MethodInfo*))Dictionary_2_Clear_m66266_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m66268_gshared (Dictionary_2_t9048 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m66268(__this, ___key, method) (( bool (*) (Dictionary_2_t9048 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m66268_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m66270_gshared (Dictionary_2_t9048 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m66270(__this, ___value, method) (( bool (*) (Dictionary_2_t9048 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m66270_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m66272_gshared (Dictionary_2_t9048 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m66272(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t9048 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m66272_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m66274_gshared (Dictionary_2_t9048 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m66274(__this, ___sender, method) (( void (*) (Dictionary_2_t9048 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m66274_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m66276_gshared (Dictionary_2_t9048 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m66276(__this, ___key, method) (( bool (*) (Dictionary_2_t9048 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m66276_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m66278_gshared (Dictionary_2_t9048 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m66278(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t9048 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m66278_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t9051 * Dictionary_2_get_Keys_m66280_gshared (Dictionary_2_t9048 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m66280(__this, method) (( KeyCollection_t9051 * (*) (Dictionary_2_t9048 *, const MethodInfo*))Dictionary_2_get_Keys_m66280_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t9055 * Dictionary_2_get_Values_m66282_gshared (Dictionary_2_t9048 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m66282(__this, method) (( ValueCollection_t9055 * (*) (Dictionary_2_t9048 *, const MethodInfo*))Dictionary_2_get_Values_m66282_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m66284_gshared (Dictionary_2_t9048 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m66284(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t9048 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m66284_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m66286_gshared (Dictionary_2_t9048 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m66286(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t9048 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m66286_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m66288_gshared (Dictionary_2_t9048 * __this, KeyValuePair_2_t9049  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m66288(__this, ___pair, method) (( bool (*) (Dictionary_2_t9048 *, KeyValuePair_2_t9049 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m66288_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t9053  Dictionary_2_GetEnumerator_m66290_gshared (Dictionary_2_t9048 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m66290(__this, method) (( Enumerator_t9053  (*) (Dictionary_2_t9048 *, const MethodInfo*))Dictionary_2_GetEnumerator_m66290_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__2_m66292_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m66292(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m66292_gshared)(__this /* static, unused */, ___key, ___value, method)
