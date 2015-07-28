#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t5926;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8972;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1162;
// System.Collections.ICollection
struct ICollection_t697;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t5927;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_t5931;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t5924;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Object>
struct IDictionary_2_t5918;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t8973;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct IEnumerator_1_t8974;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3902;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_39.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__34.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m30336_gshared (Dictionary_2_t5926 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m30336(__this, method) (( void (*) (Dictionary_2_t5926 *, const MethodInfo*))Dictionary_2__ctor_m30336_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m30337_gshared (Dictionary_2_t5926 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m30337(__this, ___comparer, method) (( void (*) (Dictionary_2_t5926 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m30337_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m30338_gshared (Dictionary_2_t5926 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m30338(__this, ___dictionary, method) (( void (*) (Dictionary_2_t5926 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m30338_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m30339_gshared (Dictionary_2_t5926 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m30339(__this, ___capacity, method) (( void (*) (Dictionary_2_t5926 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m30339_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m30340_gshared (Dictionary_2_t5926 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m30340(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t5926 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m30340_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m30341_gshared (Dictionary_2_t5926 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m30341(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5926 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2__ctor_m30341_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30342_gshared (Dictionary_2_t5926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30342(__this, method) (( Object_t* (*) (Dictionary_2_t5926 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30342_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30343_gshared (Dictionary_2_t5926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30343(__this, method) (( Object_t* (*) (Dictionary_2_t5926 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30343_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m30344_gshared (Dictionary_2_t5926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m30344(__this, method) (( Object_t * (*) (Dictionary_2_t5926 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m30344_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m30345_gshared (Dictionary_2_t5926 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m30345(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5926 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m30345_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m30346_gshared (Dictionary_2_t5926 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m30346(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5926 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m30346_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m30347_gshared (Dictionary_2_t5926 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m30347(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5926 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m30347_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m30348_gshared (Dictionary_2_t5926 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m30348(__this, ___key, method) (( bool (*) (Dictionary_2_t5926 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m30348_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m30349_gshared (Dictionary_2_t5926 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m30349(__this, ___key, method) (( void (*) (Dictionary_2_t5926 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m30349_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m30350_gshared (Dictionary_2_t5926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m30350(__this, method) (( bool (*) (Dictionary_2_t5926 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m30350_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m30351_gshared (Dictionary_2_t5926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m30351(__this, method) (( Object_t * (*) (Dictionary_2_t5926 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m30351_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30352_gshared (Dictionary_2_t5926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30352(__this, method) (( bool (*) (Dictionary_2_t5926 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30352_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30353_gshared (Dictionary_2_t5926 * __this, KeyValuePair_2_t5921  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30353(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t5926 *, KeyValuePair_2_t5921 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30353_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m30354_gshared (Dictionary_2_t5926 * __this, KeyValuePair_2_t5921  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m30354(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5926 *, KeyValuePair_2_t5921 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m30354_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30355_gshared (Dictionary_2_t5926 * __this, KeyValuePair_2U5BU5D_t8973* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30355(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5926 *, KeyValuePair_2U5BU5D_t8973*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30355_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m30356_gshared (Dictionary_2_t5926 * __this, KeyValuePair_2_t5921  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m30356(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5926 *, KeyValuePair_2_t5921 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m30356_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m30357_gshared (Dictionary_2_t5926 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m30357(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5926 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m30357_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30358_gshared (Dictionary_2_t5926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30358(__this, method) (( Object_t * (*) (Dictionary_2_t5926 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30358_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30359_gshared (Dictionary_2_t5926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30359(__this, method) (( Object_t* (*) (Dictionary_2_t5926 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30359_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m30360_gshared (Dictionary_2_t5926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m30360(__this, method) (( Object_t * (*) (Dictionary_2_t5926 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m30360_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m30361_gshared (Dictionary_2_t5926 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m30361(__this, method) (( int32_t (*) (Dictionary_2_t5926 *, const MethodInfo*))Dictionary_2_get_Count_m30361_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m30362_gshared (Dictionary_2_t5926 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m30362(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5926 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m30362_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m30363_gshared (Dictionary_2_t5926 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m30363(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5926 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m30363_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m30364_gshared (Dictionary_2_t5926 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m30364(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t5926 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m30364_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m30365_gshared (Dictionary_2_t5926 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m30365(__this, ___size, method) (( void (*) (Dictionary_2_t5926 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m30365_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m30366_gshared (Dictionary_2_t5926 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m30366(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5926 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m30366_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5921  Dictionary_2_make_pair_m30367_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m30367(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5921  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m30367_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m30368_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m30368(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m30368_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m30369_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m30369(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m30369_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m30370_gshared (Dictionary_2_t5926 * __this, KeyValuePair_2U5BU5D_t8973* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m30370(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5926 *, KeyValuePair_2U5BU5D_t8973*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m30370_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m30371_gshared (Dictionary_2_t5926 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m30371(__this, method) (( void (*) (Dictionary_2_t5926 *, const MethodInfo*))Dictionary_2_Resize_m30371_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m30372_gshared (Dictionary_2_t5926 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m30372(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5926 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m30372_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m30373_gshared (Dictionary_2_t5926 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m30373(__this, method) (( void (*) (Dictionary_2_t5926 *, const MethodInfo*))Dictionary_2_Clear_m30373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m30374_gshared (Dictionary_2_t5926 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m30374(__this, ___key, method) (( bool (*) (Dictionary_2_t5926 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m30374_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m30375_gshared (Dictionary_2_t5926 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m30375(__this, ___value, method) (( bool (*) (Dictionary_2_t5926 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m30375_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m30376_gshared (Dictionary_2_t5926 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m30376(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5926 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2_GetObjectData_m30376_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m30377_gshared (Dictionary_2_t5926 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m30377(__this, ___sender, method) (( void (*) (Dictionary_2_t5926 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m30377_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m30378_gshared (Dictionary_2_t5926 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m30378(__this, ___key, method) (( bool (*) (Dictionary_2_t5926 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m30378_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m30379_gshared (Dictionary_2_t5926 * __this, int64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m30379(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t5926 *, int64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m30379_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Keys()
extern "C" KeyCollection_t5927 * Dictionary_2_get_Keys_m30380_gshared (Dictionary_2_t5926 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m30380(__this, method) (( KeyCollection_t5927 * (*) (Dictionary_2_t5926 *, const MethodInfo*))Dictionary_2_get_Keys_m30380_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Values()
extern "C" ValueCollection_t5931 * Dictionary_2_get_Values_m30381_gshared (Dictionary_2_t5926 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m30381(__this, method) (( ValueCollection_t5931 * (*) (Dictionary_2_t5926 *, const MethodInfo*))Dictionary_2_get_Values_m30381_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m30382_gshared (Dictionary_2_t5926 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m30382(__this, ___key, method) (( int64_t (*) (Dictionary_2_t5926 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m30382_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m30383_gshared (Dictionary_2_t5926 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m30383(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t5926 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m30383_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m30384_gshared (Dictionary_2_t5926 * __this, KeyValuePair_2_t5921  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m30384(__this, ___pair, method) (( bool (*) (Dictionary_2_t5926 *, KeyValuePair_2_t5921 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m30384_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t5929  Dictionary_2_GetEnumerator_m30385_gshared (Dictionary_2_t5926 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m30385(__this, method) (( Enumerator_t5929  (*) (Dictionary_2_t5926 *, const MethodInfo*))Dictionary_2_GetEnumerator_m30385_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2080  Dictionary_2_U3CCopyToU3Em__0_m30386_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m30386(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2080  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m30386_gshared)(__this /* static, unused */, ___key, ___value, method)
