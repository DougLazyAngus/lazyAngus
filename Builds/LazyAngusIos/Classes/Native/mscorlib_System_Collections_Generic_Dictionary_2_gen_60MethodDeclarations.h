#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7116;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9253;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Double>
struct KeyCollection_t7117;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>
struct ValueCollection_t7121;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1204;
// System.Collections.Generic.IDictionary`2<System.Object,System.Double>
struct IDictionary_2_t9357;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t7865;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t7305;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__52.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor()
extern "C" void Dictionary_2__ctor_m45307_gshared (Dictionary_2_t7116 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m45307(__this, method) (( void (*) (Dictionary_2_t7116 *, const MethodInfo*))Dictionary_2__ctor_m45307_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45309_gshared (Dictionary_2_t7116 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45309(__this, ___comparer, method) (( void (*) (Dictionary_2_t7116 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45309_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m45311_gshared (Dictionary_2_t7116 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m45311(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7116 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45311_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m45313_gshared (Dictionary_2_t7116 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m45313(__this, ___capacity, method) (( void (*) (Dictionary_2_t7116 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m45313_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45315_gshared (Dictionary_2_t7116 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45315(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7116 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45315_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m45317_gshared (Dictionary_2_t7116 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m45317(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7116 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m45317_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45319_gshared (Dictionary_2_t7116 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45319(__this, method) (( Object_t* (*) (Dictionary_2_t7116 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45319_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45321_gshared (Dictionary_2_t7116 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45321(__this, method) (( Object_t* (*) (Dictionary_2_t7116 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45321_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m45323_gshared (Dictionary_2_t7116 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m45323(__this, method) (( Object_t * (*) (Dictionary_2_t7116 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m45323_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m45325_gshared (Dictionary_2_t7116 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m45325(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7116 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m45325_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m45327_gshared (Dictionary_2_t7116 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m45327(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7116 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m45327_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m45329_gshared (Dictionary_2_t7116 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m45329(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7116 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m45329_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m45331_gshared (Dictionary_2_t7116 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m45331(__this, ___key, method) (( bool (*) (Dictionary_2_t7116 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m45331_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m45333_gshared (Dictionary_2_t7116 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m45333(__this, ___key, method) (( void (*) (Dictionary_2_t7116 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m45333_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45335_gshared (Dictionary_2_t7116 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45335(__this, method) (( bool (*) (Dictionary_2_t7116 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45335_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45337_gshared (Dictionary_2_t7116 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45337(__this, method) (( Object_t * (*) (Dictionary_2_t7116 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45337_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45339_gshared (Dictionary_2_t7116 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45339(__this, method) (( bool (*) (Dictionary_2_t7116 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45339_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45341_gshared (Dictionary_2_t7116 * __this, KeyValuePair_2_t7042  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45341(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7116 *, KeyValuePair_2_t7042 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45341_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45343_gshared (Dictionary_2_t7116 * __this, KeyValuePair_2_t7042  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45343(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7116 *, KeyValuePair_2_t7042 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45343_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45345_gshared (Dictionary_2_t7116 * __this, KeyValuePair_2U5BU5D_t7865* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45345(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7116 *, KeyValuePair_2U5BU5D_t7865*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45345_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45347_gshared (Dictionary_2_t7116 * __this, KeyValuePair_2_t7042  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45347(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7116 *, KeyValuePair_2_t7042 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45347_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m45349_gshared (Dictionary_2_t7116 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m45349(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7116 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m45349_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45351_gshared (Dictionary_2_t7116 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45351(__this, method) (( Object_t * (*) (Dictionary_2_t7116 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45351_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45353_gshared (Dictionary_2_t7116 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45353(__this, method) (( Object_t* (*) (Dictionary_2_t7116 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45353_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45355_gshared (Dictionary_2_t7116 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45355(__this, method) (( Object_t * (*) (Dictionary_2_t7116 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45355_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m45357_gshared (Dictionary_2_t7116 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m45357(__this, method) (( int32_t (*) (Dictionary_2_t7116 *, const MethodInfo*))Dictionary_2_get_Count_m45357_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Item(TKey)
extern "C" double Dictionary_2_get_Item_m45359_gshared (Dictionary_2_t7116 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m45359(__this, ___key, method) (( double (*) (Dictionary_2_t7116 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m45359_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m45361_gshared (Dictionary_2_t7116 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m45361(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7116 *, Object_t *, double, const MethodInfo*))Dictionary_2_set_Item_m45361_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m45363_gshared (Dictionary_2_t7116 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m45363(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7116 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m45363_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m45365_gshared (Dictionary_2_t7116 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m45365(__this, ___size, method) (( void (*) (Dictionary_2_t7116 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m45365_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m45367_gshared (Dictionary_2_t7116 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m45367(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7116 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m45367_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7042  Dictionary_2_make_pair_m45369_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m45369(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7042  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_make_pair_m45369_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m45371_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m45371(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_key_m45371_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_value(TKey,TValue)
extern "C" double Dictionary_2_pick_value_m45373_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m45373(__this /* static, unused */, ___key, ___value, method) (( double (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_value_m45373_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m45375_gshared (Dictionary_2_t7116 * __this, KeyValuePair_2U5BU5D_t7865* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m45375(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7116 *, KeyValuePair_2U5BU5D_t7865*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m45375_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Resize()
extern "C" void Dictionary_2_Resize_m45377_gshared (Dictionary_2_t7116 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m45377(__this, method) (( void (*) (Dictionary_2_t7116 *, const MethodInfo*))Dictionary_2_Resize_m45377_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m45379_gshared (Dictionary_2_t7116 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_Add_m45379(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7116 *, Object_t *, double, const MethodInfo*))Dictionary_2_Add_m45379_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Clear()
extern "C" void Dictionary_2_Clear_m45381_gshared (Dictionary_2_t7116 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m45381(__this, method) (( void (*) (Dictionary_2_t7116 *, const MethodInfo*))Dictionary_2_Clear_m45381_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m45383_gshared (Dictionary_2_t7116 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m45383(__this, ___key, method) (( bool (*) (Dictionary_2_t7116 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m45383_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m45385_gshared (Dictionary_2_t7116 * __this, double ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m45385(__this, ___value, method) (( bool (*) (Dictionary_2_t7116 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m45385_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m45387_gshared (Dictionary_2_t7116 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m45387(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7116 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m45387_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m45389_gshared (Dictionary_2_t7116 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m45389(__this, ___sender, method) (( void (*) (Dictionary_2_t7116 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m45389_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m45391_gshared (Dictionary_2_t7116 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m45391(__this, ___key, method) (( bool (*) (Dictionary_2_t7116 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m45391_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m45393_gshared (Dictionary_2_t7116 * __this, Object_t * ___key, double* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m45393(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7116 *, Object_t *, double*, const MethodInfo*))Dictionary_2_TryGetValue_m45393_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Keys()
extern "C" KeyCollection_t7117 * Dictionary_2_get_Keys_m45395_gshared (Dictionary_2_t7116 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m45395(__this, method) (( KeyCollection_t7117 * (*) (Dictionary_2_t7116 *, const MethodInfo*))Dictionary_2_get_Keys_m45395_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Values()
extern "C" ValueCollection_t7121 * Dictionary_2_get_Values_m45397_gshared (Dictionary_2_t7116 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m45397(__this, method) (( ValueCollection_t7121 * (*) (Dictionary_2_t7116 *, const MethodInfo*))Dictionary_2_get_Values_m45397_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m45399_gshared (Dictionary_2_t7116 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m45399(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7116 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m45399_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTValue(System.Object)
extern "C" double Dictionary_2_ToTValue_m45401_gshared (Dictionary_2_t7116 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m45401(__this, ___value, method) (( double (*) (Dictionary_2_t7116 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m45401_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m45403_gshared (Dictionary_2_t7116 * __this, KeyValuePair_2_t7042  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m45403(__this, ___pair, method) (( bool (*) (Dictionary_2_t7116 *, KeyValuePair_2_t7042 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m45403_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetEnumerator()
extern "C" Enumerator_t7119  Dictionary_2_GetEnumerator_m45405_gshared (Dictionary_2_t7116 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m45405(__this, method) (( Enumerator_t7119  (*) (Dictionary_2_t7116 *, const MethodInfo*))Dictionary_2_GetEnumerator_m45405_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Double>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__0_m45407_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m45407(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m45407_gshared)(__this /* static, unused */, ___key, ___value, method)
