#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6209;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1221;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9138;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t6210;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t6214;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1185;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t9144;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7288;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7190;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__41.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m33510_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m33510(__this, method) (( void (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2__ctor_m33510_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m33511_gshared (Dictionary_2_t6209 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m33511(__this, ___comparer, method) (( void (*) (Dictionary_2_t6209 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33511_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m33513_gshared (Dictionary_2_t6209 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m33513(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6209 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33513_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m33515_gshared (Dictionary_2_t6209 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m33515(__this, ___capacity, method) (( void (*) (Dictionary_2_t6209 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m33515_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m33517_gshared (Dictionary_2_t6209 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m33517(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6209 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33517_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m33519_gshared (Dictionary_2_t6209 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m33519(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6209 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m33519_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33521_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33521(__this, method) (( Object_t* (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33521_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33523_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33523(__this, method) (( Object_t* (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33523_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m33525_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33525(__this, method) (( Object_t * (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m33525_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m33527_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33527(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m33527_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m33529_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33529(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6209 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m33529_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m33531_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m33531(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6209 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m33531_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m33533_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m33533(__this, ___key, method) (( bool (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m33533_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m33535_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m33535(__this, ___key, method) (( void (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m33535_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33537_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33537(__this, method) (( bool (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33537_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33539_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33539(__this, method) (( Object_t * (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33539_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33541_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33541(__this, method) (( bool (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33541_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33543_gshared (Dictionary_2_t6209 * __this, KeyValuePair_2_t6186  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33543(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6209 *, KeyValuePair_2_t6186 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33543_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33545_gshared (Dictionary_2_t6209 * __this, KeyValuePair_2_t6186  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33545(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6209 *, KeyValuePair_2_t6186 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33545_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33547_gshared (Dictionary_2_t6209 * __this, KeyValuePair_2U5BU5D_t7288* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33547(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6209 *, KeyValuePair_2U5BU5D_t7288*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33547_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33549_gshared (Dictionary_2_t6209 * __this, KeyValuePair_2_t6186  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33549(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6209 *, KeyValuePair_2_t6186 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33549_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m33551_gshared (Dictionary_2_t6209 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33551(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6209 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m33551_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33553_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33553(__this, method) (( Object_t * (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33553_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33555_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33555(__this, method) (( Object_t* (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33555_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33557_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33557(__this, method) (( Object_t * (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33557_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m33559_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m33559(__this, method) (( int32_t (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_get_Count_m33559_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m33561_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m33561(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m33561_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m33563_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m33563(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6209 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m33563_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m33565_gshared (Dictionary_2_t6209 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m33565(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6209 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m33565_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m33567_gshared (Dictionary_2_t6209 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m33567(__this, ___size, method) (( void (*) (Dictionary_2_t6209 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m33567_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m33569_gshared (Dictionary_2_t6209 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m33569(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6209 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m33569_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6186  Dictionary_2_make_pair_m33571_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m33571(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6186  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m33571_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m33573_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m33573(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m33573_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m33575_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m33575(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m33575_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m33577_gshared (Dictionary_2_t6209 * __this, KeyValuePair_2U5BU5D_t7288* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m33577(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6209 *, KeyValuePair_2U5BU5D_t7288*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m33577_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m33579_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m33579(__this, method) (( void (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_Resize_m33579_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m33581_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m33581(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6209 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m33581_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m33583_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m33583(__this, method) (( void (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_Clear_m33583_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m33585_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m33585(__this, ___key, method) (( bool (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m33585_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m33587_gshared (Dictionary_2_t6209 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m33587(__this, ___value, method) (( bool (*) (Dictionary_2_t6209 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m33587_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m33589_gshared (Dictionary_2_t6209 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m33589(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6209 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m33589_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m33591_gshared (Dictionary_2_t6209 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m33591(__this, ___sender, method) (( void (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m33591_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m33593_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m33593(__this, ___key, method) (( bool (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m33593_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m33595_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m33595(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6209 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m33595_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t6210 * Dictionary_2_get_Keys_m33597_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m33597(__this, method) (( KeyCollection_t6210 * (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_get_Keys_m33597_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t6214 * Dictionary_2_get_Values_m33599_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m33599(__this, method) (( ValueCollection_t6214 * (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_get_Values_m33599_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m33601_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m33601(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m33601_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m33603_gshared (Dictionary_2_t6209 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m33603(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m33603_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m33605_gshared (Dictionary_2_t6209 * __this, KeyValuePair_2_t6186  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m33605(__this, ___pair, method) (( bool (*) (Dictionary_2_t6209 *, KeyValuePair_2_t6186 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m33605_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6212  Dictionary_2_GetEnumerator_m33607_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m33607(__this, method) (( Enumerator_t6212  (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_GetEnumerator_m33607_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2137  Dictionary_2_U3CCopyToU3Em__0_m33609_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m33609(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m33609_gshared)(__this /* static, unused */, ___key, ___value, method)
