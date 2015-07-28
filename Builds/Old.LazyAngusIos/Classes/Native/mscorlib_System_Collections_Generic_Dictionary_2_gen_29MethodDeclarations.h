﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1175;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4177;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1238;
// System.Collections.ICollection
struct ICollection_t592;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t3384;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t3388;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3379;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t4182;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1247;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t4183;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t4184;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1443;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m6639_gshared (Dictionary_2_t1175 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m6639(__this, method) (( void (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2__ctor_m6639_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17832_gshared (Dictionary_2_t1175 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17832(__this, ___comparer, method) (( void (*) (Dictionary_2_t1175 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17832_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m17834_gshared (Dictionary_2_t1175 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m17834(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1175 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17834_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17836_gshared (Dictionary_2_t1175 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17836(__this, ___capacity, method) (( void (*) (Dictionary_2_t1175 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17836_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17838_gshared (Dictionary_2_t1175 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17838(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1175 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17838_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17840_gshared (Dictionary_2_t1175 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17840(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1175 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2__ctor_m17840_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17842_gshared (Dictionary_2_t1175 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17842(__this, method) (( Object_t* (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17842_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17844_gshared (Dictionary_2_t1175 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17844(__this, method) (( Object_t* (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17844_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m17846_gshared (Dictionary_2_t1175 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m17846(__this, method) (( Object_t * (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17846_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17848_gshared (Dictionary_2_t1175 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17848(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1175 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17848_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17850_gshared (Dictionary_2_t1175 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17850(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1175 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17850_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17852_gshared (Dictionary_2_t1175 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17852(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1175 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17852_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17854_gshared (Dictionary_2_t1175 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17854(__this, ___key, method) (( bool (*) (Dictionary_2_t1175 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17854_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17856_gshared (Dictionary_2_t1175 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17856(__this, ___key, method) (( void (*) (Dictionary_2_t1175 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17856_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17858_gshared (Dictionary_2_t1175 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17858(__this, method) (( bool (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17858_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17860_gshared (Dictionary_2_t1175 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17860(__this, method) (( Object_t * (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17860_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17862_gshared (Dictionary_2_t1175 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17862(__this, method) (( bool (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17862_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17864_gshared (Dictionary_2_t1175 * __this, KeyValuePair_2_t3382  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17864(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1175 *, KeyValuePair_2_t3382 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17864_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17866_gshared (Dictionary_2_t1175 * __this, KeyValuePair_2_t3382  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17866(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1175 *, KeyValuePair_2_t3382 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17866_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17868_gshared (Dictionary_2_t1175 * __this, KeyValuePair_2U5BU5D_t4183* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17868(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1175 *, KeyValuePair_2U5BU5D_t4183*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17868_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17870_gshared (Dictionary_2_t1175 * __this, KeyValuePair_2_t3382  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17870(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1175 *, KeyValuePair_2_t3382 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17870_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17872_gshared (Dictionary_2_t1175 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17872(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1175 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17872_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17874_gshared (Dictionary_2_t1175 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17874(__this, method) (( Object_t * (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17874_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17876_gshared (Dictionary_2_t1175 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17876(__this, method) (( Object_t* (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17876_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17878_gshared (Dictionary_2_t1175 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17878(__this, method) (( Object_t * (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17878_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17880_gshared (Dictionary_2_t1175 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17880(__this, method) (( int32_t (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_get_Count_m17880_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m17882_gshared (Dictionary_2_t1175 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17882(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1175 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m17882_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17884_gshared (Dictionary_2_t1175 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17884(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1175 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m17884_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17886_gshared (Dictionary_2_t1175 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17886(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1175 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17886_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17888_gshared (Dictionary_2_t1175 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17888(__this, ___size, method) (( void (*) (Dictionary_2_t1175 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17888_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17890_gshared (Dictionary_2_t1175 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17890(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1175 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17890_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3382  Dictionary_2_make_pair_m17892_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17892(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3382  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m17892_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m17894_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m17894(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m17894_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m17896_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17896(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m17896_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17898_gshared (Dictionary_2_t1175 * __this, KeyValuePair_2U5BU5D_t4183* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17898(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1175 *, KeyValuePair_2U5BU5D_t4183*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17898_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m17900_gshared (Dictionary_2_t1175 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17900(__this, method) (( void (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_Resize_m17900_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17902_gshared (Dictionary_2_t1175 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17902(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1175 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m17902_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m17904_gshared (Dictionary_2_t1175 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17904(__this, method) (( void (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_Clear_m17904_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17906_gshared (Dictionary_2_t1175 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17906(__this, ___key, method) (( bool (*) (Dictionary_2_t1175 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m17906_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17908_gshared (Dictionary_2_t1175 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17908(__this, ___value, method) (( bool (*) (Dictionary_2_t1175 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m17908_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17910_gshared (Dictionary_2_t1175 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17910(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1175 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2_GetObjectData_m17910_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17912_gshared (Dictionary_2_t1175 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17912(__this, ___sender, method) (( void (*) (Dictionary_2_t1175 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17912_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17914_gshared (Dictionary_2_t1175 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17914(__this, ___key, method) (( bool (*) (Dictionary_2_t1175 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m17914_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17916_gshared (Dictionary_2_t1175 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17916(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1175 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m17916_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t3384 * Dictionary_2_get_Keys_m17917_gshared (Dictionary_2_t1175 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m17917(__this, method) (( KeyCollection_t3384 * (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_get_Keys_m17917_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t3388 * Dictionary_2_get_Values_m17919_gshared (Dictionary_2_t1175 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17919(__this, method) (( ValueCollection_t3388 * (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_get_Values_m17919_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m17921_gshared (Dictionary_2_t1175 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17921(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1175 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17921_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m17923_gshared (Dictionary_2_t1175 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17923(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1175 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17923_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17925_gshared (Dictionary_2_t1175 * __this, KeyValuePair_2_t3382  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17925(__this, ___pair, method) (( bool (*) (Dictionary_2_t1175 *, KeyValuePair_2_t3382 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17925_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t3386  Dictionary_2_GetEnumerator_m17926_gshared (Dictionary_2_t1175 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17926(__this, method) (( Enumerator_t3386  (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17926_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1710  Dictionary_2_U3CCopyToU3Em__0_m17928_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17928(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1710  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17928_gshared)(__this /* static, unused */, ___key, ___value, method)