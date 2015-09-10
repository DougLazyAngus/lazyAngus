#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6772;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9720;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9778;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>
struct KeyCollection_t6773;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>
struct ValueCollection_t6777;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6588;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>
struct IDictionary_2_t6767;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>[]
struct KeyValuePair_2U5BU5D_t9779;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
struct IEnumerator_1_t9780;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__40.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m38036_gshared (Dictionary_2_t6772 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m38036(__this, method) (( void (*) (Dictionary_2_t6772 *, const MethodInfo*))Dictionary_2__ctor_m38036_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m38037_gshared (Dictionary_2_t6772 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m38037(__this, ___comparer, method) (( void (*) (Dictionary_2_t6772 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m38037_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m38038_gshared (Dictionary_2_t6772 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m38038(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6772 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m38038_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m38039_gshared (Dictionary_2_t6772 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m38039(__this, ___capacity, method) (( void (*) (Dictionary_2_t6772 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m38039_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m38040_gshared (Dictionary_2_t6772 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m38040(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6772 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m38040_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m38041_gshared (Dictionary_2_t6772 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m38041(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6772 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m38041_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38042_gshared (Dictionary_2_t6772 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38042(__this, method) (( Object_t* (*) (Dictionary_2_t6772 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38042_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38043_gshared (Dictionary_2_t6772 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38043(__this, method) (( Object_t* (*) (Dictionary_2_t6772 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38043_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m38044_gshared (Dictionary_2_t6772 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m38044(__this, method) (( Object_t * (*) (Dictionary_2_t6772 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m38044_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m38045_gshared (Dictionary_2_t6772 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m38045(__this, method) (( Object_t * (*) (Dictionary_2_t6772 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m38045_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m38046_gshared (Dictionary_2_t6772 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m38046(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6772 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m38046_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m38047_gshared (Dictionary_2_t6772 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m38047(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6772 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m38047_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m38048_gshared (Dictionary_2_t6772 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m38048(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6772 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m38048_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m38049_gshared (Dictionary_2_t6772 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m38049(__this, ___key, method) (( bool (*) (Dictionary_2_t6772 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m38049_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m38050_gshared (Dictionary_2_t6772 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m38050(__this, ___key, method) (( void (*) (Dictionary_2_t6772 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m38050_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38051_gshared (Dictionary_2_t6772 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38051(__this, method) (( bool (*) (Dictionary_2_t6772 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38051_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38052_gshared (Dictionary_2_t6772 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38052(__this, method) (( Object_t * (*) (Dictionary_2_t6772 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38052_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38053_gshared (Dictionary_2_t6772 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38053(__this, method) (( bool (*) (Dictionary_2_t6772 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38053_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38054_gshared (Dictionary_2_t6772 * __this, KeyValuePair_2_t6769  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38054(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6772 *, KeyValuePair_2_t6769 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38054_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38055_gshared (Dictionary_2_t6772 * __this, KeyValuePair_2_t6769  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38055(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6772 *, KeyValuePair_2_t6769 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38055_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38056_gshared (Dictionary_2_t6772 * __this, KeyValuePair_2U5BU5D_t9779* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38056(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6772 *, KeyValuePair_2U5BU5D_t9779*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38056_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38057_gshared (Dictionary_2_t6772 * __this, KeyValuePair_2_t6769  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38057(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6772 *, KeyValuePair_2_t6769 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38057_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m38058_gshared (Dictionary_2_t6772 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m38058(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6772 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m38058_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38059_gshared (Dictionary_2_t6772 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38059(__this, method) (( Object_t * (*) (Dictionary_2_t6772 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38059_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38060_gshared (Dictionary_2_t6772 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38060(__this, method) (( Object_t* (*) (Dictionary_2_t6772 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38060_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38061_gshared (Dictionary_2_t6772 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38061(__this, method) (( Object_t * (*) (Dictionary_2_t6772 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38061_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m38062_gshared (Dictionary_2_t6772 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m38062(__this, method) (( int32_t (*) (Dictionary_2_t6772 *, const MethodInfo*))Dictionary_2_get_Count_m38062_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m38063_gshared (Dictionary_2_t6772 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m38063(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6772 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m38063_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m38064_gshared (Dictionary_2_t6772 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m38064(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6772 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m38064_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m38065_gshared (Dictionary_2_t6772 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m38065(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6772 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m38065_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m38066_gshared (Dictionary_2_t6772 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m38066(__this, ___size, method) (( void (*) (Dictionary_2_t6772 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m38066_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m38067_gshared (Dictionary_2_t6772 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m38067(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6772 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m38067_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6769  Dictionary_2_make_pair_m38068_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m38068(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6769  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m38068_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m38069_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m38069(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m38069_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m38070_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m38070(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m38070_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m38071_gshared (Dictionary_2_t6772 * __this, KeyValuePair_2U5BU5D_t9779* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m38071(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6772 *, KeyValuePair_2U5BU5D_t9779*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m38071_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m38072_gshared (Dictionary_2_t6772 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m38072(__this, method) (( void (*) (Dictionary_2_t6772 *, const MethodInfo*))Dictionary_2_Resize_m38072_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m38073_gshared (Dictionary_2_t6772 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m38073(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6772 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_Add_m38073_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m38074_gshared (Dictionary_2_t6772 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m38074(__this, method) (( void (*) (Dictionary_2_t6772 *, const MethodInfo*))Dictionary_2_Clear_m38074_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m38075_gshared (Dictionary_2_t6772 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m38075(__this, ___key, method) (( bool (*) (Dictionary_2_t6772 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m38075_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m38076_gshared (Dictionary_2_t6772 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m38076(__this, ___value, method) (( bool (*) (Dictionary_2_t6772 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m38076_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m38077_gshared (Dictionary_2_t6772 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m38077(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6772 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m38077_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m38078_gshared (Dictionary_2_t6772 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m38078(__this, ___sender, method) (( void (*) (Dictionary_2_t6772 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m38078_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m38079_gshared (Dictionary_2_t6772 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m38079(__this, ___key, method) (( bool (*) (Dictionary_2_t6772 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m38079_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m38080_gshared (Dictionary_2_t6772 * __this, int64_t ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m38080(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6772 *, int64_t, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m38080_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Keys()
extern "C" KeyCollection_t6773 * Dictionary_2_get_Keys_m38081_gshared (Dictionary_2_t6772 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m38081(__this, method) (( KeyCollection_t6773 * (*) (Dictionary_2_t6772 *, const MethodInfo*))Dictionary_2_get_Keys_m38081_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Values()
extern "C" ValueCollection_t6777 * Dictionary_2_get_Values_m38082_gshared (Dictionary_2_t6772 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m38082(__this, method) (( ValueCollection_t6777 * (*) (Dictionary_2_t6772 *, const MethodInfo*))Dictionary_2_get_Values_m38082_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m38083_gshared (Dictionary_2_t6772 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m38083(__this, ___key, method) (( int64_t (*) (Dictionary_2_t6772 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m38083_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m38084_gshared (Dictionary_2_t6772 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m38084(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6772 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m38084_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m38085_gshared (Dictionary_2_t6772 * __this, KeyValuePair_2_t6769  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m38085(__this, ___pair, method) (( bool (*) (Dictionary_2_t6772 *, KeyValuePair_2_t6769 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m38085_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6775  Dictionary_2_GetEnumerator_m38086_gshared (Dictionary_2_t6772 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m38086(__this, method) (( Enumerator_t6775  (*) (Dictionary_2_t6772 *, const MethodInfo*))Dictionary_2_GetEnumerator_m38086_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2167  Dictionary_2_U3CCopyToU3Em__2_m38087_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m38087(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m38087_gshared)(__this /* static, unused */, ___key, ___value, method)
