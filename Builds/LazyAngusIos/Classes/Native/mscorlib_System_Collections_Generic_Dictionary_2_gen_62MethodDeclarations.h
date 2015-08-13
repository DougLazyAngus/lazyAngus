#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7106;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9207;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>
struct KeyCollection_t7107;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
struct ValueCollection_t7111;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1187;
// System.Collections.Generic.IDictionary`2<System.Object,System.DateTime>
struct IDictionary_2_t9317;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7968;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t7961;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__54.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor()
extern "C" void Dictionary_2__ctor_m45205_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m45205(__this, method) (( void (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2__ctor_m45205_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45207_gshared (Dictionary_2_t7106 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45207(__this, ___comparer, method) (( void (*) (Dictionary_2_t7106 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45207_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m45209_gshared (Dictionary_2_t7106 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m45209(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7106 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45209_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m45211_gshared (Dictionary_2_t7106 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m45211(__this, ___capacity, method) (( void (*) (Dictionary_2_t7106 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m45211_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45213_gshared (Dictionary_2_t7106 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45213(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7106 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45213_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m45215_gshared (Dictionary_2_t7106 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m45215(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7106 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m45215_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45217_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45217(__this, method) (( Object_t* (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45217_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45219_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45219(__this, method) (( Object_t* (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45219_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m45221_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m45221(__this, method) (( Object_t * (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m45221_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m45223_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m45223(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m45223_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m45225_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m45225(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7106 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m45225_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m45227_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m45227(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7106 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m45227_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m45229_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m45229(__this, ___key, method) (( bool (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m45229_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m45231_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m45231(__this, ___key, method) (( void (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m45231_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45233_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45233(__this, method) (( bool (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45233_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45235_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45235(__this, method) (( Object_t * (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45235_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45237_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45237(__this, method) (( bool (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45237_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45239_gshared (Dictionary_2_t7106 * __this, KeyValuePair_2_t7017  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45239(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7106 *, KeyValuePair_2_t7017 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45239_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45241_gshared (Dictionary_2_t7106 * __this, KeyValuePair_2_t7017  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45241(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7106 *, KeyValuePair_2_t7017 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45241_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45243_gshared (Dictionary_2_t7106 * __this, KeyValuePair_2U5BU5D_t7968* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45243(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7106 *, KeyValuePair_2U5BU5D_t7968*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45243_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45245_gshared (Dictionary_2_t7106 * __this, KeyValuePair_2_t7017  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45245(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7106 *, KeyValuePair_2_t7017 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45245_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m45247_gshared (Dictionary_2_t7106 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m45247(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7106 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m45247_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45249_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45249(__this, method) (( Object_t * (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45249_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45251_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45251(__this, method) (( Object_t* (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45251_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45253_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45253(__this, method) (( Object_t * (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45253_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m45255_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m45255(__this, method) (( int32_t (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_get_Count_m45255_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Item(TKey)
extern "C" DateTime_t287  Dictionary_2_get_Item_m45257_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m45257(__this, ___key, method) (( DateTime_t287  (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m45257_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m45259_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m45259(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7106 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_set_Item_m45259_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m45261_gshared (Dictionary_2_t7106 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m45261(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7106 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m45261_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m45263_gshared (Dictionary_2_t7106 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m45263(__this, ___size, method) (( void (*) (Dictionary_2_t7106 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m45263_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m45265_gshared (Dictionary_2_t7106 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m45265(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7106 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m45265_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7017  Dictionary_2_make_pair_m45267_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m45267(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7017  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_make_pair_m45267_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m45269_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m45269(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_key_m45269_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_value(TKey,TValue)
extern "C" DateTime_t287  Dictionary_2_pick_value_m45271_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m45271(__this /* static, unused */, ___key, ___value, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_value_m45271_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m45273_gshared (Dictionary_2_t7106 * __this, KeyValuePair_2U5BU5D_t7968* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m45273(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7106 *, KeyValuePair_2U5BU5D_t7968*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m45273_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Resize()
extern "C" void Dictionary_2_Resize_m45275_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m45275(__this, method) (( void (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_Resize_m45275_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m45277_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m45277(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7106 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_Add_m45277_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Clear()
extern "C" void Dictionary_2_Clear_m45279_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m45279(__this, method) (( void (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_Clear_m45279_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m45281_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m45281(__this, ___key, method) (( bool (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m45281_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m45283_gshared (Dictionary_2_t7106 * __this, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m45283(__this, ___value, method) (( bool (*) (Dictionary_2_t7106 *, DateTime_t287 , const MethodInfo*))Dictionary_2_ContainsValue_m45283_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m45285_gshared (Dictionary_2_t7106 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m45285(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7106 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m45285_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m45287_gshared (Dictionary_2_t7106 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m45287(__this, ___sender, method) (( void (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m45287_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m45289_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m45289(__this, ___key, method) (( bool (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m45289_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m45291_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, DateTime_t287 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m45291(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7106 *, Object_t *, DateTime_t287 *, const MethodInfo*))Dictionary_2_TryGetValue_m45291_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Keys()
extern "C" KeyCollection_t7107 * Dictionary_2_get_Keys_m45293_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m45293(__this, method) (( KeyCollection_t7107 * (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_get_Keys_m45293_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Values()
extern "C" ValueCollection_t7111 * Dictionary_2_get_Values_m45295_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m45295(__this, method) (( ValueCollection_t7111 * (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_get_Values_m45295_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m45297_gshared (Dictionary_2_t7106 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m45297(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m45297_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTValue(System.Object)
extern "C" DateTime_t287  Dictionary_2_ToTValue_m45299_gshared (Dictionary_2_t7106 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m45299(__this, ___value, method) (( DateTime_t287  (*) (Dictionary_2_t7106 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m45299_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m45301_gshared (Dictionary_2_t7106 * __this, KeyValuePair_2_t7017  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m45301(__this, ___pair, method) (( bool (*) (Dictionary_2_t7106 *, KeyValuePair_2_t7017 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m45301_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetEnumerator()
extern "C" Enumerator_t7109  Dictionary_2_GetEnumerator_m45303_gshared (Dictionary_2_t7106 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m45303(__this, method) (( Enumerator_t7109  (*) (Dictionary_2_t7106 *, const MethodInfo*))Dictionary_2_GetEnumerator_m45303_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2139  Dictionary_2_U3CCopyToU3Em__0_m45305_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m45305(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m45305_gshared)(__this /* static, unused */, ___key, ___value, method)
