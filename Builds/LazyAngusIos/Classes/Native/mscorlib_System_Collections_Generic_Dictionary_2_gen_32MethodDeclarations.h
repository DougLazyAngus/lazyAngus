#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3438;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1246;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4186;
// System.Collections.ICollection
struct ICollection_t600;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t3441;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t3445;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3345;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t4226;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t4227;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t4228;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1451;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m18609_gshared (Dictionary_2_t3438 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18609(__this, method) (( void (*) (Dictionary_2_t3438 *, const MethodInfo*))Dictionary_2__ctor_m18609_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18611_gshared (Dictionary_2_t3438 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18611(__this, ___comparer, method) (( void (*) (Dictionary_2_t3438 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18611_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m18613_gshared (Dictionary_2_t3438 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m18613(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3438 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18613_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18614_gshared (Dictionary_2_t3438 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18614(__this, ___capacity, method) (( void (*) (Dictionary_2_t3438 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18614_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18616_gshared (Dictionary_2_t3438 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18616(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3438 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18616_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18618_gshared (Dictionary_2_t3438 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18618(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3438 *, SerializationInfo_t1255 *, StreamingContext_t1256 , const MethodInfo*))Dictionary_2__ctor_m18618_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18620_gshared (Dictionary_2_t3438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18620(__this, method) (( Object_t* (*) (Dictionary_2_t3438 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18620_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18622_gshared (Dictionary_2_t3438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18622(__this, method) (( Object_t* (*) (Dictionary_2_t3438 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18622_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m18624_gshared (Dictionary_2_t3438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m18624(__this, method) (( Object_t * (*) (Dictionary_2_t3438 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m18624_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18626_gshared (Dictionary_2_t3438 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18626(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3438 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18626_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18628_gshared (Dictionary_2_t3438 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18628(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3438 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18628_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18630_gshared (Dictionary_2_t3438 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18630(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3438 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18630_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18632_gshared (Dictionary_2_t3438 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18632(__this, ___key, method) (( bool (*) (Dictionary_2_t3438 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18632_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18634_gshared (Dictionary_2_t3438 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18634(__this, ___key, method) (( void (*) (Dictionary_2_t3438 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18634_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18636_gshared (Dictionary_2_t3438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18636(__this, method) (( bool (*) (Dictionary_2_t3438 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18636_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18638_gshared (Dictionary_2_t3438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18638(__this, method) (( Object_t * (*) (Dictionary_2_t3438 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18638_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18640_gshared (Dictionary_2_t3438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18640(__this, method) (( bool (*) (Dictionary_2_t3438 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18640_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18642_gshared (Dictionary_2_t3438 * __this, KeyValuePair_2_t3439  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18642(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3438 *, KeyValuePair_2_t3439 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18642_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18644_gshared (Dictionary_2_t3438 * __this, KeyValuePair_2_t3439  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18644(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3438 *, KeyValuePair_2_t3439 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18644_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18646_gshared (Dictionary_2_t3438 * __this, KeyValuePair_2U5BU5D_t4227* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18646(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3438 *, KeyValuePair_2U5BU5D_t4227*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18646_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18648_gshared (Dictionary_2_t3438 * __this, KeyValuePair_2_t3439  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18648(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3438 *, KeyValuePair_2_t3439 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18648_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18650_gshared (Dictionary_2_t3438 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18650(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3438 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18650_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18652_gshared (Dictionary_2_t3438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18652(__this, method) (( Object_t * (*) (Dictionary_2_t3438 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18652_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18654_gshared (Dictionary_2_t3438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18654(__this, method) (( Object_t* (*) (Dictionary_2_t3438 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18654_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18656_gshared (Dictionary_2_t3438 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18656(__this, method) (( Object_t * (*) (Dictionary_2_t3438 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18656_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18658_gshared (Dictionary_2_t3438 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18658(__this, method) (( int32_t (*) (Dictionary_2_t3438 *, const MethodInfo*))Dictionary_2_get_Count_m18658_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m18660_gshared (Dictionary_2_t3438 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18660(__this, ___key, method) (( int32_t (*) (Dictionary_2_t3438 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18660_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18662_gshared (Dictionary_2_t3438 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18662(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3438 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m18662_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18664_gshared (Dictionary_2_t3438 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18664(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3438 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18664_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18666_gshared (Dictionary_2_t3438 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18666(__this, ___size, method) (( void (*) (Dictionary_2_t3438 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18666_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18668_gshared (Dictionary_2_t3438 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18668(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3438 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18668_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3439  Dictionary_2_make_pair_m18670_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18670(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3439  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m18670_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m18672_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m18672(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m18672_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m18674_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18674(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m18674_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18676_gshared (Dictionary_2_t3438 * __this, KeyValuePair_2U5BU5D_t4227* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18676(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3438 *, KeyValuePair_2U5BU5D_t4227*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18676_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m18678_gshared (Dictionary_2_t3438 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18678(__this, method) (( void (*) (Dictionary_2_t3438 *, const MethodInfo*))Dictionary_2_Resize_m18678_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18680_gshared (Dictionary_2_t3438 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18680(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3438 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m18680_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m18682_gshared (Dictionary_2_t3438 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18682(__this, method) (( void (*) (Dictionary_2_t3438 *, const MethodInfo*))Dictionary_2_Clear_m18682_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18684_gshared (Dictionary_2_t3438 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18684(__this, ___key, method) (( bool (*) (Dictionary_2_t3438 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18684_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18686_gshared (Dictionary_2_t3438 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18686(__this, ___value, method) (( bool (*) (Dictionary_2_t3438 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m18686_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18688_gshared (Dictionary_2_t3438 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18688(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3438 *, SerializationInfo_t1255 *, StreamingContext_t1256 , const MethodInfo*))Dictionary_2_GetObjectData_m18688_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18690_gshared (Dictionary_2_t3438 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18690(__this, ___sender, method) (( void (*) (Dictionary_2_t3438 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18690_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18692_gshared (Dictionary_2_t3438 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18692(__this, ___key, method) (( bool (*) (Dictionary_2_t3438 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18692_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18694_gshared (Dictionary_2_t3438 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18694(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3438 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m18694_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t3441 * Dictionary_2_get_Keys_m18696_gshared (Dictionary_2_t3438 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m18696(__this, method) (( KeyCollection_t3441 * (*) (Dictionary_2_t3438 *, const MethodInfo*))Dictionary_2_get_Keys_m18696_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t3445 * Dictionary_2_get_Values_m18698_gshared (Dictionary_2_t3438 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18698(__this, method) (( ValueCollection_t3445 * (*) (Dictionary_2_t3438 *, const MethodInfo*))Dictionary_2_get_Values_m18698_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18700_gshared (Dictionary_2_t3438 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18700(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3438 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18700_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m18702_gshared (Dictionary_2_t3438 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18702(__this, ___value, method) (( int32_t (*) (Dictionary_2_t3438 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18702_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18704_gshared (Dictionary_2_t3438 * __this, KeyValuePair_2_t3439  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18704(__this, ___pair, method) (( bool (*) (Dictionary_2_t3438 *, KeyValuePair_2_t3439 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18704_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t3443  Dictionary_2_GetEnumerator_m18706_gshared (Dictionary_2_t3438 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18706(__this, method) (( Enumerator_t3443  (*) (Dictionary_2_t3438 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18706_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1718  Dictionary_2_U3CCopyToU3Em__0_m18708_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18708(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1718  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18708_gshared)(__this /* static, unused */, ___key, ___value, method)
