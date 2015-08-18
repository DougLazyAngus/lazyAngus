#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7133;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9209;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Parse.ParseGeoPoint>
struct KeyCollection_t7134;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>
struct ValueCollection_t7138;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1187;
// System.Collections.Generic.IDictionary`2<System.Object,Parse.ParseGeoPoint>
struct IDictionary_2_t9326;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8000;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerator_1_t7993;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__57.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor()
extern "C" void Dictionary_2__ctor_m45565_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m45565(__this, method) (( void (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2__ctor_m45565_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45567_gshared (Dictionary_2_t7133 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45567(__this, ___comparer, method) (( void (*) (Dictionary_2_t7133 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45567_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m45569_gshared (Dictionary_2_t7133 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m45569(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7133 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45569_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m45571_gshared (Dictionary_2_t7133 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m45571(__this, ___capacity, method) (( void (*) (Dictionary_2_t7133 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m45571_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45573_gshared (Dictionary_2_t7133 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45573(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7133 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45573_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m45575_gshared (Dictionary_2_t7133 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m45575(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7133 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m45575_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45577_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45577(__this, method) (( Object_t* (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45577_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45579_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45579(__this, method) (( Object_t* (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45579_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m45581_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m45581(__this, method) (( Object_t * (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m45581_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m45583_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m45583(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m45583_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m45585_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m45585(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7133 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m45585_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m45587_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m45587(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7133 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m45587_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m45589_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m45589(__this, ___key, method) (( bool (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m45589_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m45591_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m45591(__this, ___key, method) (( void (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m45591_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45593_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45593(__this, method) (( bool (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45593_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45595_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45595(__this, method) (( Object_t * (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45595_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45597_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45597(__this, method) (( bool (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45597_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45599_gshared (Dictionary_2_t7133 * __this, KeyValuePair_2_t7026  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45599(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7133 *, KeyValuePair_2_t7026 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45599_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45601_gshared (Dictionary_2_t7133 * __this, KeyValuePair_2_t7026  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45601(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7133 *, KeyValuePair_2_t7026 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45601_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45603_gshared (Dictionary_2_t7133 * __this, KeyValuePair_2U5BU5D_t8000* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45603(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7133 *, KeyValuePair_2U5BU5D_t8000*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45603_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45605_gshared (Dictionary_2_t7133 * __this, KeyValuePair_2_t7026  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45605(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7133 *, KeyValuePair_2_t7026 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45605_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m45607_gshared (Dictionary_2_t7133 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m45607(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7133 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m45607_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45609_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45609(__this, method) (( Object_t * (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45609_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45611_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45611(__this, method) (( Object_t* (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45611_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45613_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45613(__this, method) (( Object_t * (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45613_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m45615_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m45615(__this, method) (( int32_t (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_get_Count_m45615_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Item(TKey)
extern "C" ParseGeoPoint_t1247  Dictionary_2_get_Item_m45617_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m45617(__this, ___key, method) (( ParseGeoPoint_t1247  (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m45617_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m45619_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m45619(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7133 *, Object_t *, ParseGeoPoint_t1247 , const MethodInfo*))Dictionary_2_set_Item_m45619_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m45621_gshared (Dictionary_2_t7133 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m45621(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7133 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m45621_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m45623_gshared (Dictionary_2_t7133 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m45623(__this, ___size, method) (( void (*) (Dictionary_2_t7133 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m45623_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m45625_gshared (Dictionary_2_t7133 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m45625(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7133 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m45625_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7026  Dictionary_2_make_pair_m45627_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m45627(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7026  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1247 , const MethodInfo*))Dictionary_2_make_pair_m45627_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m45629_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m45629(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1247 , const MethodInfo*))Dictionary_2_pick_key_m45629_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_value(TKey,TValue)
extern "C" ParseGeoPoint_t1247  Dictionary_2_pick_value_m45631_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m45631(__this /* static, unused */, ___key, ___value, method) (( ParseGeoPoint_t1247  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1247 , const MethodInfo*))Dictionary_2_pick_value_m45631_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m45633_gshared (Dictionary_2_t7133 * __this, KeyValuePair_2U5BU5D_t8000* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m45633(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7133 *, KeyValuePair_2U5BU5D_t8000*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m45633_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Resize()
extern "C" void Dictionary_2_Resize_m45635_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m45635(__this, method) (( void (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_Resize_m45635_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m45637_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m45637(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7133 *, Object_t *, ParseGeoPoint_t1247 , const MethodInfo*))Dictionary_2_Add_m45637_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Clear()
extern "C" void Dictionary_2_Clear_m45639_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m45639(__this, method) (( void (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_Clear_m45639_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m45641_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m45641(__this, ___key, method) (( bool (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m45641_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m45643_gshared (Dictionary_2_t7133 * __this, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m45643(__this, ___value, method) (( bool (*) (Dictionary_2_t7133 *, ParseGeoPoint_t1247 , const MethodInfo*))Dictionary_2_ContainsValue_m45643_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m45645_gshared (Dictionary_2_t7133 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m45645(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7133 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m45645_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m45647_gshared (Dictionary_2_t7133 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m45647(__this, ___sender, method) (( void (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m45647_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m45649_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m45649(__this, ___key, method) (( bool (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m45649_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m45651_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, ParseGeoPoint_t1247 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m45651(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7133 *, Object_t *, ParseGeoPoint_t1247 *, const MethodInfo*))Dictionary_2_TryGetValue_m45651_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Keys()
extern "C" KeyCollection_t7134 * Dictionary_2_get_Keys_m45653_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m45653(__this, method) (( KeyCollection_t7134 * (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_get_Keys_m45653_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Values()
extern "C" ValueCollection_t7138 * Dictionary_2_get_Values_m45655_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m45655(__this, method) (( ValueCollection_t7138 * (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_get_Values_m45655_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m45657_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m45657(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m45657_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTValue(System.Object)
extern "C" ParseGeoPoint_t1247  Dictionary_2_ToTValue_m45659_gshared (Dictionary_2_t7133 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m45659(__this, ___value, method) (( ParseGeoPoint_t1247  (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m45659_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m45661_gshared (Dictionary_2_t7133 * __this, KeyValuePair_2_t7026  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m45661(__this, ___pair, method) (( bool (*) (Dictionary_2_t7133 *, KeyValuePair_2_t7026 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m45661_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t7136  Dictionary_2_GetEnumerator_m45663_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m45663(__this, method) (( Enumerator_t7136  (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_GetEnumerator_m45663_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2139  Dictionary_2_U3CCopyToU3Em__0_m45665_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m45665(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1247 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m45665_gshared)(__this /* static, unused */, ___key, ___value, method)
