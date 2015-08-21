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
extern "C" void Dictionary_2__ctor_m33511_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m33511(__this, method) (( void (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2__ctor_m33511_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m33512_gshared (Dictionary_2_t6209 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m33512(__this, ___comparer, method) (( void (*) (Dictionary_2_t6209 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33512_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m33514_gshared (Dictionary_2_t6209 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m33514(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6209 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33514_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m33516_gshared (Dictionary_2_t6209 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m33516(__this, ___capacity, method) (( void (*) (Dictionary_2_t6209 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m33516_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m33518_gshared (Dictionary_2_t6209 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m33518(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6209 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33518_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m33520_gshared (Dictionary_2_t6209 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m33520(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6209 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m33520_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33522_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33522(__this, method) (( Object_t* (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33522_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33524_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33524(__this, method) (( Object_t* (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33524_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m33526_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33526(__this, method) (( Object_t * (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m33526_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m33528_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33528(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m33528_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m33530_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33530(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6209 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m33530_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m33532_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m33532(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6209 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m33532_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m33534_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m33534(__this, ___key, method) (( bool (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m33534_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m33536_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m33536(__this, ___key, method) (( void (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m33536_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33538_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33538(__this, method) (( bool (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33538_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33540_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33540(__this, method) (( Object_t * (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33540_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33542_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33542(__this, method) (( bool (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33542_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33544_gshared (Dictionary_2_t6209 * __this, KeyValuePair_2_t6186  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33544(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6209 *, KeyValuePair_2_t6186 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33544_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33546_gshared (Dictionary_2_t6209 * __this, KeyValuePair_2_t6186  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33546(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6209 *, KeyValuePair_2_t6186 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33546_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33548_gshared (Dictionary_2_t6209 * __this, KeyValuePair_2U5BU5D_t7288* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33548(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6209 *, KeyValuePair_2U5BU5D_t7288*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33548_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33550_gshared (Dictionary_2_t6209 * __this, KeyValuePair_2_t6186  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33550(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6209 *, KeyValuePair_2_t6186 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33550_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m33552_gshared (Dictionary_2_t6209 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33552(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6209 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m33552_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33554_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33554(__this, method) (( Object_t * (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33554_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33556_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33556(__this, method) (( Object_t* (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33556_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33558_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33558(__this, method) (( Object_t * (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33558_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m33560_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m33560(__this, method) (( int32_t (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_get_Count_m33560_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m33562_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m33562(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m33562_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m33564_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m33564(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6209 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m33564_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m33566_gshared (Dictionary_2_t6209 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m33566(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6209 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m33566_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m33568_gshared (Dictionary_2_t6209 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m33568(__this, ___size, method) (( void (*) (Dictionary_2_t6209 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m33568_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m33570_gshared (Dictionary_2_t6209 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m33570(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6209 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m33570_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6186  Dictionary_2_make_pair_m33572_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m33572(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6186  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m33572_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m33574_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m33574(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m33574_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m33576_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m33576(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m33576_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m33578_gshared (Dictionary_2_t6209 * __this, KeyValuePair_2U5BU5D_t7288* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m33578(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6209 *, KeyValuePair_2U5BU5D_t7288*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m33578_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m33580_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m33580(__this, method) (( void (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_Resize_m33580_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m33582_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m33582(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6209 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m33582_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m33584_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m33584(__this, method) (( void (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_Clear_m33584_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m33586_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m33586(__this, ___key, method) (( bool (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m33586_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m33588_gshared (Dictionary_2_t6209 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m33588(__this, ___value, method) (( bool (*) (Dictionary_2_t6209 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m33588_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m33590_gshared (Dictionary_2_t6209 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m33590(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6209 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m33590_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m33592_gshared (Dictionary_2_t6209 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m33592(__this, ___sender, method) (( void (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m33592_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m33594_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m33594(__this, ___key, method) (( bool (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m33594_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m33596_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m33596(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6209 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m33596_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t6210 * Dictionary_2_get_Keys_m33598_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m33598(__this, method) (( KeyCollection_t6210 * (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_get_Keys_m33598_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t6214 * Dictionary_2_get_Values_m33600_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m33600(__this, method) (( ValueCollection_t6214 * (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_get_Values_m33600_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m33602_gshared (Dictionary_2_t6209 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m33602(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m33602_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m33604_gshared (Dictionary_2_t6209 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m33604(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6209 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m33604_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m33606_gshared (Dictionary_2_t6209 * __this, KeyValuePair_2_t6186  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m33606(__this, ___pair, method) (( bool (*) (Dictionary_2_t6209 *, KeyValuePair_2_t6186 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m33606_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6212  Dictionary_2_GetEnumerator_m33608_gshared (Dictionary_2_t6209 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m33608(__this, method) (( Enumerator_t6212  (*) (Dictionary_2_t6209 *, const MethodInfo*))Dictionary_2_GetEnumerator_m33608_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2137  Dictionary_2_U3CCopyToU3Em__0_m33610_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m33610(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m33610_gshared)(__this /* static, unused */, ___key, ___value, method)
