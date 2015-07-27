#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3981;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t4620;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1291;
// System.Collections.ICollection
struct ICollection_t652;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t3985;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t3989;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t3979;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t4621;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1300;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t4622;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t4623;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1942;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_38.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__35.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m26869_gshared (Dictionary_2_t3981 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m26869(__this, method) (( void (*) (Dictionary_2_t3981 *, const MethodInfo*))Dictionary_2__ctor_m26869_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26871_gshared (Dictionary_2_t3981 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26871(__this, ___comparer, method) (( void (*) (Dictionary_2_t3981 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26871_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m26873_gshared (Dictionary_2_t3981 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m26873(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3981 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26873_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m26875_gshared (Dictionary_2_t3981 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m26875(__this, ___capacity, method) (( void (*) (Dictionary_2_t3981 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26877_gshared (Dictionary_2_t3981 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26877(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3981 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26877_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m26879_gshared (Dictionary_2_t3981 * __this, SerializationInfo_t1300 * ___info, StreamingContext_t1301  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m26879(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3981 *, SerializationInfo_t1300 *, StreamingContext_t1301 , const MethodInfo*))Dictionary_2__ctor_m26879_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26881_gshared (Dictionary_2_t3981 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26881(__this, method) (( Object_t* (*) (Dictionary_2_t3981 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26881_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26883_gshared (Dictionary_2_t3981 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26883(__this, method) (( Object_t* (*) (Dictionary_2_t3981 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26883_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m26885_gshared (Dictionary_2_t3981 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m26885(__this, method) (( Object_t * (*) (Dictionary_2_t3981 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26885_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m26887_gshared (Dictionary_2_t3981 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m26887(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3981 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26887_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m26889_gshared (Dictionary_2_t3981 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m26889(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3981 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26889_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m26891_gshared (Dictionary_2_t3981 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m26891(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3981 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26891_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m26893_gshared (Dictionary_2_t3981 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m26893(__this, ___key, method) (( bool (*) (Dictionary_2_t3981 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26893_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m26895_gshared (Dictionary_2_t3981 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m26895(__this, ___key, method) (( void (*) (Dictionary_2_t3981 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26895_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26897_gshared (Dictionary_2_t3981 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26897(__this, method) (( bool (*) (Dictionary_2_t3981 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26897_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26899_gshared (Dictionary_2_t3981 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26899(__this, method) (( Object_t * (*) (Dictionary_2_t3981 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26899_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26901_gshared (Dictionary_2_t3981 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26901(__this, method) (( bool (*) (Dictionary_2_t3981 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26901_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26903_gshared (Dictionary_2_t3981 * __this, KeyValuePair_2_t3982  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26903(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3981 *, KeyValuePair_2_t3982 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26903_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26905_gshared (Dictionary_2_t3981 * __this, KeyValuePair_2_t3982  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26905(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3981 *, KeyValuePair_2_t3982 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26905_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26907_gshared (Dictionary_2_t3981 * __this, KeyValuePair_2U5BU5D_t4622* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26907(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3981 *, KeyValuePair_2U5BU5D_t4622*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26907_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26909_gshared (Dictionary_2_t3981 * __this, KeyValuePair_2_t3982  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26909(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3981 *, KeyValuePair_2_t3982 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26909_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m26911_gshared (Dictionary_2_t3981 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m26911(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3981 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26911_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26913_gshared (Dictionary_2_t3981 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26913(__this, method) (( Object_t * (*) (Dictionary_2_t3981 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26913_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26915_gshared (Dictionary_2_t3981 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26915(__this, method) (( Object_t* (*) (Dictionary_2_t3981 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26915_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26917_gshared (Dictionary_2_t3981 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26917(__this, method) (( Object_t * (*) (Dictionary_2_t3981 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26917_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m26919_gshared (Dictionary_2_t3981 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m26919(__this, method) (( int32_t (*) (Dictionary_2_t3981 *, const MethodInfo*))Dictionary_2_get_Count_m26919_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m26921_gshared (Dictionary_2_t3981 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m26921(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3981 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m26921_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m26923_gshared (Dictionary_2_t3981 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m26923(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3981 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m26923_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m26925_gshared (Dictionary_2_t3981 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m26925(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3981 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26925_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m26927_gshared (Dictionary_2_t3981 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m26927(__this, ___size, method) (( void (*) (Dictionary_2_t3981 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26927_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m26929_gshared (Dictionary_2_t3981 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m26929(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3981 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26929_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3982  Dictionary_2_make_pair_m26931_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m26931(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3982  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m26931_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m26933_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m26933(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m26933_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m26935_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m26935(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m26935_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m26937_gshared (Dictionary_2_t3981 * __this, KeyValuePair_2U5BU5D_t4622* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m26937(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3981 *, KeyValuePair_2U5BU5D_t4622*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26937_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m26939_gshared (Dictionary_2_t3981 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m26939(__this, method) (( void (*) (Dictionary_2_t3981 *, const MethodInfo*))Dictionary_2_Resize_m26939_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m26941_gshared (Dictionary_2_t3981 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m26941(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3981 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m26941_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m26943_gshared (Dictionary_2_t3981 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m26943(__this, method) (( void (*) (Dictionary_2_t3981 *, const MethodInfo*))Dictionary_2_Clear_m26943_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m26945_gshared (Dictionary_2_t3981 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m26945(__this, ___key, method) (( bool (*) (Dictionary_2_t3981 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m26945_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m26947_gshared (Dictionary_2_t3981 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m26947(__this, ___value, method) (( bool (*) (Dictionary_2_t3981 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m26947_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m26949_gshared (Dictionary_2_t3981 * __this, SerializationInfo_t1300 * ___info, StreamingContext_t1301  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m26949(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3981 *, SerializationInfo_t1300 *, StreamingContext_t1301 , const MethodInfo*))Dictionary_2_GetObjectData_m26949_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m26951_gshared (Dictionary_2_t3981 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m26951(__this, ___sender, method) (( void (*) (Dictionary_2_t3981 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26951_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m26953_gshared (Dictionary_2_t3981 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m26953(__this, ___key, method) (( bool (*) (Dictionary_2_t3981 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m26953_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m26955_gshared (Dictionary_2_t3981 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m26955(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3981 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m26955_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t3985 * Dictionary_2_get_Keys_m26957_gshared (Dictionary_2_t3981 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m26957(__this, method) (( KeyCollection_t3985 * (*) (Dictionary_2_t3981 *, const MethodInfo*))Dictionary_2_get_Keys_m26957_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t3989 * Dictionary_2_get_Values_m26959_gshared (Dictionary_2_t3981 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m26959(__this, method) (( ValueCollection_t3989 * (*) (Dictionary_2_t3981 *, const MethodInfo*))Dictionary_2_get_Values_m26959_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m26961_gshared (Dictionary_2_t3981 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m26961(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t3981 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26961_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m26963_gshared (Dictionary_2_t3981 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m26963(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3981 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26963_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m26965_gshared (Dictionary_2_t3981 * __this, KeyValuePair_2_t3982  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m26965(__this, ___pair, method) (( bool (*) (Dictionary_2_t3981 *, KeyValuePair_2_t3982 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26965_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t3987  Dictionary_2_GetEnumerator_m26967_gshared (Dictionary_2_t3981 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m26967(__this, method) (( Enumerator_t3987  (*) (Dictionary_2_t3981 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26967_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2180  Dictionary_2_U3CCopyToU3Em__0_m26969_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m26969(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2180  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m26969_gshared)(__this /* static, unused */, ___key, ___value, method)
