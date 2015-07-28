#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6123;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9029;
// System.Collections.ICollection
struct ICollection_t696;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t6124;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t6128;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1125;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t9035;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2860;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7202;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7104;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3901;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__40.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m32675_gshared (Dictionary_2_t6123 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m32675(__this, method) (( void (*) (Dictionary_2_t6123 *, const MethodInfo*))Dictionary_2__ctor_m32675_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m32676_gshared (Dictionary_2_t6123 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m32676(__this, ___comparer, method) (( void (*) (Dictionary_2_t6123 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32676_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m32678_gshared (Dictionary_2_t6123 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m32678(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6123 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32678_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m32680_gshared (Dictionary_2_t6123 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m32680(__this, ___capacity, method) (( void (*) (Dictionary_2_t6123 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m32680_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m32682_gshared (Dictionary_2_t6123 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m32682(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6123 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m32682_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m32684_gshared (Dictionary_2_t6123 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m32684(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6123 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2__ctor_m32684_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32686_gshared (Dictionary_2_t6123 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32686(__this, method) (( Object_t* (*) (Dictionary_2_t6123 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32686_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32688_gshared (Dictionary_2_t6123 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32688(__this, method) (( Object_t* (*) (Dictionary_2_t6123 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32688_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m32690_gshared (Dictionary_2_t6123 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m32690(__this, method) (( Object_t * (*) (Dictionary_2_t6123 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m32690_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m32692_gshared (Dictionary_2_t6123 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m32692(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6123 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m32692_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m32694_gshared (Dictionary_2_t6123 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m32694(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6123 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m32694_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m32696_gshared (Dictionary_2_t6123 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m32696(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6123 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m32696_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m32698_gshared (Dictionary_2_t6123 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m32698(__this, ___key, method) (( bool (*) (Dictionary_2_t6123 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m32698_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m32700_gshared (Dictionary_2_t6123 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m32700(__this, ___key, method) (( void (*) (Dictionary_2_t6123 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m32700_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32702_gshared (Dictionary_2_t6123 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32702(__this, method) (( bool (*) (Dictionary_2_t6123 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32702_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32704_gshared (Dictionary_2_t6123 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32704(__this, method) (( Object_t * (*) (Dictionary_2_t6123 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32704_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32706_gshared (Dictionary_2_t6123 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32706(__this, method) (( bool (*) (Dictionary_2_t6123 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32706_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32708_gshared (Dictionary_2_t6123 * __this, KeyValuePair_2_t6099  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32708(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6123 *, KeyValuePair_2_t6099 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32708_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32710_gshared (Dictionary_2_t6123 * __this, KeyValuePair_2_t6099  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32710(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6123 *, KeyValuePair_2_t6099 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32710_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32712_gshared (Dictionary_2_t6123 * __this, KeyValuePair_2U5BU5D_t7202* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32712(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6123 *, KeyValuePair_2U5BU5D_t7202*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32712_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32714_gshared (Dictionary_2_t6123 * __this, KeyValuePair_2_t6099  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32714(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6123 *, KeyValuePair_2_t6099 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32714_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m32716_gshared (Dictionary_2_t6123 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m32716(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6123 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m32716_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32718_gshared (Dictionary_2_t6123 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32718(__this, method) (( Object_t * (*) (Dictionary_2_t6123 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32718_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32720_gshared (Dictionary_2_t6123 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32720(__this, method) (( Object_t* (*) (Dictionary_2_t6123 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32720_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32722_gshared (Dictionary_2_t6123 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32722(__this, method) (( Object_t * (*) (Dictionary_2_t6123 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32722_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m32724_gshared (Dictionary_2_t6123 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m32724(__this, method) (( int32_t (*) (Dictionary_2_t6123 *, const MethodInfo*))Dictionary_2_get_Count_m32724_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m32726_gshared (Dictionary_2_t6123 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m32726(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6123 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m32726_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m32728_gshared (Dictionary_2_t6123 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m32728(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6123 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m32728_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m32730_gshared (Dictionary_2_t6123 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m32730(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6123 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m32730_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m32732_gshared (Dictionary_2_t6123 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m32732(__this, ___size, method) (( void (*) (Dictionary_2_t6123 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m32732_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m32734_gshared (Dictionary_2_t6123 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m32734(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6123 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m32734_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6099  Dictionary_2_make_pair_m32736_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m32736(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6099  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m32736_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m32738_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m32738(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m32738_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m32740_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m32740(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m32740_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m32742_gshared (Dictionary_2_t6123 * __this, KeyValuePair_2U5BU5D_t7202* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m32742(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6123 *, KeyValuePair_2U5BU5D_t7202*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m32742_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m32744_gshared (Dictionary_2_t6123 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m32744(__this, method) (( void (*) (Dictionary_2_t6123 *, const MethodInfo*))Dictionary_2_Resize_m32744_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m32746_gshared (Dictionary_2_t6123 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m32746(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6123 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m32746_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m32748_gshared (Dictionary_2_t6123 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m32748(__this, method) (( void (*) (Dictionary_2_t6123 *, const MethodInfo*))Dictionary_2_Clear_m32748_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m32750_gshared (Dictionary_2_t6123 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m32750(__this, ___key, method) (( bool (*) (Dictionary_2_t6123 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m32750_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m32752_gshared (Dictionary_2_t6123 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m32752(__this, ___value, method) (( bool (*) (Dictionary_2_t6123 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m32752_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m32754_gshared (Dictionary_2_t6123 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m32754(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6123 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2_GetObjectData_m32754_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m32756_gshared (Dictionary_2_t6123 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m32756(__this, ___sender, method) (( void (*) (Dictionary_2_t6123 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m32756_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m32758_gshared (Dictionary_2_t6123 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m32758(__this, ___key, method) (( bool (*) (Dictionary_2_t6123 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m32758_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m32760_gshared (Dictionary_2_t6123 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m32760(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6123 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m32760_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t6124 * Dictionary_2_get_Keys_m32762_gshared (Dictionary_2_t6123 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m32762(__this, method) (( KeyCollection_t6124 * (*) (Dictionary_2_t6123 *, const MethodInfo*))Dictionary_2_get_Keys_m32762_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t6128 * Dictionary_2_get_Values_m32764_gshared (Dictionary_2_t6123 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m32764(__this, method) (( ValueCollection_t6128 * (*) (Dictionary_2_t6123 *, const MethodInfo*))Dictionary_2_get_Values_m32764_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m32766_gshared (Dictionary_2_t6123 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m32766(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6123 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m32766_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m32768_gshared (Dictionary_2_t6123 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m32768(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6123 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m32768_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m32770_gshared (Dictionary_2_t6123 * __this, KeyValuePair_2_t6099  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m32770(__this, ___pair, method) (( bool (*) (Dictionary_2_t6123 *, KeyValuePair_2_t6099 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m32770_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6126  Dictionary_2_GetEnumerator_m32772_gshared (Dictionary_2_t6123 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m32772(__this, method) (( Enumerator_t6126  (*) (Dictionary_2_t6123 *, const MethodInfo*))Dictionary_2_GetEnumerator_m32772_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2079  Dictionary_2_U3CCopyToU3Em__0_m32774_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m32774(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2079  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m32774_gshared)(__this /* static, unused */, ___key, ___value, method)
