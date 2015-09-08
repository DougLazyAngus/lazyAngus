#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t4478;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9330;
// System.Collections.Generic.ICollection`1<System.Reflection.Emit.Label>
struct ICollection_1_t10374;
// System.Collections.ICollection
struct ICollection_t769;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Reflection.Emit.Label>
struct KeyCollection_t9264;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>
struct ValueCollection_t9268;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5943;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Reflection.Emit.Label>
struct IDictionary_2_t10375;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2937;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>[]
struct KeyValuePair_2U5BU5D_t10376;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>
struct IEnumerator_1_t10377;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t799;
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_146.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__77.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor()
extern "C" void Dictionary_2__ctor_m18170_gshared (Dictionary_2_t4478 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18170(__this, method) (( void (*) (Dictionary_2_t4478 *, const MethodInfo*))Dictionary_2__ctor_m18170_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m69098_gshared (Dictionary_2_t4478 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m69098(__this, ___comparer, method) (( void (*) (Dictionary_2_t4478 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m69098_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m69099_gshared (Dictionary_2_t4478 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m69099(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4478 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m69099_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m69100_gshared (Dictionary_2_t4478 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m69100(__this, ___capacity, method) (( void (*) (Dictionary_2_t4478 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m69100_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m69101_gshared (Dictionary_2_t4478 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m69101(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4478 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m69101_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m69102_gshared (Dictionary_2_t4478 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m69102(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4478 *, SerializationInfo_t2937 *, StreamingContext_t2938 , const MethodInfo*))Dictionary_2__ctor_m69102_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m69103_gshared (Dictionary_2_t4478 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m69103(__this, method) (( Object_t* (*) (Dictionary_2_t4478 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m69103_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m69104_gshared (Dictionary_2_t4478 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m69104(__this, method) (( Object_t* (*) (Dictionary_2_t4478 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m69104_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m69105_gshared (Dictionary_2_t4478 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m69105(__this, method) (( Object_t * (*) (Dictionary_2_t4478 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m69105_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m69106_gshared (Dictionary_2_t4478 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m69106(__this, method) (( Object_t * (*) (Dictionary_2_t4478 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m69106_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m69107_gshared (Dictionary_2_t4478 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m69107(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4478 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m69107_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m69108_gshared (Dictionary_2_t4478 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m69108(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4478 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m69108_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m69109_gshared (Dictionary_2_t4478 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m69109(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4478 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m69109_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m69110_gshared (Dictionary_2_t4478 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m69110(__this, ___key, method) (( bool (*) (Dictionary_2_t4478 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m69110_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m69111_gshared (Dictionary_2_t4478 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m69111(__this, ___key, method) (( void (*) (Dictionary_2_t4478 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m69111_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m69112_gshared (Dictionary_2_t4478 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m69112(__this, method) (( bool (*) (Dictionary_2_t4478 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m69112_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m69113_gshared (Dictionary_2_t4478 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m69113(__this, method) (( Object_t * (*) (Dictionary_2_t4478 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m69113_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m69114_gshared (Dictionary_2_t4478 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m69114(__this, method) (( bool (*) (Dictionary_2_t4478 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m69114_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m69115_gshared (Dictionary_2_t4478 * __this, KeyValuePair_2_t9261  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m69115(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4478 *, KeyValuePair_2_t9261 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m69115_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m69116_gshared (Dictionary_2_t4478 * __this, KeyValuePair_2_t9261  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m69116(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4478 *, KeyValuePair_2_t9261 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m69116_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m69117_gshared (Dictionary_2_t4478 * __this, KeyValuePair_2U5BU5D_t10376* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m69117(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4478 *, KeyValuePair_2U5BU5D_t10376*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m69117_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m69118_gshared (Dictionary_2_t4478 * __this, KeyValuePair_2_t9261  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m69118(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4478 *, KeyValuePair_2_t9261 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m69118_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m69119_gshared (Dictionary_2_t4478 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m69119(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4478 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m69119_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m69120_gshared (Dictionary_2_t4478 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m69120(__this, method) (( Object_t * (*) (Dictionary_2_t4478 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m69120_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m69121_gshared (Dictionary_2_t4478 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m69121(__this, method) (( Object_t* (*) (Dictionary_2_t4478 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m69121_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m69122_gshared (Dictionary_2_t4478 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m69122(__this, method) (( Object_t * (*) (Dictionary_2_t4478 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m69122_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m69123_gshared (Dictionary_2_t4478 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m69123(__this, method) (( int32_t (*) (Dictionary_2_t4478 *, const MethodInfo*))Dictionary_2_get_Count_m69123_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Item(TKey)
extern "C" Label_t4475  Dictionary_2_get_Item_m69124_gshared (Dictionary_2_t4478 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m69124(__this, ___key, method) (( Label_t4475  (*) (Dictionary_2_t4478 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m69124_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m69125_gshared (Dictionary_2_t4478 * __this, int32_t ___key, Label_t4475  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m69125(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4478 *, int32_t, Label_t4475 , const MethodInfo*))Dictionary_2_set_Item_m69125_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m69126_gshared (Dictionary_2_t4478 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m69126(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4478 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m69126_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m69127_gshared (Dictionary_2_t4478 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m69127(__this, ___size, method) (( void (*) (Dictionary_2_t4478 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m69127_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m69128_gshared (Dictionary_2_t4478 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m69128(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4478 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m69128_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t9261  Dictionary_2_make_pair_m69129_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t4475  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m69129(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t9261  (*) (Object_t * /* static, unused */, int32_t, Label_t4475 , const MethodInfo*))Dictionary_2_make_pair_m69129_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m69130_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t4475  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m69130(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Label_t4475 , const MethodInfo*))Dictionary_2_pick_key_m69130_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::pick_value(TKey,TValue)
extern "C" Label_t4475  Dictionary_2_pick_value_m69131_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t4475  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m69131(__this /* static, unused */, ___key, ___value, method) (( Label_t4475  (*) (Object_t * /* static, unused */, int32_t, Label_t4475 , const MethodInfo*))Dictionary_2_pick_value_m69131_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m69132_gshared (Dictionary_2_t4478 * __this, KeyValuePair_2U5BU5D_t10376* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m69132(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4478 *, KeyValuePair_2U5BU5D_t10376*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m69132_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Resize()
extern "C" void Dictionary_2_Resize_m69133_gshared (Dictionary_2_t4478 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m69133(__this, method) (( void (*) (Dictionary_2_t4478 *, const MethodInfo*))Dictionary_2_Resize_m69133_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m69134_gshared (Dictionary_2_t4478 * __this, int32_t ___key, Label_t4475  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m69134(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4478 *, int32_t, Label_t4475 , const MethodInfo*))Dictionary_2_Add_m69134_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Clear()
extern "C" void Dictionary_2_Clear_m69135_gshared (Dictionary_2_t4478 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m69135(__this, method) (( void (*) (Dictionary_2_t4478 *, const MethodInfo*))Dictionary_2_Clear_m69135_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m69136_gshared (Dictionary_2_t4478 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m69136(__this, ___key, method) (( bool (*) (Dictionary_2_t4478 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m69136_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m69137_gshared (Dictionary_2_t4478 * __this, Label_t4475  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m69137(__this, ___value, method) (( bool (*) (Dictionary_2_t4478 *, Label_t4475 , const MethodInfo*))Dictionary_2_ContainsValue_m69137_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m69138_gshared (Dictionary_2_t4478 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m69138(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4478 *, SerializationInfo_t2937 *, StreamingContext_t2938 , const MethodInfo*))Dictionary_2_GetObjectData_m69138_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m69139_gshared (Dictionary_2_t4478 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m69139(__this, ___sender, method) (( void (*) (Dictionary_2_t4478 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m69139_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m69140_gshared (Dictionary_2_t4478 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m69140(__this, ___key, method) (( bool (*) (Dictionary_2_t4478 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m69140_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m69141_gshared (Dictionary_2_t4478 * __this, int32_t ___key, Label_t4475 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m69141(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4478 *, int32_t, Label_t4475 *, const MethodInfo*))Dictionary_2_TryGetValue_m69141_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Keys()
extern "C" KeyCollection_t9264 * Dictionary_2_get_Keys_m69142_gshared (Dictionary_2_t4478 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m69142(__this, method) (( KeyCollection_t9264 * (*) (Dictionary_2_t4478 *, const MethodInfo*))Dictionary_2_get_Keys_m69142_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Values()
extern "C" ValueCollection_t9268 * Dictionary_2_get_Values_m69143_gshared (Dictionary_2_t4478 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m69143(__this, method) (( ValueCollection_t9268 * (*) (Dictionary_2_t4478 *, const MethodInfo*))Dictionary_2_get_Values_m69143_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m69144_gshared (Dictionary_2_t4478 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m69144(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4478 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m69144_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ToTValue(System.Object)
extern "C" Label_t4475  Dictionary_2_ToTValue_m69145_gshared (Dictionary_2_t4478 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m69145(__this, ___value, method) (( Label_t4475  (*) (Dictionary_2_t4478 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m69145_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m69146_gshared (Dictionary_2_t4478 * __this, KeyValuePair_2_t9261  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m69146(__this, ___pair, method) (( bool (*) (Dictionary_2_t4478 *, KeyValuePair_2_t9261 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m69146_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::GetEnumerator()
extern "C" Enumerator_t9266  Dictionary_2_GetEnumerator_m69147_gshared (Dictionary_2_t4478 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m69147(__this, method) (( Enumerator_t9266  (*) (Dictionary_2_t4478 *, const MethodInfo*))Dictionary_2_GetEnumerator_m69147_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2157  Dictionary_2_U3CCopyToU3Em__2_m69148_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t4475  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m69148(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2157  (*) (Object_t * /* static, unused */, int32_t, Label_t4475 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m69148_gshared)(__this /* static, unused */, ___key, ___value, method)
