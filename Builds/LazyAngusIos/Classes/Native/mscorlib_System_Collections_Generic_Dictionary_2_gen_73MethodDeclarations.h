#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8911;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9707;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9329;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>
struct KeyCollection_t8912;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>
struct ValueCollection_t8916;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6575;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>
struct IDictionary_2_t8907;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>[]
struct KeyValuePair_2U5BU5D_t10207;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
struct IEnumerator_1_t10208;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_131.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__62.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m64378_gshared (Dictionary_2_t8911 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m64378(__this, method) (( void (*) (Dictionary_2_t8911 *, const MethodInfo*))Dictionary_2__ctor_m64378_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m64379_gshared (Dictionary_2_t8911 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m64379(__this, ___comparer, method) (( void (*) (Dictionary_2_t8911 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m64379_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m64380_gshared (Dictionary_2_t8911 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m64380(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8911 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m64380_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m64381_gshared (Dictionary_2_t8911 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m64381(__this, ___capacity, method) (( void (*) (Dictionary_2_t8911 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m64381_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m64382_gshared (Dictionary_2_t8911 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m64382(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8911 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m64382_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m64383_gshared (Dictionary_2_t8911 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m64383(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8911 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m64383_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m64384_gshared (Dictionary_2_t8911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m64384(__this, method) (( Object_t* (*) (Dictionary_2_t8911 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m64384_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m64385_gshared (Dictionary_2_t8911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m64385(__this, method) (( Object_t* (*) (Dictionary_2_t8911 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m64385_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m64386_gshared (Dictionary_2_t8911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m64386(__this, method) (( Object_t * (*) (Dictionary_2_t8911 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m64386_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m64387_gshared (Dictionary_2_t8911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m64387(__this, method) (( Object_t * (*) (Dictionary_2_t8911 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m64387_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m64388_gshared (Dictionary_2_t8911 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m64388(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8911 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m64388_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m64389_gshared (Dictionary_2_t8911 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m64389(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8911 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m64389_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m64390_gshared (Dictionary_2_t8911 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m64390(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8911 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m64390_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m64391_gshared (Dictionary_2_t8911 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m64391(__this, ___key, method) (( bool (*) (Dictionary_2_t8911 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m64391_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m64392_gshared (Dictionary_2_t8911 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m64392(__this, ___key, method) (( void (*) (Dictionary_2_t8911 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m64392_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m64393_gshared (Dictionary_2_t8911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m64393(__this, method) (( bool (*) (Dictionary_2_t8911 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m64393_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m64394_gshared (Dictionary_2_t8911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m64394(__this, method) (( Object_t * (*) (Dictionary_2_t8911 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m64394_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m64395_gshared (Dictionary_2_t8911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m64395(__this, method) (( bool (*) (Dictionary_2_t8911 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m64395_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m64396_gshared (Dictionary_2_t8911 * __this, KeyValuePair_2_t8908  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m64396(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8911 *, KeyValuePair_2_t8908 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m64396_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m64397_gshared (Dictionary_2_t8911 * __this, KeyValuePair_2_t8908  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m64397(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8911 *, KeyValuePair_2_t8908 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m64397_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m64398_gshared (Dictionary_2_t8911 * __this, KeyValuePair_2U5BU5D_t10207* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m64398(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8911 *, KeyValuePair_2U5BU5D_t10207*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m64398_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m64399_gshared (Dictionary_2_t8911 * __this, KeyValuePair_2_t8908  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m64399(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8911 *, KeyValuePair_2_t8908 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m64399_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m64400_gshared (Dictionary_2_t8911 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m64400(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8911 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m64400_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m64401_gshared (Dictionary_2_t8911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m64401(__this, method) (( Object_t * (*) (Dictionary_2_t8911 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m64401_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m64402_gshared (Dictionary_2_t8911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m64402(__this, method) (( Object_t* (*) (Dictionary_2_t8911 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m64402_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m64403_gshared (Dictionary_2_t8911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m64403(__this, method) (( Object_t * (*) (Dictionary_2_t8911 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m64403_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m64404_gshared (Dictionary_2_t8911 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m64404(__this, method) (( int32_t (*) (Dictionary_2_t8911 *, const MethodInfo*))Dictionary_2_get_Count_m64404_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m64405_gshared (Dictionary_2_t8911 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m64405(__this, ___key, method) (( int32_t (*) (Dictionary_2_t8911 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m64405_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m64406_gshared (Dictionary_2_t8911 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m64406(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8911 *, int64_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m64406_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m64407_gshared (Dictionary_2_t8911 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m64407(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8911 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m64407_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m64408_gshared (Dictionary_2_t8911 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m64408(__this, ___size, method) (( void (*) (Dictionary_2_t8911 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m64408_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m64409_gshared (Dictionary_2_t8911 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m64409(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8911 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m64409_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8908  Dictionary_2_make_pair_m64410_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m64410(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8908  (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m64410_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m64411_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m64411(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m64411_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m64412_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m64412(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m64412_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m64413_gshared (Dictionary_2_t8911 * __this, KeyValuePair_2U5BU5D_t10207* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m64413(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8911 *, KeyValuePair_2U5BU5D_t10207*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m64413_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m64414_gshared (Dictionary_2_t8911 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m64414(__this, method) (( void (*) (Dictionary_2_t8911 *, const MethodInfo*))Dictionary_2_Resize_m64414_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m64415_gshared (Dictionary_2_t8911 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m64415(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8911 *, int64_t, int32_t, const MethodInfo*))Dictionary_2_Add_m64415_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m64416_gshared (Dictionary_2_t8911 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m64416(__this, method) (( void (*) (Dictionary_2_t8911 *, const MethodInfo*))Dictionary_2_Clear_m64416_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m64417_gshared (Dictionary_2_t8911 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m64417(__this, ___key, method) (( bool (*) (Dictionary_2_t8911 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m64417_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m64418_gshared (Dictionary_2_t8911 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m64418(__this, ___value, method) (( bool (*) (Dictionary_2_t8911 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m64418_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m64419_gshared (Dictionary_2_t8911 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m64419(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8911 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m64419_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m64420_gshared (Dictionary_2_t8911 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m64420(__this, ___sender, method) (( void (*) (Dictionary_2_t8911 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m64420_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m64421_gshared (Dictionary_2_t8911 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m64421(__this, ___key, method) (( bool (*) (Dictionary_2_t8911 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m64421_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m64422_gshared (Dictionary_2_t8911 * __this, int64_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m64422(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8911 *, int64_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m64422_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Keys()
extern "C" KeyCollection_t8912 * Dictionary_2_get_Keys_m64423_gshared (Dictionary_2_t8911 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m64423(__this, method) (( KeyCollection_t8912 * (*) (Dictionary_2_t8911 *, const MethodInfo*))Dictionary_2_get_Keys_m64423_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Values()
extern "C" ValueCollection_t8916 * Dictionary_2_get_Values_m64424_gshared (Dictionary_2_t8911 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m64424(__this, method) (( ValueCollection_t8916 * (*) (Dictionary_2_t8911 *, const MethodInfo*))Dictionary_2_get_Values_m64424_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m64425_gshared (Dictionary_2_t8911 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m64425(__this, ___key, method) (( int64_t (*) (Dictionary_2_t8911 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m64425_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m64426_gshared (Dictionary_2_t8911 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m64426(__this, ___value, method) (( int32_t (*) (Dictionary_2_t8911 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m64426_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m64427_gshared (Dictionary_2_t8911 * __this, KeyValuePair_2_t8908  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m64427(__this, ___pair, method) (( bool (*) (Dictionary_2_t8911 *, KeyValuePair_2_t8908 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m64427_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8914  Dictionary_2_GetEnumerator_m64428_gshared (Dictionary_2_t8911 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m64428(__this, method) (( Enumerator_t8914  (*) (Dictionary_2_t8911 *, const MethodInfo*))Dictionary_2_GetEnumerator_m64428_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__2_m64429_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m64429(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m64429_gshared)(__this /* static, unused */, ___key, ___value, method)
