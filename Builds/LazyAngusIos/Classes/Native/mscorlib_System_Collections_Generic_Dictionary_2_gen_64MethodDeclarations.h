#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7169;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9257;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Parse.ParseGeoPoint>
struct KeyCollection_t7170;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>
struct ValueCollection_t7174;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1204;
// System.Collections.Generic.IDictionary`2<System.Object,Parse.ParseGeoPoint>
struct IDictionary_2_t9374;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8036;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerator_1_t8029;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
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
extern "C" void Dictionary_2__ctor_m46021_gshared (Dictionary_2_t7169 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m46021(__this, method) (( void (*) (Dictionary_2_t7169 *, const MethodInfo*))Dictionary_2__ctor_m46021_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m46023_gshared (Dictionary_2_t7169 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m46023(__this, ___comparer, method) (( void (*) (Dictionary_2_t7169 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m46023_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m46025_gshared (Dictionary_2_t7169 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m46025(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7169 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m46025_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m46027_gshared (Dictionary_2_t7169 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m46027(__this, ___capacity, method) (( void (*) (Dictionary_2_t7169 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m46027_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m46029_gshared (Dictionary_2_t7169 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m46029(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7169 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m46029_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m46031_gshared (Dictionary_2_t7169 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m46031(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7169 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m46031_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m46033_gshared (Dictionary_2_t7169 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m46033(__this, method) (( Object_t* (*) (Dictionary_2_t7169 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m46033_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m46035_gshared (Dictionary_2_t7169 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m46035(__this, method) (( Object_t* (*) (Dictionary_2_t7169 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m46035_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m46037_gshared (Dictionary_2_t7169 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m46037(__this, method) (( Object_t * (*) (Dictionary_2_t7169 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m46037_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m46039_gshared (Dictionary_2_t7169 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m46039(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7169 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m46039_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m46041_gshared (Dictionary_2_t7169 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m46041(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7169 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m46041_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m46043_gshared (Dictionary_2_t7169 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m46043(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7169 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m46043_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m46045_gshared (Dictionary_2_t7169 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m46045(__this, ___key, method) (( bool (*) (Dictionary_2_t7169 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m46045_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m46047_gshared (Dictionary_2_t7169 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m46047(__this, ___key, method) (( void (*) (Dictionary_2_t7169 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m46047_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m46049_gshared (Dictionary_2_t7169 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m46049(__this, method) (( bool (*) (Dictionary_2_t7169 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m46049_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m46051_gshared (Dictionary_2_t7169 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m46051(__this, method) (( Object_t * (*) (Dictionary_2_t7169 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m46051_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m46053_gshared (Dictionary_2_t7169 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m46053(__this, method) (( bool (*) (Dictionary_2_t7169 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m46053_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m46055_gshared (Dictionary_2_t7169 * __this, KeyValuePair_2_t7062  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m46055(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7169 *, KeyValuePair_2_t7062 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m46055_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m46057_gshared (Dictionary_2_t7169 * __this, KeyValuePair_2_t7062  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m46057(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7169 *, KeyValuePair_2_t7062 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m46057_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m46059_gshared (Dictionary_2_t7169 * __this, KeyValuePair_2U5BU5D_t8036* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m46059(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7169 *, KeyValuePair_2U5BU5D_t8036*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m46059_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m46061_gshared (Dictionary_2_t7169 * __this, KeyValuePair_2_t7062  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m46061(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7169 *, KeyValuePair_2_t7062 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m46061_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m46063_gshared (Dictionary_2_t7169 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m46063(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7169 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m46063_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m46065_gshared (Dictionary_2_t7169 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m46065(__this, method) (( Object_t * (*) (Dictionary_2_t7169 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m46065_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m46067_gshared (Dictionary_2_t7169 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m46067(__this, method) (( Object_t* (*) (Dictionary_2_t7169 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m46067_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m46069_gshared (Dictionary_2_t7169 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m46069(__this, method) (( Object_t * (*) (Dictionary_2_t7169 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m46069_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m46071_gshared (Dictionary_2_t7169 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m46071(__this, method) (( int32_t (*) (Dictionary_2_t7169 *, const MethodInfo*))Dictionary_2_get_Count_m46071_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Item(TKey)
extern "C" ParseGeoPoint_t1264  Dictionary_2_get_Item_m46073_gshared (Dictionary_2_t7169 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m46073(__this, ___key, method) (( ParseGeoPoint_t1264  (*) (Dictionary_2_t7169 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m46073_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m46075_gshared (Dictionary_2_t7169 * __this, Object_t * ___key, ParseGeoPoint_t1264  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m46075(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7169 *, Object_t *, ParseGeoPoint_t1264 , const MethodInfo*))Dictionary_2_set_Item_m46075_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m46077_gshared (Dictionary_2_t7169 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m46077(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7169 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m46077_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m46079_gshared (Dictionary_2_t7169 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m46079(__this, ___size, method) (( void (*) (Dictionary_2_t7169 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m46079_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m46081_gshared (Dictionary_2_t7169 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m46081(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7169 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m46081_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7062  Dictionary_2_make_pair_m46083_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1264  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m46083(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7062  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1264 , const MethodInfo*))Dictionary_2_make_pair_m46083_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m46085_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1264  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m46085(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1264 , const MethodInfo*))Dictionary_2_pick_key_m46085_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_value(TKey,TValue)
extern "C" ParseGeoPoint_t1264  Dictionary_2_pick_value_m46087_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1264  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m46087(__this /* static, unused */, ___key, ___value, method) (( ParseGeoPoint_t1264  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1264 , const MethodInfo*))Dictionary_2_pick_value_m46087_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m46089_gshared (Dictionary_2_t7169 * __this, KeyValuePair_2U5BU5D_t8036* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m46089(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7169 *, KeyValuePair_2U5BU5D_t8036*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m46089_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Resize()
extern "C" void Dictionary_2_Resize_m46091_gshared (Dictionary_2_t7169 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m46091(__this, method) (( void (*) (Dictionary_2_t7169 *, const MethodInfo*))Dictionary_2_Resize_m46091_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m46093_gshared (Dictionary_2_t7169 * __this, Object_t * ___key, ParseGeoPoint_t1264  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m46093(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7169 *, Object_t *, ParseGeoPoint_t1264 , const MethodInfo*))Dictionary_2_Add_m46093_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Clear()
extern "C" void Dictionary_2_Clear_m46095_gshared (Dictionary_2_t7169 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m46095(__this, method) (( void (*) (Dictionary_2_t7169 *, const MethodInfo*))Dictionary_2_Clear_m46095_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m46097_gshared (Dictionary_2_t7169 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m46097(__this, ___key, method) (( bool (*) (Dictionary_2_t7169 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m46097_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m46099_gshared (Dictionary_2_t7169 * __this, ParseGeoPoint_t1264  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m46099(__this, ___value, method) (( bool (*) (Dictionary_2_t7169 *, ParseGeoPoint_t1264 , const MethodInfo*))Dictionary_2_ContainsValue_m46099_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m46101_gshared (Dictionary_2_t7169 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m46101(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7169 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m46101_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m46103_gshared (Dictionary_2_t7169 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m46103(__this, ___sender, method) (( void (*) (Dictionary_2_t7169 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m46103_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m46105_gshared (Dictionary_2_t7169 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m46105(__this, ___key, method) (( bool (*) (Dictionary_2_t7169 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m46105_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m46107_gshared (Dictionary_2_t7169 * __this, Object_t * ___key, ParseGeoPoint_t1264 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m46107(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7169 *, Object_t *, ParseGeoPoint_t1264 *, const MethodInfo*))Dictionary_2_TryGetValue_m46107_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Keys()
extern "C" KeyCollection_t7170 * Dictionary_2_get_Keys_m46109_gshared (Dictionary_2_t7169 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m46109(__this, method) (( KeyCollection_t7170 * (*) (Dictionary_2_t7169 *, const MethodInfo*))Dictionary_2_get_Keys_m46109_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Values()
extern "C" ValueCollection_t7174 * Dictionary_2_get_Values_m46111_gshared (Dictionary_2_t7169 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m46111(__this, method) (( ValueCollection_t7174 * (*) (Dictionary_2_t7169 *, const MethodInfo*))Dictionary_2_get_Values_m46111_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m46113_gshared (Dictionary_2_t7169 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m46113(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7169 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m46113_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTValue(System.Object)
extern "C" ParseGeoPoint_t1264  Dictionary_2_ToTValue_m46115_gshared (Dictionary_2_t7169 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m46115(__this, ___value, method) (( ParseGeoPoint_t1264  (*) (Dictionary_2_t7169 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m46115_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m46117_gshared (Dictionary_2_t7169 * __this, KeyValuePair_2_t7062  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m46117(__this, ___pair, method) (( bool (*) (Dictionary_2_t7169 *, KeyValuePair_2_t7062 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m46117_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t7172  Dictionary_2_GetEnumerator_m46119_gshared (Dictionary_2_t7169 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m46119(__this, method) (( Enumerator_t7172  (*) (Dictionary_2_t7169 *, const MethodInfo*))Dictionary_2_GetEnumerator_m46119_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__0_m46121_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1264  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m46121(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1264 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m46121_gshared)(__this /* static, unused */, ___key, ___value, method)
