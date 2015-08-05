#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8270;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8983;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8636;
// System.Collections.ICollection
struct ICollection_t706;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Int32>
struct KeyCollection_t8271;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Int32>
struct ValueCollection_t8275;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t5935;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>
struct IDictionary_2_t8266;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>[]
struct KeyValuePair_2U5BU5D_t9483;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>>
struct IEnumerator_1_t9484;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_130.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__61.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m58991_gshared (Dictionary_2_t8270 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m58991(__this, method) (( void (*) (Dictionary_2_t8270 *, const MethodInfo*))Dictionary_2__ctor_m58991_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m58992_gshared (Dictionary_2_t8270 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m58992(__this, ___comparer, method) (( void (*) (Dictionary_2_t8270 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m58992_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m58993_gshared (Dictionary_2_t8270 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m58993(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8270 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m58993_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m58994_gshared (Dictionary_2_t8270 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m58994(__this, ___capacity, method) (( void (*) (Dictionary_2_t8270 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m58994_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m58995_gshared (Dictionary_2_t8270 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m58995(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8270 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m58995_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m58996_gshared (Dictionary_2_t8270 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m58996(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8270 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m58996_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m58997_gshared (Dictionary_2_t8270 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m58997(__this, method) (( Object_t* (*) (Dictionary_2_t8270 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m58997_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m58998_gshared (Dictionary_2_t8270 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m58998(__this, method) (( Object_t* (*) (Dictionary_2_t8270 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m58998_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m58999_gshared (Dictionary_2_t8270 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m58999(__this, method) (( Object_t * (*) (Dictionary_2_t8270 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m58999_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m59000_gshared (Dictionary_2_t8270 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m59000(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8270 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m59000_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m59001_gshared (Dictionary_2_t8270 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m59001(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8270 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m59001_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m59002_gshared (Dictionary_2_t8270 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m59002(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8270 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m59002_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m59003_gshared (Dictionary_2_t8270 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m59003(__this, ___key, method) (( bool (*) (Dictionary_2_t8270 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m59003_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m59004_gshared (Dictionary_2_t8270 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m59004(__this, ___key, method) (( void (*) (Dictionary_2_t8270 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m59004_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m59005_gshared (Dictionary_2_t8270 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m59005(__this, method) (( bool (*) (Dictionary_2_t8270 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m59005_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m59006_gshared (Dictionary_2_t8270 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m59006(__this, method) (( Object_t * (*) (Dictionary_2_t8270 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m59006_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m59007_gshared (Dictionary_2_t8270 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m59007(__this, method) (( bool (*) (Dictionary_2_t8270 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m59007_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m59008_gshared (Dictionary_2_t8270 * __this, KeyValuePair_2_t8267  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m59008(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8270 *, KeyValuePair_2_t8267 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m59008_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m59009_gshared (Dictionary_2_t8270 * __this, KeyValuePair_2_t8267  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m59009(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8270 *, KeyValuePair_2_t8267 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m59009_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m59010_gshared (Dictionary_2_t8270 * __this, KeyValuePair_2U5BU5D_t9483* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m59010(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8270 *, KeyValuePair_2U5BU5D_t9483*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m59010_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m59011_gshared (Dictionary_2_t8270 * __this, KeyValuePair_2_t8267  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m59011(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8270 *, KeyValuePair_2_t8267 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m59011_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m59012_gshared (Dictionary_2_t8270 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m59012(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8270 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m59012_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m59013_gshared (Dictionary_2_t8270 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m59013(__this, method) (( Object_t * (*) (Dictionary_2_t8270 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m59013_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m59014_gshared (Dictionary_2_t8270 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m59014(__this, method) (( Object_t* (*) (Dictionary_2_t8270 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m59014_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m59015_gshared (Dictionary_2_t8270 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m59015(__this, method) (( Object_t * (*) (Dictionary_2_t8270 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m59015_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m59016_gshared (Dictionary_2_t8270 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m59016(__this, method) (( int32_t (*) (Dictionary_2_t8270 *, const MethodInfo*))Dictionary_2_get_Count_m59016_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m59017_gshared (Dictionary_2_t8270 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m59017(__this, ___key, method) (( int32_t (*) (Dictionary_2_t8270 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m59017_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m59018_gshared (Dictionary_2_t8270 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m59018(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8270 *, int64_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m59018_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m59019_gshared (Dictionary_2_t8270 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m59019(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8270 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m59019_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m59020_gshared (Dictionary_2_t8270 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m59020(__this, ___size, method) (( void (*) (Dictionary_2_t8270 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m59020_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m59021_gshared (Dictionary_2_t8270 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m59021(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8270 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m59021_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8267  Dictionary_2_make_pair_m59022_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m59022(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8267  (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m59022_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m59023_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m59023(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m59023_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m59024_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m59024(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m59024_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m59025_gshared (Dictionary_2_t8270 * __this, KeyValuePair_2U5BU5D_t9483* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m59025(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8270 *, KeyValuePair_2U5BU5D_t9483*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m59025_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m59026_gshared (Dictionary_2_t8270 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m59026(__this, method) (( void (*) (Dictionary_2_t8270 *, const MethodInfo*))Dictionary_2_Resize_m59026_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m59027_gshared (Dictionary_2_t8270 * __this, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m59027(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8270 *, int64_t, int32_t, const MethodInfo*))Dictionary_2_Add_m59027_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m59028_gshared (Dictionary_2_t8270 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m59028(__this, method) (( void (*) (Dictionary_2_t8270 *, const MethodInfo*))Dictionary_2_Clear_m59028_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m59029_gshared (Dictionary_2_t8270 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m59029(__this, ___key, method) (( bool (*) (Dictionary_2_t8270 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m59029_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m59030_gshared (Dictionary_2_t8270 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m59030(__this, ___value, method) (( bool (*) (Dictionary_2_t8270 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m59030_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m59031_gshared (Dictionary_2_t8270 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m59031(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8270 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m59031_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m59032_gshared (Dictionary_2_t8270 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m59032(__this, ___sender, method) (( void (*) (Dictionary_2_t8270 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m59032_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m59033_gshared (Dictionary_2_t8270 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m59033(__this, ___key, method) (( bool (*) (Dictionary_2_t8270 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m59033_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m59034_gshared (Dictionary_2_t8270 * __this, int64_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m59034(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8270 *, int64_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m59034_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Keys()
extern "C" KeyCollection_t8271 * Dictionary_2_get_Keys_m59035_gshared (Dictionary_2_t8270 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m59035(__this, method) (( KeyCollection_t8271 * (*) (Dictionary_2_t8270 *, const MethodInfo*))Dictionary_2_get_Keys_m59035_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::get_Values()
extern "C" ValueCollection_t8275 * Dictionary_2_get_Values_m59036_gshared (Dictionary_2_t8270 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m59036(__this, method) (( ValueCollection_t8275 * (*) (Dictionary_2_t8270 *, const MethodInfo*))Dictionary_2_get_Values_m59036_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m59037_gshared (Dictionary_2_t8270 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m59037(__this, ___key, method) (( int64_t (*) (Dictionary_2_t8270 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m59037_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m59038_gshared (Dictionary_2_t8270 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m59038(__this, ___value, method) (( int32_t (*) (Dictionary_2_t8270 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m59038_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m59039_gshared (Dictionary_2_t8270 * __this, KeyValuePair_2_t8267  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m59039(__this, ___pair, method) (( bool (*) (Dictionary_2_t8270 *, KeyValuePair_2_t8267 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m59039_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8273  Dictionary_2_GetEnumerator_m59040_gshared (Dictionary_2_t8270 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m59040(__this, method) (( Enumerator_t8273  (*) (Dictionary_2_t8270 *, const MethodInfo*))Dictionary_2_GetEnumerator_m59040_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2090  Dictionary_2_U3CCopyToU3Em__0_m59041_gshared (Object_t * __this /* static, unused */, int64_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m59041(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, int64_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m59041_gshared)(__this /* static, unused */, ___key, ___value, method)
