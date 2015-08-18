#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7060;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8932;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Single>
struct KeyCollection_t7061;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
struct ValueCollection_t7065;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1187;
// System.Collections.Generic.IDictionary`2<System.Object,System.Single>
struct IDictionary_2_t9304;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t7894;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t7276;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__50.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
extern "C" void Dictionary_2__ctor_m44580_gshared (Dictionary_2_t7060 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m44580(__this, method) (( void (*) (Dictionary_2_t7060 *, const MethodInfo*))Dictionary_2__ctor_m44580_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44582_gshared (Dictionary_2_t7060 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44582(__this, ___comparer, method) (( void (*) (Dictionary_2_t7060 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44582_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m44584_gshared (Dictionary_2_t7060 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m44584(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7060 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44584_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m44586_gshared (Dictionary_2_t7060 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m44586(__this, ___capacity, method) (( void (*) (Dictionary_2_t7060 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44586_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44588_gshared (Dictionary_2_t7060 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44588(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7060 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44588_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m44590_gshared (Dictionary_2_t7060 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m44590(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7060 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m44590_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44592_gshared (Dictionary_2_t7060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44592(__this, method) (( Object_t* (*) (Dictionary_2_t7060 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44592_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44594_gshared (Dictionary_2_t7060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44594(__this, method) (( Object_t* (*) (Dictionary_2_t7060 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44594_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m44596_gshared (Dictionary_2_t7060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44596(__this, method) (( Object_t * (*) (Dictionary_2_t7060 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44596_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m44598_gshared (Dictionary_2_t7060 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44598(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7060 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44598_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m44600_gshared (Dictionary_2_t7060 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44600(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7060 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44600_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m44602_gshared (Dictionary_2_t7060 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m44602(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7060 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44602_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m44604_gshared (Dictionary_2_t7060 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m44604(__this, ___key, method) (( bool (*) (Dictionary_2_t7060 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44604_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m44606_gshared (Dictionary_2_t7060 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m44606(__this, ___key, method) (( void (*) (Dictionary_2_t7060 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44606_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44608_gshared (Dictionary_2_t7060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44608(__this, method) (( bool (*) (Dictionary_2_t7060 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44608_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44610_gshared (Dictionary_2_t7060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44610(__this, method) (( Object_t * (*) (Dictionary_2_t7060 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44610_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44612_gshared (Dictionary_2_t7060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44612(__this, method) (( bool (*) (Dictionary_2_t7060 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44612_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44614_gshared (Dictionary_2_t7060 * __this, KeyValuePair_2_t7000  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44614(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7060 *, KeyValuePair_2_t7000 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44614_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44616_gshared (Dictionary_2_t7060 * __this, KeyValuePair_2_t7000  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44616(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7060 *, KeyValuePair_2_t7000 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44616_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44618_gshared (Dictionary_2_t7060 * __this, KeyValuePair_2U5BU5D_t7894* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44618(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7060 *, KeyValuePair_2U5BU5D_t7894*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44618_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44620_gshared (Dictionary_2_t7060 * __this, KeyValuePair_2_t7000  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44620(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7060 *, KeyValuePair_2_t7000 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44620_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m44622_gshared (Dictionary_2_t7060 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44622(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7060 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44622_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44624_gshared (Dictionary_2_t7060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44624(__this, method) (( Object_t * (*) (Dictionary_2_t7060 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44624_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44626_gshared (Dictionary_2_t7060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44626(__this, method) (( Object_t* (*) (Dictionary_2_t7060 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44626_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44628_gshared (Dictionary_2_t7060 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44628(__this, method) (( Object_t * (*) (Dictionary_2_t7060 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44628_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m44630_gshared (Dictionary_2_t7060 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m44630(__this, method) (( int32_t (*) (Dictionary_2_t7060 *, const MethodInfo*))Dictionary_2_get_Count_m44630_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(TKey)
extern "C" float Dictionary_2_get_Item_m44632_gshared (Dictionary_2_t7060 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m44632(__this, ___key, method) (( float (*) (Dictionary_2_t7060 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m44632_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m44634_gshared (Dictionary_2_t7060 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m44634(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7060 *, Object_t *, float, const MethodInfo*))Dictionary_2_set_Item_m44634_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m44636_gshared (Dictionary_2_t7060 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m44636(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7060 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44636_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m44638_gshared (Dictionary_2_t7060 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m44638(__this, ___size, method) (( void (*) (Dictionary_2_t7060 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44638_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m44640_gshared (Dictionary_2_t7060 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m44640(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7060 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44640_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7000  Dictionary_2_make_pair_m44642_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m44642(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7000  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_make_pair_m44642_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m44644_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m44644(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_key_m44644_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_value(TKey,TValue)
extern "C" float Dictionary_2_pick_value_m44646_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m44646(__this /* static, unused */, ___key, ___value, method) (( float (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_value_m44646_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m44648_gshared (Dictionary_2_t7060 * __this, KeyValuePair_2U5BU5D_t7894* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m44648(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7060 *, KeyValuePair_2U5BU5D_t7894*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44648_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Resize()
extern "C" void Dictionary_2_Resize_m44650_gshared (Dictionary_2_t7060 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m44650(__this, method) (( void (*) (Dictionary_2_t7060 *, const MethodInfo*))Dictionary_2_Resize_m44650_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m44652_gshared (Dictionary_2_t7060 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_Add_m44652(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7060 *, Object_t *, float, const MethodInfo*))Dictionary_2_Add_m44652_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Clear()
extern "C" void Dictionary_2_Clear_m44654_gshared (Dictionary_2_t7060 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m44654(__this, method) (( void (*) (Dictionary_2_t7060 *, const MethodInfo*))Dictionary_2_Clear_m44654_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m44656_gshared (Dictionary_2_t7060 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m44656(__this, ___key, method) (( bool (*) (Dictionary_2_t7060 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m44656_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m44658_gshared (Dictionary_2_t7060 * __this, float ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m44658(__this, ___value, method) (( bool (*) (Dictionary_2_t7060 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m44658_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m44660_gshared (Dictionary_2_t7060 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m44660(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7060 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m44660_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m44662_gshared (Dictionary_2_t7060 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m44662(__this, ___sender, method) (( void (*) (Dictionary_2_t7060 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44662_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m44664_gshared (Dictionary_2_t7060 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m44664(__this, ___key, method) (( bool (*) (Dictionary_2_t7060 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m44664_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m44666_gshared (Dictionary_2_t7060 * __this, Object_t * ___key, float* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m44666(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7060 *, Object_t *, float*, const MethodInfo*))Dictionary_2_TryGetValue_m44666_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Keys()
extern "C" KeyCollection_t7061 * Dictionary_2_get_Keys_m44668_gshared (Dictionary_2_t7060 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m44668(__this, method) (( KeyCollection_t7061 * (*) (Dictionary_2_t7060 *, const MethodInfo*))Dictionary_2_get_Keys_m44668_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Values()
extern "C" ValueCollection_t7065 * Dictionary_2_get_Values_m44670_gshared (Dictionary_2_t7060 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m44670(__this, method) (( ValueCollection_t7065 * (*) (Dictionary_2_t7060 *, const MethodInfo*))Dictionary_2_get_Values_m44670_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m44672_gshared (Dictionary_2_t7060 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m44672(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7060 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44672_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTValue(System.Object)
extern "C" float Dictionary_2_ToTValue_m44674_gshared (Dictionary_2_t7060 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m44674(__this, ___value, method) (( float (*) (Dictionary_2_t7060 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44674_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m44676_gshared (Dictionary_2_t7060 * __this, KeyValuePair_2_t7000  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m44676(__this, ___pair, method) (( bool (*) (Dictionary_2_t7060 *, KeyValuePair_2_t7000 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44676_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetEnumerator()
extern "C" Enumerator_t7063  Dictionary_2_GetEnumerator_m44678_gshared (Dictionary_2_t7060 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m44678(__this, method) (( Enumerator_t7063  (*) (Dictionary_2_t7060 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44678_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Single>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2139  Dictionary_2_U3CCopyToU3Em__0_m44680_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m44680(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44680_gshared)(__this /* static, unused */, ___key, ___value, method)
