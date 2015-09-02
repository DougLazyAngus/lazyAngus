#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7096;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8968;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Single>
struct KeyCollection_t7097;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
struct ValueCollection_t7101;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1204;
// System.Collections.Generic.IDictionary`2<System.Object,System.Single>
struct IDictionary_2_t9352;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t7930;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t7312;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__50.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
extern "C" void Dictionary_2__ctor_m45036_gshared (Dictionary_2_t7096 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m45036(__this, method) (( void (*) (Dictionary_2_t7096 *, const MethodInfo*))Dictionary_2__ctor_m45036_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45038_gshared (Dictionary_2_t7096 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45038(__this, ___comparer, method) (( void (*) (Dictionary_2_t7096 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45038_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m45040_gshared (Dictionary_2_t7096 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m45040(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7096 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45040_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m45042_gshared (Dictionary_2_t7096 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m45042(__this, ___capacity, method) (( void (*) (Dictionary_2_t7096 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m45042_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45044_gshared (Dictionary_2_t7096 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45044(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7096 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45044_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m45046_gshared (Dictionary_2_t7096 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m45046(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7096 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m45046_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45048_gshared (Dictionary_2_t7096 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45048(__this, method) (( Object_t* (*) (Dictionary_2_t7096 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45048_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45050_gshared (Dictionary_2_t7096 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45050(__this, method) (( Object_t* (*) (Dictionary_2_t7096 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45050_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m45052_gshared (Dictionary_2_t7096 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m45052(__this, method) (( Object_t * (*) (Dictionary_2_t7096 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m45052_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m45054_gshared (Dictionary_2_t7096 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m45054(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7096 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m45054_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m45056_gshared (Dictionary_2_t7096 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m45056(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7096 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m45056_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m45058_gshared (Dictionary_2_t7096 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m45058(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7096 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m45058_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m45060_gshared (Dictionary_2_t7096 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m45060(__this, ___key, method) (( bool (*) (Dictionary_2_t7096 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m45060_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m45062_gshared (Dictionary_2_t7096 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m45062(__this, ___key, method) (( void (*) (Dictionary_2_t7096 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m45062_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45064_gshared (Dictionary_2_t7096 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45064(__this, method) (( bool (*) (Dictionary_2_t7096 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45064_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45066_gshared (Dictionary_2_t7096 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45066(__this, method) (( Object_t * (*) (Dictionary_2_t7096 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45066_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45068_gshared (Dictionary_2_t7096 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45068(__this, method) (( bool (*) (Dictionary_2_t7096 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45068_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45070_gshared (Dictionary_2_t7096 * __this, KeyValuePair_2_t7036  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45070(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7096 *, KeyValuePair_2_t7036 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45070_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45072_gshared (Dictionary_2_t7096 * __this, KeyValuePair_2_t7036  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45072(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7096 *, KeyValuePair_2_t7036 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45072_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45074_gshared (Dictionary_2_t7096 * __this, KeyValuePair_2U5BU5D_t7930* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45074(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7096 *, KeyValuePair_2U5BU5D_t7930*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45074_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45076_gshared (Dictionary_2_t7096 * __this, KeyValuePair_2_t7036  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45076(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7096 *, KeyValuePair_2_t7036 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45076_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m45078_gshared (Dictionary_2_t7096 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m45078(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7096 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m45078_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45080_gshared (Dictionary_2_t7096 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45080(__this, method) (( Object_t * (*) (Dictionary_2_t7096 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45080_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45082_gshared (Dictionary_2_t7096 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45082(__this, method) (( Object_t* (*) (Dictionary_2_t7096 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45082_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45084_gshared (Dictionary_2_t7096 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45084(__this, method) (( Object_t * (*) (Dictionary_2_t7096 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45084_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m45086_gshared (Dictionary_2_t7096 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m45086(__this, method) (( int32_t (*) (Dictionary_2_t7096 *, const MethodInfo*))Dictionary_2_get_Count_m45086_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(TKey)
extern "C" float Dictionary_2_get_Item_m45088_gshared (Dictionary_2_t7096 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m45088(__this, ___key, method) (( float (*) (Dictionary_2_t7096 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m45088_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m45090_gshared (Dictionary_2_t7096 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m45090(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7096 *, Object_t *, float, const MethodInfo*))Dictionary_2_set_Item_m45090_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m45092_gshared (Dictionary_2_t7096 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m45092(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7096 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m45092_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m45094_gshared (Dictionary_2_t7096 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m45094(__this, ___size, method) (( void (*) (Dictionary_2_t7096 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m45094_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m45096_gshared (Dictionary_2_t7096 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m45096(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7096 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m45096_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7036  Dictionary_2_make_pair_m45098_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m45098(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7036  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_make_pair_m45098_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m45100_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m45100(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_key_m45100_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_value(TKey,TValue)
extern "C" float Dictionary_2_pick_value_m45102_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m45102(__this /* static, unused */, ___key, ___value, method) (( float (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_value_m45102_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m45104_gshared (Dictionary_2_t7096 * __this, KeyValuePair_2U5BU5D_t7930* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m45104(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7096 *, KeyValuePair_2U5BU5D_t7930*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m45104_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Resize()
extern "C" void Dictionary_2_Resize_m45106_gshared (Dictionary_2_t7096 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m45106(__this, method) (( void (*) (Dictionary_2_t7096 *, const MethodInfo*))Dictionary_2_Resize_m45106_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m45108_gshared (Dictionary_2_t7096 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_Add_m45108(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7096 *, Object_t *, float, const MethodInfo*))Dictionary_2_Add_m45108_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Clear()
extern "C" void Dictionary_2_Clear_m45110_gshared (Dictionary_2_t7096 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m45110(__this, method) (( void (*) (Dictionary_2_t7096 *, const MethodInfo*))Dictionary_2_Clear_m45110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m45112_gshared (Dictionary_2_t7096 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m45112(__this, ___key, method) (( bool (*) (Dictionary_2_t7096 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m45112_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m45114_gshared (Dictionary_2_t7096 * __this, float ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m45114(__this, ___value, method) (( bool (*) (Dictionary_2_t7096 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m45114_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m45116_gshared (Dictionary_2_t7096 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m45116(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7096 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m45116_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m45118_gshared (Dictionary_2_t7096 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m45118(__this, ___sender, method) (( void (*) (Dictionary_2_t7096 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m45118_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m45120_gshared (Dictionary_2_t7096 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m45120(__this, ___key, method) (( bool (*) (Dictionary_2_t7096 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m45120_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m45122_gshared (Dictionary_2_t7096 * __this, Object_t * ___key, float* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m45122(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7096 *, Object_t *, float*, const MethodInfo*))Dictionary_2_TryGetValue_m45122_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Keys()
extern "C" KeyCollection_t7097 * Dictionary_2_get_Keys_m45124_gshared (Dictionary_2_t7096 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m45124(__this, method) (( KeyCollection_t7097 * (*) (Dictionary_2_t7096 *, const MethodInfo*))Dictionary_2_get_Keys_m45124_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Values()
extern "C" ValueCollection_t7101 * Dictionary_2_get_Values_m45126_gshared (Dictionary_2_t7096 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m45126(__this, method) (( ValueCollection_t7101 * (*) (Dictionary_2_t7096 *, const MethodInfo*))Dictionary_2_get_Values_m45126_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m45128_gshared (Dictionary_2_t7096 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m45128(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7096 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m45128_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTValue(System.Object)
extern "C" float Dictionary_2_ToTValue_m45130_gshared (Dictionary_2_t7096 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m45130(__this, ___value, method) (( float (*) (Dictionary_2_t7096 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m45130_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m45132_gshared (Dictionary_2_t7096 * __this, KeyValuePair_2_t7036  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m45132(__this, ___pair, method) (( bool (*) (Dictionary_2_t7096 *, KeyValuePair_2_t7036 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m45132_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetEnumerator()
extern "C" Enumerator_t7099  Dictionary_2_GetEnumerator_m45134_gshared (Dictionary_2_t7096 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m45134(__this, method) (( Enumerator_t7099  (*) (Dictionary_2_t7096 *, const MethodInfo*))Dictionary_2_GetEnumerator_m45134_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Single>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__0_m45136_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m45136(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m45136_gshared)(__this /* static, unused */, ___key, ___value, method)
