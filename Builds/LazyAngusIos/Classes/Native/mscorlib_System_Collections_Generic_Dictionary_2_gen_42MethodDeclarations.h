#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1645;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4177;
// System.Collections.ICollection
struct ICollection_t592;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t4053;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t4057;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3379;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t4593;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1247;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t4594;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t4595;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1443;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__39.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m27550_gshared (Dictionary_2_t1645 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m27550(__this, method) (( void (*) (Dictionary_2_t1645 *, const MethodInfo*))Dictionary_2__ctor_m27550_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27551_gshared (Dictionary_2_t1645 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27551(__this, ___comparer, method) (( void (*) (Dictionary_2_t1645 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27551_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m27552_gshared (Dictionary_2_t1645 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m27552(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1645 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27552_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m27553_gshared (Dictionary_2_t1645 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m27553(__this, ___capacity, method) (( void (*) (Dictionary_2_t1645 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m27553_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27554_gshared (Dictionary_2_t1645 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27554(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1645 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27554_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m27555_gshared (Dictionary_2_t1645 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m27555(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1645 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2__ctor_m27555_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27556_gshared (Dictionary_2_t1645 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27556(__this, method) (( Object_t* (*) (Dictionary_2_t1645 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27556_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27557_gshared (Dictionary_2_t1645 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27557(__this, method) (( Object_t* (*) (Dictionary_2_t1645 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27557_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m27558_gshared (Dictionary_2_t1645 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m27558(__this, method) (( Object_t * (*) (Dictionary_2_t1645 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m27558_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m27559_gshared (Dictionary_2_t1645 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m27559(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1645 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m27559_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m27560_gshared (Dictionary_2_t1645 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m27560(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1645 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m27560_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m27561_gshared (Dictionary_2_t1645 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m27561(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1645 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m27561_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m27562_gshared (Dictionary_2_t1645 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m27562(__this, ___key, method) (( bool (*) (Dictionary_2_t1645 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m27562_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m27563_gshared (Dictionary_2_t1645 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m27563(__this, ___key, method) (( void (*) (Dictionary_2_t1645 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m27563_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27564_gshared (Dictionary_2_t1645 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27564(__this, method) (( bool (*) (Dictionary_2_t1645 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27564_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27565_gshared (Dictionary_2_t1645 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27565(__this, method) (( Object_t * (*) (Dictionary_2_t1645 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27565_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27566_gshared (Dictionary_2_t1645 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27566(__this, method) (( bool (*) (Dictionary_2_t1645 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27566_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27567_gshared (Dictionary_2_t1645 * __this, KeyValuePair_2_t4051  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27567(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1645 *, KeyValuePair_2_t4051 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27567_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27568_gshared (Dictionary_2_t1645 * __this, KeyValuePair_2_t4051  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27568(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1645 *, KeyValuePair_2_t4051 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27568_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27569_gshared (Dictionary_2_t1645 * __this, KeyValuePair_2U5BU5D_t4594* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27569(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1645 *, KeyValuePair_2U5BU5D_t4594*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27569_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27570_gshared (Dictionary_2_t1645 * __this, KeyValuePair_2_t4051  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27570(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1645 *, KeyValuePair_2_t4051 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27570_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m27571_gshared (Dictionary_2_t1645 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m27571(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1645 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m27571_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27572_gshared (Dictionary_2_t1645 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27572(__this, method) (( Object_t * (*) (Dictionary_2_t1645 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27572_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27573_gshared (Dictionary_2_t1645 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27573(__this, method) (( Object_t* (*) (Dictionary_2_t1645 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27573_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27574_gshared (Dictionary_2_t1645 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27574(__this, method) (( Object_t * (*) (Dictionary_2_t1645 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27574_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m27575_gshared (Dictionary_2_t1645 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m27575(__this, method) (( int32_t (*) (Dictionary_2_t1645 *, const MethodInfo*))Dictionary_2_get_Count_m27575_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m27576_gshared (Dictionary_2_t1645 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m27576(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1645 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m27576_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m27577_gshared (Dictionary_2_t1645 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m27577(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1645 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m27577_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m27578_gshared (Dictionary_2_t1645 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m27578(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1645 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m27578_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m27579_gshared (Dictionary_2_t1645 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m27579(__this, ___size, method) (( void (*) (Dictionary_2_t1645 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m27579_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m27580_gshared (Dictionary_2_t1645 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m27580(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1645 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m27580_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4051  Dictionary_2_make_pair_m27581_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m27581(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4051  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m27581_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m27582_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m27582(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m27582_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m27583_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m27583(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m27583_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m27584_gshared (Dictionary_2_t1645 * __this, KeyValuePair_2U5BU5D_t4594* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m27584(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1645 *, KeyValuePair_2U5BU5D_t4594*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m27584_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m27585_gshared (Dictionary_2_t1645 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m27585(__this, method) (( void (*) (Dictionary_2_t1645 *, const MethodInfo*))Dictionary_2_Resize_m27585_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m27586_gshared (Dictionary_2_t1645 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m27586(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1645 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m27586_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m27587_gshared (Dictionary_2_t1645 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m27587(__this, method) (( void (*) (Dictionary_2_t1645 *, const MethodInfo*))Dictionary_2_Clear_m27587_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m27588_gshared (Dictionary_2_t1645 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m27588(__this, ___key, method) (( bool (*) (Dictionary_2_t1645 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m27588_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m27589_gshared (Dictionary_2_t1645 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m27589(__this, ___value, method) (( bool (*) (Dictionary_2_t1645 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m27589_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m27590_gshared (Dictionary_2_t1645 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m27590(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1645 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2_GetObjectData_m27590_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m27591_gshared (Dictionary_2_t1645 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m27591(__this, ___sender, method) (( void (*) (Dictionary_2_t1645 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m27591_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m27592_gshared (Dictionary_2_t1645 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m27592(__this, ___key, method) (( bool (*) (Dictionary_2_t1645 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m27592_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m27593_gshared (Dictionary_2_t1645 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m27593(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1645 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m27593_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t4053 * Dictionary_2_get_Keys_m27594_gshared (Dictionary_2_t1645 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m27594(__this, method) (( KeyCollection_t4053 * (*) (Dictionary_2_t1645 *, const MethodInfo*))Dictionary_2_get_Keys_m27594_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t4057 * Dictionary_2_get_Values_m27595_gshared (Dictionary_2_t1645 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m27595(__this, method) (( ValueCollection_t4057 * (*) (Dictionary_2_t1645 *, const MethodInfo*))Dictionary_2_get_Values_m27595_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m27596_gshared (Dictionary_2_t1645 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m27596(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1645 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m27596_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m27597_gshared (Dictionary_2_t1645 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m27597(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1645 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m27597_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m27598_gshared (Dictionary_2_t1645 * __this, KeyValuePair_2_t4051  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m27598(__this, ___pair, method) (( bool (*) (Dictionary_2_t1645 *, KeyValuePair_2_t4051 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m27598_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t4055  Dictionary_2_GetEnumerator_m27599_gshared (Dictionary_2_t1645 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m27599(__this, method) (( Enumerator_t4055  (*) (Dictionary_2_t1645 *, const MethodInfo*))Dictionary_2_GetEnumerator_m27599_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1710  Dictionary_2_U3CCopyToU3Em__0_m27600_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m27600(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1710  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m27600_gshared)(__this /* static, unused */, ___key, ___value, method)
