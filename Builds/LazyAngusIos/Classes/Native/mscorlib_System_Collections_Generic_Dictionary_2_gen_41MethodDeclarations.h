#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4028;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1238;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t4585;
// System.Collections.ICollection
struct ICollection_t592;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t4031;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t4035;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3337;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t4586;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1247;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t4587;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t4588;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1443;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_42.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__37.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m27291_gshared (Dictionary_2_t4028 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m27291(__this, method) (( void (*) (Dictionary_2_t4028 *, const MethodInfo*))Dictionary_2__ctor_m27291_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27292_gshared (Dictionary_2_t4028 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27292(__this, ___comparer, method) (( void (*) (Dictionary_2_t4028 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27292_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m27294_gshared (Dictionary_2_t4028 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m27294(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4028 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27294_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m27296_gshared (Dictionary_2_t4028 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m27296(__this, ___capacity, method) (( void (*) (Dictionary_2_t4028 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m27296_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27298_gshared (Dictionary_2_t4028 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27298(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4028 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27298_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m27300_gshared (Dictionary_2_t4028 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m27300(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4028 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2__ctor_m27300_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27302_gshared (Dictionary_2_t4028 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27302(__this, method) (( Object_t* (*) (Dictionary_2_t4028 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27302_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27304_gshared (Dictionary_2_t4028 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27304(__this, method) (( Object_t* (*) (Dictionary_2_t4028 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27304_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m27306_gshared (Dictionary_2_t4028 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m27306(__this, method) (( Object_t * (*) (Dictionary_2_t4028 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m27306_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m27308_gshared (Dictionary_2_t4028 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m27308(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4028 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m27308_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m27310_gshared (Dictionary_2_t4028 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m27310(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4028 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m27310_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m27312_gshared (Dictionary_2_t4028 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m27312(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4028 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m27312_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m27314_gshared (Dictionary_2_t4028 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m27314(__this, ___key, method) (( bool (*) (Dictionary_2_t4028 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m27314_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m27316_gshared (Dictionary_2_t4028 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m27316(__this, ___key, method) (( void (*) (Dictionary_2_t4028 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m27316_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27318_gshared (Dictionary_2_t4028 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27318(__this, method) (( bool (*) (Dictionary_2_t4028 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27318_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27320_gshared (Dictionary_2_t4028 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27320(__this, method) (( Object_t * (*) (Dictionary_2_t4028 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27320_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27322_gshared (Dictionary_2_t4028 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27322(__this, method) (( bool (*) (Dictionary_2_t4028 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27322_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27324_gshared (Dictionary_2_t4028 * __this, KeyValuePair_2_t4029  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27324(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4028 *, KeyValuePair_2_t4029 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27324_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27326_gshared (Dictionary_2_t4028 * __this, KeyValuePair_2_t4029  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27326(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4028 *, KeyValuePair_2_t4029 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27326_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27328_gshared (Dictionary_2_t4028 * __this, KeyValuePair_2U5BU5D_t4587* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27328(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4028 *, KeyValuePair_2U5BU5D_t4587*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27328_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27330_gshared (Dictionary_2_t4028 * __this, KeyValuePair_2_t4029  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27330(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4028 *, KeyValuePair_2_t4029 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27330_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m27332_gshared (Dictionary_2_t4028 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m27332(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4028 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m27332_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27334_gshared (Dictionary_2_t4028 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27334(__this, method) (( Object_t * (*) (Dictionary_2_t4028 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27334_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27336_gshared (Dictionary_2_t4028 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27336(__this, method) (( Object_t* (*) (Dictionary_2_t4028 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27336_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27338_gshared (Dictionary_2_t4028 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27338(__this, method) (( Object_t * (*) (Dictionary_2_t4028 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27338_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m27340_gshared (Dictionary_2_t4028 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m27340(__this, method) (( int32_t (*) (Dictionary_2_t4028 *, const MethodInfo*))Dictionary_2_get_Count_m27340_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m27342_gshared (Dictionary_2_t4028 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m27342(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t4028 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m27342_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m27344_gshared (Dictionary_2_t4028 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m27344(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4028 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m27344_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m27346_gshared (Dictionary_2_t4028 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m27346(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4028 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m27346_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m27348_gshared (Dictionary_2_t4028 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m27348(__this, ___size, method) (( void (*) (Dictionary_2_t4028 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m27348_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m27350_gshared (Dictionary_2_t4028 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m27350(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4028 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m27350_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4029  Dictionary_2_make_pair_m27352_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m27352(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4029  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m27352_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m27354_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m27354(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m27354_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m27356_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m27356(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m27356_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m27358_gshared (Dictionary_2_t4028 * __this, KeyValuePair_2U5BU5D_t4587* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m27358(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4028 *, KeyValuePair_2U5BU5D_t4587*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m27358_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m27360_gshared (Dictionary_2_t4028 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m27360(__this, method) (( void (*) (Dictionary_2_t4028 *, const MethodInfo*))Dictionary_2_Resize_m27360_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m27362_gshared (Dictionary_2_t4028 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m27362(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4028 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m27362_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m27364_gshared (Dictionary_2_t4028 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m27364(__this, method) (( void (*) (Dictionary_2_t4028 *, const MethodInfo*))Dictionary_2_Clear_m27364_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m27366_gshared (Dictionary_2_t4028 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m27366(__this, ___key, method) (( bool (*) (Dictionary_2_t4028 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m27366_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m27368_gshared (Dictionary_2_t4028 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m27368(__this, ___value, method) (( bool (*) (Dictionary_2_t4028 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m27368_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m27370_gshared (Dictionary_2_t4028 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m27370(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4028 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2_GetObjectData_m27370_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m27372_gshared (Dictionary_2_t4028 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m27372(__this, ___sender, method) (( void (*) (Dictionary_2_t4028 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m27372_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m27374_gshared (Dictionary_2_t4028 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m27374(__this, ___key, method) (( bool (*) (Dictionary_2_t4028 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m27374_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m27376_gshared (Dictionary_2_t4028 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m27376(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4028 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m27376_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t4031 * Dictionary_2_get_Keys_m27378_gshared (Dictionary_2_t4028 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m27378(__this, method) (( KeyCollection_t4031 * (*) (Dictionary_2_t4028 *, const MethodInfo*))Dictionary_2_get_Keys_m27378_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t4035 * Dictionary_2_get_Values_m27380_gshared (Dictionary_2_t4028 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m27380(__this, method) (( ValueCollection_t4035 * (*) (Dictionary_2_t4028 *, const MethodInfo*))Dictionary_2_get_Values_m27380_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m27382_gshared (Dictionary_2_t4028 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m27382(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4028 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m27382_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m27384_gshared (Dictionary_2_t4028 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m27384(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t4028 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m27384_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m27386_gshared (Dictionary_2_t4028 * __this, KeyValuePair_2_t4029  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m27386(__this, ___pair, method) (( bool (*) (Dictionary_2_t4028 *, KeyValuePair_2_t4029 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m27386_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t4033  Dictionary_2_GetEnumerator_m27388_gshared (Dictionary_2_t4028 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m27388(__this, method) (( Enumerator_t4033  (*) (Dictionary_2_t4028 *, const MethodInfo*))Dictionary_2_GetEnumerator_m27388_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1710  Dictionary_2_U3CCopyToU3Em__0_m27390_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m27390(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1710  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m27390_gshared)(__this /* static, unused */, ___key, ___value, method)
