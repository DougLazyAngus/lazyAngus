#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7009;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1171;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9115;
// System.Collections.ICollection
struct ICollection_t705;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Double>
struct KeyCollection_t7010;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>
struct ValueCollection_t7014;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1135;
// System.Collections.Generic.IDictionary`2<System.Object,System.Double>
struct IDictionary_2_t9219;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2870;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t7758;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t7198;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3912;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__51.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor()
extern "C" void Dictionary_2__ctor_m44177_gshared (Dictionary_2_t7009 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m44177(__this, method) (( void (*) (Dictionary_2_t7009 *, const MethodInfo*))Dictionary_2__ctor_m44177_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44179_gshared (Dictionary_2_t7009 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44179(__this, ___comparer, method) (( void (*) (Dictionary_2_t7009 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44179_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m44181_gshared (Dictionary_2_t7009 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m44181(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7009 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44181_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m44183_gshared (Dictionary_2_t7009 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m44183(__this, ___capacity, method) (( void (*) (Dictionary_2_t7009 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44183_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44185_gshared (Dictionary_2_t7009 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44185(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7009 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44185_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m44187_gshared (Dictionary_2_t7009 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m44187(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7009 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2__ctor_m44187_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44189_gshared (Dictionary_2_t7009 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44189(__this, method) (( Object_t* (*) (Dictionary_2_t7009 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44189_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44191_gshared (Dictionary_2_t7009 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44191(__this, method) (( Object_t* (*) (Dictionary_2_t7009 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44191_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m44193_gshared (Dictionary_2_t7009 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44193(__this, method) (( Object_t * (*) (Dictionary_2_t7009 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44193_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m44195_gshared (Dictionary_2_t7009 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44195(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7009 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44195_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m44197_gshared (Dictionary_2_t7009 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44197(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7009 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44197_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m44199_gshared (Dictionary_2_t7009 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m44199(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7009 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44199_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m44201_gshared (Dictionary_2_t7009 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m44201(__this, ___key, method) (( bool (*) (Dictionary_2_t7009 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44201_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m44203_gshared (Dictionary_2_t7009 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m44203(__this, ___key, method) (( void (*) (Dictionary_2_t7009 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44203_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44205_gshared (Dictionary_2_t7009 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44205(__this, method) (( bool (*) (Dictionary_2_t7009 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44205_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44207_gshared (Dictionary_2_t7009 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44207(__this, method) (( Object_t * (*) (Dictionary_2_t7009 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44207_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44209_gshared (Dictionary_2_t7009 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44209(__this, method) (( bool (*) (Dictionary_2_t7009 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44209_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44211_gshared (Dictionary_2_t7009 * __this, KeyValuePair_2_t6935  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44211(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7009 *, KeyValuePair_2_t6935 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44211_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44213_gshared (Dictionary_2_t7009 * __this, KeyValuePair_2_t6935  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44213(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7009 *, KeyValuePair_2_t6935 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44213_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44215_gshared (Dictionary_2_t7009 * __this, KeyValuePair_2U5BU5D_t7758* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44215(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7009 *, KeyValuePair_2U5BU5D_t7758*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44215_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44217_gshared (Dictionary_2_t7009 * __this, KeyValuePair_2_t6935  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44217(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7009 *, KeyValuePair_2_t6935 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44217_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m44219_gshared (Dictionary_2_t7009 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44219(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7009 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44219_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44221_gshared (Dictionary_2_t7009 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44221(__this, method) (( Object_t * (*) (Dictionary_2_t7009 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44221_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44223_gshared (Dictionary_2_t7009 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44223(__this, method) (( Object_t* (*) (Dictionary_2_t7009 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44223_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44225_gshared (Dictionary_2_t7009 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44225(__this, method) (( Object_t * (*) (Dictionary_2_t7009 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44225_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m44227_gshared (Dictionary_2_t7009 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m44227(__this, method) (( int32_t (*) (Dictionary_2_t7009 *, const MethodInfo*))Dictionary_2_get_Count_m44227_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Item(TKey)
extern "C" double Dictionary_2_get_Item_m44229_gshared (Dictionary_2_t7009 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m44229(__this, ___key, method) (( double (*) (Dictionary_2_t7009 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m44229_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m44231_gshared (Dictionary_2_t7009 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m44231(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7009 *, Object_t *, double, const MethodInfo*))Dictionary_2_set_Item_m44231_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m44233_gshared (Dictionary_2_t7009 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m44233(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7009 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44233_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m44235_gshared (Dictionary_2_t7009 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m44235(__this, ___size, method) (( void (*) (Dictionary_2_t7009 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44235_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m44237_gshared (Dictionary_2_t7009 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m44237(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7009 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44237_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6935  Dictionary_2_make_pair_m44239_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m44239(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6935  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_make_pair_m44239_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m44241_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m44241(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_key_m44241_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_value(TKey,TValue)
extern "C" double Dictionary_2_pick_value_m44243_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m44243(__this /* static, unused */, ___key, ___value, method) (( double (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_value_m44243_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m44245_gshared (Dictionary_2_t7009 * __this, KeyValuePair_2U5BU5D_t7758* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m44245(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7009 *, KeyValuePair_2U5BU5D_t7758*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44245_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Resize()
extern "C" void Dictionary_2_Resize_m44247_gshared (Dictionary_2_t7009 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m44247(__this, method) (( void (*) (Dictionary_2_t7009 *, const MethodInfo*))Dictionary_2_Resize_m44247_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m44249_gshared (Dictionary_2_t7009 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_Add_m44249(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7009 *, Object_t *, double, const MethodInfo*))Dictionary_2_Add_m44249_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Clear()
extern "C" void Dictionary_2_Clear_m44251_gshared (Dictionary_2_t7009 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m44251(__this, method) (( void (*) (Dictionary_2_t7009 *, const MethodInfo*))Dictionary_2_Clear_m44251_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m44253_gshared (Dictionary_2_t7009 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m44253(__this, ___key, method) (( bool (*) (Dictionary_2_t7009 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m44253_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m44255_gshared (Dictionary_2_t7009 * __this, double ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m44255(__this, ___value, method) (( bool (*) (Dictionary_2_t7009 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m44255_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m44257_gshared (Dictionary_2_t7009 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m44257(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7009 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2_GetObjectData_m44257_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m44259_gshared (Dictionary_2_t7009 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m44259(__this, ___sender, method) (( void (*) (Dictionary_2_t7009 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44259_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m44261_gshared (Dictionary_2_t7009 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m44261(__this, ___key, method) (( bool (*) (Dictionary_2_t7009 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m44261_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m44263_gshared (Dictionary_2_t7009 * __this, Object_t * ___key, double* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m44263(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7009 *, Object_t *, double*, const MethodInfo*))Dictionary_2_TryGetValue_m44263_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Keys()
extern "C" KeyCollection_t7010 * Dictionary_2_get_Keys_m44265_gshared (Dictionary_2_t7009 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m44265(__this, method) (( KeyCollection_t7010 * (*) (Dictionary_2_t7009 *, const MethodInfo*))Dictionary_2_get_Keys_m44265_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Values()
extern "C" ValueCollection_t7014 * Dictionary_2_get_Values_m44267_gshared (Dictionary_2_t7009 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m44267(__this, method) (( ValueCollection_t7014 * (*) (Dictionary_2_t7009 *, const MethodInfo*))Dictionary_2_get_Values_m44267_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m44269_gshared (Dictionary_2_t7009 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m44269(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7009 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44269_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTValue(System.Object)
extern "C" double Dictionary_2_ToTValue_m44271_gshared (Dictionary_2_t7009 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m44271(__this, ___value, method) (( double (*) (Dictionary_2_t7009 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44271_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m44273_gshared (Dictionary_2_t7009 * __this, KeyValuePair_2_t6935  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m44273(__this, ___pair, method) (( bool (*) (Dictionary_2_t7009 *, KeyValuePair_2_t6935 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44273_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetEnumerator()
extern "C" Enumerator_t7012  Dictionary_2_GetEnumerator_m44275_gshared (Dictionary_2_t7009 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m44275(__this, method) (( Enumerator_t7012  (*) (Dictionary_2_t7009 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44275_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Double>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2089  Dictionary_2_U3CCopyToU3Em__0_m44277_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m44277(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2089  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44277_gshared)(__this /* static, unused */, ___key, ___value, method)
