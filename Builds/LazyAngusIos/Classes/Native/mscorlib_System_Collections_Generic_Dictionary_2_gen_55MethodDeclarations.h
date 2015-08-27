#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6197;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9083;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9141;
// System.Collections.ICollection
struct ICollection_t755;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>
struct KeyCollection_t6198;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>
struct ValueCollection_t6202;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6013;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>
struct IDictionary_2_t6192;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>[]
struct KeyValuePair_2U5BU5D_t9142;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
struct IEnumerator_1_t9143;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t785;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__40.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m33385_gshared (Dictionary_2_t6197 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m33385(__this, method) (( void (*) (Dictionary_2_t6197 *, const MethodInfo*))Dictionary_2__ctor_m33385_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m33386_gshared (Dictionary_2_t6197 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m33386(__this, ___comparer, method) (( void (*) (Dictionary_2_t6197 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33386_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m33387_gshared (Dictionary_2_t6197 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m33387(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6197 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33387_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m33388_gshared (Dictionary_2_t6197 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m33388(__this, ___capacity, method) (( void (*) (Dictionary_2_t6197 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m33388_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m33389_gshared (Dictionary_2_t6197 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m33389(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6197 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33389_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m33390_gshared (Dictionary_2_t6197 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m33390(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6197 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2__ctor_m33390_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33391_gshared (Dictionary_2_t6197 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33391(__this, method) (( Object_t* (*) (Dictionary_2_t6197 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33391_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33392_gshared (Dictionary_2_t6197 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33392(__this, method) (( Object_t* (*) (Dictionary_2_t6197 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33392_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m33393_gshared (Dictionary_2_t6197 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33393(__this, method) (( Object_t * (*) (Dictionary_2_t6197 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m33393_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m33394_gshared (Dictionary_2_t6197 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33394(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6197 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m33394_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m33395_gshared (Dictionary_2_t6197 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33395(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6197 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m33395_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m33396_gshared (Dictionary_2_t6197 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m33396(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6197 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m33396_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m33397_gshared (Dictionary_2_t6197 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m33397(__this, ___key, method) (( bool (*) (Dictionary_2_t6197 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m33397_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m33398_gshared (Dictionary_2_t6197 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m33398(__this, ___key, method) (( void (*) (Dictionary_2_t6197 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m33398_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33399_gshared (Dictionary_2_t6197 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33399(__this, method) (( bool (*) (Dictionary_2_t6197 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33399_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33400_gshared (Dictionary_2_t6197 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33400(__this, method) (( Object_t * (*) (Dictionary_2_t6197 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33400_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33401_gshared (Dictionary_2_t6197 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33401(__this, method) (( bool (*) (Dictionary_2_t6197 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33401_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33402_gshared (Dictionary_2_t6197 * __this, KeyValuePair_2_t6194  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33402(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6197 *, KeyValuePair_2_t6194 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33402_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33403_gshared (Dictionary_2_t6197 * __this, KeyValuePair_2_t6194  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33403(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6197 *, KeyValuePair_2_t6194 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33403_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33404_gshared (Dictionary_2_t6197 * __this, KeyValuePair_2U5BU5D_t9142* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33404(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6197 *, KeyValuePair_2U5BU5D_t9142*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33404_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33405_gshared (Dictionary_2_t6197 * __this, KeyValuePair_2_t6194  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33405(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6197 *, KeyValuePair_2_t6194 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33405_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m33406_gshared (Dictionary_2_t6197 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33406(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6197 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m33406_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33407_gshared (Dictionary_2_t6197 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33407(__this, method) (( Object_t * (*) (Dictionary_2_t6197 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33407_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33408_gshared (Dictionary_2_t6197 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33408(__this, method) (( Object_t* (*) (Dictionary_2_t6197 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33408_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33409_gshared (Dictionary_2_t6197 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33409(__this, method) (( Object_t * (*) (Dictionary_2_t6197 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33409_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m33410_gshared (Dictionary_2_t6197 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m33410(__this, method) (( int32_t (*) (Dictionary_2_t6197 *, const MethodInfo*))Dictionary_2_get_Count_m33410_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m33411_gshared (Dictionary_2_t6197 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m33411(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6197 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m33411_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m33412_gshared (Dictionary_2_t6197 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m33412(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6197 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m33412_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m33413_gshared (Dictionary_2_t6197 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m33413(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6197 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m33413_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m33414_gshared (Dictionary_2_t6197 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m33414(__this, ___size, method) (( void (*) (Dictionary_2_t6197 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m33414_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m33415_gshared (Dictionary_2_t6197 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m33415(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6197 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m33415_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6194  Dictionary_2_make_pair_m33416_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m33416(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6194  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m33416_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m33417_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m33417(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m33417_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m33418_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m33418(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m33418_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m33419_gshared (Dictionary_2_t6197 * __this, KeyValuePair_2U5BU5D_t9142* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m33419(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6197 *, KeyValuePair_2U5BU5D_t9142*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m33419_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m33420_gshared (Dictionary_2_t6197 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m33420(__this, method) (( void (*) (Dictionary_2_t6197 *, const MethodInfo*))Dictionary_2_Resize_m33420_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m33421_gshared (Dictionary_2_t6197 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m33421(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6197 *, int64_t, uint8_t, const MethodInfo*))Dictionary_2_Add_m33421_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m33422_gshared (Dictionary_2_t6197 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m33422(__this, method) (( void (*) (Dictionary_2_t6197 *, const MethodInfo*))Dictionary_2_Clear_m33422_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m33423_gshared (Dictionary_2_t6197 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m33423(__this, ___key, method) (( bool (*) (Dictionary_2_t6197 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m33423_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m33424_gshared (Dictionary_2_t6197 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m33424(__this, ___value, method) (( bool (*) (Dictionary_2_t6197 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m33424_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m33425_gshared (Dictionary_2_t6197 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m33425(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6197 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2_GetObjectData_m33425_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m33426_gshared (Dictionary_2_t6197 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m33426(__this, ___sender, method) (( void (*) (Dictionary_2_t6197 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m33426_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m33427_gshared (Dictionary_2_t6197 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m33427(__this, ___key, method) (( bool (*) (Dictionary_2_t6197 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m33427_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m33428_gshared (Dictionary_2_t6197 * __this, int64_t ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m33428(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6197 *, int64_t, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m33428_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Keys()
extern "C" KeyCollection_t6198 * Dictionary_2_get_Keys_m33429_gshared (Dictionary_2_t6197 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m33429(__this, method) (( KeyCollection_t6198 * (*) (Dictionary_2_t6197 *, const MethodInfo*))Dictionary_2_get_Keys_m33429_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Values()
extern "C" ValueCollection_t6202 * Dictionary_2_get_Values_m33430_gshared (Dictionary_2_t6197 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m33430(__this, method) (( ValueCollection_t6202 * (*) (Dictionary_2_t6197 *, const MethodInfo*))Dictionary_2_get_Values_m33430_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m33431_gshared (Dictionary_2_t6197 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m33431(__this, ___key, method) (( int64_t (*) (Dictionary_2_t6197 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m33431_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m33432_gshared (Dictionary_2_t6197 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m33432(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6197 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m33432_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m33433_gshared (Dictionary_2_t6197 * __this, KeyValuePair_2_t6194  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m33433(__this, ___pair, method) (( bool (*) (Dictionary_2_t6197 *, KeyValuePair_2_t6194 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m33433_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6200  Dictionary_2_GetEnumerator_m33434_gshared (Dictionary_2_t6197 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m33434(__this, method) (( Enumerator_t6200  (*) (Dictionary_2_t6197 *, const MethodInfo*))Dictionary_2_GetEnumerator_m33434_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2140  Dictionary_2_U3CCopyToU3Em__0_m33435_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m33435(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2140  (*) (Object_t * /* static, unused */, int64_t, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m33435_gshared)(__this /* static, unused */, ___key, ___value, method)
