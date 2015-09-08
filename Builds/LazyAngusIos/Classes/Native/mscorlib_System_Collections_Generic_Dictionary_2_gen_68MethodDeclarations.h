#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7705;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9845;
// System.Collections.ICollection
struct ICollection_t769;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Parse.ParseGeoPoint>
struct KeyCollection_t7706;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>
struct ValueCollection_t7710;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1205;
// System.Collections.Generic.IDictionary`2<System.Object,Parse.ParseGeoPoint>
struct IDictionary_2_t9962;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2937;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8572;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerator_1_t8565;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t799;
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
extern "C" void Dictionary_2__ctor_m50290_gshared (Dictionary_2_t7705 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m50290(__this, method) (( void (*) (Dictionary_2_t7705 *, const MethodInfo*))Dictionary_2__ctor_m50290_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m50292_gshared (Dictionary_2_t7705 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m50292(__this, ___comparer, method) (( void (*) (Dictionary_2_t7705 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m50292_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m50294_gshared (Dictionary_2_t7705 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m50294(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7705 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m50294_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m50296_gshared (Dictionary_2_t7705 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m50296(__this, ___capacity, method) (( void (*) (Dictionary_2_t7705 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m50296_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m50298_gshared (Dictionary_2_t7705 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m50298(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7705 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m50298_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m50300_gshared (Dictionary_2_t7705 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m50300(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7705 *, SerializationInfo_t2937 *, StreamingContext_t2938 , const MethodInfo*))Dictionary_2__ctor_m50300_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m50302_gshared (Dictionary_2_t7705 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m50302(__this, method) (( Object_t* (*) (Dictionary_2_t7705 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m50302_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m50304_gshared (Dictionary_2_t7705 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m50304(__this, method) (( Object_t* (*) (Dictionary_2_t7705 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m50304_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m50306_gshared (Dictionary_2_t7705 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m50306(__this, method) (( Object_t * (*) (Dictionary_2_t7705 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m50306_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m50308_gshared (Dictionary_2_t7705 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m50308(__this, method) (( Object_t * (*) (Dictionary_2_t7705 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m50308_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m50310_gshared (Dictionary_2_t7705 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m50310(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7705 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m50310_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m50312_gshared (Dictionary_2_t7705 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m50312(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7705 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m50312_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m50314_gshared (Dictionary_2_t7705 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m50314(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7705 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m50314_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m50316_gshared (Dictionary_2_t7705 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m50316(__this, ___key, method) (( bool (*) (Dictionary_2_t7705 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m50316_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m50318_gshared (Dictionary_2_t7705 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m50318(__this, ___key, method) (( void (*) (Dictionary_2_t7705 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m50318_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m50320_gshared (Dictionary_2_t7705 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m50320(__this, method) (( bool (*) (Dictionary_2_t7705 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m50320_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50322_gshared (Dictionary_2_t7705 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50322(__this, method) (( Object_t * (*) (Dictionary_2_t7705 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50322_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m50324_gshared (Dictionary_2_t7705 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m50324(__this, method) (( bool (*) (Dictionary_2_t7705 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m50324_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m50326_gshared (Dictionary_2_t7705 * __this, KeyValuePair_2_t7598  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m50326(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7705 *, KeyValuePair_2_t7598 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m50326_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m50328_gshared (Dictionary_2_t7705 * __this, KeyValuePair_2_t7598  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m50328(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7705 *, KeyValuePair_2_t7598 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m50328_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m50330_gshared (Dictionary_2_t7705 * __this, KeyValuePair_2U5BU5D_t8572* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m50330(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7705 *, KeyValuePair_2U5BU5D_t8572*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m50330_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m50332_gshared (Dictionary_2_t7705 * __this, KeyValuePair_2_t7598  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m50332(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7705 *, KeyValuePair_2_t7598 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m50332_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m50334_gshared (Dictionary_2_t7705 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m50334(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7705 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m50334_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50336_gshared (Dictionary_2_t7705 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50336(__this, method) (( Object_t * (*) (Dictionary_2_t7705 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50336_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m50338_gshared (Dictionary_2_t7705 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m50338(__this, method) (( Object_t* (*) (Dictionary_2_t7705 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m50338_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m50340_gshared (Dictionary_2_t7705 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m50340(__this, method) (( Object_t * (*) (Dictionary_2_t7705 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m50340_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m50342_gshared (Dictionary_2_t7705 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m50342(__this, method) (( int32_t (*) (Dictionary_2_t7705 *, const MethodInfo*))Dictionary_2_get_Count_m50342_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Item(TKey)
extern "C" ParseGeoPoint_t1265  Dictionary_2_get_Item_m50344_gshared (Dictionary_2_t7705 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m50344(__this, ___key, method) (( ParseGeoPoint_t1265  (*) (Dictionary_2_t7705 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m50344_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m50346_gshared (Dictionary_2_t7705 * __this, Object_t * ___key, ParseGeoPoint_t1265  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m50346(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7705 *, Object_t *, ParseGeoPoint_t1265 , const MethodInfo*))Dictionary_2_set_Item_m50346_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m50348_gshared (Dictionary_2_t7705 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m50348(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7705 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m50348_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m50350_gshared (Dictionary_2_t7705 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m50350(__this, ___size, method) (( void (*) (Dictionary_2_t7705 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m50350_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m50352_gshared (Dictionary_2_t7705 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m50352(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7705 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m50352_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7598  Dictionary_2_make_pair_m50354_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1265  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m50354(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7598  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1265 , const MethodInfo*))Dictionary_2_make_pair_m50354_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m50356_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1265  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m50356(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1265 , const MethodInfo*))Dictionary_2_pick_key_m50356_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_value(TKey,TValue)
extern "C" ParseGeoPoint_t1265  Dictionary_2_pick_value_m50358_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1265  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m50358(__this /* static, unused */, ___key, ___value, method) (( ParseGeoPoint_t1265  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1265 , const MethodInfo*))Dictionary_2_pick_value_m50358_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m50360_gshared (Dictionary_2_t7705 * __this, KeyValuePair_2U5BU5D_t8572* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m50360(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7705 *, KeyValuePair_2U5BU5D_t8572*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m50360_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Resize()
extern "C" void Dictionary_2_Resize_m50362_gshared (Dictionary_2_t7705 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m50362(__this, method) (( void (*) (Dictionary_2_t7705 *, const MethodInfo*))Dictionary_2_Resize_m50362_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m50364_gshared (Dictionary_2_t7705 * __this, Object_t * ___key, ParseGeoPoint_t1265  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m50364(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7705 *, Object_t *, ParseGeoPoint_t1265 , const MethodInfo*))Dictionary_2_Add_m50364_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Clear()
extern "C" void Dictionary_2_Clear_m50366_gshared (Dictionary_2_t7705 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m50366(__this, method) (( void (*) (Dictionary_2_t7705 *, const MethodInfo*))Dictionary_2_Clear_m50366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m50368_gshared (Dictionary_2_t7705 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m50368(__this, ___key, method) (( bool (*) (Dictionary_2_t7705 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m50368_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m50370_gshared (Dictionary_2_t7705 * __this, ParseGeoPoint_t1265  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m50370(__this, ___value, method) (( bool (*) (Dictionary_2_t7705 *, ParseGeoPoint_t1265 , const MethodInfo*))Dictionary_2_ContainsValue_m50370_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m50372_gshared (Dictionary_2_t7705 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m50372(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7705 *, SerializationInfo_t2937 *, StreamingContext_t2938 , const MethodInfo*))Dictionary_2_GetObjectData_m50372_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m50374_gshared (Dictionary_2_t7705 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m50374(__this, ___sender, method) (( void (*) (Dictionary_2_t7705 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m50374_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m50376_gshared (Dictionary_2_t7705 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m50376(__this, ___key, method) (( bool (*) (Dictionary_2_t7705 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m50376_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m50378_gshared (Dictionary_2_t7705 * __this, Object_t * ___key, ParseGeoPoint_t1265 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m50378(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7705 *, Object_t *, ParseGeoPoint_t1265 *, const MethodInfo*))Dictionary_2_TryGetValue_m50378_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Keys()
extern "C" KeyCollection_t7706 * Dictionary_2_get_Keys_m50380_gshared (Dictionary_2_t7705 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m50380(__this, method) (( KeyCollection_t7706 * (*) (Dictionary_2_t7705 *, const MethodInfo*))Dictionary_2_get_Keys_m50380_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Values()
extern "C" ValueCollection_t7710 * Dictionary_2_get_Values_m50382_gshared (Dictionary_2_t7705 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m50382(__this, method) (( ValueCollection_t7710 * (*) (Dictionary_2_t7705 *, const MethodInfo*))Dictionary_2_get_Values_m50382_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m50384_gshared (Dictionary_2_t7705 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m50384(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7705 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m50384_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTValue(System.Object)
extern "C" ParseGeoPoint_t1265  Dictionary_2_ToTValue_m50386_gshared (Dictionary_2_t7705 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m50386(__this, ___value, method) (( ParseGeoPoint_t1265  (*) (Dictionary_2_t7705 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m50386_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m50388_gshared (Dictionary_2_t7705 * __this, KeyValuePair_2_t7598  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m50388(__this, ___pair, method) (( bool (*) (Dictionary_2_t7705 *, KeyValuePair_2_t7598 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m50388_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t7708  Dictionary_2_GetEnumerator_m50390_gshared (Dictionary_2_t7705 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m50390(__this, method) (( Enumerator_t7708  (*) (Dictionary_2_t7705 *, const MethodInfo*))Dictionary_2_GetEnumerator_m50390_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2157  Dictionary_2_U3CCopyToU3Em__2_m50392_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1265  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m50392(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2157  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1265 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m50392_gshared)(__this /* static, unused */, ___key, ___value, method)
