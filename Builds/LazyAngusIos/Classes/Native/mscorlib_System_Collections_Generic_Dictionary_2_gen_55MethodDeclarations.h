#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6190;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9072;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9130;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>
struct KeyCollection_t6191;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>
struct ValueCollection_t6195;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6006;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>
struct IDictionary_2_t6185;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>[]
struct KeyValuePair_2U5BU5D_t9131;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
struct IEnumerator_1_t9132;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__40.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m33261_gshared (Dictionary_2_t6190 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m33261(__this, method) (( void (*) (Dictionary_2_t6190 *, const MethodInfo*))Dictionary_2__ctor_m33261_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m33262_gshared (Dictionary_2_t6190 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m33262(__this, ___comparer, method) (( void (*) (Dictionary_2_t6190 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33262_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m33263_gshared (Dictionary_2_t6190 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m33263(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6190 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33263_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m33264_gshared (Dictionary_2_t6190 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m33264(__this, ___capacity, method) (( void (*) (Dictionary_2_t6190 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m33264_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m33265_gshared (Dictionary_2_t6190 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m33265(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6190 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33265_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m33266_gshared (Dictionary_2_t6190 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m33266(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6190 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m33266_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33267_gshared (Dictionary_2_t6190 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33267(__this, method) (( Object_t* (*) (Dictionary_2_t6190 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33267_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33268_gshared (Dictionary_2_t6190 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33268(__this, method) (( Object_t* (*) (Dictionary_2_t6190 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33268_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m33269_gshared (Dictionary_2_t6190 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33269(__this, method) (( Object_t * (*) (Dictionary_2_t6190 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m33269_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m33270_gshared (Dictionary_2_t6190 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33270(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6190 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m33270_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m33271_gshared (Dictionary_2_t6190 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33271(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6190 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m33271_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m33272_gshared (Dictionary_2_t6190 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m33272(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6190 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m33272_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m33273_gshared (Dictionary_2_t6190 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m33273(__this, ___key, method) (( bool (*) (Dictionary_2_t6190 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m33273_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m33274_gshared (Dictionary_2_t6190 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m33274(__this, ___key, method) (( void (*) (Dictionary_2_t6190 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m33274_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33275_gshared (Dictionary_2_t6190 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33275(__this, method) (( bool (*) (Dictionary_2_t6190 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33275_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33276_gshared (Dictionary_2_t6190 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33276(__this, method) (( Object_t * (*) (Dictionary_2_t6190 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33276_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33277_gshared (Dictionary_2_t6190 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33277(__this, method) (( bool (*) (Dictionary_2_t6190 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33277_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33278_gshared (Dictionary_2_t6190 * __this, KeyValuePair_2_t6187  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33278(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6190 *, KeyValuePair_2_t6187 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33278_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33279_gshared (Dictionary_2_t6190 * __this, KeyValuePair_2_t6187  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33279(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6190 *, KeyValuePair_2_t6187 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33279_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33280_gshared (Dictionary_2_t6190 * __this, KeyValuePair_2U5BU5D_t9131* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33280(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6190 *, KeyValuePair_2U5BU5D_t9131*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33280_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33281_gshared (Dictionary_2_t6190 * __this, KeyValuePair_2_t6187  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33281(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6190 *, KeyValuePair_2_t6187 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33281_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m33282_gshared (Dictionary_2_t6190 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33282(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6190 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m33282_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33283_gshared (Dictionary_2_t6190 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33283(__this, method) (( Object_t * (*) (Dictionary_2_t6190 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33283_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33284_gshared (Dictionary_2_t6190 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33284(__this, method) (( Object_t* (*) (Dictionary_2_t6190 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33284_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33285_gshared (Dictionary_2_t6190 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33285(__this, method) (( Object_t * (*) (Dictionary_2_t6190 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33285_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m33286_gshared (Dictionary_2_t6190 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m33286(__this, method) (( int32_t (*) (Dictionary_2_t6190 *, const MethodInfo*))Dictionary_2_get_Count_m33286_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m33287_gshared (Dictionary_2_t6190 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m33287(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6190 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m33287_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m33288_gshared (Dictionary_2_t6190 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m33288(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6190 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m33288_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m33289_gshared (Dictionary_2_t6190 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m33289(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6190 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m33289_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m33290_gshared (Dictionary_2_t6190 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m33290(__this, ___size, method) (( void (*) (Dictionary_2_t6190 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m33290_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m33291_gshared (Dictionary_2_t6190 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m33291(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6190 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m33291_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6187  Dictionary_2_make_pair_m33292_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m33292(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6187  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m33292_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m33293_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m33293(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m33293_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m33294_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m33294(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m33294_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m33295_gshared (Dictionary_2_t6190 * __this, KeyValuePair_2U5BU5D_t9131* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m33295(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6190 *, KeyValuePair_2U5BU5D_t9131*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m33295_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m33296_gshared (Dictionary_2_t6190 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m33296(__this, method) (( void (*) (Dictionary_2_t6190 *, const MethodInfo*))Dictionary_2_Resize_m33296_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m33297_gshared (Dictionary_2_t6190 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m33297(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6190 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_Add_m33297_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m33298_gshared (Dictionary_2_t6190 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m33298(__this, method) (( void (*) (Dictionary_2_t6190 *, const MethodInfo*))Dictionary_2_Clear_m33298_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m33299_gshared (Dictionary_2_t6190 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m33299(__this, ___key, method) (( bool (*) (Dictionary_2_t6190 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m33299_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m33300_gshared (Dictionary_2_t6190 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m33300(__this, ___value, method) (( bool (*) (Dictionary_2_t6190 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m33300_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m33301_gshared (Dictionary_2_t6190 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m33301(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6190 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m33301_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m33302_gshared (Dictionary_2_t6190 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m33302(__this, ___sender, method) (( void (*) (Dictionary_2_t6190 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m33302_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m33303_gshared (Dictionary_2_t6190 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m33303(__this, ___key, method) (( bool (*) (Dictionary_2_t6190 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m33303_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m33304_gshared (Dictionary_2_t6190 * __this, int64_t ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m33304(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6190 *, int64_t, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m33304_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Keys()
extern "C" KeyCollection_t6191 * Dictionary_2_get_Keys_m33305_gshared (Dictionary_2_t6190 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m33305(__this, method) (( KeyCollection_t6191 * (*) (Dictionary_2_t6190 *, const MethodInfo*))Dictionary_2_get_Keys_m33305_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Values()
extern "C" ValueCollection_t6195 * Dictionary_2_get_Values_m33306_gshared (Dictionary_2_t6190 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m33306(__this, method) (( ValueCollection_t6195 * (*) (Dictionary_2_t6190 *, const MethodInfo*))Dictionary_2_get_Values_m33306_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m33307_gshared (Dictionary_2_t6190 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m33307(__this, ___key, method) (( int64_t (*) (Dictionary_2_t6190 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m33307_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m33308_gshared (Dictionary_2_t6190 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m33308(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6190 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m33308_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m33309_gshared (Dictionary_2_t6190 * __this, KeyValuePair_2_t6187  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m33309(__this, ___pair, method) (( bool (*) (Dictionary_2_t6190 *, KeyValuePair_2_t6187 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m33309_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6193  Dictionary_2_GetEnumerator_m33310_gshared (Dictionary_2_t6190 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m33310(__this, method) (( Enumerator_t6193  (*) (Dictionary_2_t6190 *, const MethodInfo*))Dictionary_2_GetEnumerator_m33310_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2139  Dictionary_2_U3CCopyToU3Em__0_m33311_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m33311(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m33311_gshared)(__this /* static, unused */, ___key, ___value, method)
