#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t5935;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8981;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1170;
// System.Collections.ICollection
struct ICollection_t704;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t5936;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_t5940;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t5933;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Object>
struct IDictionary_2_t5927;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2869;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t8982;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct IEnumerator_1_t8983;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3911;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_39.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__34.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m30399_gshared (Dictionary_2_t5935 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m30399(__this, method) (( void (*) (Dictionary_2_t5935 *, const MethodInfo*))Dictionary_2__ctor_m30399_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m30400_gshared (Dictionary_2_t5935 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m30400(__this, ___comparer, method) (( void (*) (Dictionary_2_t5935 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m30400_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m30401_gshared (Dictionary_2_t5935 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m30401(__this, ___dictionary, method) (( void (*) (Dictionary_2_t5935 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m30401_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m30402_gshared (Dictionary_2_t5935 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m30402(__this, ___capacity, method) (( void (*) (Dictionary_2_t5935 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m30402_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m30403_gshared (Dictionary_2_t5935 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m30403(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t5935 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m30403_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m30404_gshared (Dictionary_2_t5935 * __this, SerializationInfo_t2869 * ___info, StreamingContext_t2870  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m30404(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5935 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2__ctor_m30404_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30405_gshared (Dictionary_2_t5935 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30405(__this, method) (( Object_t* (*) (Dictionary_2_t5935 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m30405_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30406_gshared (Dictionary_2_t5935 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30406(__this, method) (( Object_t* (*) (Dictionary_2_t5935 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m30406_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m30407_gshared (Dictionary_2_t5935 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m30407(__this, method) (( Object_t * (*) (Dictionary_2_t5935 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m30407_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m30408_gshared (Dictionary_2_t5935 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m30408(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5935 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m30408_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m30409_gshared (Dictionary_2_t5935 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m30409(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5935 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m30409_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m30410_gshared (Dictionary_2_t5935 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m30410(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5935 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m30410_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m30411_gshared (Dictionary_2_t5935 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m30411(__this, ___key, method) (( bool (*) (Dictionary_2_t5935 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m30411_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m30412_gshared (Dictionary_2_t5935 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m30412(__this, ___key, method) (( void (*) (Dictionary_2_t5935 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m30412_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m30413_gshared (Dictionary_2_t5935 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m30413(__this, method) (( bool (*) (Dictionary_2_t5935 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m30413_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m30414_gshared (Dictionary_2_t5935 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m30414(__this, method) (( Object_t * (*) (Dictionary_2_t5935 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m30414_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30415_gshared (Dictionary_2_t5935 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30415(__this, method) (( bool (*) (Dictionary_2_t5935 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30415_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30416_gshared (Dictionary_2_t5935 * __this, KeyValuePair_2_t5930  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30416(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t5935 *, KeyValuePair_2_t5930 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m30416_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m30417_gshared (Dictionary_2_t5935 * __this, KeyValuePair_2_t5930  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m30417(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5935 *, KeyValuePair_2_t5930 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m30417_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30418_gshared (Dictionary_2_t5935 * __this, KeyValuePair_2U5BU5D_t8982* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30418(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5935 *, KeyValuePair_2U5BU5D_t8982*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m30418_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m30419_gshared (Dictionary_2_t5935 * __this, KeyValuePair_2_t5930  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m30419(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5935 *, KeyValuePair_2_t5930 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m30419_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m30420_gshared (Dictionary_2_t5935 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m30420(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5935 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m30420_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30421_gshared (Dictionary_2_t5935 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30421(__this, method) (( Object_t * (*) (Dictionary_2_t5935 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m30421_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30422_gshared (Dictionary_2_t5935 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30422(__this, method) (( Object_t* (*) (Dictionary_2_t5935 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30422_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m30423_gshared (Dictionary_2_t5935 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m30423(__this, method) (( Object_t * (*) (Dictionary_2_t5935 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m30423_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m30424_gshared (Dictionary_2_t5935 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m30424(__this, method) (( int32_t (*) (Dictionary_2_t5935 *, const MethodInfo*))Dictionary_2_get_Count_m30424_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m30425_gshared (Dictionary_2_t5935 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m30425(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5935 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m30425_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m30426_gshared (Dictionary_2_t5935 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m30426(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5935 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m30426_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m30427_gshared (Dictionary_2_t5935 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m30427(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t5935 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m30427_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m30428_gshared (Dictionary_2_t5935 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m30428(__this, ___size, method) (( void (*) (Dictionary_2_t5935 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m30428_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m30429_gshared (Dictionary_2_t5935 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m30429(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5935 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m30429_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5930  Dictionary_2_make_pair_m30430_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m30430(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5930  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m30430_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m30431_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m30431(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m30431_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m30432_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m30432(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m30432_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m30433_gshared (Dictionary_2_t5935 * __this, KeyValuePair_2U5BU5D_t8982* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m30433(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5935 *, KeyValuePair_2U5BU5D_t8982*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m30433_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m30434_gshared (Dictionary_2_t5935 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m30434(__this, method) (( void (*) (Dictionary_2_t5935 *, const MethodInfo*))Dictionary_2_Resize_m30434_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m30435_gshared (Dictionary_2_t5935 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m30435(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5935 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m30435_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m30436_gshared (Dictionary_2_t5935 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m30436(__this, method) (( void (*) (Dictionary_2_t5935 *, const MethodInfo*))Dictionary_2_Clear_m30436_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m30437_gshared (Dictionary_2_t5935 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m30437(__this, ___key, method) (( bool (*) (Dictionary_2_t5935 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m30437_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m30438_gshared (Dictionary_2_t5935 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m30438(__this, ___value, method) (( bool (*) (Dictionary_2_t5935 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m30438_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m30439_gshared (Dictionary_2_t5935 * __this, SerializationInfo_t2869 * ___info, StreamingContext_t2870  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m30439(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5935 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2_GetObjectData_m30439_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m30440_gshared (Dictionary_2_t5935 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m30440(__this, ___sender, method) (( void (*) (Dictionary_2_t5935 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m30440_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m30441_gshared (Dictionary_2_t5935 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m30441(__this, ___key, method) (( bool (*) (Dictionary_2_t5935 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m30441_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m30442_gshared (Dictionary_2_t5935 * __this, int64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m30442(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t5935 *, int64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m30442_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Keys()
extern "C" KeyCollection_t5936 * Dictionary_2_get_Keys_m30443_gshared (Dictionary_2_t5935 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m30443(__this, method) (( KeyCollection_t5936 * (*) (Dictionary_2_t5935 *, const MethodInfo*))Dictionary_2_get_Keys_m30443_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Values()
extern "C" ValueCollection_t5940 * Dictionary_2_get_Values_m30444_gshared (Dictionary_2_t5935 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m30444(__this, method) (( ValueCollection_t5940 * (*) (Dictionary_2_t5935 *, const MethodInfo*))Dictionary_2_get_Values_m30444_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m30445_gshared (Dictionary_2_t5935 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m30445(__this, ___key, method) (( int64_t (*) (Dictionary_2_t5935 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m30445_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m30446_gshared (Dictionary_2_t5935 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m30446(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t5935 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m30446_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m30447_gshared (Dictionary_2_t5935 * __this, KeyValuePair_2_t5930  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m30447(__this, ___pair, method) (( bool (*) (Dictionary_2_t5935 *, KeyValuePair_2_t5930 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m30447_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t5938  Dictionary_2_GetEnumerator_m30448_gshared (Dictionary_2_t5935 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m30448(__this, method) (( Enumerator_t5938  (*) (Dictionary_2_t5935 *, const MethodInfo*))Dictionary_2_GetEnumerator_m30448_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2088  Dictionary_2_U3CCopyToU3Em__0_m30449_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m30449(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2088  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m30449_gshared)(__this /* static, unused */, ___key, ___value, method)
