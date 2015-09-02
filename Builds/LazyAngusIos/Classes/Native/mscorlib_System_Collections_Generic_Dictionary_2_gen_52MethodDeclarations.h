#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6044;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9120;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t6045;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_t6049;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6042;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Object>
struct IDictionary_2_t6036;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t9121;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct IEnumerator_1_t9122;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__35.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m31543_gshared (Dictionary_2_t6044 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m31543(__this, method) (( void (*) (Dictionary_2_t6044 *, const MethodInfo*))Dictionary_2__ctor_m31543_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31544_gshared (Dictionary_2_t6044 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m31544(__this, ___comparer, method) (( void (*) (Dictionary_2_t6044 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31544_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m31545_gshared (Dictionary_2_t6044 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m31545(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6044 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31545_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m31546_gshared (Dictionary_2_t6044 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m31546(__this, ___capacity, method) (( void (*) (Dictionary_2_t6044 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m31546_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31547_gshared (Dictionary_2_t6044 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m31547(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6044 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m31547_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m31548_gshared (Dictionary_2_t6044 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m31548(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6044 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m31548_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31549_gshared (Dictionary_2_t6044 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31549(__this, method) (( Object_t* (*) (Dictionary_2_t6044 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31549_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31550_gshared (Dictionary_2_t6044 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31550(__this, method) (( Object_t* (*) (Dictionary_2_t6044 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31550_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m31551_gshared (Dictionary_2_t6044 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m31551(__this, method) (( Object_t * (*) (Dictionary_2_t6044 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m31551_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m31552_gshared (Dictionary_2_t6044 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m31552(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6044 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m31552_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m31553_gshared (Dictionary_2_t6044 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m31553(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6044 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m31553_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m31554_gshared (Dictionary_2_t6044 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m31554(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6044 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m31554_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m31555_gshared (Dictionary_2_t6044 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m31555(__this, ___key, method) (( bool (*) (Dictionary_2_t6044 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m31555_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m31556_gshared (Dictionary_2_t6044 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m31556(__this, ___key, method) (( void (*) (Dictionary_2_t6044 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m31556_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31557_gshared (Dictionary_2_t6044 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31557(__this, method) (( bool (*) (Dictionary_2_t6044 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31557_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31558_gshared (Dictionary_2_t6044 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31558(__this, method) (( Object_t * (*) (Dictionary_2_t6044 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31558_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31559_gshared (Dictionary_2_t6044 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31559(__this, method) (( bool (*) (Dictionary_2_t6044 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31559_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31560_gshared (Dictionary_2_t6044 * __this, KeyValuePair_2_t6039  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31560(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6044 *, KeyValuePair_2_t6039 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31560_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31561_gshared (Dictionary_2_t6044 * __this, KeyValuePair_2_t6039  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31561(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6044 *, KeyValuePair_2_t6039 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31561_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31562_gshared (Dictionary_2_t6044 * __this, KeyValuePair_2U5BU5D_t9121* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31562(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6044 *, KeyValuePair_2U5BU5D_t9121*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31562_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31563_gshared (Dictionary_2_t6044 * __this, KeyValuePair_2_t6039  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31563(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6044 *, KeyValuePair_2_t6039 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31563_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m31564_gshared (Dictionary_2_t6044 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m31564(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6044 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m31564_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31565_gshared (Dictionary_2_t6044 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31565(__this, method) (( Object_t * (*) (Dictionary_2_t6044 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31565_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31566_gshared (Dictionary_2_t6044 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31566(__this, method) (( Object_t* (*) (Dictionary_2_t6044 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31566_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31567_gshared (Dictionary_2_t6044 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31567(__this, method) (( Object_t * (*) (Dictionary_2_t6044 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31567_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m31568_gshared (Dictionary_2_t6044 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m31568(__this, method) (( int32_t (*) (Dictionary_2_t6044 *, const MethodInfo*))Dictionary_2_get_Count_m31568_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m31569_gshared (Dictionary_2_t6044 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m31569(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6044 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m31569_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m31570_gshared (Dictionary_2_t6044 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m31570(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6044 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m31570_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m31571_gshared (Dictionary_2_t6044 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m31571(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6044 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m31571_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m31572_gshared (Dictionary_2_t6044 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m31572(__this, ___size, method) (( void (*) (Dictionary_2_t6044 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m31572_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m31573_gshared (Dictionary_2_t6044 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m31573(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6044 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m31573_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6039  Dictionary_2_make_pair_m31574_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m31574(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6039  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m31574_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m31575_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m31575(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m31575_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m31576_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m31576(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m31576_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m31577_gshared (Dictionary_2_t6044 * __this, KeyValuePair_2U5BU5D_t9121* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m31577(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6044 *, KeyValuePair_2U5BU5D_t9121*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m31577_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m31578_gshared (Dictionary_2_t6044 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m31578(__this, method) (( void (*) (Dictionary_2_t6044 *, const MethodInfo*))Dictionary_2_Resize_m31578_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m31579_gshared (Dictionary_2_t6044 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m31579(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6044 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m31579_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m31580_gshared (Dictionary_2_t6044 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m31580(__this, method) (( void (*) (Dictionary_2_t6044 *, const MethodInfo*))Dictionary_2_Clear_m31580_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m31581_gshared (Dictionary_2_t6044 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m31581(__this, ___key, method) (( bool (*) (Dictionary_2_t6044 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m31581_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m31582_gshared (Dictionary_2_t6044 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m31582(__this, ___value, method) (( bool (*) (Dictionary_2_t6044 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m31582_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m31583_gshared (Dictionary_2_t6044 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m31583(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6044 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m31583_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m31584_gshared (Dictionary_2_t6044 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m31584(__this, ___sender, method) (( void (*) (Dictionary_2_t6044 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m31584_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m31585_gshared (Dictionary_2_t6044 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m31585(__this, ___key, method) (( bool (*) (Dictionary_2_t6044 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m31585_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m31586_gshared (Dictionary_2_t6044 * __this, int64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m31586(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6044 *, int64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m31586_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Keys()
extern "C" KeyCollection_t6045 * Dictionary_2_get_Keys_m31587_gshared (Dictionary_2_t6044 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m31587(__this, method) (( KeyCollection_t6045 * (*) (Dictionary_2_t6044 *, const MethodInfo*))Dictionary_2_get_Keys_m31587_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Values()
extern "C" ValueCollection_t6049 * Dictionary_2_get_Values_m31588_gshared (Dictionary_2_t6044 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m31588(__this, method) (( ValueCollection_t6049 * (*) (Dictionary_2_t6044 *, const MethodInfo*))Dictionary_2_get_Values_m31588_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m31589_gshared (Dictionary_2_t6044 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m31589(__this, ___key, method) (( int64_t (*) (Dictionary_2_t6044 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m31589_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m31590_gshared (Dictionary_2_t6044 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m31590(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t6044 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m31590_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m31591_gshared (Dictionary_2_t6044 * __this, KeyValuePair_2_t6039  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m31591(__this, ___pair, method) (( bool (*) (Dictionary_2_t6044 *, KeyValuePair_2_t6039 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m31591_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t6047  Dictionary_2_GetEnumerator_m31592_gshared (Dictionary_2_t6044 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m31592(__this, method) (( Enumerator_t6047  (*) (Dictionary_2_t6044 *, const MethodInfo*))Dictionary_2_GetEnumerator_m31592_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__0_m31593_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m31593(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m31593_gshared)(__this /* static, unused */, ___key, ___value, method)
