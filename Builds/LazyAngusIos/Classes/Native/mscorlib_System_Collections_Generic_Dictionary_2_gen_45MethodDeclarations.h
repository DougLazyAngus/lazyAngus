#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4130;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1291;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t4693;
// System.Collections.ICollection
struct ICollection_t652;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t4133;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t4137;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3390;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t4694;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1300;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t4695;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t4696;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1942;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__41.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m28644_gshared (Dictionary_2_t4130 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m28644(__this, method) (( void (*) (Dictionary_2_t4130 *, const MethodInfo*))Dictionary_2__ctor_m28644_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m28645_gshared (Dictionary_2_t4130 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m28645(__this, ___comparer, method) (( void (*) (Dictionary_2_t4130 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28645_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m28647_gshared (Dictionary_2_t4130 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m28647(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4130 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28647_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m28649_gshared (Dictionary_2_t4130 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m28649(__this, ___capacity, method) (( void (*) (Dictionary_2_t4130 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m28649_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m28651_gshared (Dictionary_2_t4130 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m28651(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4130 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m28651_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m28653_gshared (Dictionary_2_t4130 * __this, SerializationInfo_t1300 * ___info, StreamingContext_t1301  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m28653(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4130 *, SerializationInfo_t1300 *, StreamingContext_t1301 , const MethodInfo*))Dictionary_2__ctor_m28653_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28655_gshared (Dictionary_2_t4130 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28655(__this, method) (( Object_t* (*) (Dictionary_2_t4130 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28655_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28657_gshared (Dictionary_2_t4130 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28657(__this, method) (( Object_t* (*) (Dictionary_2_t4130 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28657_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m28659_gshared (Dictionary_2_t4130 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m28659(__this, method) (( Object_t * (*) (Dictionary_2_t4130 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m28659_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m28661_gshared (Dictionary_2_t4130 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m28661(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4130 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m28661_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m28663_gshared (Dictionary_2_t4130 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m28663(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4130 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m28663_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m28665_gshared (Dictionary_2_t4130 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m28665(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4130 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m28665_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m28667_gshared (Dictionary_2_t4130 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m28667(__this, ___key, method) (( bool (*) (Dictionary_2_t4130 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m28667_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m28669_gshared (Dictionary_2_t4130 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m28669(__this, ___key, method) (( void (*) (Dictionary_2_t4130 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m28669_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28671_gshared (Dictionary_2_t4130 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28671(__this, method) (( bool (*) (Dictionary_2_t4130 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28671_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28673_gshared (Dictionary_2_t4130 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28673(__this, method) (( Object_t * (*) (Dictionary_2_t4130 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28673_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28675_gshared (Dictionary_2_t4130 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28675(__this, method) (( bool (*) (Dictionary_2_t4130 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28675_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28677_gshared (Dictionary_2_t4130 * __this, KeyValuePair_2_t4131  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28677(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4130 *, KeyValuePair_2_t4131 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28677_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28679_gshared (Dictionary_2_t4130 * __this, KeyValuePair_2_t4131  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28679(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4130 *, KeyValuePair_2_t4131 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28679_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28681_gshared (Dictionary_2_t4130 * __this, KeyValuePair_2U5BU5D_t4695* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28681(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4130 *, KeyValuePair_2U5BU5D_t4695*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28681_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28683_gshared (Dictionary_2_t4130 * __this, KeyValuePair_2_t4131  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28683(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4130 *, KeyValuePair_2_t4131 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28683_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m28685_gshared (Dictionary_2_t4130 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m28685(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4130 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m28685_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28687_gshared (Dictionary_2_t4130 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28687(__this, method) (( Object_t * (*) (Dictionary_2_t4130 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28687_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28689_gshared (Dictionary_2_t4130 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28689(__this, method) (( Object_t* (*) (Dictionary_2_t4130 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28689_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28691_gshared (Dictionary_2_t4130 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28691(__this, method) (( Object_t * (*) (Dictionary_2_t4130 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28691_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m28693_gshared (Dictionary_2_t4130 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m28693(__this, method) (( int32_t (*) (Dictionary_2_t4130 *, const MethodInfo*))Dictionary_2_get_Count_m28693_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m28695_gshared (Dictionary_2_t4130 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m28695(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t4130 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m28695_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m28697_gshared (Dictionary_2_t4130 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m28697(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4130 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m28697_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m28699_gshared (Dictionary_2_t4130 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m28699(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4130 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m28699_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m28701_gshared (Dictionary_2_t4130 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m28701(__this, ___size, method) (( void (*) (Dictionary_2_t4130 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m28701_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m28703_gshared (Dictionary_2_t4130 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m28703(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4130 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m28703_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4131  Dictionary_2_make_pair_m28705_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m28705(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4131  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m28705_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m28707_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m28707(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m28707_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m28709_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m28709(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m28709_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m28711_gshared (Dictionary_2_t4130 * __this, KeyValuePair_2U5BU5D_t4695* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m28711(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4130 *, KeyValuePair_2U5BU5D_t4695*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m28711_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m28713_gshared (Dictionary_2_t4130 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m28713(__this, method) (( void (*) (Dictionary_2_t4130 *, const MethodInfo*))Dictionary_2_Resize_m28713_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m28715_gshared (Dictionary_2_t4130 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m28715(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4130 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m28715_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m28717_gshared (Dictionary_2_t4130 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m28717(__this, method) (( void (*) (Dictionary_2_t4130 *, const MethodInfo*))Dictionary_2_Clear_m28717_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m28719_gshared (Dictionary_2_t4130 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m28719(__this, ___key, method) (( bool (*) (Dictionary_2_t4130 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m28719_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m28721_gshared (Dictionary_2_t4130 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m28721(__this, ___value, method) (( bool (*) (Dictionary_2_t4130 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m28721_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m28723_gshared (Dictionary_2_t4130 * __this, SerializationInfo_t1300 * ___info, StreamingContext_t1301  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m28723(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4130 *, SerializationInfo_t1300 *, StreamingContext_t1301 , const MethodInfo*))Dictionary_2_GetObjectData_m28723_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m28725_gshared (Dictionary_2_t4130 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m28725(__this, ___sender, method) (( void (*) (Dictionary_2_t4130 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m28725_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m28727_gshared (Dictionary_2_t4130 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m28727(__this, ___key, method) (( bool (*) (Dictionary_2_t4130 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m28727_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m28729_gshared (Dictionary_2_t4130 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m28729(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4130 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m28729_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t4133 * Dictionary_2_get_Keys_m28731_gshared (Dictionary_2_t4130 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m28731(__this, method) (( KeyCollection_t4133 * (*) (Dictionary_2_t4130 *, const MethodInfo*))Dictionary_2_get_Keys_m28731_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t4137 * Dictionary_2_get_Values_m28733_gshared (Dictionary_2_t4130 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m28733(__this, method) (( ValueCollection_t4137 * (*) (Dictionary_2_t4130 *, const MethodInfo*))Dictionary_2_get_Values_m28733_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m28735_gshared (Dictionary_2_t4130 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m28735(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4130 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m28735_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m28737_gshared (Dictionary_2_t4130 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m28737(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t4130 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m28737_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m28739_gshared (Dictionary_2_t4130 * __this, KeyValuePair_2_t4131  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m28739(__this, ___pair, method) (( bool (*) (Dictionary_2_t4130 *, KeyValuePair_2_t4131 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m28739_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t4135  Dictionary_2_GetEnumerator_m28741_gshared (Dictionary_2_t4130 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m28741(__this, method) (( Enumerator_t4135  (*) (Dictionary_2_t4130 *, const MethodInfo*))Dictionary_2_GetEnumerator_m28741_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2180  Dictionary_2_U3CCopyToU3Em__0_m28743_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m28743(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2180  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m28743_gshared)(__this /* static, unused */, ___key, ___value, method)
