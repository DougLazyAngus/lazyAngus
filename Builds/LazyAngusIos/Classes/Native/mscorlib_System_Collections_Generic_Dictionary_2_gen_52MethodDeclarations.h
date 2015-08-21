#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6012;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9080;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1221;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t6013;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_t6017;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6010;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Object>
struct IDictionary_2_t6004;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t9081;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct IEnumerator_1_t9082;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__35.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m31178_gshared (Dictionary_2_t6012 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m31178(__this, method) (( void (*) (Dictionary_2_t6012 *, const MethodInfo*))Dictionary_2__ctor_m31178_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31179_gshared (Dictionary_2_t6012 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m31179(__this, ___comparer, method) (( void (*) (Dictionary_2_t6012 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31179_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m31180_gshared (Dictionary_2_t6012 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m31180(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6012 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31180_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m31181_gshared (Dictionary_2_t6012 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m31181(__this, ___capacity, method) (( void (*) (Dictionary_2_t6012 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m31181_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31182_gshared (Dictionary_2_t6012 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m31182(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6012 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31182_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m31183_gshared (Dictionary_2_t6012 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m31183(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6012 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m31183_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31184_gshared (Dictionary_2_t6012 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31184(__this, method) (( Object_t* (*) (Dictionary_2_t6012 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31184_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31185_gshared (Dictionary_2_t6012 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31185(__this, method) (( Object_t* (*) (Dictionary_2_t6012 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31185_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m31186_gshared (Dictionary_2_t6012 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m31186(__this, method) (( Object_t * (*) (Dictionary_2_t6012 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m31186_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m31187_gshared (Dictionary_2_t6012 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m31187(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6012 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m31187_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m31188_gshared (Dictionary_2_t6012 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m31188(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6012 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m31188_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m31189_gshared (Dictionary_2_t6012 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m31189(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6012 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m31189_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m31190_gshared (Dictionary_2_t6012 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m31190(__this, ___key, method) (( bool (*) (Dictionary_2_t6012 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m31190_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m31191_gshared (Dictionary_2_t6012 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m31191(__this, ___key, method) (( void (*) (Dictionary_2_t6012 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m31191_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31192_gshared (Dictionary_2_t6012 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31192(__this, method) (( bool (*) (Dictionary_2_t6012 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31192_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31193_gshared (Dictionary_2_t6012 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31193(__this, method) (( Object_t * (*) (Dictionary_2_t6012 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31193_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31194_gshared (Dictionary_2_t6012 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31194(__this, method) (( bool (*) (Dictionary_2_t6012 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31194_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31195_gshared (Dictionary_2_t6012 * __this, KeyValuePair_2_t6007  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31195(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6012 *, KeyValuePair_2_t6007 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31195_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31196_gshared (Dictionary_2_t6012 * __this, KeyValuePair_2_t6007  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31196(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6012 *, KeyValuePair_2_t6007 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31196_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31197_gshared (Dictionary_2_t6012 * __this, KeyValuePair_2U5BU5D_t9081* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31197(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6012 *, KeyValuePair_2U5BU5D_t9081*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31197_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31198_gshared (Dictionary_2_t6012 * __this, KeyValuePair_2_t6007  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31198(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6012 *, KeyValuePair_2_t6007 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31198_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m31199_gshared (Dictionary_2_t6012 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m31199(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6012 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m31199_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31200_gshared (Dictionary_2_t6012 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31200(__this, method) (( Object_t * (*) (Dictionary_2_t6012 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31200_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31201_gshared (Dictionary_2_t6012 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31201(__this, method) (( Object_t* (*) (Dictionary_2_t6012 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31201_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31202_gshared (Dictionary_2_t6012 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31202(__this, method) (( Object_t * (*) (Dictionary_2_t6012 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31202_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m31203_gshared (Dictionary_2_t6012 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m31203(__this, method) (( int32_t (*) (Dictionary_2_t6012 *, const MethodInfo*))Dictionary_2_get_Count_m31203_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m31204_gshared (Dictionary_2_t6012 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m31204(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6012 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m31204_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m31205_gshared (Dictionary_2_t6012 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m31205(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6012 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m31205_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m31206_gshared (Dictionary_2_t6012 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m31206(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6012 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m31206_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m31207_gshared (Dictionary_2_t6012 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m31207(__this, ___size, method) (( void (*) (Dictionary_2_t6012 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m31207_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m31208_gshared (Dictionary_2_t6012 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m31208(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6012 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m31208_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6007  Dictionary_2_make_pair_m31209_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m31209(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6007  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m31209_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m31210_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m31210(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m31210_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m31211_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m31211(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m31211_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m31212_gshared (Dictionary_2_t6012 * __this, KeyValuePair_2U5BU5D_t9081* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m31212(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6012 *, KeyValuePair_2U5BU5D_t9081*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m31212_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m31213_gshared (Dictionary_2_t6012 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m31213(__this, method) (( void (*) (Dictionary_2_t6012 *, const MethodInfo*))Dictionary_2_Resize_m31213_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m31214_gshared (Dictionary_2_t6012 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m31214(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6012 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m31214_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m31215_gshared (Dictionary_2_t6012 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m31215(__this, method) (( void (*) (Dictionary_2_t6012 *, const MethodInfo*))Dictionary_2_Clear_m31215_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m31216_gshared (Dictionary_2_t6012 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m31216(__this, ___key, method) (( bool (*) (Dictionary_2_t6012 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m31216_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m31217_gshared (Dictionary_2_t6012 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m31217(__this, ___value, method) (( bool (*) (Dictionary_2_t6012 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m31217_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m31218_gshared (Dictionary_2_t6012 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m31218(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6012 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m31218_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m31219_gshared (Dictionary_2_t6012 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m31219(__this, ___sender, method) (( void (*) (Dictionary_2_t6012 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m31219_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m31220_gshared (Dictionary_2_t6012 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m31220(__this, ___key, method) (( bool (*) (Dictionary_2_t6012 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m31220_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m31221_gshared (Dictionary_2_t6012 * __this, int64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m31221(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6012 *, int64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m31221_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Keys()
extern "C" KeyCollection_t6013 * Dictionary_2_get_Keys_m31222_gshared (Dictionary_2_t6012 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m31222(__this, method) (( KeyCollection_t6013 * (*) (Dictionary_2_t6012 *, const MethodInfo*))Dictionary_2_get_Keys_m31222_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Values()
extern "C" ValueCollection_t6017 * Dictionary_2_get_Values_m31223_gshared (Dictionary_2_t6012 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m31223(__this, method) (( ValueCollection_t6017 * (*) (Dictionary_2_t6012 *, const MethodInfo*))Dictionary_2_get_Values_m31223_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m31224_gshared (Dictionary_2_t6012 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m31224(__this, ___key, method) (( int64_t (*) (Dictionary_2_t6012 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m31224_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m31225_gshared (Dictionary_2_t6012 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m31225(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t6012 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m31225_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m31226_gshared (Dictionary_2_t6012 * __this, KeyValuePair_2_t6007  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m31226(__this, ___pair, method) (( bool (*) (Dictionary_2_t6012 *, KeyValuePair_2_t6007 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m31226_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t6015  Dictionary_2_GetEnumerator_m31227_gshared (Dictionary_2_t6012 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m31227(__this, method) (( Enumerator_t6015  (*) (Dictionary_2_t6012 *, const MethodInfo*))Dictionary_2_GetEnumerator_m31227_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2137  Dictionary_2_U3CCopyToU3Em__0_m31228_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m31228(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m31228_gshared)(__this /* static, unused */, ___key, ___value, method)
