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
extern "C" void Dictionary_2__ctor_m45568_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m45568(__this, method) (( void (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2__ctor_m45568_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45570_gshared (Dictionary_2_t7133 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45570(__this, ___comparer, method) (( void (*) (Dictionary_2_t7133 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45570_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m45572_gshared (Dictionary_2_t7133 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m45572(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7133 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45572_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m45574_gshared (Dictionary_2_t7133 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m45574(__this, ___capacity, method) (( void (*) (Dictionary_2_t7133 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m45574_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45576_gshared (Dictionary_2_t7133 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45576(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7133 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45576_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m45578_gshared (Dictionary_2_t7133 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m45578(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7133 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m45578_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45580_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45580(__this, method) (( Object_t* (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45580_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45582_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45582(__this, method) (( Object_t* (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45582_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m45584_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m45584(__this, method) (( Object_t * (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m45584_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m45586_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m45586(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m45586_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m45588_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m45588(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7133 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m45588_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m45590_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m45590(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7133 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m45590_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m45592_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m45592(__this, ___key, method) (( bool (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m45592_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m45594_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m45594(__this, ___key, method) (( void (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m45594_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45596_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45596(__this, method) (( bool (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45596_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45598_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45598(__this, method) (( Object_t * (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45598_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45600_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45600(__this, method) (( bool (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45600_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45602_gshared (Dictionary_2_t7133 * __this, KeyValuePair_2_t7026  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45602(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7133 *, KeyValuePair_2_t7026 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45602_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45604_gshared (Dictionary_2_t7133 * __this, KeyValuePair_2_t7026  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45604(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7133 *, KeyValuePair_2_t7026 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45604_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45606_gshared (Dictionary_2_t7133 * __this, KeyValuePair_2U5BU5D_t8000* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45606(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7133 *, KeyValuePair_2U5BU5D_t8000*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45606_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45608_gshared (Dictionary_2_t7133 * __this, KeyValuePair_2_t7026  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45608(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7133 *, KeyValuePair_2_t7026 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45608_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m45610_gshared (Dictionary_2_t7133 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m45610(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7133 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m45610_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45612_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45612(__this, method) (( Object_t * (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45612_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45614_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45614(__this, method) (( Object_t* (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45614_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45616_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45616(__this, method) (( Object_t * (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45616_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m45618_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m45618(__this, method) (( int32_t (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_get_Count_m45618_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Item(TKey)
extern "C" ParseGeoPoint_t1247  Dictionary_2_get_Item_m45620_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m45620(__this, ___key, method) (( ParseGeoPoint_t1247  (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m45620_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m45622_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m45622(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7133 *, Object_t *, ParseGeoPoint_t1247 , const MethodInfo*))Dictionary_2_set_Item_m45622_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m45624_gshared (Dictionary_2_t7133 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m45624(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7133 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m45624_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m45626_gshared (Dictionary_2_t7133 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m45626(__this, ___size, method) (( void (*) (Dictionary_2_t7133 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m45626_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m45628_gshared (Dictionary_2_t7133 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m45628(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7133 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m45628_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7026  Dictionary_2_make_pair_m45630_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m45630(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7026  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1247 , const MethodInfo*))Dictionary_2_make_pair_m45630_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m45632_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m45632(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1247 , const MethodInfo*))Dictionary_2_pick_key_m45632_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_value(TKey,TValue)
extern "C" ParseGeoPoint_t1247  Dictionary_2_pick_value_m45634_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m45634(__this /* static, unused */, ___key, ___value, method) (( ParseGeoPoint_t1247  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1247 , const MethodInfo*))Dictionary_2_pick_value_m45634_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m45636_gshared (Dictionary_2_t7133 * __this, KeyValuePair_2U5BU5D_t8000* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m45636(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7133 *, KeyValuePair_2U5BU5D_t8000*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m45636_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Resize()
extern "C" void Dictionary_2_Resize_m45638_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m45638(__this, method) (( void (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_Resize_m45638_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m45640_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m45640(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7133 *, Object_t *, ParseGeoPoint_t1247 , const MethodInfo*))Dictionary_2_Add_m45640_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Clear()
extern "C" void Dictionary_2_Clear_m45642_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m45642(__this, method) (( void (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_Clear_m45642_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m45644_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m45644(__this, ___key, method) (( bool (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m45644_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m45646_gshared (Dictionary_2_t7133 * __this, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m45646(__this, ___value, method) (( bool (*) (Dictionary_2_t7133 *, ParseGeoPoint_t1247 , const MethodInfo*))Dictionary_2_ContainsValue_m45646_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m45648_gshared (Dictionary_2_t7133 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m45648(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7133 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m45648_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m45650_gshared (Dictionary_2_t7133 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m45650(__this, ___sender, method) (( void (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m45650_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m45652_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m45652(__this, ___key, method) (( bool (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m45652_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m45654_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, ParseGeoPoint_t1247 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m45654(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7133 *, Object_t *, ParseGeoPoint_t1247 *, const MethodInfo*))Dictionary_2_TryGetValue_m45654_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Keys()
extern "C" KeyCollection_t7134 * Dictionary_2_get_Keys_m45656_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m45656(__this, method) (( KeyCollection_t7134 * (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_get_Keys_m45656_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Values()
extern "C" ValueCollection_t7138 * Dictionary_2_get_Values_m45658_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m45658(__this, method) (( ValueCollection_t7138 * (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_get_Values_m45658_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m45660_gshared (Dictionary_2_t7133 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m45660(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m45660_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTValue(System.Object)
extern "C" ParseGeoPoint_t1247  Dictionary_2_ToTValue_m45662_gshared (Dictionary_2_t7133 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m45662(__this, ___value, method) (( ParseGeoPoint_t1247  (*) (Dictionary_2_t7133 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m45662_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m45664_gshared (Dictionary_2_t7133 * __this, KeyValuePair_2_t7026  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m45664(__this, ___pair, method) (( bool (*) (Dictionary_2_t7133 *, KeyValuePair_2_t7026 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m45664_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t7136  Dictionary_2_GetEnumerator_m45666_gshared (Dictionary_2_t7133 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m45666(__this, method) (( Enumerator_t7136  (*) (Dictionary_2_t7133 *, const MethodInfo*))Dictionary_2_GetEnumerator_m45666_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2139  Dictionary_2_U3CCopyToU3Em__0_m45668_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m45668(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1247 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m45668_gshared)(__this /* static, unused */, ___key, ___value, method)
