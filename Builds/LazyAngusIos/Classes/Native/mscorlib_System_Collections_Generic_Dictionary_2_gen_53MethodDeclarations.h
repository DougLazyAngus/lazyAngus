#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t6081;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9329;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t6084;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t6088;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1204;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t9425;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8127;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t7797;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m28104_gshared (Dictionary_2_t6081 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m28104(__this, method) (( void (*) (Dictionary_2_t6081 *, const MethodInfo*))Dictionary_2__ctor_m28104_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m28106_gshared (Dictionary_2_t6081 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m28106(__this, ___comparer, method) (( void (*) (Dictionary_2_t6081 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28106_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m28108_gshared (Dictionary_2_t6081 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m28108(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6081 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28108_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m28109_gshared (Dictionary_2_t6081 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m28109(__this, ___capacity, method) (( void (*) (Dictionary_2_t6081 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m28109_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m28111_gshared (Dictionary_2_t6081 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m28111(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6081 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28111_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m28113_gshared (Dictionary_2_t6081 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m28113(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6081 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m28113_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28115_gshared (Dictionary_2_t6081 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28115(__this, method) (( Object_t* (*) (Dictionary_2_t6081 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28115_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28117_gshared (Dictionary_2_t6081 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28117(__this, method) (( Object_t* (*) (Dictionary_2_t6081 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28117_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m28119_gshared (Dictionary_2_t6081 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m28119(__this, method) (( Object_t * (*) (Dictionary_2_t6081 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m28119_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m28121_gshared (Dictionary_2_t6081 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m28121(__this, method) (( Object_t * (*) (Dictionary_2_t6081 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m28121_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m28123_gshared (Dictionary_2_t6081 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m28123(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6081 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m28123_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m28125_gshared (Dictionary_2_t6081 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m28125(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6081 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m28125_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m28127_gshared (Dictionary_2_t6081 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m28127(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6081 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m28127_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m28129_gshared (Dictionary_2_t6081 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m28129(__this, ___key, method) (( bool (*) (Dictionary_2_t6081 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m28129_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m28131_gshared (Dictionary_2_t6081 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m28131(__this, ___key, method) (( void (*) (Dictionary_2_t6081 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m28131_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28133_gshared (Dictionary_2_t6081 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28133(__this, method) (( bool (*) (Dictionary_2_t6081 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28133_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28135_gshared (Dictionary_2_t6081 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28135(__this, method) (( Object_t * (*) (Dictionary_2_t6081 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28135_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28137_gshared (Dictionary_2_t6081 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28137(__this, method) (( bool (*) (Dictionary_2_t6081 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28137_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28139_gshared (Dictionary_2_t6081 * __this, KeyValuePair_2_t6082  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28139(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6081 *, KeyValuePair_2_t6082 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28139_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28141_gshared (Dictionary_2_t6081 * __this, KeyValuePair_2_t6082  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28141(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6081 *, KeyValuePair_2_t6082 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28141_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28143_gshared (Dictionary_2_t6081 * __this, KeyValuePair_2U5BU5D_t8127* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28143(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6081 *, KeyValuePair_2U5BU5D_t8127*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28143_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28145_gshared (Dictionary_2_t6081 * __this, KeyValuePair_2_t6082  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28145(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6081 *, KeyValuePair_2_t6082 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28145_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m28147_gshared (Dictionary_2_t6081 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m28147(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6081 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m28147_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28149_gshared (Dictionary_2_t6081 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28149(__this, method) (( Object_t * (*) (Dictionary_2_t6081 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28149_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28151_gshared (Dictionary_2_t6081 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28151(__this, method) (( Object_t* (*) (Dictionary_2_t6081 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28151_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28153_gshared (Dictionary_2_t6081 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28153(__this, method) (( Object_t * (*) (Dictionary_2_t6081 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m28155_gshared (Dictionary_2_t6081 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m28155(__this, method) (( int32_t (*) (Dictionary_2_t6081 *, const MethodInfo*))Dictionary_2_get_Count_m28155_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m28157_gshared (Dictionary_2_t6081 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m28157(__this, ___key, method) (( int32_t (*) (Dictionary_2_t6081 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m28157_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m28159_gshared (Dictionary_2_t6081 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m28159(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6081 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m28159_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m28161_gshared (Dictionary_2_t6081 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m28161(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6081 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m28161_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m28163_gshared (Dictionary_2_t6081 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m28163(__this, ___size, method) (( void (*) (Dictionary_2_t6081 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m28163_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m28165_gshared (Dictionary_2_t6081 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m28165(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6081 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m28165_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6082  Dictionary_2_make_pair_m28167_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m28167(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6082  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m28167_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m28169_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m28169(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m28169_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m28171_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m28171(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m28171_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m28173_gshared (Dictionary_2_t6081 * __this, KeyValuePair_2U5BU5D_t8127* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m28173(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6081 *, KeyValuePair_2U5BU5D_t8127*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m28173_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m28175_gshared (Dictionary_2_t6081 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m28175(__this, method) (( void (*) (Dictionary_2_t6081 *, const MethodInfo*))Dictionary_2_Resize_m28175_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m28177_gshared (Dictionary_2_t6081 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m28177(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6081 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m28177_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m28179_gshared (Dictionary_2_t6081 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m28179(__this, method) (( void (*) (Dictionary_2_t6081 *, const MethodInfo*))Dictionary_2_Clear_m28179_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m28181_gshared (Dictionary_2_t6081 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m28181(__this, ___key, method) (( bool (*) (Dictionary_2_t6081 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m28181_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m28183_gshared (Dictionary_2_t6081 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m28183(__this, ___value, method) (( bool (*) (Dictionary_2_t6081 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m28183_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m28185_gshared (Dictionary_2_t6081 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m28185(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6081 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m28185_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m28187_gshared (Dictionary_2_t6081 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m28187(__this, ___sender, method) (( void (*) (Dictionary_2_t6081 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m28187_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m28189_gshared (Dictionary_2_t6081 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m28189(__this, ___key, method) (( bool (*) (Dictionary_2_t6081 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m28189_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m28191_gshared (Dictionary_2_t6081 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m28191(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6081 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m28191_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t6084 * Dictionary_2_get_Keys_m28193_gshared (Dictionary_2_t6081 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m28193(__this, method) (( KeyCollection_t6084 * (*) (Dictionary_2_t6081 *, const MethodInfo*))Dictionary_2_get_Keys_m28193_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t6088 * Dictionary_2_get_Values_m28195_gshared (Dictionary_2_t6081 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m28195(__this, method) (( ValueCollection_t6088 * (*) (Dictionary_2_t6081 *, const MethodInfo*))Dictionary_2_get_Values_m28195_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m28197_gshared (Dictionary_2_t6081 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m28197(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6081 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m28197_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m28199_gshared (Dictionary_2_t6081 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m28199(__this, ___value, method) (( int32_t (*) (Dictionary_2_t6081 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m28199_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m28201_gshared (Dictionary_2_t6081 * __this, KeyValuePair_2_t6082  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m28201(__this, ___pair, method) (( bool (*) (Dictionary_2_t6081 *, KeyValuePair_2_t6082 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m28201_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t6086  Dictionary_2_GetEnumerator_m28203_gshared (Dictionary_2_t6081 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m28203(__this, method) (( Enumerator_t6086  (*) (Dictionary_2_t6081 *, const MethodInfo*))Dictionary_2_GetEnumerator_m28203_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__2_m28205_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m28205(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m28205_gshared)(__this /* static, unused */, ___key, ___value, method)
