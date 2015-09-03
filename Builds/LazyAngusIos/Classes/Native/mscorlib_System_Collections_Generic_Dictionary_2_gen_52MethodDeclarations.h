#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1504;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t5991;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t5995;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1204;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t1533;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t6606;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t6001;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m26135_gshared (Dictionary_2_t1504 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m26135(__this, method) (( void (*) (Dictionary_2_t1504 *, const MethodInfo*))Dictionary_2__ctor_m26135_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26137_gshared (Dictionary_2_t1504 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26137(__this, ___comparer, method) (( void (*) (Dictionary_2_t1504 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26137_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m26139_gshared (Dictionary_2_t1504 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m26139(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1504 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26139_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m26141_gshared (Dictionary_2_t1504 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m26141(__this, ___capacity, method) (( void (*) (Dictionary_2_t1504 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26141_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26143_gshared (Dictionary_2_t1504 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26143(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1504 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26143_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m26145_gshared (Dictionary_2_t1504 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m26145(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1504 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m26145_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26147_gshared (Dictionary_2_t1504 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26147(__this, method) (( Object_t* (*) (Dictionary_2_t1504 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26147_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26149_gshared (Dictionary_2_t1504 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26149(__this, method) (( Object_t* (*) (Dictionary_2_t1504 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26149_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m26151_gshared (Dictionary_2_t1504 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m26151(__this, method) (( Object_t * (*) (Dictionary_2_t1504 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26151_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m26153_gshared (Dictionary_2_t1504 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m26153(__this, method) (( Object_t * (*) (Dictionary_2_t1504 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m26153_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m26155_gshared (Dictionary_2_t1504 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m26155(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1504 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26155_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m26157_gshared (Dictionary_2_t1504 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m26157(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1504 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26157_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m26159_gshared (Dictionary_2_t1504 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m26159(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1504 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26159_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m26161_gshared (Dictionary_2_t1504 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m26161(__this, ___key, method) (( bool (*) (Dictionary_2_t1504 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26161_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m26163_gshared (Dictionary_2_t1504 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m26163(__this, ___key, method) (( void (*) (Dictionary_2_t1504 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26163_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26165_gshared (Dictionary_2_t1504 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26165(__this, method) (( bool (*) (Dictionary_2_t1504 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26165_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26167_gshared (Dictionary_2_t1504 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26167(__this, method) (( Object_t * (*) (Dictionary_2_t1504 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26167_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26169_gshared (Dictionary_2_t1504 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26169(__this, method) (( bool (*) (Dictionary_2_t1504 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26169_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26171_gshared (Dictionary_2_t1504 * __this, KeyValuePair_2_t70  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26171(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1504 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26171_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26173_gshared (Dictionary_2_t1504 * __this, KeyValuePair_2_t70  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26173(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1504 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26173_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26175_gshared (Dictionary_2_t1504 * __this, KeyValuePair_2U5BU5D_t6606* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26175(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1504 *, KeyValuePair_2U5BU5D_t6606*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26175_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26177_gshared (Dictionary_2_t1504 * __this, KeyValuePair_2_t70  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26177(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1504 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26177_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m26179_gshared (Dictionary_2_t1504 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m26179(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1504 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26179_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26181_gshared (Dictionary_2_t1504 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26181(__this, method) (( Object_t * (*) (Dictionary_2_t1504 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26181_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26183_gshared (Dictionary_2_t1504 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26183(__this, method) (( Object_t* (*) (Dictionary_2_t1504 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26183_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26185_gshared (Dictionary_2_t1504 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26185(__this, method) (( Object_t * (*) (Dictionary_2_t1504 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26185_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m26187_gshared (Dictionary_2_t1504 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m26187(__this, method) (( int32_t (*) (Dictionary_2_t1504 *, const MethodInfo*))Dictionary_2_get_Count_m26187_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m26189_gshared (Dictionary_2_t1504 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m26189(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1504 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m26189_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m26191_gshared (Dictionary_2_t1504 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m26191(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1504 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m26191_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m26193_gshared (Dictionary_2_t1504 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m26193(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1504 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26193_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m26195_gshared (Dictionary_2_t1504 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m26195(__this, ___size, method) (( void (*) (Dictionary_2_t1504 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26195_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m26197_gshared (Dictionary_2_t1504 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m26197(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1504 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26197_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t70  Dictionary_2_make_pair_m26199_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m26199(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t70  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m26199_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m26201_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m26201(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m26201_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m26203_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m26203(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m26203_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m26205_gshared (Dictionary_2_t1504 * __this, KeyValuePair_2U5BU5D_t6606* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m26205(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1504 *, KeyValuePair_2U5BU5D_t6606*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26205_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m26207_gshared (Dictionary_2_t1504 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m26207(__this, method) (( void (*) (Dictionary_2_t1504 *, const MethodInfo*))Dictionary_2_Resize_m26207_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m26209_gshared (Dictionary_2_t1504 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m26209(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1504 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m26209_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m26211_gshared (Dictionary_2_t1504 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m26211(__this, method) (( void (*) (Dictionary_2_t1504 *, const MethodInfo*))Dictionary_2_Clear_m26211_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m26213_gshared (Dictionary_2_t1504 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m26213(__this, ___key, method) (( bool (*) (Dictionary_2_t1504 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m26213_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m26215_gshared (Dictionary_2_t1504 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m26215(__this, ___value, method) (( bool (*) (Dictionary_2_t1504 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m26215_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m26217_gshared (Dictionary_2_t1504 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m26217(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1504 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m26217_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m26219_gshared (Dictionary_2_t1504 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m26219(__this, ___sender, method) (( void (*) (Dictionary_2_t1504 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26219_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m26221_gshared (Dictionary_2_t1504 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m26221(__this, ___key, method) (( bool (*) (Dictionary_2_t1504 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m26221_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m26223_gshared (Dictionary_2_t1504 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m26223(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1504 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m26223_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t5991 * Dictionary_2_get_Keys_m26224_gshared (Dictionary_2_t1504 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m26224(__this, method) (( KeyCollection_t5991 * (*) (Dictionary_2_t1504 *, const MethodInfo*))Dictionary_2_get_Keys_m26224_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t5995 * Dictionary_2_get_Values_m26226_gshared (Dictionary_2_t1504 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m26226(__this, method) (( ValueCollection_t5995 * (*) (Dictionary_2_t1504 *, const MethodInfo*))Dictionary_2_get_Values_m26226_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m26228_gshared (Dictionary_2_t1504 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m26228(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1504 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26228_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m26230_gshared (Dictionary_2_t1504 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m26230(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1504 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26230_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m26232_gshared (Dictionary_2_t1504 * __this, KeyValuePair_2_t70  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m26232(__this, ___pair, method) (( bool (*) (Dictionary_2_t1504 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26232_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t5993  Dictionary_2_GetEnumerator_m26233_gshared (Dictionary_2_t1504 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m26233(__this, method) (( Enumerator_t5993  (*) (Dictionary_2_t1504 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26233_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__2_m26235_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m26235(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m26235_gshared)(__this /* static, unused */, ___key, ___value, method)
