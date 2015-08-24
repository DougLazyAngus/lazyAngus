#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4125;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8713;
// System.Collections.ICollection
struct ICollection_t755;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t8653;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t8657;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5393;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t9726;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t9727;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t9728;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t785;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_143.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__74.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m63913_gshared (Dictionary_2_t4125 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m63913(__this, method) (( void (*) (Dictionary_2_t4125 *, const MethodInfo*))Dictionary_2__ctor_m63913_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m63914_gshared (Dictionary_2_t4125 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m63914(__this, ___comparer, method) (( void (*) (Dictionary_2_t4125 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m63914_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m63915_gshared (Dictionary_2_t4125 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m63915(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4125 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m63915_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m63916_gshared (Dictionary_2_t4125 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m63916(__this, ___capacity, method) (( void (*) (Dictionary_2_t4125 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m63916_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m63917_gshared (Dictionary_2_t4125 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m63917(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4125 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m63917_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m63918_gshared (Dictionary_2_t4125 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m63918(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4125 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2__ctor_m63918_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m63919_gshared (Dictionary_2_t4125 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m63919(__this, method) (( Object_t* (*) (Dictionary_2_t4125 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m63919_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m63920_gshared (Dictionary_2_t4125 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m63920(__this, method) (( Object_t* (*) (Dictionary_2_t4125 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m63920_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m63921_gshared (Dictionary_2_t4125 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m63921(__this, method) (( Object_t * (*) (Dictionary_2_t4125 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m63921_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m63922_gshared (Dictionary_2_t4125 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m63922(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4125 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m63922_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m63923_gshared (Dictionary_2_t4125 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m63923(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4125 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m63923_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m63924_gshared (Dictionary_2_t4125 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m63924(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4125 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m63924_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m63925_gshared (Dictionary_2_t4125 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m63925(__this, ___key, method) (( bool (*) (Dictionary_2_t4125 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m63925_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m63926_gshared (Dictionary_2_t4125 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m63926(__this, ___key, method) (( void (*) (Dictionary_2_t4125 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m63926_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m63927_gshared (Dictionary_2_t4125 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m63927(__this, method) (( bool (*) (Dictionary_2_t4125 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m63927_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m63928_gshared (Dictionary_2_t4125 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m63928(__this, method) (( Object_t * (*) (Dictionary_2_t4125 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m63928_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m63929_gshared (Dictionary_2_t4125 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m63929(__this, method) (( bool (*) (Dictionary_2_t4125 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m63929_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m63930_gshared (Dictionary_2_t4125 * __this, KeyValuePair_2_t8651  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m63930(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4125 *, KeyValuePair_2_t8651 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m63930_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m63931_gshared (Dictionary_2_t4125 * __this, KeyValuePair_2_t8651  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m63931(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4125 *, KeyValuePair_2_t8651 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m63931_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m63932_gshared (Dictionary_2_t4125 * __this, KeyValuePair_2U5BU5D_t9727* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m63932(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4125 *, KeyValuePair_2U5BU5D_t9727*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m63932_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m63933_gshared (Dictionary_2_t4125 * __this, KeyValuePair_2_t8651  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m63933(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4125 *, KeyValuePair_2_t8651 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m63933_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m63934_gshared (Dictionary_2_t4125 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m63934(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4125 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m63934_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m63935_gshared (Dictionary_2_t4125 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m63935(__this, method) (( Object_t * (*) (Dictionary_2_t4125 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m63935_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m63936_gshared (Dictionary_2_t4125 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m63936(__this, method) (( Object_t* (*) (Dictionary_2_t4125 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m63936_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m63937_gshared (Dictionary_2_t4125 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m63937(__this, method) (( Object_t * (*) (Dictionary_2_t4125 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m63937_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m63938_gshared (Dictionary_2_t4125 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m63938(__this, method) (( int32_t (*) (Dictionary_2_t4125 *, const MethodInfo*))Dictionary_2_get_Count_m63938_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m63939_gshared (Dictionary_2_t4125 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m63939(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4125 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m63939_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m63940_gshared (Dictionary_2_t4125 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m63940(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4125 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m63940_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m63941_gshared (Dictionary_2_t4125 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m63941(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4125 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m63941_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m63942_gshared (Dictionary_2_t4125 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m63942(__this, ___size, method) (( void (*) (Dictionary_2_t4125 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m63942_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m63943_gshared (Dictionary_2_t4125 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m63943(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4125 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m63943_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8651  Dictionary_2_make_pair_m63944_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m63944(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8651  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m63944_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m63945_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m63945(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m63945_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m63946_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m63946(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m63946_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m63947_gshared (Dictionary_2_t4125 * __this, KeyValuePair_2U5BU5D_t9727* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m63947(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4125 *, KeyValuePair_2U5BU5D_t9727*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m63947_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m63948_gshared (Dictionary_2_t4125 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m63948(__this, method) (( void (*) (Dictionary_2_t4125 *, const MethodInfo*))Dictionary_2_Resize_m63948_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m63949_gshared (Dictionary_2_t4125 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m63949(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4125 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m63949_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m63950_gshared (Dictionary_2_t4125 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m63950(__this, method) (( void (*) (Dictionary_2_t4125 *, const MethodInfo*))Dictionary_2_Clear_m63950_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m63951_gshared (Dictionary_2_t4125 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m63951(__this, ___key, method) (( bool (*) (Dictionary_2_t4125 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m63951_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m63952_gshared (Dictionary_2_t4125 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m63952(__this, ___value, method) (( bool (*) (Dictionary_2_t4125 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m63952_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m63953_gshared (Dictionary_2_t4125 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m63953(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4125 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2_GetObjectData_m63953_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m63954_gshared (Dictionary_2_t4125 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m63954(__this, ___sender, method) (( void (*) (Dictionary_2_t4125 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m63954_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m63955_gshared (Dictionary_2_t4125 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m63955(__this, ___key, method) (( bool (*) (Dictionary_2_t4125 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m63955_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m63956_gshared (Dictionary_2_t4125 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m63956(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4125 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m63956_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t8653 * Dictionary_2_get_Keys_m63957_gshared (Dictionary_2_t4125 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m63957(__this, method) (( KeyCollection_t8653 * (*) (Dictionary_2_t4125 *, const MethodInfo*))Dictionary_2_get_Keys_m63957_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t8657 * Dictionary_2_get_Values_m63958_gshared (Dictionary_2_t4125 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m63958(__this, method) (( ValueCollection_t8657 * (*) (Dictionary_2_t4125 *, const MethodInfo*))Dictionary_2_get_Values_m63958_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m63959_gshared (Dictionary_2_t4125 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m63959(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4125 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m63959_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m63960_gshared (Dictionary_2_t4125 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m63960(__this, ___value, method) (( int32_t (*) (Dictionary_2_t4125 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m63960_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m63961_gshared (Dictionary_2_t4125 * __this, KeyValuePair_2_t8651  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m63961(__this, ___pair, method) (( bool (*) (Dictionary_2_t4125 *, KeyValuePair_2_t8651 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m63961_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8655  Dictionary_2_GetEnumerator_m63962_gshared (Dictionary_2_t4125 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m63962(__this, method) (( Enumerator_t8655  (*) (Dictionary_2_t4125 *, const MethodInfo*))Dictionary_2_GetEnumerator_m63962_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2140  Dictionary_2_U3CCopyToU3Em__0_m63963_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m63963(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2140  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m63963_gshared)(__this /* static, unused */, ___key, ___value, method)
