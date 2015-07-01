#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3383;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1189;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4134;
// System.Collections.ICollection
struct ICollection_t547;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t3386;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t3390;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3290;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t4174;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1198;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t4175;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t4176;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1396;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m18245_gshared (Dictionary_2_t3383 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18245(__this, method) (( void (*) (Dictionary_2_t3383 *, const MethodInfo*))Dictionary_2__ctor_m18245_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18247_gshared (Dictionary_2_t3383 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18247(__this, ___comparer, method) (( void (*) (Dictionary_2_t3383 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18247_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m18249_gshared (Dictionary_2_t3383 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m18249(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3383 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18249_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18250_gshared (Dictionary_2_t3383 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18250(__this, ___capacity, method) (( void (*) (Dictionary_2_t3383 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18250_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18252_gshared (Dictionary_2_t3383 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18252(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3383 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18252_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18254_gshared (Dictionary_2_t3383 * __this, SerializationInfo_t1198 * ___info, StreamingContext_t1199  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18254(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3383 *, SerializationInfo_t1198 *, StreamingContext_t1199 , const MethodInfo*))Dictionary_2__ctor_m18254_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18256_gshared (Dictionary_2_t3383 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18256(__this, method) (( Object_t* (*) (Dictionary_2_t3383 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18256_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18258_gshared (Dictionary_2_t3383 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18258(__this, method) (( Object_t* (*) (Dictionary_2_t3383 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18258_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m18260_gshared (Dictionary_2_t3383 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m18260(__this, method) (( Object_t * (*) (Dictionary_2_t3383 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m18260_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18262_gshared (Dictionary_2_t3383 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18262(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3383 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18262_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18264_gshared (Dictionary_2_t3383 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18264(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3383 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18264_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18266_gshared (Dictionary_2_t3383 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18266(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3383 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18266_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18268_gshared (Dictionary_2_t3383 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18268(__this, ___key, method) (( bool (*) (Dictionary_2_t3383 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18268_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18270_gshared (Dictionary_2_t3383 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18270(__this, ___key, method) (( void (*) (Dictionary_2_t3383 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18270_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18272_gshared (Dictionary_2_t3383 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18272(__this, method) (( bool (*) (Dictionary_2_t3383 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18272_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18274_gshared (Dictionary_2_t3383 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18274(__this, method) (( Object_t * (*) (Dictionary_2_t3383 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18274_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18276_gshared (Dictionary_2_t3383 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18276(__this, method) (( bool (*) (Dictionary_2_t3383 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18276_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18278_gshared (Dictionary_2_t3383 * __this, KeyValuePair_2_t3384  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18278(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3383 *, KeyValuePair_2_t3384 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18278_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18280_gshared (Dictionary_2_t3383 * __this, KeyValuePair_2_t3384  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18280(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3383 *, KeyValuePair_2_t3384 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18280_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18282_gshared (Dictionary_2_t3383 * __this, KeyValuePair_2U5BU5D_t4175* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18282(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3383 *, KeyValuePair_2U5BU5D_t4175*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18282_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18284_gshared (Dictionary_2_t3383 * __this, KeyValuePair_2_t3384  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18284(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3383 *, KeyValuePair_2_t3384 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18284_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18286_gshared (Dictionary_2_t3383 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18286(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3383 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18286_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18288_gshared (Dictionary_2_t3383 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18288(__this, method) (( Object_t * (*) (Dictionary_2_t3383 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18288_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18290_gshared (Dictionary_2_t3383 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18290(__this, method) (( Object_t* (*) (Dictionary_2_t3383 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18290_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18292_gshared (Dictionary_2_t3383 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18292(__this, method) (( Object_t * (*) (Dictionary_2_t3383 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18292_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18294_gshared (Dictionary_2_t3383 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18294(__this, method) (( int32_t (*) (Dictionary_2_t3383 *, const MethodInfo*))Dictionary_2_get_Count_m18294_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m18296_gshared (Dictionary_2_t3383 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18296(__this, ___key, method) (( int32_t (*) (Dictionary_2_t3383 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18296_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18298_gshared (Dictionary_2_t3383 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18298(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3383 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m18298_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18300_gshared (Dictionary_2_t3383 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18300(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3383 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18300_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18302_gshared (Dictionary_2_t3383 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18302(__this, ___size, method) (( void (*) (Dictionary_2_t3383 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18302_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18304_gshared (Dictionary_2_t3383 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18304(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3383 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18304_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3384  Dictionary_2_make_pair_m18306_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18306(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3384  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m18306_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m18308_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m18308(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m18308_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m18310_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18310(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m18310_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18312_gshared (Dictionary_2_t3383 * __this, KeyValuePair_2U5BU5D_t4175* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18312(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3383 *, KeyValuePair_2U5BU5D_t4175*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18312_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m18314_gshared (Dictionary_2_t3383 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18314(__this, method) (( void (*) (Dictionary_2_t3383 *, const MethodInfo*))Dictionary_2_Resize_m18314_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18316_gshared (Dictionary_2_t3383 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18316(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3383 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m18316_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m18318_gshared (Dictionary_2_t3383 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18318(__this, method) (( void (*) (Dictionary_2_t3383 *, const MethodInfo*))Dictionary_2_Clear_m18318_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18320_gshared (Dictionary_2_t3383 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18320(__this, ___key, method) (( bool (*) (Dictionary_2_t3383 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18320_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18322_gshared (Dictionary_2_t3383 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18322(__this, ___value, method) (( bool (*) (Dictionary_2_t3383 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m18322_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18324_gshared (Dictionary_2_t3383 * __this, SerializationInfo_t1198 * ___info, StreamingContext_t1199  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18324(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3383 *, SerializationInfo_t1198 *, StreamingContext_t1199 , const MethodInfo*))Dictionary_2_GetObjectData_m18324_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18326_gshared (Dictionary_2_t3383 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18326(__this, ___sender, method) (( void (*) (Dictionary_2_t3383 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18326_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18328_gshared (Dictionary_2_t3383 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18328(__this, ___key, method) (( bool (*) (Dictionary_2_t3383 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18328_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18330_gshared (Dictionary_2_t3383 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18330(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3383 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m18330_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t3386 * Dictionary_2_get_Keys_m18332_gshared (Dictionary_2_t3383 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m18332(__this, method) (( KeyCollection_t3386 * (*) (Dictionary_2_t3383 *, const MethodInfo*))Dictionary_2_get_Keys_m18332_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t3390 * Dictionary_2_get_Values_m18334_gshared (Dictionary_2_t3383 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18334(__this, method) (( ValueCollection_t3390 * (*) (Dictionary_2_t3383 *, const MethodInfo*))Dictionary_2_get_Values_m18334_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18336_gshared (Dictionary_2_t3383 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18336(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3383 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18336_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m18338_gshared (Dictionary_2_t3383 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18338(__this, ___value, method) (( int32_t (*) (Dictionary_2_t3383 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18338_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18340_gshared (Dictionary_2_t3383 * __this, KeyValuePair_2_t3384  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18340(__this, ___pair, method) (( bool (*) (Dictionary_2_t3383 *, KeyValuePair_2_t3384 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18340_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t3388  Dictionary_2_GetEnumerator_m18342_gshared (Dictionary_2_t3383 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18342(__this, method) (( Enumerator_t3388  (*) (Dictionary_2_t3383 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18342_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1663  Dictionary_2_U3CCopyToU3Em__0_m18344_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18344(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1663  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18344_gshared)(__this /* static, unused */, ___key, ___value, method)
