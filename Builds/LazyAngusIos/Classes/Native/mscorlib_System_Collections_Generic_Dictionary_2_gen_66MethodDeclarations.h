#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7690;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1251;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9855;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>
struct KeyCollection_t7691;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
struct ValueCollection_t7695;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1215;
// System.Collections.Generic.IDictionary`2<System.Object,System.DateTime>
struct IDictionary_2_t9965;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t8552;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t8545;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__54.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor()
extern "C" void Dictionary_2__ctor_m49994_gshared (Dictionary_2_t7690 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m49994(__this, method) (( void (*) (Dictionary_2_t7690 *, const MethodInfo*))Dictionary_2__ctor_m49994_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m49996_gshared (Dictionary_2_t7690 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m49996(__this, ___comparer, method) (( void (*) (Dictionary_2_t7690 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49996_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m49998_gshared (Dictionary_2_t7690 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m49998(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7690 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49998_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m50000_gshared (Dictionary_2_t7690 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m50000(__this, ___capacity, method) (( void (*) (Dictionary_2_t7690 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m50000_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m50002_gshared (Dictionary_2_t7690 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m50002(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7690 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m50002_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m50004_gshared (Dictionary_2_t7690 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m50004(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7690 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m50004_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m50006_gshared (Dictionary_2_t7690 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m50006(__this, method) (( Object_t* (*) (Dictionary_2_t7690 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m50006_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m50008_gshared (Dictionary_2_t7690 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m50008(__this, method) (( Object_t* (*) (Dictionary_2_t7690 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m50008_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m50010_gshared (Dictionary_2_t7690 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m50010(__this, method) (( Object_t * (*) (Dictionary_2_t7690 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m50010_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m50012_gshared (Dictionary_2_t7690 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m50012(__this, method) (( Object_t * (*) (Dictionary_2_t7690 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m50012_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m50014_gshared (Dictionary_2_t7690 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m50014(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7690 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m50014_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m50016_gshared (Dictionary_2_t7690 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m50016(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7690 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m50016_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m50018_gshared (Dictionary_2_t7690 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m50018(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7690 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m50018_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m50020_gshared (Dictionary_2_t7690 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m50020(__this, ___key, method) (( bool (*) (Dictionary_2_t7690 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m50020_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m50022_gshared (Dictionary_2_t7690 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m50022(__this, ___key, method) (( void (*) (Dictionary_2_t7690 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m50022_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m50024_gshared (Dictionary_2_t7690 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m50024(__this, method) (( bool (*) (Dictionary_2_t7690 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m50024_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50026_gshared (Dictionary_2_t7690 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50026(__this, method) (( Object_t * (*) (Dictionary_2_t7690 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50026_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m50028_gshared (Dictionary_2_t7690 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m50028(__this, method) (( bool (*) (Dictionary_2_t7690 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m50028_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m50030_gshared (Dictionary_2_t7690 * __this, KeyValuePair_2_t7601  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m50030(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7690 *, KeyValuePair_2_t7601 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m50030_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m50032_gshared (Dictionary_2_t7690 * __this, KeyValuePair_2_t7601  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m50032(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7690 *, KeyValuePair_2_t7601 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m50032_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m50034_gshared (Dictionary_2_t7690 * __this, KeyValuePair_2U5BU5D_t8552* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m50034(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7690 *, KeyValuePair_2U5BU5D_t8552*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m50034_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m50036_gshared (Dictionary_2_t7690 * __this, KeyValuePair_2_t7601  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m50036(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7690 *, KeyValuePair_2_t7601 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m50036_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m50038_gshared (Dictionary_2_t7690 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m50038(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7690 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m50038_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50040_gshared (Dictionary_2_t7690 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50040(__this, method) (( Object_t * (*) (Dictionary_2_t7690 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50040_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m50042_gshared (Dictionary_2_t7690 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m50042(__this, method) (( Object_t* (*) (Dictionary_2_t7690 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m50042_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m50044_gshared (Dictionary_2_t7690 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m50044(__this, method) (( Object_t * (*) (Dictionary_2_t7690 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m50044_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m50046_gshared (Dictionary_2_t7690 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m50046(__this, method) (( int32_t (*) (Dictionary_2_t7690 *, const MethodInfo*))Dictionary_2_get_Count_m50046_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Item(TKey)
extern "C" DateTime_t287  Dictionary_2_get_Item_m50048_gshared (Dictionary_2_t7690 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m50048(__this, ___key, method) (( DateTime_t287  (*) (Dictionary_2_t7690 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m50048_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m50050_gshared (Dictionary_2_t7690 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m50050(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7690 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_set_Item_m50050_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m50052_gshared (Dictionary_2_t7690 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m50052(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7690 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m50052_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m50054_gshared (Dictionary_2_t7690 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m50054(__this, ___size, method) (( void (*) (Dictionary_2_t7690 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m50054_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m50056_gshared (Dictionary_2_t7690 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m50056(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7690 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m50056_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7601  Dictionary_2_make_pair_m50058_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m50058(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7601  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_make_pair_m50058_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m50060_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m50060(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_key_m50060_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_value(TKey,TValue)
extern "C" DateTime_t287  Dictionary_2_pick_value_m50062_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m50062(__this /* static, unused */, ___key, ___value, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_value_m50062_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m50064_gshared (Dictionary_2_t7690 * __this, KeyValuePair_2U5BU5D_t8552* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m50064(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7690 *, KeyValuePair_2U5BU5D_t8552*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m50064_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Resize()
extern "C" void Dictionary_2_Resize_m50066_gshared (Dictionary_2_t7690 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m50066(__this, method) (( void (*) (Dictionary_2_t7690 *, const MethodInfo*))Dictionary_2_Resize_m50066_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m50068_gshared (Dictionary_2_t7690 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m50068(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7690 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_Add_m50068_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Clear()
extern "C" void Dictionary_2_Clear_m50070_gshared (Dictionary_2_t7690 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m50070(__this, method) (( void (*) (Dictionary_2_t7690 *, const MethodInfo*))Dictionary_2_Clear_m50070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m50072_gshared (Dictionary_2_t7690 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m50072(__this, ___key, method) (( bool (*) (Dictionary_2_t7690 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m50072_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m50074_gshared (Dictionary_2_t7690 * __this, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m50074(__this, ___value, method) (( bool (*) (Dictionary_2_t7690 *, DateTime_t287 , const MethodInfo*))Dictionary_2_ContainsValue_m50074_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m50076_gshared (Dictionary_2_t7690 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m50076(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7690 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m50076_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m50078_gshared (Dictionary_2_t7690 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m50078(__this, ___sender, method) (( void (*) (Dictionary_2_t7690 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m50078_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m50080_gshared (Dictionary_2_t7690 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m50080(__this, ___key, method) (( bool (*) (Dictionary_2_t7690 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m50080_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m50082_gshared (Dictionary_2_t7690 * __this, Object_t * ___key, DateTime_t287 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m50082(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7690 *, Object_t *, DateTime_t287 *, const MethodInfo*))Dictionary_2_TryGetValue_m50082_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Keys()
extern "C" KeyCollection_t7691 * Dictionary_2_get_Keys_m50084_gshared (Dictionary_2_t7690 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m50084(__this, method) (( KeyCollection_t7691 * (*) (Dictionary_2_t7690 *, const MethodInfo*))Dictionary_2_get_Keys_m50084_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Values()
extern "C" ValueCollection_t7695 * Dictionary_2_get_Values_m50086_gshared (Dictionary_2_t7690 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m50086(__this, method) (( ValueCollection_t7695 * (*) (Dictionary_2_t7690 *, const MethodInfo*))Dictionary_2_get_Values_m50086_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m50088_gshared (Dictionary_2_t7690 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m50088(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7690 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m50088_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTValue(System.Object)
extern "C" DateTime_t287  Dictionary_2_ToTValue_m50090_gshared (Dictionary_2_t7690 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m50090(__this, ___value, method) (( DateTime_t287  (*) (Dictionary_2_t7690 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m50090_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m50092_gshared (Dictionary_2_t7690 * __this, KeyValuePair_2_t7601  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m50092(__this, ___pair, method) (( bool (*) (Dictionary_2_t7690 *, KeyValuePair_2_t7601 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m50092_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetEnumerator()
extern "C" Enumerator_t7693  Dictionary_2_GetEnumerator_m50094_gshared (Dictionary_2_t7690 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m50094(__this, method) (( Enumerator_t7693  (*) (Dictionary_2_t7690 *, const MethodInfo*))Dictionary_2_GetEnumerator_m50094_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2167  Dictionary_2_U3CCopyToU3Em__2_m50096_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m50096(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m50096_gshared)(__this /* static, unused */, ___key, ___value, method)
