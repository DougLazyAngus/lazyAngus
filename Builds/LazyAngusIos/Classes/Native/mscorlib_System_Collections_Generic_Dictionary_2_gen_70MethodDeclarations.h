#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8446;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9072;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t8447;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t8451;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1187;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t9614;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7686;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t7248;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__65.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m61037_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m61037(__this, method) (( void (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2__ctor_m61037_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61039_gshared (Dictionary_2_t8446 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61039(__this, ___comparer, method) (( void (*) (Dictionary_2_t8446 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61039_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m61041_gshared (Dictionary_2_t8446 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m61041(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8446 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61041_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m61043_gshared (Dictionary_2_t8446 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m61043(__this, ___capacity, method) (( void (*) (Dictionary_2_t8446 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m61043_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61045_gshared (Dictionary_2_t8446 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61045(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8446 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61045_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m61047_gshared (Dictionary_2_t8446 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m61047(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8446 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m61047_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61049_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61049(__this, method) (( Object_t* (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61049_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61051_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61051(__this, method) (( Object_t* (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61051_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m61053_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m61053(__this, method) (( Object_t * (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m61053_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m61055_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m61055(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m61055_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m61057_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m61057(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8446 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m61057_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m61059_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m61059(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8446 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m61059_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m61061_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m61061(__this, ___key, method) (( bool (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m61061_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m61063_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m61063(__this, ___key, method) (( void (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m61063_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61065_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61065(__this, method) (( bool (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61065_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61067_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61067(__this, method) (( Object_t * (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61067_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61069_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61069(__this, method) (( bool (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61069_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61071_gshared (Dictionary_2_t8446 * __this, KeyValuePair_2_t7243  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61071(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8446 *, KeyValuePair_2_t7243 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61071_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61073_gshared (Dictionary_2_t8446 * __this, KeyValuePair_2_t7243  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61073(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8446 *, KeyValuePair_2_t7243 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61073_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61075_gshared (Dictionary_2_t8446 * __this, KeyValuePair_2U5BU5D_t7686* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61075(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8446 *, KeyValuePair_2U5BU5D_t7686*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61075_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61077_gshared (Dictionary_2_t8446 * __this, KeyValuePair_2_t7243  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61077(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8446 *, KeyValuePair_2_t7243 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61077_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m61079_gshared (Dictionary_2_t8446 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m61079(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8446 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m61079_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61081_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61081(__this, method) (( Object_t * (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61081_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61083_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61083(__this, method) (( Object_t* (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61083_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61085_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61085(__this, method) (( Object_t * (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61085_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m61087_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m61087(__this, method) (( int32_t (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_get_Count_m61087_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m61089_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m61089(__this, ___key, method) (( int64_t (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m61089_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m61091_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m61091(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8446 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m61091_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m61093_gshared (Dictionary_2_t8446 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m61093(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8446 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m61093_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m61095_gshared (Dictionary_2_t8446 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m61095(__this, ___size, method) (( void (*) (Dictionary_2_t8446 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m61095_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m61097_gshared (Dictionary_2_t8446 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m61097(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8446 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m61097_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7243  Dictionary_2_make_pair_m61099_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m61099(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7243  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m61099_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m61101_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m61101(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m61101_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m61103_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m61103(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m61103_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m61105_gshared (Dictionary_2_t8446 * __this, KeyValuePair_2U5BU5D_t7686* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m61105(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8446 *, KeyValuePair_2U5BU5D_t7686*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m61105_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m61107_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m61107(__this, method) (( void (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_Resize_m61107_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m61109_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m61109(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8446 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m61109_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m61111_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m61111(__this, method) (( void (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_Clear_m61111_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m61113_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m61113(__this, ___key, method) (( bool (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m61113_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m61115_gshared (Dictionary_2_t8446 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m61115(__this, ___value, method) (( bool (*) (Dictionary_2_t8446 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m61115_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m61117_gshared (Dictionary_2_t8446 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m61117(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8446 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m61117_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m61119_gshared (Dictionary_2_t8446 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m61119(__this, ___sender, method) (( void (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m61119_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m61121_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m61121(__this, ___key, method) (( bool (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m61121_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m61123_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m61123(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8446 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m61123_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t8447 * Dictionary_2_get_Keys_m61125_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m61125(__this, method) (( KeyCollection_t8447 * (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_get_Keys_m61125_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t8451 * Dictionary_2_get_Values_m61127_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m61127(__this, method) (( ValueCollection_t8451 * (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_get_Values_m61127_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m61129_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m61129(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m61129_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m61131_gshared (Dictionary_2_t8446 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m61131(__this, ___value, method) (( int64_t (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m61131_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m61133_gshared (Dictionary_2_t8446 * __this, KeyValuePair_2_t7243  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m61133(__this, ___pair, method) (( bool (*) (Dictionary_2_t8446 *, KeyValuePair_2_t7243 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m61133_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t8449  Dictionary_2_GetEnumerator_m61135_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m61135(__this, method) (( Enumerator_t8449  (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_GetEnumerator_m61135_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2139  Dictionary_2_U3CCopyToU3Em__0_m61137_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m61137(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m61137_gshared)(__this /* static, unused */, ___key, ___value, method)
