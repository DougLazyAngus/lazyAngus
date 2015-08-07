#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5485;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1170;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8634;
// System.Collections.ICollection
struct ICollection_t705;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t5488;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t5492;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1134;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t8730;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2869;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7484;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t7154;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3911;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m23496_gshared (Dictionary_2_t5485 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m23496(__this, method) (( void (*) (Dictionary_2_t5485 *, const MethodInfo*))Dictionary_2__ctor_m23496_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23498_gshared (Dictionary_2_t5485 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23498(__this, ___comparer, method) (( void (*) (Dictionary_2_t5485 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23498_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m23500_gshared (Dictionary_2_t5485 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m23500(__this, ___dictionary, method) (( void (*) (Dictionary_2_t5485 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23500_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23501_gshared (Dictionary_2_t5485 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m23501(__this, ___capacity, method) (( void (*) (Dictionary_2_t5485 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23501_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23503_gshared (Dictionary_2_t5485 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23503(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t5485 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23503_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23505_gshared (Dictionary_2_t5485 * __this, SerializationInfo_t2869 * ___info, StreamingContext_t2870  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m23505(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5485 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2__ctor_m23505_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23507_gshared (Dictionary_2_t5485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23507(__this, method) (( Object_t* (*) (Dictionary_2_t5485 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23507_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23509_gshared (Dictionary_2_t5485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23509(__this, method) (( Object_t* (*) (Dictionary_2_t5485 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23509_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m23511_gshared (Dictionary_2_t5485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m23511(__this, method) (( Object_t * (*) (Dictionary_2_t5485 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m23511_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23513_gshared (Dictionary_2_t5485 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23513(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5485 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23513_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23515_gshared (Dictionary_2_t5485 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23515(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5485 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23515_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23517_gshared (Dictionary_2_t5485 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23517(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5485 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23517_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23519_gshared (Dictionary_2_t5485 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m23519(__this, ___key, method) (( bool (*) (Dictionary_2_t5485 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23519_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23521_gshared (Dictionary_2_t5485 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23521(__this, ___key, method) (( void (*) (Dictionary_2_t5485 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23521_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23523_gshared (Dictionary_2_t5485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23523(__this, method) (( bool (*) (Dictionary_2_t5485 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23523_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23525_gshared (Dictionary_2_t5485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23525(__this, method) (( Object_t * (*) (Dictionary_2_t5485 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23525_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23527_gshared (Dictionary_2_t5485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23527(__this, method) (( bool (*) (Dictionary_2_t5485 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23527_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23529_gshared (Dictionary_2_t5485 * __this, KeyValuePair_2_t5486  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23529(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t5485 *, KeyValuePair_2_t5486 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23529_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23531_gshared (Dictionary_2_t5485 * __this, KeyValuePair_2_t5486  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23531(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5485 *, KeyValuePair_2_t5486 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23531_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23533_gshared (Dictionary_2_t5485 * __this, KeyValuePair_2U5BU5D_t7484* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23533(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5485 *, KeyValuePair_2U5BU5D_t7484*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23533_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23535_gshared (Dictionary_2_t5485 * __this, KeyValuePair_2_t5486  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23535(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5485 *, KeyValuePair_2_t5486 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23535_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23537_gshared (Dictionary_2_t5485 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23537(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5485 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23537_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23539_gshared (Dictionary_2_t5485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23539(__this, method) (( Object_t * (*) (Dictionary_2_t5485 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23539_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23541_gshared (Dictionary_2_t5485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23541(__this, method) (( Object_t* (*) (Dictionary_2_t5485 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23541_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23543_gshared (Dictionary_2_t5485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23543(__this, method) (( Object_t * (*) (Dictionary_2_t5485 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23543_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23545_gshared (Dictionary_2_t5485 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23545(__this, method) (( int32_t (*) (Dictionary_2_t5485 *, const MethodInfo*))Dictionary_2_get_Count_m23545_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m23547_gshared (Dictionary_2_t5485 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23547(__this, ___key, method) (( int32_t (*) (Dictionary_2_t5485 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m23547_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23549_gshared (Dictionary_2_t5485 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23549(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5485 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m23549_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23551_gshared (Dictionary_2_t5485 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23551(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t5485 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23551_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23553_gshared (Dictionary_2_t5485 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23553(__this, ___size, method) (( void (*) (Dictionary_2_t5485 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23553_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23555_gshared (Dictionary_2_t5485 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23555(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5485 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23555_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5486  Dictionary_2_make_pair_m23557_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23557(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5486  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m23557_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m23559_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23559(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m23559_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m23561_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23561(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m23561_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23563_gshared (Dictionary_2_t5485 * __this, KeyValuePair_2U5BU5D_t7484* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23563(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5485 *, KeyValuePair_2U5BU5D_t7484*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23563_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m23565_gshared (Dictionary_2_t5485 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23565(__this, method) (( void (*) (Dictionary_2_t5485 *, const MethodInfo*))Dictionary_2_Resize_m23565_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23567_gshared (Dictionary_2_t5485 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23567(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5485 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m23567_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m23569_gshared (Dictionary_2_t5485 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23569(__this, method) (( void (*) (Dictionary_2_t5485 *, const MethodInfo*))Dictionary_2_Clear_m23569_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23571_gshared (Dictionary_2_t5485 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23571(__this, ___key, method) (( bool (*) (Dictionary_2_t5485 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m23571_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23573_gshared (Dictionary_2_t5485 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23573(__this, ___value, method) (( bool (*) (Dictionary_2_t5485 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m23573_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23575_gshared (Dictionary_2_t5485 * __this, SerializationInfo_t2869 * ___info, StreamingContext_t2870  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23575(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5485 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2_GetObjectData_m23575_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23577_gshared (Dictionary_2_t5485 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23577(__this, ___sender, method) (( void (*) (Dictionary_2_t5485 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23577_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23579_gshared (Dictionary_2_t5485 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23579(__this, ___key, method) (( bool (*) (Dictionary_2_t5485 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m23579_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23581_gshared (Dictionary_2_t5485 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23581(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t5485 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m23581_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t5488 * Dictionary_2_get_Keys_m23583_gshared (Dictionary_2_t5485 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m23583(__this, method) (( KeyCollection_t5488 * (*) (Dictionary_2_t5485 *, const MethodInfo*))Dictionary_2_get_Keys_m23583_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t5492 * Dictionary_2_get_Values_m23585_gshared (Dictionary_2_t5485 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m23585(__this, method) (( ValueCollection_t5492 * (*) (Dictionary_2_t5485 *, const MethodInfo*))Dictionary_2_get_Values_m23585_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m23587_gshared (Dictionary_2_t5485 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m23587(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5485 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23587_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m23589_gshared (Dictionary_2_t5485 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m23589(__this, ___value, method) (( int32_t (*) (Dictionary_2_t5485 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23589_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23591_gshared (Dictionary_2_t5485 * __this, KeyValuePair_2_t5486  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23591(__this, ___pair, method) (( bool (*) (Dictionary_2_t5485 *, KeyValuePair_2_t5486 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23591_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t5490  Dictionary_2_GetEnumerator_m23593_gshared (Dictionary_2_t5485 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m23593(__this, method) (( Enumerator_t5490  (*) (Dictionary_2_t5485 *, const MethodInfo*))Dictionary_2_GetEnumerator_m23593_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2088  Dictionary_2_U3CCopyToU3Em__0_m23595_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m23595(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2088  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m23595_gshared)(__this /* static, unused */, ___key, ___value, method)
