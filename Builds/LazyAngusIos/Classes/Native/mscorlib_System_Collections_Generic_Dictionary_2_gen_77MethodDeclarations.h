#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4141;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8742;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t8682;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t8686;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5409;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t9763;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t9764;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t9765;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_143.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__74.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m64245_gshared (Dictionary_2_t4141 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m64245(__this, method) (( void (*) (Dictionary_2_t4141 *, const MethodInfo*))Dictionary_2__ctor_m64245_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m64246_gshared (Dictionary_2_t4141 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m64246(__this, ___comparer, method) (( void (*) (Dictionary_2_t4141 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m64246_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m64247_gshared (Dictionary_2_t4141 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m64247(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4141 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m64247_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m64248_gshared (Dictionary_2_t4141 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m64248(__this, ___capacity, method) (( void (*) (Dictionary_2_t4141 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m64248_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m64249_gshared (Dictionary_2_t4141 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m64249(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4141 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m64249_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m64250_gshared (Dictionary_2_t4141 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m64250(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4141 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m64250_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m64251_gshared (Dictionary_2_t4141 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m64251(__this, method) (( Object_t* (*) (Dictionary_2_t4141 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m64251_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m64252_gshared (Dictionary_2_t4141 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m64252(__this, method) (( Object_t* (*) (Dictionary_2_t4141 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m64252_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m64253_gshared (Dictionary_2_t4141 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m64253(__this, method) (( Object_t * (*) (Dictionary_2_t4141 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m64253_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m64254_gshared (Dictionary_2_t4141 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m64254(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4141 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m64254_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m64255_gshared (Dictionary_2_t4141 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m64255(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4141 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m64255_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m64256_gshared (Dictionary_2_t4141 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m64256(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4141 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m64256_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m64257_gshared (Dictionary_2_t4141 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m64257(__this, ___key, method) (( bool (*) (Dictionary_2_t4141 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m64257_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m64258_gshared (Dictionary_2_t4141 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m64258(__this, ___key, method) (( void (*) (Dictionary_2_t4141 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m64258_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m64259_gshared (Dictionary_2_t4141 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m64259(__this, method) (( bool (*) (Dictionary_2_t4141 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m64259_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m64260_gshared (Dictionary_2_t4141 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m64260(__this, method) (( Object_t * (*) (Dictionary_2_t4141 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m64260_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m64261_gshared (Dictionary_2_t4141 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m64261(__this, method) (( bool (*) (Dictionary_2_t4141 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m64261_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m64262_gshared (Dictionary_2_t4141 * __this, KeyValuePair_2_t8680  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m64262(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4141 *, KeyValuePair_2_t8680 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m64262_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m64263_gshared (Dictionary_2_t4141 * __this, KeyValuePair_2_t8680  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m64263(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4141 *, KeyValuePair_2_t8680 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m64263_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m64264_gshared (Dictionary_2_t4141 * __this, KeyValuePair_2U5BU5D_t9764* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m64264(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4141 *, KeyValuePair_2U5BU5D_t9764*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m64264_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m64265_gshared (Dictionary_2_t4141 * __this, KeyValuePair_2_t8680  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m64265(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4141 *, KeyValuePair_2_t8680 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m64265_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m64266_gshared (Dictionary_2_t4141 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m64266(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4141 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m64266_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m64267_gshared (Dictionary_2_t4141 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m64267(__this, method) (( Object_t * (*) (Dictionary_2_t4141 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m64267_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m64268_gshared (Dictionary_2_t4141 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m64268(__this, method) (( Object_t* (*) (Dictionary_2_t4141 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m64268_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m64269_gshared (Dictionary_2_t4141 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m64269(__this, method) (( Object_t * (*) (Dictionary_2_t4141 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m64269_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m64270_gshared (Dictionary_2_t4141 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m64270(__this, method) (( int32_t (*) (Dictionary_2_t4141 *, const MethodInfo*))Dictionary_2_get_Count_m64270_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m64271_gshared (Dictionary_2_t4141 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m64271(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4141 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m64271_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m64272_gshared (Dictionary_2_t4141 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m64272(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4141 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m64272_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m64273_gshared (Dictionary_2_t4141 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m64273(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4141 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m64273_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m64274_gshared (Dictionary_2_t4141 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m64274(__this, ___size, method) (( void (*) (Dictionary_2_t4141 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m64274_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m64275_gshared (Dictionary_2_t4141 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m64275(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4141 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m64275_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8680  Dictionary_2_make_pair_m64276_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m64276(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8680  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m64276_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m64277_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m64277(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m64277_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m64278_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m64278(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m64278_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m64279_gshared (Dictionary_2_t4141 * __this, KeyValuePair_2U5BU5D_t9764* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m64279(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4141 *, KeyValuePair_2U5BU5D_t9764*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m64279_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m64280_gshared (Dictionary_2_t4141 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m64280(__this, method) (( void (*) (Dictionary_2_t4141 *, const MethodInfo*))Dictionary_2_Resize_m64280_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m64281_gshared (Dictionary_2_t4141 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m64281(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4141 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m64281_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m64282_gshared (Dictionary_2_t4141 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m64282(__this, method) (( void (*) (Dictionary_2_t4141 *, const MethodInfo*))Dictionary_2_Clear_m64282_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m64283_gshared (Dictionary_2_t4141 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m64283(__this, ___key, method) (( bool (*) (Dictionary_2_t4141 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m64283_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m64284_gshared (Dictionary_2_t4141 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m64284(__this, ___value, method) (( bool (*) (Dictionary_2_t4141 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m64284_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m64285_gshared (Dictionary_2_t4141 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m64285(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4141 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m64285_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m64286_gshared (Dictionary_2_t4141 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m64286(__this, ___sender, method) (( void (*) (Dictionary_2_t4141 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m64286_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m64287_gshared (Dictionary_2_t4141 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m64287(__this, ___key, method) (( bool (*) (Dictionary_2_t4141 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m64287_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m64288_gshared (Dictionary_2_t4141 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m64288(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4141 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m64288_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t8682 * Dictionary_2_get_Keys_m64289_gshared (Dictionary_2_t4141 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m64289(__this, method) (( KeyCollection_t8682 * (*) (Dictionary_2_t4141 *, const MethodInfo*))Dictionary_2_get_Keys_m64289_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t8686 * Dictionary_2_get_Values_m64290_gshared (Dictionary_2_t4141 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m64290(__this, method) (( ValueCollection_t8686 * (*) (Dictionary_2_t4141 *, const MethodInfo*))Dictionary_2_get_Values_m64290_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m64291_gshared (Dictionary_2_t4141 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m64291(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4141 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m64291_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m64292_gshared (Dictionary_2_t4141 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m64292(__this, ___value, method) (( int32_t (*) (Dictionary_2_t4141 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m64292_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m64293_gshared (Dictionary_2_t4141 * __this, KeyValuePair_2_t8680  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m64293(__this, ___pair, method) (( bool (*) (Dictionary_2_t4141 *, KeyValuePair_2_t8680 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m64293_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8684  Dictionary_2_GetEnumerator_m64294_gshared (Dictionary_2_t4141 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m64294(__this, method) (( Enumerator_t8684  (*) (Dictionary_2_t4141 *, const MethodInfo*))Dictionary_2_GetEnumerator_m64294_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__0_m64295_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m64295(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m64295_gshared)(__this /* static, unused */, ___key, ___value, method)
