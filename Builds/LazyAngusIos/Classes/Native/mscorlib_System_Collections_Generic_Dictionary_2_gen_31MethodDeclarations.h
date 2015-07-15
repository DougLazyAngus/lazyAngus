#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3339;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1238;
// System.Collections.ICollection
struct ICollection_t592;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t3343;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t3347;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3337;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t4153;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1247;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3951;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3354;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1443;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m17033_gshared (Dictionary_2_t3339 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17033(__this, method) (( void (*) (Dictionary_2_t3339 *, const MethodInfo*))Dictionary_2__ctor_m17033_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17035_gshared (Dictionary_2_t3339 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17035(__this, ___comparer, method) (( void (*) (Dictionary_2_t3339 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17035_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m17037_gshared (Dictionary_2_t3339 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m17037(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3339 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17037_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17039_gshared (Dictionary_2_t3339 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17039(__this, ___capacity, method) (( void (*) (Dictionary_2_t3339 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17039_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17041_gshared (Dictionary_2_t3339 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17041(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3339 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17041_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17043_gshared (Dictionary_2_t3339 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17043(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3339 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2__ctor_m17043_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17045_gshared (Dictionary_2_t3339 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17045(__this, method) (( Object_t* (*) (Dictionary_2_t3339 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17045_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17047_gshared (Dictionary_2_t3339 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17047(__this, method) (( Object_t* (*) (Dictionary_2_t3339 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17047_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m17049_gshared (Dictionary_2_t3339 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m17049(__this, method) (( Object_t * (*) (Dictionary_2_t3339 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17049_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17051_gshared (Dictionary_2_t3339 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17051(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3339 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17051_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17053_gshared (Dictionary_2_t3339 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17053(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3339 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17053_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17055_gshared (Dictionary_2_t3339 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17055(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3339 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17055_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17057_gshared (Dictionary_2_t3339 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17057(__this, ___key, method) (( bool (*) (Dictionary_2_t3339 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17057_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17059_gshared (Dictionary_2_t3339 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17059(__this, ___key, method) (( void (*) (Dictionary_2_t3339 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17059_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17061_gshared (Dictionary_2_t3339 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17061(__this, method) (( bool (*) (Dictionary_2_t3339 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17061_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17063_gshared (Dictionary_2_t3339 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17063(__this, method) (( Object_t * (*) (Dictionary_2_t3339 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17063_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17065_gshared (Dictionary_2_t3339 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17065(__this, method) (( bool (*) (Dictionary_2_t3339 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17065_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17067_gshared (Dictionary_2_t3339 * __this, KeyValuePair_2_t40  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17067(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3339 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17067_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17069_gshared (Dictionary_2_t3339 * __this, KeyValuePair_2_t40  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17069(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3339 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17069_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17071_gshared (Dictionary_2_t3339 * __this, KeyValuePair_2U5BU5D_t3951* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17071(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3339 *, KeyValuePair_2U5BU5D_t3951*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17071_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17073_gshared (Dictionary_2_t3339 * __this, KeyValuePair_2_t40  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17073(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3339 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17073_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17075_gshared (Dictionary_2_t3339 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17075(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3339 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17075_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17077_gshared (Dictionary_2_t3339 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17077(__this, method) (( Object_t * (*) (Dictionary_2_t3339 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17077_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17079_gshared (Dictionary_2_t3339 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17079(__this, method) (( Object_t* (*) (Dictionary_2_t3339 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17079_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17081_gshared (Dictionary_2_t3339 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17081(__this, method) (( Object_t * (*) (Dictionary_2_t3339 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17081_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17083_gshared (Dictionary_2_t3339 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17083(__this, method) (( int32_t (*) (Dictionary_2_t3339 *, const MethodInfo*))Dictionary_2_get_Count_m17083_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m17085_gshared (Dictionary_2_t3339 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17085(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3339 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17085_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17087_gshared (Dictionary_2_t3339 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17087(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3339 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m17087_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17089_gshared (Dictionary_2_t3339 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17089(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3339 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17089_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17091_gshared (Dictionary_2_t3339 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17091(__this, ___size, method) (( void (*) (Dictionary_2_t3339 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17091_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17093_gshared (Dictionary_2_t3339 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17093(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3339 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17093_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t40  Dictionary_2_make_pair_m17095_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17095(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t40  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m17095_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m17097_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m17097(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m17097_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m17099_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17099(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m17099_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17101_gshared (Dictionary_2_t3339 * __this, KeyValuePair_2U5BU5D_t3951* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17101(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3339 *, KeyValuePair_2U5BU5D_t3951*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17101_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m17103_gshared (Dictionary_2_t3339 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17103(__this, method) (( void (*) (Dictionary_2_t3339 *, const MethodInfo*))Dictionary_2_Resize_m17103_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17105_gshared (Dictionary_2_t3339 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17105(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3339 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m17105_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m17107_gshared (Dictionary_2_t3339 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17107(__this, method) (( void (*) (Dictionary_2_t3339 *, const MethodInfo*))Dictionary_2_Clear_m17107_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17109_gshared (Dictionary_2_t3339 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17109(__this, ___key, method) (( bool (*) (Dictionary_2_t3339 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17109_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17111_gshared (Dictionary_2_t3339 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17111(__this, ___value, method) (( bool (*) (Dictionary_2_t3339 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m17111_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17113_gshared (Dictionary_2_t3339 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17113(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3339 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2_GetObjectData_m17113_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17115_gshared (Dictionary_2_t3339 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17115(__this, ___sender, method) (( void (*) (Dictionary_2_t3339 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17115_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17117_gshared (Dictionary_2_t3339 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17117(__this, ___key, method) (( bool (*) (Dictionary_2_t3339 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17117_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17119_gshared (Dictionary_2_t3339 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17119(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3339 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m17119_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t3343 * Dictionary_2_get_Keys_m17120_gshared (Dictionary_2_t3339 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m17120(__this, method) (( KeyCollection_t3343 * (*) (Dictionary_2_t3339 *, const MethodInfo*))Dictionary_2_get_Keys_m17120_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t3347 * Dictionary_2_get_Values_m17122_gshared (Dictionary_2_t3339 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17122(__this, method) (( ValueCollection_t3347 * (*) (Dictionary_2_t3339 *, const MethodInfo*))Dictionary_2_get_Values_m17122_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17124_gshared (Dictionary_2_t3339 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17124(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3339 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17124_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m17126_gshared (Dictionary_2_t3339 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17126(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3339 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17126_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17128_gshared (Dictionary_2_t3339 * __this, KeyValuePair_2_t40  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17128(__this, ___pair, method) (( bool (*) (Dictionary_2_t3339 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17128_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t3345  Dictionary_2_GetEnumerator_m17129_gshared (Dictionary_2_t3339 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17129(__this, method) (( Enumerator_t3345  (*) (Dictionary_2_t3339 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17129_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1710  Dictionary_2_U3CCopyToU3Em__0_m17131_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17131(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1710  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17131_gshared)(__this /* static, unused */, ___key, ___value, method)
