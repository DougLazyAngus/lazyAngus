#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7140;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1224;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9220;
// System.Collections.ICollection
struct ICollection_t755;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Parse.ParseGeoPoint>
struct KeyCollection_t7141;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>
struct ValueCollection_t7145;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1188;
// System.Collections.Generic.IDictionary`2<System.Object,Parse.ParseGeoPoint>
struct IDictionary_2_t9337;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8007;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerator_1_t8000;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t785;
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
extern "C" void Dictionary_2__ctor_m45689_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m45689(__this, method) (( void (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2__ctor_m45689_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45691_gshared (Dictionary_2_t7140 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45691(__this, ___comparer, method) (( void (*) (Dictionary_2_t7140 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45691_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m45693_gshared (Dictionary_2_t7140 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m45693(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7140 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45693_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m45695_gshared (Dictionary_2_t7140 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m45695(__this, ___capacity, method) (( void (*) (Dictionary_2_t7140 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m45695_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45697_gshared (Dictionary_2_t7140 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45697(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7140 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45697_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m45699_gshared (Dictionary_2_t7140 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m45699(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7140 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2__ctor_m45699_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45701_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45701(__this, method) (( Object_t* (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45701_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45703_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45703(__this, method) (( Object_t* (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45703_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m45705_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m45705(__this, method) (( Object_t * (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m45705_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m45707_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m45707(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m45707_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m45709_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m45709(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7140 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m45709_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m45711_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m45711(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7140 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m45711_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m45713_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m45713(__this, ___key, method) (( bool (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m45713_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m45715_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m45715(__this, ___key, method) (( void (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m45715_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45717_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45717(__this, method) (( bool (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45717_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45719_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45719(__this, method) (( Object_t * (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45719_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45721_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45721(__this, method) (( bool (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45721_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45723_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2_t7033  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45723(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7140 *, KeyValuePair_2_t7033 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45723_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45725_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2_t7033  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45725(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7140 *, KeyValuePair_2_t7033 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45725_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45727_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2U5BU5D_t8007* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45727(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7140 *, KeyValuePair_2U5BU5D_t8007*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45727_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45729_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2_t7033  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45729(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7140 *, KeyValuePair_2_t7033 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45729_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m45731_gshared (Dictionary_2_t7140 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m45731(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7140 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m45731_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45733_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45733(__this, method) (( Object_t * (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45733_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45735_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45735(__this, method) (( Object_t* (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45735_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45737_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45737(__this, method) (( Object_t * (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45737_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m45739_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m45739(__this, method) (( int32_t (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_get_Count_m45739_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Item(TKey)
extern "C" ParseGeoPoint_t1248  Dictionary_2_get_Item_m45741_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m45741(__this, ___key, method) (( ParseGeoPoint_t1248  (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m45741_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m45743_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, ParseGeoPoint_t1248  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m45743(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7140 *, Object_t *, ParseGeoPoint_t1248 , const MethodInfo*))Dictionary_2_set_Item_m45743_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m45745_gshared (Dictionary_2_t7140 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m45745(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7140 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m45745_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m45747_gshared (Dictionary_2_t7140 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m45747(__this, ___size, method) (( void (*) (Dictionary_2_t7140 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m45747_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m45749_gshared (Dictionary_2_t7140 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m45749(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7140 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m45749_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7033  Dictionary_2_make_pair_m45751_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1248  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m45751(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7033  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1248 , const MethodInfo*))Dictionary_2_make_pair_m45751_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m45753_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1248  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m45753(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1248 , const MethodInfo*))Dictionary_2_pick_key_m45753_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_value(TKey,TValue)
extern "C" ParseGeoPoint_t1248  Dictionary_2_pick_value_m45755_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1248  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m45755(__this /* static, unused */, ___key, ___value, method) (( ParseGeoPoint_t1248  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1248 , const MethodInfo*))Dictionary_2_pick_value_m45755_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m45757_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2U5BU5D_t8007* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m45757(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7140 *, KeyValuePair_2U5BU5D_t8007*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m45757_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Resize()
extern "C" void Dictionary_2_Resize_m45759_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m45759(__this, method) (( void (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_Resize_m45759_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m45761_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, ParseGeoPoint_t1248  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m45761(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7140 *, Object_t *, ParseGeoPoint_t1248 , const MethodInfo*))Dictionary_2_Add_m45761_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Clear()
extern "C" void Dictionary_2_Clear_m45763_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m45763(__this, method) (( void (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_Clear_m45763_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m45765_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m45765(__this, ___key, method) (( bool (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m45765_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m45767_gshared (Dictionary_2_t7140 * __this, ParseGeoPoint_t1248  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m45767(__this, ___value, method) (( bool (*) (Dictionary_2_t7140 *, ParseGeoPoint_t1248 , const MethodInfo*))Dictionary_2_ContainsValue_m45767_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m45769_gshared (Dictionary_2_t7140 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m45769(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7140 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2_GetObjectData_m45769_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m45771_gshared (Dictionary_2_t7140 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m45771(__this, ___sender, method) (( void (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m45771_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m45773_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m45773(__this, ___key, method) (( bool (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m45773_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m45775_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, ParseGeoPoint_t1248 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m45775(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7140 *, Object_t *, ParseGeoPoint_t1248 *, const MethodInfo*))Dictionary_2_TryGetValue_m45775_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Keys()
extern "C" KeyCollection_t7141 * Dictionary_2_get_Keys_m45777_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m45777(__this, method) (( KeyCollection_t7141 * (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_get_Keys_m45777_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Values()
extern "C" ValueCollection_t7145 * Dictionary_2_get_Values_m45779_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m45779(__this, method) (( ValueCollection_t7145 * (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_get_Values_m45779_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m45781_gshared (Dictionary_2_t7140 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m45781(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m45781_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTValue(System.Object)
extern "C" ParseGeoPoint_t1248  Dictionary_2_ToTValue_m45783_gshared (Dictionary_2_t7140 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m45783(__this, ___value, method) (( ParseGeoPoint_t1248  (*) (Dictionary_2_t7140 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m45783_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m45785_gshared (Dictionary_2_t7140 * __this, KeyValuePair_2_t7033  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m45785(__this, ___pair, method) (( bool (*) (Dictionary_2_t7140 *, KeyValuePair_2_t7033 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m45785_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t7143  Dictionary_2_GetEnumerator_m45787_gshared (Dictionary_2_t7140 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m45787(__this, method) (( Enumerator_t7143  (*) (Dictionary_2_t7140 *, const MethodInfo*))Dictionary_2_GetEnumerator_m45787_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2140  Dictionary_2_U3CCopyToU3Em__0_m45789_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1248  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m45789(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2140  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1248 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m45789_gshared)(__this /* static, unused */, ___key, ___value, method)
