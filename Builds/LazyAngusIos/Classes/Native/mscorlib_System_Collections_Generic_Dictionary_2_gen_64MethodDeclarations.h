#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7657;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1244;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9846;
// System.Collections.ICollection
struct ICollection_t772;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Double>
struct KeyCollection_t7658;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>
struct ValueCollection_t7662;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1208;
// System.Collections.Generic.IDictionary`2<System.Object,System.Double>
struct IDictionary_2_t9950;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t8406;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t7846;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t802;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__52.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor()
extern "C" void Dictionary_2__ctor_m49584_gshared (Dictionary_2_t7657 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m49584(__this, method) (( void (*) (Dictionary_2_t7657 *, const MethodInfo*))Dictionary_2__ctor_m49584_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m49586_gshared (Dictionary_2_t7657 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m49586(__this, ___comparer, method) (( void (*) (Dictionary_2_t7657 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49586_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m49588_gshared (Dictionary_2_t7657 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m49588(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7657 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49588_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m49590_gshared (Dictionary_2_t7657 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m49590(__this, ___capacity, method) (( void (*) (Dictionary_2_t7657 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m49590_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m49592_gshared (Dictionary_2_t7657 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m49592(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7657 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49592_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m49594_gshared (Dictionary_2_t7657 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m49594(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7657 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2__ctor_m49594_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49596_gshared (Dictionary_2_t7657 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49596(__this, method) (( Object_t* (*) (Dictionary_2_t7657 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49596_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49598_gshared (Dictionary_2_t7657 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49598(__this, method) (( Object_t* (*) (Dictionary_2_t7657 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49598_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m49600_gshared (Dictionary_2_t7657 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m49600(__this, method) (( Object_t * (*) (Dictionary_2_t7657 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m49600_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m49602_gshared (Dictionary_2_t7657 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m49602(__this, method) (( Object_t * (*) (Dictionary_2_t7657 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m49602_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m49604_gshared (Dictionary_2_t7657 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m49604(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7657 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m49604_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m49606_gshared (Dictionary_2_t7657 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m49606(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7657 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m49606_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m49608_gshared (Dictionary_2_t7657 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m49608(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7657 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m49608_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m49610_gshared (Dictionary_2_t7657 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m49610(__this, ___key, method) (( bool (*) (Dictionary_2_t7657 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m49610_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m49612_gshared (Dictionary_2_t7657 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m49612(__this, ___key, method) (( void (*) (Dictionary_2_t7657 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m49612_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49614_gshared (Dictionary_2_t7657 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49614(__this, method) (( bool (*) (Dictionary_2_t7657 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49614_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49616_gshared (Dictionary_2_t7657 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49616(__this, method) (( Object_t * (*) (Dictionary_2_t7657 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49616_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49618_gshared (Dictionary_2_t7657 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49618(__this, method) (( bool (*) (Dictionary_2_t7657 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49618_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49620_gshared (Dictionary_2_t7657 * __this, KeyValuePair_2_t7583  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49620(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7657 *, KeyValuePair_2_t7583 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49620_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49622_gshared (Dictionary_2_t7657 * __this, KeyValuePair_2_t7583  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49622(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7657 *, KeyValuePair_2_t7583 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49622_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49624_gshared (Dictionary_2_t7657 * __this, KeyValuePair_2U5BU5D_t8406* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49624(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7657 *, KeyValuePair_2U5BU5D_t8406*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49624_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49626_gshared (Dictionary_2_t7657 * __this, KeyValuePair_2_t7583  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49626(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7657 *, KeyValuePair_2_t7583 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49626_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m49628_gshared (Dictionary_2_t7657 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m49628(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7657 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m49628_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49630_gshared (Dictionary_2_t7657 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49630(__this, method) (( Object_t * (*) (Dictionary_2_t7657 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49630_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49632_gshared (Dictionary_2_t7657 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49632(__this, method) (( Object_t* (*) (Dictionary_2_t7657 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49632_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49634_gshared (Dictionary_2_t7657 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49634(__this, method) (( Object_t * (*) (Dictionary_2_t7657 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49634_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m49636_gshared (Dictionary_2_t7657 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m49636(__this, method) (( int32_t (*) (Dictionary_2_t7657 *, const MethodInfo*))Dictionary_2_get_Count_m49636_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Item(TKey)
extern "C" double Dictionary_2_get_Item_m49638_gshared (Dictionary_2_t7657 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m49638(__this, ___key, method) (( double (*) (Dictionary_2_t7657 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m49638_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m49640_gshared (Dictionary_2_t7657 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m49640(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7657 *, Object_t *, double, const MethodInfo*))Dictionary_2_set_Item_m49640_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m49642_gshared (Dictionary_2_t7657 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m49642(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7657 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m49642_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m49644_gshared (Dictionary_2_t7657 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m49644(__this, ___size, method) (( void (*) (Dictionary_2_t7657 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m49644_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m49646_gshared (Dictionary_2_t7657 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m49646(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7657 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m49646_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7583  Dictionary_2_make_pair_m49648_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m49648(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7583  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_make_pair_m49648_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m49650_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m49650(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_key_m49650_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_value(TKey,TValue)
extern "C" double Dictionary_2_pick_value_m49652_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m49652(__this /* static, unused */, ___key, ___value, method) (( double (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_value_m49652_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m49654_gshared (Dictionary_2_t7657 * __this, KeyValuePair_2U5BU5D_t8406* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m49654(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7657 *, KeyValuePair_2U5BU5D_t8406*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m49654_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Resize()
extern "C" void Dictionary_2_Resize_m49656_gshared (Dictionary_2_t7657 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m49656(__this, method) (( void (*) (Dictionary_2_t7657 *, const MethodInfo*))Dictionary_2_Resize_m49656_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m49658_gshared (Dictionary_2_t7657 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_Add_m49658(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7657 *, Object_t *, double, const MethodInfo*))Dictionary_2_Add_m49658_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Clear()
extern "C" void Dictionary_2_Clear_m49660_gshared (Dictionary_2_t7657 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m49660(__this, method) (( void (*) (Dictionary_2_t7657 *, const MethodInfo*))Dictionary_2_Clear_m49660_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m49662_gshared (Dictionary_2_t7657 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m49662(__this, ___key, method) (( bool (*) (Dictionary_2_t7657 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m49662_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m49664_gshared (Dictionary_2_t7657 * __this, double ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m49664(__this, ___value, method) (( bool (*) (Dictionary_2_t7657 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m49664_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m49666_gshared (Dictionary_2_t7657 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m49666(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7657 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2_GetObjectData_m49666_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m49668_gshared (Dictionary_2_t7657 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m49668(__this, ___sender, method) (( void (*) (Dictionary_2_t7657 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m49668_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m49670_gshared (Dictionary_2_t7657 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m49670(__this, ___key, method) (( bool (*) (Dictionary_2_t7657 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m49670_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m49672_gshared (Dictionary_2_t7657 * __this, Object_t * ___key, double* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m49672(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7657 *, Object_t *, double*, const MethodInfo*))Dictionary_2_TryGetValue_m49672_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Keys()
extern "C" KeyCollection_t7658 * Dictionary_2_get_Keys_m49674_gshared (Dictionary_2_t7657 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m49674(__this, method) (( KeyCollection_t7658 * (*) (Dictionary_2_t7657 *, const MethodInfo*))Dictionary_2_get_Keys_m49674_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Values()
extern "C" ValueCollection_t7662 * Dictionary_2_get_Values_m49676_gshared (Dictionary_2_t7657 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m49676(__this, method) (( ValueCollection_t7662 * (*) (Dictionary_2_t7657 *, const MethodInfo*))Dictionary_2_get_Values_m49676_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m49678_gshared (Dictionary_2_t7657 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m49678(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7657 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m49678_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTValue(System.Object)
extern "C" double Dictionary_2_ToTValue_m49680_gshared (Dictionary_2_t7657 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m49680(__this, ___value, method) (( double (*) (Dictionary_2_t7657 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m49680_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m49682_gshared (Dictionary_2_t7657 * __this, KeyValuePair_2_t7583  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m49682(__this, ___pair, method) (( bool (*) (Dictionary_2_t7657 *, KeyValuePair_2_t7583 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m49682_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetEnumerator()
extern "C" Enumerator_t7660  Dictionary_2_GetEnumerator_m49684_gshared (Dictionary_2_t7657 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m49684(__this, method) (( Enumerator_t7660  (*) (Dictionary_2_t7657 *, const MethodInfo*))Dictionary_2_GetEnumerator_m49684_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Double>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2160  Dictionary_2_U3CCopyToU3Em__2_m49686_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m49686(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2160  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m49686_gshared)(__this /* static, unused */, ___key, ___value, method)
