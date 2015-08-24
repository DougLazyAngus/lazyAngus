#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6015;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9083;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1224;
// System.Collections.ICollection
struct ICollection_t755;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t6016;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_t6020;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6013;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Object>
struct IDictionary_2_t6007;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t9084;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct IEnumerator_1_t9085;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t785;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__35.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m31211_gshared (Dictionary_2_t6015 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m31211(__this, method) (( void (*) (Dictionary_2_t6015 *, const MethodInfo*))Dictionary_2__ctor_m31211_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31212_gshared (Dictionary_2_t6015 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m31212(__this, ___comparer, method) (( void (*) (Dictionary_2_t6015 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31212_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m31213_gshared (Dictionary_2_t6015 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m31213(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6015 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31213_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m31214_gshared (Dictionary_2_t6015 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m31214(__this, ___capacity, method) (( void (*) (Dictionary_2_t6015 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m31214_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31215_gshared (Dictionary_2_t6015 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m31215(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6015 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31215_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m31216_gshared (Dictionary_2_t6015 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m31216(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6015 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2__ctor_m31216_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31217_gshared (Dictionary_2_t6015 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31217(__this, method) (( Object_t* (*) (Dictionary_2_t6015 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31217_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31218_gshared (Dictionary_2_t6015 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31218(__this, method) (( Object_t* (*) (Dictionary_2_t6015 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31218_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m31219_gshared (Dictionary_2_t6015 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m31219(__this, method) (( Object_t * (*) (Dictionary_2_t6015 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m31219_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m31220_gshared (Dictionary_2_t6015 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m31220(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6015 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m31220_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m31221_gshared (Dictionary_2_t6015 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m31221(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6015 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m31221_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m31222_gshared (Dictionary_2_t6015 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m31222(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6015 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m31222_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m31223_gshared (Dictionary_2_t6015 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m31223(__this, ___key, method) (( bool (*) (Dictionary_2_t6015 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m31223_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m31224_gshared (Dictionary_2_t6015 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m31224(__this, ___key, method) (( void (*) (Dictionary_2_t6015 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m31224_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31225_gshared (Dictionary_2_t6015 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31225(__this, method) (( bool (*) (Dictionary_2_t6015 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31225_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31226_gshared (Dictionary_2_t6015 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31226(__this, method) (( Object_t * (*) (Dictionary_2_t6015 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31226_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31227_gshared (Dictionary_2_t6015 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31227(__this, method) (( bool (*) (Dictionary_2_t6015 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31227_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31228_gshared (Dictionary_2_t6015 * __this, KeyValuePair_2_t6010  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31228(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6015 *, KeyValuePair_2_t6010 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31228_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31229_gshared (Dictionary_2_t6015 * __this, KeyValuePair_2_t6010  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31229(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6015 *, KeyValuePair_2_t6010 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31229_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31230_gshared (Dictionary_2_t6015 * __this, KeyValuePair_2U5BU5D_t9084* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31230(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6015 *, KeyValuePair_2U5BU5D_t9084*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31230_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31231_gshared (Dictionary_2_t6015 * __this, KeyValuePair_2_t6010  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31231(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6015 *, KeyValuePair_2_t6010 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31231_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m31232_gshared (Dictionary_2_t6015 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m31232(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6015 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m31232_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31233_gshared (Dictionary_2_t6015 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31233(__this, method) (( Object_t * (*) (Dictionary_2_t6015 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31233_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31234_gshared (Dictionary_2_t6015 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31234(__this, method) (( Object_t* (*) (Dictionary_2_t6015 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31234_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31235_gshared (Dictionary_2_t6015 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31235(__this, method) (( Object_t * (*) (Dictionary_2_t6015 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31235_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m31236_gshared (Dictionary_2_t6015 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m31236(__this, method) (( int32_t (*) (Dictionary_2_t6015 *, const MethodInfo*))Dictionary_2_get_Count_m31236_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m31237_gshared (Dictionary_2_t6015 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m31237(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6015 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m31237_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m31238_gshared (Dictionary_2_t6015 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m31238(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6015 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m31238_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m31239_gshared (Dictionary_2_t6015 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m31239(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6015 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m31239_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m31240_gshared (Dictionary_2_t6015 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m31240(__this, ___size, method) (( void (*) (Dictionary_2_t6015 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m31240_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m31241_gshared (Dictionary_2_t6015 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m31241(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6015 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m31241_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6010  Dictionary_2_make_pair_m31242_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m31242(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6010  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m31242_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m31243_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m31243(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m31243_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m31244_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m31244(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m31244_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m31245_gshared (Dictionary_2_t6015 * __this, KeyValuePair_2U5BU5D_t9084* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m31245(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6015 *, KeyValuePair_2U5BU5D_t9084*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m31245_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m31246_gshared (Dictionary_2_t6015 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m31246(__this, method) (( void (*) (Dictionary_2_t6015 *, const MethodInfo*))Dictionary_2_Resize_m31246_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m31247_gshared (Dictionary_2_t6015 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m31247(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6015 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m31247_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m31248_gshared (Dictionary_2_t6015 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m31248(__this, method) (( void (*) (Dictionary_2_t6015 *, const MethodInfo*))Dictionary_2_Clear_m31248_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m31249_gshared (Dictionary_2_t6015 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m31249(__this, ___key, method) (( bool (*) (Dictionary_2_t6015 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m31249_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m31250_gshared (Dictionary_2_t6015 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m31250(__this, ___value, method) (( bool (*) (Dictionary_2_t6015 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m31250_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m31251_gshared (Dictionary_2_t6015 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m31251(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6015 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2_GetObjectData_m31251_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m31252_gshared (Dictionary_2_t6015 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m31252(__this, ___sender, method) (( void (*) (Dictionary_2_t6015 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m31252_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m31253_gshared (Dictionary_2_t6015 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m31253(__this, ___key, method) (( bool (*) (Dictionary_2_t6015 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m31253_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m31254_gshared (Dictionary_2_t6015 * __this, int64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m31254(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6015 *, int64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m31254_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Keys()
extern "C" KeyCollection_t6016 * Dictionary_2_get_Keys_m31255_gshared (Dictionary_2_t6015 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m31255(__this, method) (( KeyCollection_t6016 * (*) (Dictionary_2_t6015 *, const MethodInfo*))Dictionary_2_get_Keys_m31255_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Values()
extern "C" ValueCollection_t6020 * Dictionary_2_get_Values_m31256_gshared (Dictionary_2_t6015 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m31256(__this, method) (( ValueCollection_t6020 * (*) (Dictionary_2_t6015 *, const MethodInfo*))Dictionary_2_get_Values_m31256_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m31257_gshared (Dictionary_2_t6015 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m31257(__this, ___key, method) (( int64_t (*) (Dictionary_2_t6015 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m31257_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m31258_gshared (Dictionary_2_t6015 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m31258(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t6015 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m31258_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m31259_gshared (Dictionary_2_t6015 * __this, KeyValuePair_2_t6010  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m31259(__this, ___pair, method) (( bool (*) (Dictionary_2_t6015 *, KeyValuePair_2_t6010 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m31259_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t6018  Dictionary_2_GetEnumerator_m31260_gshared (Dictionary_2_t6015 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m31260(__this, method) (( Enumerator_t6018  (*) (Dictionary_2_t6015 *, const MethodInfo*))Dictionary_2_GetEnumerator_m31260_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2140  Dictionary_2_U3CCopyToU3Em__0_m31261_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m31261(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2140  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m31261_gshared)(__this /* static, unused */, ___key, ___value, method)
