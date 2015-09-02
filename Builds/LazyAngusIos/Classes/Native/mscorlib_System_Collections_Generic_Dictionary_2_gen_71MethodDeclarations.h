#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t8513;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9251;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t8516;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t8520;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t8511;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t9678;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t9679;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t9680;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_134.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__67.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m61923_gshared (Dictionary_2_t8513 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m61923(__this, method) (( void (*) (Dictionary_2_t8513 *, const MethodInfo*))Dictionary_2__ctor_m61923_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61925_gshared (Dictionary_2_t8513 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61925(__this, ___comparer, method) (( void (*) (Dictionary_2_t8513 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61925_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m61927_gshared (Dictionary_2_t8513 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m61927(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8513 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61927_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m61929_gshared (Dictionary_2_t8513 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m61929(__this, ___capacity, method) (( void (*) (Dictionary_2_t8513 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m61929_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61931_gshared (Dictionary_2_t8513 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61931(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8513 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61931_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m61933_gshared (Dictionary_2_t8513 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m61933(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8513 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m61933_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61935_gshared (Dictionary_2_t8513 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61935(__this, method) (( Object_t* (*) (Dictionary_2_t8513 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61935_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61937_gshared (Dictionary_2_t8513 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61937(__this, method) (( Object_t* (*) (Dictionary_2_t8513 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61937_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m61939_gshared (Dictionary_2_t8513 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m61939(__this, method) (( Object_t * (*) (Dictionary_2_t8513 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m61939_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m61941_gshared (Dictionary_2_t8513 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m61941(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8513 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m61941_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m61943_gshared (Dictionary_2_t8513 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m61943(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8513 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m61943_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m61945_gshared (Dictionary_2_t8513 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m61945(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8513 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m61945_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m61947_gshared (Dictionary_2_t8513 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m61947(__this, ___key, method) (( bool (*) (Dictionary_2_t8513 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m61947_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m61949_gshared (Dictionary_2_t8513 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m61949(__this, ___key, method) (( void (*) (Dictionary_2_t8513 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m61949_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61951_gshared (Dictionary_2_t8513 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61951(__this, method) (( bool (*) (Dictionary_2_t8513 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61951_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61953_gshared (Dictionary_2_t8513 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61953(__this, method) (( Object_t * (*) (Dictionary_2_t8513 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61953_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61955_gshared (Dictionary_2_t8513 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61955(__this, method) (( bool (*) (Dictionary_2_t8513 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61955_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61957_gshared (Dictionary_2_t8513 * __this, KeyValuePair_2_t8514  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61957(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8513 *, KeyValuePair_2_t8514 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61957_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61959_gshared (Dictionary_2_t8513 * __this, KeyValuePair_2_t8514  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61959(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8513 *, KeyValuePair_2_t8514 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61959_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61961_gshared (Dictionary_2_t8513 * __this, KeyValuePair_2U5BU5D_t9679* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61961(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8513 *, KeyValuePair_2U5BU5D_t9679*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61961_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61963_gshared (Dictionary_2_t8513 * __this, KeyValuePair_2_t8514  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61963(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8513 *, KeyValuePair_2_t8514 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61963_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m61965_gshared (Dictionary_2_t8513 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m61965(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8513 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m61965_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61967_gshared (Dictionary_2_t8513 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61967(__this, method) (( Object_t * (*) (Dictionary_2_t8513 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61967_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61969_gshared (Dictionary_2_t8513 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61969(__this, method) (( Object_t* (*) (Dictionary_2_t8513 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61969_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61971_gshared (Dictionary_2_t8513 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61971(__this, method) (( Object_t * (*) (Dictionary_2_t8513 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61971_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m61973_gshared (Dictionary_2_t8513 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m61973(__this, method) (( int32_t (*) (Dictionary_2_t8513 *, const MethodInfo*))Dictionary_2_get_Count_m61973_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m61975_gshared (Dictionary_2_t8513 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m61975(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8513 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m61975_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m61977_gshared (Dictionary_2_t8513 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m61977(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8513 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m61977_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m61979_gshared (Dictionary_2_t8513 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m61979(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8513 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m61979_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m61981_gshared (Dictionary_2_t8513 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m61981(__this, ___size, method) (( void (*) (Dictionary_2_t8513 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m61981_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m61983_gshared (Dictionary_2_t8513 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m61983(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8513 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m61983_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8514  Dictionary_2_make_pair_m61985_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m61985(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8514  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m61985_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m61987_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m61987(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m61987_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m61989_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m61989(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m61989_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m61991_gshared (Dictionary_2_t8513 * __this, KeyValuePair_2U5BU5D_t9679* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m61991(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8513 *, KeyValuePair_2U5BU5D_t9679*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m61991_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m61993_gshared (Dictionary_2_t8513 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m61993(__this, method) (( void (*) (Dictionary_2_t8513 *, const MethodInfo*))Dictionary_2_Resize_m61993_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m61995_gshared (Dictionary_2_t8513 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m61995(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8513 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m61995_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m61997_gshared (Dictionary_2_t8513 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m61997(__this, method) (( void (*) (Dictionary_2_t8513 *, const MethodInfo*))Dictionary_2_Clear_m61997_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m61999_gshared (Dictionary_2_t8513 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m61999(__this, ___key, method) (( bool (*) (Dictionary_2_t8513 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m61999_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m62001_gshared (Dictionary_2_t8513 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m62001(__this, ___value, method) (( bool (*) (Dictionary_2_t8513 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m62001_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m62003_gshared (Dictionary_2_t8513 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m62003(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8513 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m62003_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m62005_gshared (Dictionary_2_t8513 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m62005(__this, ___sender, method) (( void (*) (Dictionary_2_t8513 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m62005_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m62007_gshared (Dictionary_2_t8513 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m62007(__this, ___key, method) (( bool (*) (Dictionary_2_t8513 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m62007_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m62009_gshared (Dictionary_2_t8513 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m62009(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8513 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m62009_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t8516 * Dictionary_2_get_Keys_m62011_gshared (Dictionary_2_t8513 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m62011(__this, method) (( KeyCollection_t8516 * (*) (Dictionary_2_t8513 *, const MethodInfo*))Dictionary_2_get_Keys_m62011_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t8520 * Dictionary_2_get_Values_m62013_gshared (Dictionary_2_t8513 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m62013(__this, method) (( ValueCollection_t8520 * (*) (Dictionary_2_t8513 *, const MethodInfo*))Dictionary_2_get_Values_m62013_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m62015_gshared (Dictionary_2_t8513 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m62015(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t8513 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m62015_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m62017_gshared (Dictionary_2_t8513 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m62017(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t8513 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m62017_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m62019_gshared (Dictionary_2_t8513 * __this, KeyValuePair_2_t8514  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m62019(__this, ___pair, method) (( bool (*) (Dictionary_2_t8513 *, KeyValuePair_2_t8514 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m62019_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t8518  Dictionary_2_GetEnumerator_m62021_gshared (Dictionary_2_t8513 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m62021(__this, method) (( Enumerator_t8518  (*) (Dictionary_2_t8513 *, const MethodInfo*))Dictionary_2_GetEnumerator_m62021_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__0_m62023_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m62023(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m62023_gshared)(__this /* static, unused */, ___key, ___value, method)
