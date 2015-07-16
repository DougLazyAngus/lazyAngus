﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3868;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1238;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t4492;
// System.Collections.ICollection
struct ICollection_t592;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t3872;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t3876;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3337;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t4496;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1247;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t4497;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t4498;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1443;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m25358_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m25358(__this, method) (( void (*) (Dictionary_2_t3868 *, const MethodInfo*))Dictionary_2__ctor_m25358_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25360_gshared (Dictionary_2_t3868 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25360(__this, ___comparer, method) (( void (*) (Dictionary_2_t3868 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25360_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m25362_gshared (Dictionary_2_t3868 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m25362(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3868 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25362_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m25364_gshared (Dictionary_2_t3868 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m25364(__this, ___capacity, method) (( void (*) (Dictionary_2_t3868 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25364_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25366_gshared (Dictionary_2_t3868 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25366(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3868 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25366_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m25368_gshared (Dictionary_2_t3868 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m25368(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3868 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2__ctor_m25368_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25370_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25370(__this, method) (( Object_t* (*) (Dictionary_2_t3868 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25370_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25372_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25372(__this, method) (( Object_t* (*) (Dictionary_2_t3868 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25372_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m25374_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25374(__this, method) (( Object_t * (*) (Dictionary_2_t3868 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25374_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25376_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25376(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3868 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25376_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25378_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25378(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3868 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25378_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25380_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m25380(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3868 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25380_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m25382_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m25382(__this, ___key, method) (( bool (*) (Dictionary_2_t3868 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25382_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25384_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m25384(__this, ___key, method) (( void (*) (Dictionary_2_t3868 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25384_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25386_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25386(__this, method) (( bool (*) (Dictionary_2_t3868 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25386_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25388_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25388(__this, method) (( Object_t * (*) (Dictionary_2_t3868 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25388_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25390_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25390(__this, method) (( bool (*) (Dictionary_2_t3868 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25390_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25392_gshared (Dictionary_2_t3868 * __this, KeyValuePair_2_t3869  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25392(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3868 *, KeyValuePair_2_t3869 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25392_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25394_gshared (Dictionary_2_t3868 * __this, KeyValuePair_2_t3869  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25394(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3868 *, KeyValuePair_2_t3869 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25394_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25396_gshared (Dictionary_2_t3868 * __this, KeyValuePair_2U5BU5D_t4497* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25396(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3868 *, KeyValuePair_2U5BU5D_t4497*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25396_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25398_gshared (Dictionary_2_t3868 * __this, KeyValuePair_2_t3869  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25398(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3868 *, KeyValuePair_2_t3869 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25398_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25400_gshared (Dictionary_2_t3868 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25400(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3868 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25400_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25402_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25402(__this, method) (( Object_t * (*) (Dictionary_2_t3868 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25402_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25404_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25404(__this, method) (( Object_t* (*) (Dictionary_2_t3868 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25404_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25406_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25406(__this, method) (( Object_t * (*) (Dictionary_2_t3868 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25406_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25408_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m25408(__this, method) (( int32_t (*) (Dictionary_2_t3868 *, const MethodInfo*))Dictionary_2_get_Count_m25408_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m25410_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m25410(__this, ___key, method) (( int64_t (*) (Dictionary_2_t3868 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m25410_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m25412_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m25412(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3868 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m25412_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m25414_gshared (Dictionary_2_t3868 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m25414(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3868 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25414_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m25416_gshared (Dictionary_2_t3868 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m25416(__this, ___size, method) (( void (*) (Dictionary_2_t3868 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25416_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m25418_gshared (Dictionary_2_t3868 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m25418(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3868 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25418_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3869  Dictionary_2_make_pair_m25420_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m25420(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3869  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m25420_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m25422_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m25422(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m25422_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m25424_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m25424(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m25424_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25426_gshared (Dictionary_2_t3868 * __this, KeyValuePair_2U5BU5D_t4497* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m25426(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3868 *, KeyValuePair_2U5BU5D_t4497*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25426_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m25428_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m25428(__this, method) (( void (*) (Dictionary_2_t3868 *, const MethodInfo*))Dictionary_2_Resize_m25428_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m25430_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m25430(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3868 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m25430_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m25432_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m25432(__this, method) (( void (*) (Dictionary_2_t3868 *, const MethodInfo*))Dictionary_2_Clear_m25432_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m25434_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m25434(__this, ___key, method) (( bool (*) (Dictionary_2_t3868 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m25434_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m25436_gshared (Dictionary_2_t3868 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m25436(__this, ___value, method) (( bool (*) (Dictionary_2_t3868 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m25436_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m25438_gshared (Dictionary_2_t3868 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m25438(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3868 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2_GetObjectData_m25438_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m25440_gshared (Dictionary_2_t3868 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m25440(__this, ___sender, method) (( void (*) (Dictionary_2_t3868 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25440_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25442_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m25442(__this, ___key, method) (( bool (*) (Dictionary_2_t3868 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m25442_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m25444_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m25444(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3868 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m25444_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t3872 * Dictionary_2_get_Keys_m25446_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m25446(__this, method) (( KeyCollection_t3872 * (*) (Dictionary_2_t3868 *, const MethodInfo*))Dictionary_2_get_Keys_m25446_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t3876 * Dictionary_2_get_Values_m25448_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m25448(__this, method) (( ValueCollection_t3876 * (*) (Dictionary_2_t3868 *, const MethodInfo*))Dictionary_2_get_Values_m25448_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m25450_gshared (Dictionary_2_t3868 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m25450(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3868 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25450_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m25452_gshared (Dictionary_2_t3868 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m25452(__this, ___value, method) (( int64_t (*) (Dictionary_2_t3868 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25452_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25454_gshared (Dictionary_2_t3868 * __this, KeyValuePair_2_t3869  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m25454(__this, ___pair, method) (( bool (*) (Dictionary_2_t3868 *, KeyValuePair_2_t3869 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25454_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t3874  Dictionary_2_GetEnumerator_m25456_gshared (Dictionary_2_t3868 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m25456(__this, method) (( Enumerator_t3874  (*) (Dictionary_2_t3868 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25456_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1710  Dictionary_2_U3CCopyToU3Em__0_m25458_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m25458(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1710  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m25458_gshared)(__this /* static, unused */, ___key, ___value, method)
