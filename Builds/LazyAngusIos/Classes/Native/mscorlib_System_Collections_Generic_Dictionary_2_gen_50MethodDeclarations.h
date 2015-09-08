#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4477;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9330;
// System.Collections.ICollection
struct ICollection_t769;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t9251;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t9255;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5943;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t10371;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2937;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t10372;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t10373;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t799;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_145.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__76.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m18166_gshared (Dictionary_2_t4477 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18166(__this, method) (( void (*) (Dictionary_2_t4477 *, const MethodInfo*))Dictionary_2__ctor_m18166_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m68962_gshared (Dictionary_2_t4477 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m68962(__this, ___comparer, method) (( void (*) (Dictionary_2_t4477 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m68962_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m68963_gshared (Dictionary_2_t4477 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m68963(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4477 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m68963_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m68964_gshared (Dictionary_2_t4477 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m68964(__this, ___capacity, method) (( void (*) (Dictionary_2_t4477 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m68964_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m68965_gshared (Dictionary_2_t4477 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m68965(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4477 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m68965_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m68966_gshared (Dictionary_2_t4477 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m68966(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4477 *, SerializationInfo_t2937 *, StreamingContext_t2938 , const MethodInfo*))Dictionary_2__ctor_m68966_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m68967_gshared (Dictionary_2_t4477 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m68967(__this, method) (( Object_t* (*) (Dictionary_2_t4477 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m68967_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m68968_gshared (Dictionary_2_t4477 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m68968(__this, method) (( Object_t* (*) (Dictionary_2_t4477 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m68968_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m68969_gshared (Dictionary_2_t4477 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m68969(__this, method) (( Object_t * (*) (Dictionary_2_t4477 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m68969_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m68970_gshared (Dictionary_2_t4477 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m68970(__this, method) (( Object_t * (*) (Dictionary_2_t4477 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m68970_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m68971_gshared (Dictionary_2_t4477 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m68971(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4477 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m68971_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m68972_gshared (Dictionary_2_t4477 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m68972(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4477 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m68972_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m68973_gshared (Dictionary_2_t4477 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m68973(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4477 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m68973_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m68974_gshared (Dictionary_2_t4477 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m68974(__this, ___key, method) (( bool (*) (Dictionary_2_t4477 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m68974_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m68975_gshared (Dictionary_2_t4477 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m68975(__this, ___key, method) (( void (*) (Dictionary_2_t4477 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m68975_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m68976_gshared (Dictionary_2_t4477 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m68976(__this, method) (( bool (*) (Dictionary_2_t4477 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m68976_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m68977_gshared (Dictionary_2_t4477 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m68977(__this, method) (( Object_t * (*) (Dictionary_2_t4477 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m68977_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m68978_gshared (Dictionary_2_t4477 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m68978(__this, method) (( bool (*) (Dictionary_2_t4477 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m68978_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m68979_gshared (Dictionary_2_t4477 * __this, KeyValuePair_2_t9249  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m68979(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4477 *, KeyValuePair_2_t9249 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m68979_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m68980_gshared (Dictionary_2_t4477 * __this, KeyValuePair_2_t9249  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m68980(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4477 *, KeyValuePair_2_t9249 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m68980_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m68981_gshared (Dictionary_2_t4477 * __this, KeyValuePair_2U5BU5D_t10372* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m68981(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4477 *, KeyValuePair_2U5BU5D_t10372*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m68981_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m68982_gshared (Dictionary_2_t4477 * __this, KeyValuePair_2_t9249  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m68982(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4477 *, KeyValuePair_2_t9249 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m68982_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m68983_gshared (Dictionary_2_t4477 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m68983(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4477 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m68983_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m68984_gshared (Dictionary_2_t4477 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m68984(__this, method) (( Object_t * (*) (Dictionary_2_t4477 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m68984_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m68985_gshared (Dictionary_2_t4477 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m68985(__this, method) (( Object_t* (*) (Dictionary_2_t4477 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m68985_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m68986_gshared (Dictionary_2_t4477 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m68986(__this, method) (( Object_t * (*) (Dictionary_2_t4477 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m68986_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m68987_gshared (Dictionary_2_t4477 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m68987(__this, method) (( int32_t (*) (Dictionary_2_t4477 *, const MethodInfo*))Dictionary_2_get_Count_m68987_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m68988_gshared (Dictionary_2_t4477 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m68988(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4477 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m68988_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m68989_gshared (Dictionary_2_t4477 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m68989(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4477 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m68989_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m68990_gshared (Dictionary_2_t4477 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m68990(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4477 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m68990_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m68991_gshared (Dictionary_2_t4477 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m68991(__this, ___size, method) (( void (*) (Dictionary_2_t4477 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m68991_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m68992_gshared (Dictionary_2_t4477 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m68992(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4477 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m68992_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t9249  Dictionary_2_make_pair_m68993_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m68993(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t9249  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m68993_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m68994_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m68994(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m68994_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m68995_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m68995(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m68995_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m68996_gshared (Dictionary_2_t4477 * __this, KeyValuePair_2U5BU5D_t10372* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m68996(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4477 *, KeyValuePair_2U5BU5D_t10372*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m68996_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m68997_gshared (Dictionary_2_t4477 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m68997(__this, method) (( void (*) (Dictionary_2_t4477 *, const MethodInfo*))Dictionary_2_Resize_m68997_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m68998_gshared (Dictionary_2_t4477 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m68998(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4477 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m68998_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m68999_gshared (Dictionary_2_t4477 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m68999(__this, method) (( void (*) (Dictionary_2_t4477 *, const MethodInfo*))Dictionary_2_Clear_m68999_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m69000_gshared (Dictionary_2_t4477 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m69000(__this, ___key, method) (( bool (*) (Dictionary_2_t4477 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m69000_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m69001_gshared (Dictionary_2_t4477 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m69001(__this, ___value, method) (( bool (*) (Dictionary_2_t4477 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m69001_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m69002_gshared (Dictionary_2_t4477 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m69002(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4477 *, SerializationInfo_t2937 *, StreamingContext_t2938 , const MethodInfo*))Dictionary_2_GetObjectData_m69002_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m69003_gshared (Dictionary_2_t4477 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m69003(__this, ___sender, method) (( void (*) (Dictionary_2_t4477 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m69003_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m69004_gshared (Dictionary_2_t4477 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m69004(__this, ___key, method) (( bool (*) (Dictionary_2_t4477 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m69004_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m69005_gshared (Dictionary_2_t4477 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m69005(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4477 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m69005_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t9251 * Dictionary_2_get_Keys_m69006_gshared (Dictionary_2_t4477 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m69006(__this, method) (( KeyCollection_t9251 * (*) (Dictionary_2_t4477 *, const MethodInfo*))Dictionary_2_get_Keys_m69006_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t9255 * Dictionary_2_get_Values_m69007_gshared (Dictionary_2_t4477 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m69007(__this, method) (( ValueCollection_t9255 * (*) (Dictionary_2_t4477 *, const MethodInfo*))Dictionary_2_get_Values_m69007_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m69008_gshared (Dictionary_2_t4477 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m69008(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4477 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m69008_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m69009_gshared (Dictionary_2_t4477 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m69009(__this, ___value, method) (( int32_t (*) (Dictionary_2_t4477 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m69009_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m69010_gshared (Dictionary_2_t4477 * __this, KeyValuePair_2_t9249  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m69010(__this, ___pair, method) (( bool (*) (Dictionary_2_t4477 *, KeyValuePair_2_t9249 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m69010_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t9253  Dictionary_2_GetEnumerator_m69011_gshared (Dictionary_2_t4477 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m69011(__this, method) (( Enumerator_t9253  (*) (Dictionary_2_t4477 *, const MethodInfo*))Dictionary_2_GetEnumerator_m69011_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2157  Dictionary_2_U3CCopyToU3Em__2_m69012_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m69012(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2157  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m69012_gshared)(__this /* static, unused */, ___key, ___value, method)
