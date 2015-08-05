#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6134;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1171;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9040;
// System.Collections.ICollection
struct ICollection_t705;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t6135;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t6139;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1135;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t9046;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2870;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7213;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7115;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3912;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__40.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m32745_gshared (Dictionary_2_t6134 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m32745(__this, method) (( void (*) (Dictionary_2_t6134 *, const MethodInfo*))Dictionary_2__ctor_m32745_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m32746_gshared (Dictionary_2_t6134 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m32746(__this, ___comparer, method) (( void (*) (Dictionary_2_t6134 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32746_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m32748_gshared (Dictionary_2_t6134 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m32748(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6134 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32748_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m32750_gshared (Dictionary_2_t6134 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m32750(__this, ___capacity, method) (( void (*) (Dictionary_2_t6134 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m32750_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m32752_gshared (Dictionary_2_t6134 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m32752(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6134 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32752_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m32754_gshared (Dictionary_2_t6134 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m32754(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6134 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2__ctor_m32754_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32756_gshared (Dictionary_2_t6134 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32756(__this, method) (( Object_t* (*) (Dictionary_2_t6134 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32756_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32758_gshared (Dictionary_2_t6134 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32758(__this, method) (( Object_t* (*) (Dictionary_2_t6134 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32758_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m32760_gshared (Dictionary_2_t6134 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m32760(__this, method) (( Object_t * (*) (Dictionary_2_t6134 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m32760_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m32762_gshared (Dictionary_2_t6134 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m32762(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6134 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m32762_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m32764_gshared (Dictionary_2_t6134 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m32764(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6134 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m32764_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m32766_gshared (Dictionary_2_t6134 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m32766(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6134 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m32766_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m32768_gshared (Dictionary_2_t6134 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m32768(__this, ___key, method) (( bool (*) (Dictionary_2_t6134 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m32768_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m32770_gshared (Dictionary_2_t6134 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m32770(__this, ___key, method) (( void (*) (Dictionary_2_t6134 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m32770_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32772_gshared (Dictionary_2_t6134 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32772(__this, method) (( bool (*) (Dictionary_2_t6134 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32772_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32774_gshared (Dictionary_2_t6134 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32774(__this, method) (( Object_t * (*) (Dictionary_2_t6134 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32774_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32776_gshared (Dictionary_2_t6134 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32776(__this, method) (( bool (*) (Dictionary_2_t6134 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32776_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32778_gshared (Dictionary_2_t6134 * __this, KeyValuePair_2_t6110  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32778(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6134 *, KeyValuePair_2_t6110 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32778_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32780_gshared (Dictionary_2_t6134 * __this, KeyValuePair_2_t6110  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32780(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6134 *, KeyValuePair_2_t6110 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32780_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32782_gshared (Dictionary_2_t6134 * __this, KeyValuePair_2U5BU5D_t7213* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32782(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6134 *, KeyValuePair_2U5BU5D_t7213*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32782_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32784_gshared (Dictionary_2_t6134 * __this, KeyValuePair_2_t6110  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32784(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6134 *, KeyValuePair_2_t6110 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32784_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m32786_gshared (Dictionary_2_t6134 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m32786(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6134 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m32786_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32788_gshared (Dictionary_2_t6134 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32788(__this, method) (( Object_t * (*) (Dictionary_2_t6134 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32788_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32790_gshared (Dictionary_2_t6134 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32790(__this, method) (( Object_t* (*) (Dictionary_2_t6134 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32790_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32792_gshared (Dictionary_2_t6134 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32792(__this, method) (( Object_t * (*) (Dictionary_2_t6134 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32792_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m32794_gshared (Dictionary_2_t6134 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m32794(__this, method) (( int32_t (*) (Dictionary_2_t6134 *, const MethodInfo*))Dictionary_2_get_Count_m32794_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m32796_gshared (Dictionary_2_t6134 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m32796(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6134 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m32796_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m32798_gshared (Dictionary_2_t6134 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m32798(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6134 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m32798_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m32800_gshared (Dictionary_2_t6134 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m32800(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6134 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m32800_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m32802_gshared (Dictionary_2_t6134 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m32802(__this, ___size, method) (( void (*) (Dictionary_2_t6134 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m32802_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m32804_gshared (Dictionary_2_t6134 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m32804(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6134 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m32804_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6110  Dictionary_2_make_pair_m32806_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m32806(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6110  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m32806_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m32808_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m32808(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m32808_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m32810_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m32810(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m32810_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m32812_gshared (Dictionary_2_t6134 * __this, KeyValuePair_2U5BU5D_t7213* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m32812(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6134 *, KeyValuePair_2U5BU5D_t7213*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m32812_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m32814_gshared (Dictionary_2_t6134 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m32814(__this, method) (( void (*) (Dictionary_2_t6134 *, const MethodInfo*))Dictionary_2_Resize_m32814_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m32816_gshared (Dictionary_2_t6134 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m32816(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6134 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m32816_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m32818_gshared (Dictionary_2_t6134 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m32818(__this, method) (( void (*) (Dictionary_2_t6134 *, const MethodInfo*))Dictionary_2_Clear_m32818_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m32820_gshared (Dictionary_2_t6134 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m32820(__this, ___key, method) (( bool (*) (Dictionary_2_t6134 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m32820_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m32822_gshared (Dictionary_2_t6134 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m32822(__this, ___value, method) (( bool (*) (Dictionary_2_t6134 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m32822_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m32824_gshared (Dictionary_2_t6134 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m32824(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6134 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2_GetObjectData_m32824_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m32826_gshared (Dictionary_2_t6134 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m32826(__this, ___sender, method) (( void (*) (Dictionary_2_t6134 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m32826_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m32828_gshared (Dictionary_2_t6134 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m32828(__this, ___key, method) (( bool (*) (Dictionary_2_t6134 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m32828_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m32830_gshared (Dictionary_2_t6134 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m32830(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6134 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m32830_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t6135 * Dictionary_2_get_Keys_m32832_gshared (Dictionary_2_t6134 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m32832(__this, method) (( KeyCollection_t6135 * (*) (Dictionary_2_t6134 *, const MethodInfo*))Dictionary_2_get_Keys_m32832_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t6139 * Dictionary_2_get_Values_m32834_gshared (Dictionary_2_t6134 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m32834(__this, method) (( ValueCollection_t6139 * (*) (Dictionary_2_t6134 *, const MethodInfo*))Dictionary_2_get_Values_m32834_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m32836_gshared (Dictionary_2_t6134 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m32836(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6134 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m32836_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m32838_gshared (Dictionary_2_t6134 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m32838(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6134 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m32838_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m32840_gshared (Dictionary_2_t6134 * __this, KeyValuePair_2_t6110  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m32840(__this, ___pair, method) (( bool (*) (Dictionary_2_t6134 *, KeyValuePair_2_t6110 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m32840_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6137  Dictionary_2_GetEnumerator_m32842_gshared (Dictionary_2_t6134 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m32842(__this, method) (( Enumerator_t6137  (*) (Dictionary_2_t6134 *, const MethodInfo*))Dictionary_2_GetEnumerator_m32842_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2089  Dictionary_2_U3CCopyToU3Em__0_m32844_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m32844(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2089  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m32844_gshared)(__this /* static, unused */, ___key, ___value, method)
