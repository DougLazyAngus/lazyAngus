#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6759;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9707;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9765;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>
struct KeyCollection_t6760;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>
struct ValueCollection_t6764;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6575;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>
struct IDictionary_2_t6754;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>[]
struct KeyValuePair_2U5BU5D_t9766;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
struct IEnumerator_1_t9767;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__40.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m37954_gshared (Dictionary_2_t6759 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m37954(__this, method) (( void (*) (Dictionary_2_t6759 *, const MethodInfo*))Dictionary_2__ctor_m37954_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m37955_gshared (Dictionary_2_t6759 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m37955(__this, ___comparer, method) (( void (*) (Dictionary_2_t6759 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m37955_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m37956_gshared (Dictionary_2_t6759 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m37956(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6759 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m37956_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m37957_gshared (Dictionary_2_t6759 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m37957(__this, ___capacity, method) (( void (*) (Dictionary_2_t6759 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m37957_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m37958_gshared (Dictionary_2_t6759 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m37958(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6759 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m37958_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m37959_gshared (Dictionary_2_t6759 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m37959(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6759 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m37959_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m37960_gshared (Dictionary_2_t6759 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m37960(__this, method) (( Object_t* (*) (Dictionary_2_t6759 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m37960_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m37961_gshared (Dictionary_2_t6759 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m37961(__this, method) (( Object_t* (*) (Dictionary_2_t6759 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m37961_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m37962_gshared (Dictionary_2_t6759 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m37962(__this, method) (( Object_t * (*) (Dictionary_2_t6759 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m37962_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m37963_gshared (Dictionary_2_t6759 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m37963(__this, method) (( Object_t * (*) (Dictionary_2_t6759 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m37963_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m37964_gshared (Dictionary_2_t6759 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m37964(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6759 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m37964_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m37965_gshared (Dictionary_2_t6759 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m37965(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6759 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m37965_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m37966_gshared (Dictionary_2_t6759 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m37966(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6759 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m37966_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m37967_gshared (Dictionary_2_t6759 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m37967(__this, ___key, method) (( bool (*) (Dictionary_2_t6759 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m37967_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m37968_gshared (Dictionary_2_t6759 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m37968(__this, ___key, method) (( void (*) (Dictionary_2_t6759 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m37968_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m37969_gshared (Dictionary_2_t6759 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m37969(__this, method) (( bool (*) (Dictionary_2_t6759 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m37969_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m37970_gshared (Dictionary_2_t6759 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m37970(__this, method) (( Object_t * (*) (Dictionary_2_t6759 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m37970_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m37971_gshared (Dictionary_2_t6759 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m37971(__this, method) (( bool (*) (Dictionary_2_t6759 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m37971_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m37972_gshared (Dictionary_2_t6759 * __this, KeyValuePair_2_t6756  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m37972(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6759 *, KeyValuePair_2_t6756 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m37972_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m37973_gshared (Dictionary_2_t6759 * __this, KeyValuePair_2_t6756  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m37973(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6759 *, KeyValuePair_2_t6756 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m37973_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m37974_gshared (Dictionary_2_t6759 * __this, KeyValuePair_2U5BU5D_t9766* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m37974(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6759 *, KeyValuePair_2U5BU5D_t9766*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m37974_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m37975_gshared (Dictionary_2_t6759 * __this, KeyValuePair_2_t6756  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m37975(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6759 *, KeyValuePair_2_t6756 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m37975_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m37976_gshared (Dictionary_2_t6759 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m37976(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6759 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m37976_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m37977_gshared (Dictionary_2_t6759 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m37977(__this, method) (( Object_t * (*) (Dictionary_2_t6759 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m37977_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m37978_gshared (Dictionary_2_t6759 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m37978(__this, method) (( Object_t* (*) (Dictionary_2_t6759 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m37978_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m37979_gshared (Dictionary_2_t6759 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m37979(__this, method) (( Object_t * (*) (Dictionary_2_t6759 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m37979_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m37980_gshared (Dictionary_2_t6759 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m37980(__this, method) (( int32_t (*) (Dictionary_2_t6759 *, const MethodInfo*))Dictionary_2_get_Count_m37980_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m37981_gshared (Dictionary_2_t6759 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m37981(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6759 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m37981_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m37982_gshared (Dictionary_2_t6759 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m37982(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6759 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m37982_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m37983_gshared (Dictionary_2_t6759 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m37983(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6759 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m37983_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m37984_gshared (Dictionary_2_t6759 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m37984(__this, ___size, method) (( void (*) (Dictionary_2_t6759 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m37984_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m37985_gshared (Dictionary_2_t6759 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m37985(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6759 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m37985_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6756  Dictionary_2_make_pair_m37986_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m37986(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6756  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m37986_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m37987_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m37987(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m37987_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m37988_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m37988(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m37988_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m37989_gshared (Dictionary_2_t6759 * __this, KeyValuePair_2U5BU5D_t9766* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m37989(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6759 *, KeyValuePair_2U5BU5D_t9766*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m37989_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m37990_gshared (Dictionary_2_t6759 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m37990(__this, method) (( void (*) (Dictionary_2_t6759 *, const MethodInfo*))Dictionary_2_Resize_m37990_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m37991_gshared (Dictionary_2_t6759 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m37991(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6759 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_Add_m37991_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m37992_gshared (Dictionary_2_t6759 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m37992(__this, method) (( void (*) (Dictionary_2_t6759 *, const MethodInfo*))Dictionary_2_Clear_m37992_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m37993_gshared (Dictionary_2_t6759 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m37993(__this, ___key, method) (( bool (*) (Dictionary_2_t6759 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m37993_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m37994_gshared (Dictionary_2_t6759 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m37994(__this, ___value, method) (( bool (*) (Dictionary_2_t6759 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m37994_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m37995_gshared (Dictionary_2_t6759 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m37995(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6759 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m37995_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m37996_gshared (Dictionary_2_t6759 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m37996(__this, ___sender, method) (( void (*) (Dictionary_2_t6759 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m37996_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m37997_gshared (Dictionary_2_t6759 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m37997(__this, ___key, method) (( bool (*) (Dictionary_2_t6759 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m37997_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m37998_gshared (Dictionary_2_t6759 * __this, int64_t ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m37998(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6759 *, int64_t, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m37998_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Keys()
extern "C" KeyCollection_t6760 * Dictionary_2_get_Keys_m37999_gshared (Dictionary_2_t6759 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m37999(__this, method) (( KeyCollection_t6760 * (*) (Dictionary_2_t6759 *, const MethodInfo*))Dictionary_2_get_Keys_m37999_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Values()
extern "C" ValueCollection_t6764 * Dictionary_2_get_Values_m38000_gshared (Dictionary_2_t6759 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m38000(__this, method) (( ValueCollection_t6764 * (*) (Dictionary_2_t6759 *, const MethodInfo*))Dictionary_2_get_Values_m38000_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m38001_gshared (Dictionary_2_t6759 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m38001(__this, ___key, method) (( int64_t (*) (Dictionary_2_t6759 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m38001_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m38002_gshared (Dictionary_2_t6759 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m38002(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6759 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m38002_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m38003_gshared (Dictionary_2_t6759 * __this, KeyValuePair_2_t6756  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m38003(__this, ___pair, method) (( bool (*) (Dictionary_2_t6759 *, KeyValuePair_2_t6756 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m38003_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6762  Dictionary_2_GetEnumerator_m38004_gshared (Dictionary_2_t6759 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m38004(__this, method) (( Enumerator_t6762  (*) (Dictionary_2_t6759 *, const MethodInfo*))Dictionary_2_GetEnumerator_m38004_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__2_m38005_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m38005(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m38005_gshared)(__this /* static, unused */, ___key, ___value, method)
