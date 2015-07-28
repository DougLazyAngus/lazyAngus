#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8365;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8972;
// System.Collections.ICollection
struct ICollection_t697;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t8366;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t8370;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1126;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t9514;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7605;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t7167;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3902;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__64.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m60293_gshared (Dictionary_2_t8365 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m60293(__this, method) (( void (*) (Dictionary_2_t8365 *, const MethodInfo*))Dictionary_2__ctor_m60293_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m60295_gshared (Dictionary_2_t8365 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m60295(__this, ___comparer, method) (( void (*) (Dictionary_2_t8365 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60295_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m60297_gshared (Dictionary_2_t8365 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m60297(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8365 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60297_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m60299_gshared (Dictionary_2_t8365 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m60299(__this, ___capacity, method) (( void (*) (Dictionary_2_t8365 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m60299_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m60301_gshared (Dictionary_2_t8365 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m60301(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8365 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60301_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m60303_gshared (Dictionary_2_t8365 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m60303(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8365 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2__ctor_m60303_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60305_gshared (Dictionary_2_t8365 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60305(__this, method) (( Object_t* (*) (Dictionary_2_t8365 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60305_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60307_gshared (Dictionary_2_t8365 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60307(__this, method) (( Object_t* (*) (Dictionary_2_t8365 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60307_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m60309_gshared (Dictionary_2_t8365 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m60309(__this, method) (( Object_t * (*) (Dictionary_2_t8365 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m60309_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m60311_gshared (Dictionary_2_t8365 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m60311(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8365 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m60311_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m60313_gshared (Dictionary_2_t8365 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m60313(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8365 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m60313_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m60315_gshared (Dictionary_2_t8365 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m60315(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8365 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m60315_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m60317_gshared (Dictionary_2_t8365 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m60317(__this, ___key, method) (( bool (*) (Dictionary_2_t8365 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m60317_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m60319_gshared (Dictionary_2_t8365 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m60319(__this, ___key, method) (( void (*) (Dictionary_2_t8365 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m60319_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60321_gshared (Dictionary_2_t8365 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60321(__this, method) (( bool (*) (Dictionary_2_t8365 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60321_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60323_gshared (Dictionary_2_t8365 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60323(__this, method) (( Object_t * (*) (Dictionary_2_t8365 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60323_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60325_gshared (Dictionary_2_t8365 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60325(__this, method) (( bool (*) (Dictionary_2_t8365 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60325_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60327_gshared (Dictionary_2_t8365 * __this, KeyValuePair_2_t7162  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60327(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8365 *, KeyValuePair_2_t7162 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60327_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60329_gshared (Dictionary_2_t8365 * __this, KeyValuePair_2_t7162  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60329(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8365 *, KeyValuePair_2_t7162 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60329_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60331_gshared (Dictionary_2_t8365 * __this, KeyValuePair_2U5BU5D_t7605* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60331(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8365 *, KeyValuePair_2U5BU5D_t7605*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60331_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60333_gshared (Dictionary_2_t8365 * __this, KeyValuePair_2_t7162  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60333(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8365 *, KeyValuePair_2_t7162 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60333_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m60335_gshared (Dictionary_2_t8365 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m60335(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8365 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m60335_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60337_gshared (Dictionary_2_t8365 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60337(__this, method) (( Object_t * (*) (Dictionary_2_t8365 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60337_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60339_gshared (Dictionary_2_t8365 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60339(__this, method) (( Object_t* (*) (Dictionary_2_t8365 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60339_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60341_gshared (Dictionary_2_t8365 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60341(__this, method) (( Object_t * (*) (Dictionary_2_t8365 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60341_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m60343_gshared (Dictionary_2_t8365 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m60343(__this, method) (( int32_t (*) (Dictionary_2_t8365 *, const MethodInfo*))Dictionary_2_get_Count_m60343_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m60345_gshared (Dictionary_2_t8365 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m60345(__this, ___key, method) (( int64_t (*) (Dictionary_2_t8365 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m60345_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m60347_gshared (Dictionary_2_t8365 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m60347(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8365 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m60347_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m60349_gshared (Dictionary_2_t8365 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m60349(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8365 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m60349_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m60351_gshared (Dictionary_2_t8365 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m60351(__this, ___size, method) (( void (*) (Dictionary_2_t8365 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m60351_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m60353_gshared (Dictionary_2_t8365 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m60353(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8365 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m60353_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7162  Dictionary_2_make_pair_m60355_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m60355(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7162  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m60355_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m60357_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m60357(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m60357_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m60359_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m60359(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m60359_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m60361_gshared (Dictionary_2_t8365 * __this, KeyValuePair_2U5BU5D_t7605* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m60361(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8365 *, KeyValuePair_2U5BU5D_t7605*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m60361_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m60363_gshared (Dictionary_2_t8365 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m60363(__this, method) (( void (*) (Dictionary_2_t8365 *, const MethodInfo*))Dictionary_2_Resize_m60363_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m60365_gshared (Dictionary_2_t8365 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m60365(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8365 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m60365_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m60367_gshared (Dictionary_2_t8365 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m60367(__this, method) (( void (*) (Dictionary_2_t8365 *, const MethodInfo*))Dictionary_2_Clear_m60367_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m60369_gshared (Dictionary_2_t8365 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m60369(__this, ___key, method) (( bool (*) (Dictionary_2_t8365 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m60369_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m60371_gshared (Dictionary_2_t8365 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m60371(__this, ___value, method) (( bool (*) (Dictionary_2_t8365 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m60371_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m60373_gshared (Dictionary_2_t8365 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m60373(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8365 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2_GetObjectData_m60373_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m60375_gshared (Dictionary_2_t8365 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m60375(__this, ___sender, method) (( void (*) (Dictionary_2_t8365 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m60375_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m60377_gshared (Dictionary_2_t8365 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m60377(__this, ___key, method) (( bool (*) (Dictionary_2_t8365 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m60377_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m60379_gshared (Dictionary_2_t8365 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m60379(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8365 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m60379_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t8366 * Dictionary_2_get_Keys_m60381_gshared (Dictionary_2_t8365 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m60381(__this, method) (( KeyCollection_t8366 * (*) (Dictionary_2_t8365 *, const MethodInfo*))Dictionary_2_get_Keys_m60381_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t8370 * Dictionary_2_get_Values_m60383_gshared (Dictionary_2_t8365 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m60383(__this, method) (( ValueCollection_t8370 * (*) (Dictionary_2_t8365 *, const MethodInfo*))Dictionary_2_get_Values_m60383_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m60385_gshared (Dictionary_2_t8365 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m60385(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8365 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m60385_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m60387_gshared (Dictionary_2_t8365 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m60387(__this, ___value, method) (( int64_t (*) (Dictionary_2_t8365 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m60387_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m60389_gshared (Dictionary_2_t8365 * __this, KeyValuePair_2_t7162  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m60389(__this, ___pair, method) (( bool (*) (Dictionary_2_t8365 *, KeyValuePair_2_t7162 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m60389_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t8368  Dictionary_2_GetEnumerator_m60391_gshared (Dictionary_2_t8365 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m60391(__this, method) (( Enumerator_t8368  (*) (Dictionary_2_t8365 *, const MethodInfo*))Dictionary_2_GetEnumerator_m60391_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2080  Dictionary_2_U3CCopyToU3Em__0_m60393_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m60393(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2080  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m60393_gshared)(__this /* static, unused */, ___key, ___value, method)
