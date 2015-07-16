#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4037;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1246;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t4594;
// System.Collections.ICollection
struct ICollection_t600;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t4040;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t4044;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3345;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t4595;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t4596;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t4597;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1451;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_42.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__37.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m27332_gshared (Dictionary_2_t4037 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m27332(__this, method) (( void (*) (Dictionary_2_t4037 *, const MethodInfo*))Dictionary_2__ctor_m27332_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27333_gshared (Dictionary_2_t4037 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27333(__this, ___comparer, method) (( void (*) (Dictionary_2_t4037 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27333_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m27335_gshared (Dictionary_2_t4037 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m27335(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4037 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27335_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m27337_gshared (Dictionary_2_t4037 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m27337(__this, ___capacity, method) (( void (*) (Dictionary_2_t4037 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m27337_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27339_gshared (Dictionary_2_t4037 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27339(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4037 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27339_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m27341_gshared (Dictionary_2_t4037 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m27341(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4037 *, SerializationInfo_t1255 *, StreamingContext_t1256 , const MethodInfo*))Dictionary_2__ctor_m27341_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27343_gshared (Dictionary_2_t4037 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27343(__this, method) (( Object_t* (*) (Dictionary_2_t4037 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27343_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27345_gshared (Dictionary_2_t4037 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27345(__this, method) (( Object_t* (*) (Dictionary_2_t4037 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27345_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m27347_gshared (Dictionary_2_t4037 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m27347(__this, method) (( Object_t * (*) (Dictionary_2_t4037 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m27347_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m27349_gshared (Dictionary_2_t4037 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m27349(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4037 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m27349_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m27351_gshared (Dictionary_2_t4037 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m27351(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4037 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m27351_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m27353_gshared (Dictionary_2_t4037 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m27353(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4037 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m27353_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m27355_gshared (Dictionary_2_t4037 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m27355(__this, ___key, method) (( bool (*) (Dictionary_2_t4037 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m27355_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m27357_gshared (Dictionary_2_t4037 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m27357(__this, ___key, method) (( void (*) (Dictionary_2_t4037 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m27357_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27359_gshared (Dictionary_2_t4037 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27359(__this, method) (( bool (*) (Dictionary_2_t4037 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27359_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27361_gshared (Dictionary_2_t4037 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27361(__this, method) (( Object_t * (*) (Dictionary_2_t4037 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27361_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27363_gshared (Dictionary_2_t4037 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27363(__this, method) (( bool (*) (Dictionary_2_t4037 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27363_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27365_gshared (Dictionary_2_t4037 * __this, KeyValuePair_2_t4038  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27365(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4037 *, KeyValuePair_2_t4038 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27365_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27367_gshared (Dictionary_2_t4037 * __this, KeyValuePair_2_t4038  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27367(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4037 *, KeyValuePair_2_t4038 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27367_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27369_gshared (Dictionary_2_t4037 * __this, KeyValuePair_2U5BU5D_t4596* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27369(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4037 *, KeyValuePair_2U5BU5D_t4596*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27369_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27371_gshared (Dictionary_2_t4037 * __this, KeyValuePair_2_t4038  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27371(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4037 *, KeyValuePair_2_t4038 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27371_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m27373_gshared (Dictionary_2_t4037 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m27373(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4037 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m27373_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27375_gshared (Dictionary_2_t4037 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27375(__this, method) (( Object_t * (*) (Dictionary_2_t4037 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27375_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27377_gshared (Dictionary_2_t4037 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27377(__this, method) (( Object_t* (*) (Dictionary_2_t4037 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27377_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27379_gshared (Dictionary_2_t4037 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27379(__this, method) (( Object_t * (*) (Dictionary_2_t4037 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27379_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m27381_gshared (Dictionary_2_t4037 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m27381(__this, method) (( int32_t (*) (Dictionary_2_t4037 *, const MethodInfo*))Dictionary_2_get_Count_m27381_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m27383_gshared (Dictionary_2_t4037 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m27383(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t4037 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m27383_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m27385_gshared (Dictionary_2_t4037 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m27385(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4037 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m27385_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m27387_gshared (Dictionary_2_t4037 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m27387(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4037 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m27387_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m27389_gshared (Dictionary_2_t4037 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m27389(__this, ___size, method) (( void (*) (Dictionary_2_t4037 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m27389_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m27391_gshared (Dictionary_2_t4037 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m27391(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4037 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m27391_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4038  Dictionary_2_make_pair_m27393_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m27393(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4038  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m27393_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m27395_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m27395(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m27395_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m27397_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m27397(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m27397_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m27399_gshared (Dictionary_2_t4037 * __this, KeyValuePair_2U5BU5D_t4596* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m27399(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4037 *, KeyValuePair_2U5BU5D_t4596*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m27399_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m27401_gshared (Dictionary_2_t4037 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m27401(__this, method) (( void (*) (Dictionary_2_t4037 *, const MethodInfo*))Dictionary_2_Resize_m27401_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m27403_gshared (Dictionary_2_t4037 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m27403(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4037 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m27403_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m27405_gshared (Dictionary_2_t4037 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m27405(__this, method) (( void (*) (Dictionary_2_t4037 *, const MethodInfo*))Dictionary_2_Clear_m27405_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m27407_gshared (Dictionary_2_t4037 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m27407(__this, ___key, method) (( bool (*) (Dictionary_2_t4037 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m27407_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m27409_gshared (Dictionary_2_t4037 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m27409(__this, ___value, method) (( bool (*) (Dictionary_2_t4037 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m27409_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m27411_gshared (Dictionary_2_t4037 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m27411(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4037 *, SerializationInfo_t1255 *, StreamingContext_t1256 , const MethodInfo*))Dictionary_2_GetObjectData_m27411_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m27413_gshared (Dictionary_2_t4037 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m27413(__this, ___sender, method) (( void (*) (Dictionary_2_t4037 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m27413_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m27415_gshared (Dictionary_2_t4037 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m27415(__this, ___key, method) (( bool (*) (Dictionary_2_t4037 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m27415_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m27417_gshared (Dictionary_2_t4037 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m27417(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4037 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m27417_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t4040 * Dictionary_2_get_Keys_m27419_gshared (Dictionary_2_t4037 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m27419(__this, method) (( KeyCollection_t4040 * (*) (Dictionary_2_t4037 *, const MethodInfo*))Dictionary_2_get_Keys_m27419_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t4044 * Dictionary_2_get_Values_m27421_gshared (Dictionary_2_t4037 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m27421(__this, method) (( ValueCollection_t4044 * (*) (Dictionary_2_t4037 *, const MethodInfo*))Dictionary_2_get_Values_m27421_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m27423_gshared (Dictionary_2_t4037 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m27423(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4037 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m27423_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m27425_gshared (Dictionary_2_t4037 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m27425(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t4037 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m27425_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m27427_gshared (Dictionary_2_t4037 * __this, KeyValuePair_2_t4038  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m27427(__this, ___pair, method) (( bool (*) (Dictionary_2_t4037 *, KeyValuePair_2_t4038 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m27427_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t4042  Dictionary_2_GetEnumerator_m27429_gshared (Dictionary_2_t4037 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m27429(__this, method) (( Enumerator_t4042  (*) (Dictionary_2_t4037 *, const MethodInfo*))Dictionary_2_GetEnumerator_m27429_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1718  Dictionary_2_U3CCopyToU3Em__0_m27431_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m27431(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1718  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m27431_gshared)(__this /* static, unused */, ___key, ___value, method)
