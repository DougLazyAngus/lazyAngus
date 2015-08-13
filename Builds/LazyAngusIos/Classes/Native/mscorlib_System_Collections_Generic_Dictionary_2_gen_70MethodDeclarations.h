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
extern "C" void Dictionary_2__ctor_m61040_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m61040(__this, method) (( void (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2__ctor_m61040_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61042_gshared (Dictionary_2_t8446 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61042(__this, ___comparer, method) (( void (*) (Dictionary_2_t8446 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61042_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m61044_gshared (Dictionary_2_t8446 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m61044(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8446 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61044_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m61046_gshared (Dictionary_2_t8446 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m61046(__this, ___capacity, method) (( void (*) (Dictionary_2_t8446 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m61046_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61048_gshared (Dictionary_2_t8446 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61048(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8446 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61048_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m61050_gshared (Dictionary_2_t8446 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m61050(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8446 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m61050_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61052_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61052(__this, method) (( Object_t* (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61052_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61054_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61054(__this, method) (( Object_t* (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61054_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m61056_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m61056(__this, method) (( Object_t * (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m61056_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m61058_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m61058(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m61058_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m61060_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m61060(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8446 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m61060_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m61062_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m61062(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8446 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m61062_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m61064_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m61064(__this, ___key, method) (( bool (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m61064_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m61066_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m61066(__this, ___key, method) (( void (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m61066_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61068_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61068(__this, method) (( bool (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61068_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61070_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61070(__this, method) (( Object_t * (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61072_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61072(__this, method) (( bool (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61072_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61074_gshared (Dictionary_2_t8446 * __this, KeyValuePair_2_t7243  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61074(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8446 *, KeyValuePair_2_t7243 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61074_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61076_gshared (Dictionary_2_t8446 * __this, KeyValuePair_2_t7243  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61076(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8446 *, KeyValuePair_2_t7243 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61076_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61078_gshared (Dictionary_2_t8446 * __this, KeyValuePair_2U5BU5D_t7686* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61078(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8446 *, KeyValuePair_2U5BU5D_t7686*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61078_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61080_gshared (Dictionary_2_t8446 * __this, KeyValuePair_2_t7243  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61080(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8446 *, KeyValuePair_2_t7243 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61080_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m61082_gshared (Dictionary_2_t8446 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m61082(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8446 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m61082_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61084_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61084(__this, method) (( Object_t * (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61084_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61086_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61086(__this, method) (( Object_t* (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61086_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61088_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61088(__this, method) (( Object_t * (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61088_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m61090_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m61090(__this, method) (( int32_t (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_get_Count_m61090_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m61092_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m61092(__this, ___key, method) (( int64_t (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m61092_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m61094_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m61094(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8446 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m61094_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m61096_gshared (Dictionary_2_t8446 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m61096(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8446 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m61096_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m61098_gshared (Dictionary_2_t8446 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m61098(__this, ___size, method) (( void (*) (Dictionary_2_t8446 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m61098_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m61100_gshared (Dictionary_2_t8446 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m61100(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8446 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m61100_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7243  Dictionary_2_make_pair_m61102_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m61102(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7243  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m61102_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m61104_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m61104(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m61104_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m61106_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m61106(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m61106_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m61108_gshared (Dictionary_2_t8446 * __this, KeyValuePair_2U5BU5D_t7686* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m61108(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8446 *, KeyValuePair_2U5BU5D_t7686*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m61108_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m61110_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m61110(__this, method) (( void (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_Resize_m61110_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m61112_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m61112(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8446 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m61112_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m61114_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m61114(__this, method) (( void (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_Clear_m61114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m61116_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m61116(__this, ___key, method) (( bool (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m61116_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m61118_gshared (Dictionary_2_t8446 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m61118(__this, ___value, method) (( bool (*) (Dictionary_2_t8446 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m61118_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m61120_gshared (Dictionary_2_t8446 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m61120(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8446 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m61120_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m61122_gshared (Dictionary_2_t8446 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m61122(__this, ___sender, method) (( void (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m61122_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m61124_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m61124(__this, ___key, method) (( bool (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m61124_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m61126_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m61126(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8446 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m61126_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t8447 * Dictionary_2_get_Keys_m61128_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m61128(__this, method) (( KeyCollection_t8447 * (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_get_Keys_m61128_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t8451 * Dictionary_2_get_Values_m61130_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m61130(__this, method) (( ValueCollection_t8451 * (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_get_Values_m61130_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m61132_gshared (Dictionary_2_t8446 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m61132(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m61132_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m61134_gshared (Dictionary_2_t8446 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m61134(__this, ___value, method) (( int64_t (*) (Dictionary_2_t8446 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m61134_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m61136_gshared (Dictionary_2_t8446 * __this, KeyValuePair_2_t7243  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m61136(__this, ___pair, method) (( bool (*) (Dictionary_2_t8446 *, KeyValuePair_2_t7243 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m61136_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t8449  Dictionary_2_GetEnumerator_m61138_gshared (Dictionary_2_t8446 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m61138(__this, method) (( Enumerator_t8449  (*) (Dictionary_2_t8446 *, const MethodInfo*))Dictionary_2_GetEnumerator_m61138_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2139  Dictionary_2_U3CCopyToU3Em__0_m61140_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m61140(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m61140_gshared)(__this /* static, unused */, ___key, ___value, method)
