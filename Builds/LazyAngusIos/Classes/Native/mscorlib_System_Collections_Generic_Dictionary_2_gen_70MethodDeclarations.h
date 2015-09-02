#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8482;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9120;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t8483;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t8487;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1204;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t9662;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7722;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t7284;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__65.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m61493_gshared (Dictionary_2_t8482 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m61493(__this, method) (( void (*) (Dictionary_2_t8482 *, const MethodInfo*))Dictionary_2__ctor_m61493_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61495_gshared (Dictionary_2_t8482 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61495(__this, ___comparer, method) (( void (*) (Dictionary_2_t8482 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61495_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m61497_gshared (Dictionary_2_t8482 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m61497(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8482 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61497_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m61499_gshared (Dictionary_2_t8482 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m61499(__this, ___capacity, method) (( void (*) (Dictionary_2_t8482 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m61499_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61501_gshared (Dictionary_2_t8482 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61501(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8482 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61501_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m61503_gshared (Dictionary_2_t8482 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m61503(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8482 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m61503_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61505_gshared (Dictionary_2_t8482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61505(__this, method) (( Object_t* (*) (Dictionary_2_t8482 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61505_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61507_gshared (Dictionary_2_t8482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61507(__this, method) (( Object_t* (*) (Dictionary_2_t8482 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61507_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m61509_gshared (Dictionary_2_t8482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m61509(__this, method) (( Object_t * (*) (Dictionary_2_t8482 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m61509_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m61511_gshared (Dictionary_2_t8482 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m61511(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8482 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m61511_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m61513_gshared (Dictionary_2_t8482 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m61513(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8482 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m61513_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m61515_gshared (Dictionary_2_t8482 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m61515(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8482 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m61515_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m61517_gshared (Dictionary_2_t8482 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m61517(__this, ___key, method) (( bool (*) (Dictionary_2_t8482 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m61517_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m61519_gshared (Dictionary_2_t8482 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m61519(__this, ___key, method) (( void (*) (Dictionary_2_t8482 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m61519_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61521_gshared (Dictionary_2_t8482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61521(__this, method) (( bool (*) (Dictionary_2_t8482 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61521_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61523_gshared (Dictionary_2_t8482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61523(__this, method) (( Object_t * (*) (Dictionary_2_t8482 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61523_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61525_gshared (Dictionary_2_t8482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61525(__this, method) (( bool (*) (Dictionary_2_t8482 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61525_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61527_gshared (Dictionary_2_t8482 * __this, KeyValuePair_2_t7279  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61527(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8482 *, KeyValuePair_2_t7279 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61527_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61529_gshared (Dictionary_2_t8482 * __this, KeyValuePair_2_t7279  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61529(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8482 *, KeyValuePair_2_t7279 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61529_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61531_gshared (Dictionary_2_t8482 * __this, KeyValuePair_2U5BU5D_t7722* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61531(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8482 *, KeyValuePair_2U5BU5D_t7722*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61531_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61533_gshared (Dictionary_2_t8482 * __this, KeyValuePair_2_t7279  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61533(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8482 *, KeyValuePair_2_t7279 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61533_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m61535_gshared (Dictionary_2_t8482 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m61535(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8482 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m61535_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61537_gshared (Dictionary_2_t8482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61537(__this, method) (( Object_t * (*) (Dictionary_2_t8482 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61537_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61539_gshared (Dictionary_2_t8482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61539(__this, method) (( Object_t* (*) (Dictionary_2_t8482 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61539_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61541_gshared (Dictionary_2_t8482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61541(__this, method) (( Object_t * (*) (Dictionary_2_t8482 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61541_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m61543_gshared (Dictionary_2_t8482 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m61543(__this, method) (( int32_t (*) (Dictionary_2_t8482 *, const MethodInfo*))Dictionary_2_get_Count_m61543_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m61545_gshared (Dictionary_2_t8482 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m61545(__this, ___key, method) (( int64_t (*) (Dictionary_2_t8482 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m61545_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m61547_gshared (Dictionary_2_t8482 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m61547(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8482 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m61547_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m61549_gshared (Dictionary_2_t8482 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m61549(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8482 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m61549_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m61551_gshared (Dictionary_2_t8482 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m61551(__this, ___size, method) (( void (*) (Dictionary_2_t8482 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m61551_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m61553_gshared (Dictionary_2_t8482 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m61553(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8482 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m61553_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7279  Dictionary_2_make_pair_m61555_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m61555(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7279  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m61555_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m61557_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m61557(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m61557_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m61559_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m61559(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m61559_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m61561_gshared (Dictionary_2_t8482 * __this, KeyValuePair_2U5BU5D_t7722* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m61561(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8482 *, KeyValuePair_2U5BU5D_t7722*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m61561_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m61563_gshared (Dictionary_2_t8482 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m61563(__this, method) (( void (*) (Dictionary_2_t8482 *, const MethodInfo*))Dictionary_2_Resize_m61563_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m61565_gshared (Dictionary_2_t8482 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m61565(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8482 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m61565_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m61567_gshared (Dictionary_2_t8482 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m61567(__this, method) (( void (*) (Dictionary_2_t8482 *, const MethodInfo*))Dictionary_2_Clear_m61567_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m61569_gshared (Dictionary_2_t8482 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m61569(__this, ___key, method) (( bool (*) (Dictionary_2_t8482 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m61569_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m61571_gshared (Dictionary_2_t8482 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m61571(__this, ___value, method) (( bool (*) (Dictionary_2_t8482 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m61571_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m61573_gshared (Dictionary_2_t8482 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m61573(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8482 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m61573_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m61575_gshared (Dictionary_2_t8482 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m61575(__this, ___sender, method) (( void (*) (Dictionary_2_t8482 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m61575_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m61577_gshared (Dictionary_2_t8482 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m61577(__this, ___key, method) (( bool (*) (Dictionary_2_t8482 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m61577_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m61579_gshared (Dictionary_2_t8482 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m61579(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8482 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m61579_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t8483 * Dictionary_2_get_Keys_m61581_gshared (Dictionary_2_t8482 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m61581(__this, method) (( KeyCollection_t8483 * (*) (Dictionary_2_t8482 *, const MethodInfo*))Dictionary_2_get_Keys_m61581_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t8487 * Dictionary_2_get_Values_m61583_gshared (Dictionary_2_t8482 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m61583(__this, method) (( ValueCollection_t8487 * (*) (Dictionary_2_t8482 *, const MethodInfo*))Dictionary_2_get_Values_m61583_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m61585_gshared (Dictionary_2_t8482 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m61585(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8482 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m61585_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m61587_gshared (Dictionary_2_t8482 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m61587(__this, ___value, method) (( int64_t (*) (Dictionary_2_t8482 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m61587_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m61589_gshared (Dictionary_2_t8482 * __this, KeyValuePair_2_t7279  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m61589(__this, ___pair, method) (( bool (*) (Dictionary_2_t8482 *, KeyValuePair_2_t7279 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m61589_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t8485  Dictionary_2_GetEnumerator_m61591_gshared (Dictionary_2_t8482 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m61591(__this, method) (( Enumerator_t8485  (*) (Dictionary_2_t8482 *, const MethodInfo*))Dictionary_2_GetEnumerator_m61591_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__0_m61593_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m61593(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m61593_gshared)(__this /* static, unused */, ___key, ___value, method)
