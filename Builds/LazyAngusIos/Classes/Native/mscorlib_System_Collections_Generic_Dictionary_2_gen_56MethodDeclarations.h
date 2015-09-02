#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6241;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9178;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t6242;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t6246;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1204;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t9184;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7320;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7222;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__41.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m33875_gshared (Dictionary_2_t6241 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m33875(__this, method) (( void (*) (Dictionary_2_t6241 *, const MethodInfo*))Dictionary_2__ctor_m33875_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m33876_gshared (Dictionary_2_t6241 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m33876(__this, ___comparer, method) (( void (*) (Dictionary_2_t6241 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33876_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m33878_gshared (Dictionary_2_t6241 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m33878(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6241 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33878_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m33880_gshared (Dictionary_2_t6241 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m33880(__this, ___capacity, method) (( void (*) (Dictionary_2_t6241 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m33880_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m33882_gshared (Dictionary_2_t6241 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m33882(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6241 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m33882_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m33884_gshared (Dictionary_2_t6241 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m33884(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6241 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m33884_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33886_gshared (Dictionary_2_t6241 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33886(__this, method) (( Object_t* (*) (Dictionary_2_t6241 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33886_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33888_gshared (Dictionary_2_t6241 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33888(__this, method) (( Object_t* (*) (Dictionary_2_t6241 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33888_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m33890_gshared (Dictionary_2_t6241 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33890(__this, method) (( Object_t * (*) (Dictionary_2_t6241 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m33890_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m33892_gshared (Dictionary_2_t6241 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33892(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6241 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m33892_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m33894_gshared (Dictionary_2_t6241 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33894(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6241 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m33894_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m33896_gshared (Dictionary_2_t6241 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m33896(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6241 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m33896_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m33898_gshared (Dictionary_2_t6241 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m33898(__this, ___key, method) (( bool (*) (Dictionary_2_t6241 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m33898_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m33900_gshared (Dictionary_2_t6241 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m33900(__this, ___key, method) (( void (*) (Dictionary_2_t6241 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m33900_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33902_gshared (Dictionary_2_t6241 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33902(__this, method) (( bool (*) (Dictionary_2_t6241 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33902_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33904_gshared (Dictionary_2_t6241 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33904(__this, method) (( Object_t * (*) (Dictionary_2_t6241 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33904_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33906_gshared (Dictionary_2_t6241 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33906(__this, method) (( bool (*) (Dictionary_2_t6241 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33906_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33908_gshared (Dictionary_2_t6241 * __this, KeyValuePair_2_t6218  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33908(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6241 *, KeyValuePair_2_t6218 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33908_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33910_gshared (Dictionary_2_t6241 * __this, KeyValuePair_2_t6218  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33910(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6241 *, KeyValuePair_2_t6218 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33910_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33912_gshared (Dictionary_2_t6241 * __this, KeyValuePair_2U5BU5D_t7320* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33912(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6241 *, KeyValuePair_2U5BU5D_t7320*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33912_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33914_gshared (Dictionary_2_t6241 * __this, KeyValuePair_2_t6218  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33914(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6241 *, KeyValuePair_2_t6218 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33914_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m33916_gshared (Dictionary_2_t6241 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33916(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6241 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m33916_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33918_gshared (Dictionary_2_t6241 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33918(__this, method) (( Object_t * (*) (Dictionary_2_t6241 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33918_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33920_gshared (Dictionary_2_t6241 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33920(__this, method) (( Object_t* (*) (Dictionary_2_t6241 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33920_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33922_gshared (Dictionary_2_t6241 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33922(__this, method) (( Object_t * (*) (Dictionary_2_t6241 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33922_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m33924_gshared (Dictionary_2_t6241 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m33924(__this, method) (( int32_t (*) (Dictionary_2_t6241 *, const MethodInfo*))Dictionary_2_get_Count_m33924_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m33926_gshared (Dictionary_2_t6241 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m33926(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6241 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m33926_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m33928_gshared (Dictionary_2_t6241 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m33928(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6241 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m33928_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m33930_gshared (Dictionary_2_t6241 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m33930(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6241 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m33930_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m33932_gshared (Dictionary_2_t6241 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m33932(__this, ___size, method) (( void (*) (Dictionary_2_t6241 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m33932_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m33934_gshared (Dictionary_2_t6241 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m33934(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6241 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m33934_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6218  Dictionary_2_make_pair_m33936_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m33936(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6218  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m33936_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m33938_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m33938(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m33938_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m33940_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m33940(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m33940_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m33942_gshared (Dictionary_2_t6241 * __this, KeyValuePair_2U5BU5D_t7320* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m33942(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6241 *, KeyValuePair_2U5BU5D_t7320*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m33942_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m33944_gshared (Dictionary_2_t6241 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m33944(__this, method) (( void (*) (Dictionary_2_t6241 *, const MethodInfo*))Dictionary_2_Resize_m33944_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m33946_gshared (Dictionary_2_t6241 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m33946(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6241 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m33946_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m33948_gshared (Dictionary_2_t6241 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m33948(__this, method) (( void (*) (Dictionary_2_t6241 *, const MethodInfo*))Dictionary_2_Clear_m33948_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m33950_gshared (Dictionary_2_t6241 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m33950(__this, ___key, method) (( bool (*) (Dictionary_2_t6241 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m33950_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m33952_gshared (Dictionary_2_t6241 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m33952(__this, ___value, method) (( bool (*) (Dictionary_2_t6241 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m33952_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m33954_gshared (Dictionary_2_t6241 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m33954(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6241 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m33954_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m33956_gshared (Dictionary_2_t6241 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m33956(__this, ___sender, method) (( void (*) (Dictionary_2_t6241 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m33956_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m33958_gshared (Dictionary_2_t6241 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m33958(__this, ___key, method) (( bool (*) (Dictionary_2_t6241 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m33958_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m33960_gshared (Dictionary_2_t6241 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m33960(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6241 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m33960_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t6242 * Dictionary_2_get_Keys_m33962_gshared (Dictionary_2_t6241 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m33962(__this, method) (( KeyCollection_t6242 * (*) (Dictionary_2_t6241 *, const MethodInfo*))Dictionary_2_get_Keys_m33962_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t6246 * Dictionary_2_get_Values_m33964_gshared (Dictionary_2_t6241 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m33964(__this, method) (( ValueCollection_t6246 * (*) (Dictionary_2_t6241 *, const MethodInfo*))Dictionary_2_get_Values_m33964_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m33966_gshared (Dictionary_2_t6241 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m33966(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6241 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m33966_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m33968_gshared (Dictionary_2_t6241 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m33968(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6241 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m33968_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m33970_gshared (Dictionary_2_t6241 * __this, KeyValuePair_2_t6218  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m33970(__this, ___pair, method) (( bool (*) (Dictionary_2_t6241 *, KeyValuePair_2_t6218 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m33970_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6244  Dictionary_2_GetEnumerator_m33972_gshared (Dictionary_2_t6241 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m33972(__this, method) (( Enumerator_t6244  (*) (Dictionary_2_t6241 *, const MethodInfo*))Dictionary_2_GetEnumerator_m33972_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__0_m33974_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m33974(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m33974_gshared)(__this /* static, unused */, ___key, ___value, method)
