#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8924;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9720;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9342;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>
struct KeyCollection_t8925;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>
struct ValueCollection_t8929;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6588;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>
struct IDictionary_2_t8920;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>[]
struct KeyValuePair_2U5BU5D_t10220;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
struct IEnumerator_1_t10221;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_131.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__62.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m64460_gshared (Dictionary_2_t8924 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m64460(__this, method) (( void (*) (Dictionary_2_t8924 *, const MethodInfo*))Dictionary_2__ctor_m64460_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m64461_gshared (Dictionary_2_t8924 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m64461(__this, ___comparer, method) (( void (*) (Dictionary_2_t8924 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m64461_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m64462_gshared (Dictionary_2_t8924 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m64462(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8924 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m64462_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m64463_gshared (Dictionary_2_t8924 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m64463(__this, ___capacity, method) (( void (*) (Dictionary_2_t8924 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m64463_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m64464_gshared (Dictionary_2_t8924 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m64464(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8924 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m64464_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m64465_gshared (Dictionary_2_t8924 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m64465(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8924 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m64465_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m64466_gshared (Dictionary_2_t8924 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m64466(__this, method) (( Object_t* (*) (Dictionary_2_t8924 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m64466_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m64467_gshared (Dictionary_2_t8924 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m64467(__this, method) (( Object_t* (*) (Dictionary_2_t8924 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m64467_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m64468_gshared (Dictionary_2_t8924 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m64468(__this, method) (( Object_t * (*) (Dictionary_2_t8924 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m64468_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m64469_gshared (Dictionary_2_t8924 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m64469(__this, method) (( Object_t * (*) (Dictionary_2_t8924 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m64469_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m64470_gshared (Dictionary_2_t8924 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m64470(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8924 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m64470_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m64471_gshared (Dictionary_2_t8924 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m64471(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8924 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m64471_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m64472_gshared (Dictionary_2_t8924 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m64472(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8924 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m64472_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m64473_gshared (Dictionary_2_t8924 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m64473(__this, ___key, method) (( bool (*) (Dictionary_2_t8924 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m64473_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m64474_gshared (Dictionary_2_t8924 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m64474(__this, ___key, method) (( void (*) (Dictionary_2_t8924 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m64474_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m64475_gshared (Dictionary_2_t8924 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m64475(__this, method) (( bool (*) (Dictionary_2_t8924 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m64475_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m64476_gshared (Dictionary_2_t8924 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m64476(__this, method) (( Object_t * (*) (Dictionary_2_t8924 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m64476_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m64477_gshared (Dictionary_2_t8924 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m64477(__this, method) (( bool (*) (Dictionary_2_t8924 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m64477_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m64478_gshared (Dictionary_2_t8924 * __this, KeyValuePair_2_t8921  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m64478(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8924 *, KeyValuePair_2_t8921 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m64478_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m64479_gshared (Dictionary_2_t8924 * __this, KeyValuePair_2_t8921  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m64479(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8924 *, KeyValuePair_2_t8921 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m64479_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m64480_gshared (Dictionary_2_t8924 * __this, KeyValuePair_2U5BU5D_t10220* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m64480(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8924 *, KeyValuePair_2U5BU5D_t10220*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m64480_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m64481_gshared (Dictionary_2_t8924 * __this, KeyValuePair_2_t8921  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m64481(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8924 *, KeyValuePair_2_t8921 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m64481_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m64482_gshared (Dictionary_2_t8924 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m64482(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8924 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m64482_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m64483_gshared (Dictionary_2_t8924 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m64483(__this, method) (( Object_t * (*) (Dictionary_2_t8924 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m64483_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m64484_gshared (Dictionary_2_t8924 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m64484(__this, method) (( Object_t* (*) (Dictionary_2_t8924 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m64484_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m64485_gshared (Dictionary_2_t8924 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m64485(__this, method) (( Object_t * (*) (Dictionary_2_t8924 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m64485_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m64486_gshared (Dictionary_2_t8924 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m64486(__this, method) (( int32_t (*) (Dictionary_2_t8924 *, const MethodInfo*))Dictionary_2_get_Count_m64486_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m64487_gshared (Dictionary_2_t8924 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m64487(__this, ___key, method) (( int32_t (*) (Dictionary_2_t8924 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m64487_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m64488_gshared (Dictionary_2_t8924 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m64488(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8924 *, int64_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m64488_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m64489_gshared (Dictionary_2_t8924 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m64489(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8924 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m64489_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m64490_gshared (Dictionary_2_t8924 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m64490(__this, ___size, method) (( void (*) (Dictionary_2_t8924 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m64490_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m64491_gshared (Dictionary_2_t8924 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m64491(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8924 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m64491_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8921  Dictionary_2_make_pair_m64492_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m64492(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8921  (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m64492_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m64493_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m64493(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m64493_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m64494_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m64494(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m64494_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m64495_gshared (Dictionary_2_t8924 * __this, KeyValuePair_2U5BU5D_t10220* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m64495(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8924 *, KeyValuePair_2U5BU5D_t10220*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m64495_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m64496_gshared (Dictionary_2_t8924 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m64496(__this, method) (( void (*) (Dictionary_2_t8924 *, const MethodInfo*))Dictionary_2_Resize_m64496_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m64497_gshared (Dictionary_2_t8924 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m64497(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8924 *, int64_t, int32_t, const MethodInfo*))Dictionary_2_Add_m64497_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m64498_gshared (Dictionary_2_t8924 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m64498(__this, method) (( void (*) (Dictionary_2_t8924 *, const MethodInfo*))Dictionary_2_Clear_m64498_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m64499_gshared (Dictionary_2_t8924 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m64499(__this, ___key, method) (( bool (*) (Dictionary_2_t8924 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m64499_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m64500_gshared (Dictionary_2_t8924 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m64500(__this, ___value, method) (( bool (*) (Dictionary_2_t8924 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m64500_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m64501_gshared (Dictionary_2_t8924 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m64501(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8924 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m64501_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m64502_gshared (Dictionary_2_t8924 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m64502(__this, ___sender, method) (( void (*) (Dictionary_2_t8924 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m64502_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m64503_gshared (Dictionary_2_t8924 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m64503(__this, ___key, method) (( bool (*) (Dictionary_2_t8924 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m64503_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m64504_gshared (Dictionary_2_t8924 * __this, int64_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m64504(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8924 *, int64_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m64504_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Keys()
extern "C" KeyCollection_t8925 * Dictionary_2_get_Keys_m64505_gshared (Dictionary_2_t8924 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m64505(__this, method) (( KeyCollection_t8925 * (*) (Dictionary_2_t8924 *, const MethodInfo*))Dictionary_2_get_Keys_m64505_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Values()
extern "C" ValueCollection_t8929 * Dictionary_2_get_Values_m64506_gshared (Dictionary_2_t8924 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m64506(__this, method) (( ValueCollection_t8929 * (*) (Dictionary_2_t8924 *, const MethodInfo*))Dictionary_2_get_Values_m64506_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m64507_gshared (Dictionary_2_t8924 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m64507(__this, ___key, method) (( int64_t (*) (Dictionary_2_t8924 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m64507_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m64508_gshared (Dictionary_2_t8924 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m64508(__this, ___value, method) (( int32_t (*) (Dictionary_2_t8924 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m64508_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m64509_gshared (Dictionary_2_t8924 * __this, KeyValuePair_2_t8921  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m64509(__this, ___pair, method) (( bool (*) (Dictionary_2_t8924 *, KeyValuePair_2_t8921 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m64509_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8927  Dictionary_2_GetEnumerator_m64510_gshared (Dictionary_2_t8924 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m64510(__this, method) (( Enumerator_t8927  (*) (Dictionary_2_t8924 *, const MethodInfo*))Dictionary_2_GetEnumerator_m64510_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2167  Dictionary_2_U3CCopyToU3Em__2_m64511_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m64511(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m64511_gshared)(__this /* static, unused */, ___key, ___value, method)
