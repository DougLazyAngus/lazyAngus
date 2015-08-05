#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t6990;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1172;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8843;
// System.Collections.ICollection
struct ICollection_t706;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Single>
struct KeyCollection_t6991;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
struct ValueCollection_t6995;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1136;
// System.Collections.Generic.IDictionary`2<System.Object,System.Single>
struct IDictionary_2_t9215;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t7824;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t7206;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__49.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
extern "C" void Dictionary_2__ctor_m43911_gshared (Dictionary_2_t6990 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m43911(__this, method) (( void (*) (Dictionary_2_t6990 *, const MethodInfo*))Dictionary_2__ctor_m43911_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m43913_gshared (Dictionary_2_t6990 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m43913(__this, ___comparer, method) (( void (*) (Dictionary_2_t6990 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m43913_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m43915_gshared (Dictionary_2_t6990 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m43915(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6990 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m43915_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m43917_gshared (Dictionary_2_t6990 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m43917(__this, ___capacity, method) (( void (*) (Dictionary_2_t6990 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m43917_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m43919_gshared (Dictionary_2_t6990 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m43919(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6990 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m43919_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m43921_gshared (Dictionary_2_t6990 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m43921(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6990 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m43921_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m43923_gshared (Dictionary_2_t6990 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m43923(__this, method) (( Object_t* (*) (Dictionary_2_t6990 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m43923_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m43925_gshared (Dictionary_2_t6990 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m43925(__this, method) (( Object_t* (*) (Dictionary_2_t6990 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m43925_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m43927_gshared (Dictionary_2_t6990 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m43927(__this, method) (( Object_t * (*) (Dictionary_2_t6990 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m43927_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m43929_gshared (Dictionary_2_t6990 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m43929(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6990 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m43929_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m43931_gshared (Dictionary_2_t6990 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m43931(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6990 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m43931_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m43933_gshared (Dictionary_2_t6990 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m43933(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6990 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m43933_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m43935_gshared (Dictionary_2_t6990 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m43935(__this, ___key, method) (( bool (*) (Dictionary_2_t6990 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m43935_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m43937_gshared (Dictionary_2_t6990 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m43937(__this, ___key, method) (( void (*) (Dictionary_2_t6990 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m43937_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m43939_gshared (Dictionary_2_t6990 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m43939(__this, method) (( bool (*) (Dictionary_2_t6990 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m43939_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m43941_gshared (Dictionary_2_t6990 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m43941(__this, method) (( Object_t * (*) (Dictionary_2_t6990 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m43941_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m43943_gshared (Dictionary_2_t6990 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m43943(__this, method) (( bool (*) (Dictionary_2_t6990 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m43943_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m43945_gshared (Dictionary_2_t6990 * __this, KeyValuePair_2_t6930  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m43945(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6990 *, KeyValuePair_2_t6930 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m43945_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m43947_gshared (Dictionary_2_t6990 * __this, KeyValuePair_2_t6930  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m43947(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6990 *, KeyValuePair_2_t6930 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m43947_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m43949_gshared (Dictionary_2_t6990 * __this, KeyValuePair_2U5BU5D_t7824* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m43949(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6990 *, KeyValuePair_2U5BU5D_t7824*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m43949_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m43951_gshared (Dictionary_2_t6990 * __this, KeyValuePair_2_t6930  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m43951(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6990 *, KeyValuePair_2_t6930 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m43951_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m43953_gshared (Dictionary_2_t6990 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m43953(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6990 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m43953_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m43955_gshared (Dictionary_2_t6990 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m43955(__this, method) (( Object_t * (*) (Dictionary_2_t6990 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m43955_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m43957_gshared (Dictionary_2_t6990 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m43957(__this, method) (( Object_t* (*) (Dictionary_2_t6990 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m43957_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m43959_gshared (Dictionary_2_t6990 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m43959(__this, method) (( Object_t * (*) (Dictionary_2_t6990 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m43959_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m43961_gshared (Dictionary_2_t6990 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m43961(__this, method) (( int32_t (*) (Dictionary_2_t6990 *, const MethodInfo*))Dictionary_2_get_Count_m43961_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(TKey)
extern "C" float Dictionary_2_get_Item_m43963_gshared (Dictionary_2_t6990 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m43963(__this, ___key, method) (( float (*) (Dictionary_2_t6990 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m43963_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m43965_gshared (Dictionary_2_t6990 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m43965(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6990 *, Object_t *, float, const MethodInfo*))Dictionary_2_set_Item_m43965_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m43967_gshared (Dictionary_2_t6990 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m43967(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6990 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m43967_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m43969_gshared (Dictionary_2_t6990 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m43969(__this, ___size, method) (( void (*) (Dictionary_2_t6990 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m43969_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m43971_gshared (Dictionary_2_t6990 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m43971(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6990 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m43971_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6930  Dictionary_2_make_pair_m43973_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m43973(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6930  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_make_pair_m43973_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m43975_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m43975(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_key_m43975_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_value(TKey,TValue)
extern "C" float Dictionary_2_pick_value_m43977_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m43977(__this /* static, unused */, ___key, ___value, method) (( float (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_value_m43977_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m43979_gshared (Dictionary_2_t6990 * __this, KeyValuePair_2U5BU5D_t7824* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m43979(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6990 *, KeyValuePair_2U5BU5D_t7824*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m43979_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Resize()
extern "C" void Dictionary_2_Resize_m43981_gshared (Dictionary_2_t6990 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m43981(__this, method) (( void (*) (Dictionary_2_t6990 *, const MethodInfo*))Dictionary_2_Resize_m43981_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m43983_gshared (Dictionary_2_t6990 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_Add_m43983(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6990 *, Object_t *, float, const MethodInfo*))Dictionary_2_Add_m43983_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Clear()
extern "C" void Dictionary_2_Clear_m43985_gshared (Dictionary_2_t6990 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m43985(__this, method) (( void (*) (Dictionary_2_t6990 *, const MethodInfo*))Dictionary_2_Clear_m43985_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m43987_gshared (Dictionary_2_t6990 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m43987(__this, ___key, method) (( bool (*) (Dictionary_2_t6990 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m43987_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m43989_gshared (Dictionary_2_t6990 * __this, float ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m43989(__this, ___value, method) (( bool (*) (Dictionary_2_t6990 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m43989_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m43991_gshared (Dictionary_2_t6990 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m43991(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6990 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m43991_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m43993_gshared (Dictionary_2_t6990 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m43993(__this, ___sender, method) (( void (*) (Dictionary_2_t6990 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m43993_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m43995_gshared (Dictionary_2_t6990 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m43995(__this, ___key, method) (( bool (*) (Dictionary_2_t6990 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m43995_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m43997_gshared (Dictionary_2_t6990 * __this, Object_t * ___key, float* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m43997(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6990 *, Object_t *, float*, const MethodInfo*))Dictionary_2_TryGetValue_m43997_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Keys()
extern "C" KeyCollection_t6991 * Dictionary_2_get_Keys_m43999_gshared (Dictionary_2_t6990 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m43999(__this, method) (( KeyCollection_t6991 * (*) (Dictionary_2_t6990 *, const MethodInfo*))Dictionary_2_get_Keys_m43999_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Values()
extern "C" ValueCollection_t6995 * Dictionary_2_get_Values_m44001_gshared (Dictionary_2_t6990 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m44001(__this, method) (( ValueCollection_t6995 * (*) (Dictionary_2_t6990 *, const MethodInfo*))Dictionary_2_get_Values_m44001_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m44003_gshared (Dictionary_2_t6990 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m44003(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6990 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44003_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTValue(System.Object)
extern "C" float Dictionary_2_ToTValue_m44005_gshared (Dictionary_2_t6990 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m44005(__this, ___value, method) (( float (*) (Dictionary_2_t6990 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44005_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m44007_gshared (Dictionary_2_t6990 * __this, KeyValuePair_2_t6930  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m44007(__this, ___pair, method) (( bool (*) (Dictionary_2_t6990 *, KeyValuePair_2_t6930 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44007_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetEnumerator()
extern "C" Enumerator_t6993  Dictionary_2_GetEnumerator_m44009_gshared (Dictionary_2_t6990 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m44009(__this, method) (( Enumerator_t6993  (*) (Dictionary_2_t6990 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44009_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Single>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2090  Dictionary_2_U3CCopyToU3Em__0_m44011_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m44011(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44011_gshared)(__this /* static, unused */, ___key, ___value, method)
