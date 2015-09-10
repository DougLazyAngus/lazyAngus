#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4487;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9342;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t9263;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t9267;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5953;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t10383;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t10384;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t10385;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_145.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__76.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m18223_gshared (Dictionary_2_t4487 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18223(__this, method) (( void (*) (Dictionary_2_t4487 *, const MethodInfo*))Dictionary_2__ctor_m18223_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m69031_gshared (Dictionary_2_t4487 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m69031(__this, ___comparer, method) (( void (*) (Dictionary_2_t4487 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m69031_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m69032_gshared (Dictionary_2_t4487 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m69032(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4487 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m69032_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m69033_gshared (Dictionary_2_t4487 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m69033(__this, ___capacity, method) (( void (*) (Dictionary_2_t4487 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m69033_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m69034_gshared (Dictionary_2_t4487 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m69034(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4487 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m69034_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m69035_gshared (Dictionary_2_t4487 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m69035(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4487 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m69035_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m69036_gshared (Dictionary_2_t4487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m69036(__this, method) (( Object_t* (*) (Dictionary_2_t4487 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m69036_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m69037_gshared (Dictionary_2_t4487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m69037(__this, method) (( Object_t* (*) (Dictionary_2_t4487 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m69037_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m69038_gshared (Dictionary_2_t4487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m69038(__this, method) (( Object_t * (*) (Dictionary_2_t4487 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m69038_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m69039_gshared (Dictionary_2_t4487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m69039(__this, method) (( Object_t * (*) (Dictionary_2_t4487 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m69039_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m69040_gshared (Dictionary_2_t4487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m69040(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4487 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m69040_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m69041_gshared (Dictionary_2_t4487 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m69041(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4487 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m69041_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m69042_gshared (Dictionary_2_t4487 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m69042(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4487 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m69042_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m69043_gshared (Dictionary_2_t4487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m69043(__this, ___key, method) (( bool (*) (Dictionary_2_t4487 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m69043_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m69044_gshared (Dictionary_2_t4487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m69044(__this, ___key, method) (( void (*) (Dictionary_2_t4487 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m69044_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m69045_gshared (Dictionary_2_t4487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m69045(__this, method) (( bool (*) (Dictionary_2_t4487 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m69045_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m69046_gshared (Dictionary_2_t4487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m69046(__this, method) (( Object_t * (*) (Dictionary_2_t4487 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m69046_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m69047_gshared (Dictionary_2_t4487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m69047(__this, method) (( bool (*) (Dictionary_2_t4487 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m69047_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m69048_gshared (Dictionary_2_t4487 * __this, KeyValuePair_2_t9261  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m69048(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4487 *, KeyValuePair_2_t9261 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m69048_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m69049_gshared (Dictionary_2_t4487 * __this, KeyValuePair_2_t9261  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m69049(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4487 *, KeyValuePair_2_t9261 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m69049_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m69050_gshared (Dictionary_2_t4487 * __this, KeyValuePair_2U5BU5D_t10384* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m69050(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4487 *, KeyValuePair_2U5BU5D_t10384*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m69050_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m69051_gshared (Dictionary_2_t4487 * __this, KeyValuePair_2_t9261  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m69051(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4487 *, KeyValuePair_2_t9261 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m69051_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m69052_gshared (Dictionary_2_t4487 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m69052(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4487 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m69052_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m69053_gshared (Dictionary_2_t4487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m69053(__this, method) (( Object_t * (*) (Dictionary_2_t4487 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m69053_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m69054_gshared (Dictionary_2_t4487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m69054(__this, method) (( Object_t* (*) (Dictionary_2_t4487 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m69054_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m69055_gshared (Dictionary_2_t4487 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m69055(__this, method) (( Object_t * (*) (Dictionary_2_t4487 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m69055_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m69056_gshared (Dictionary_2_t4487 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m69056(__this, method) (( int32_t (*) (Dictionary_2_t4487 *, const MethodInfo*))Dictionary_2_get_Count_m69056_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m69057_gshared (Dictionary_2_t4487 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m69057(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4487 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m69057_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m69058_gshared (Dictionary_2_t4487 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m69058(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4487 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m69058_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m69059_gshared (Dictionary_2_t4487 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m69059(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4487 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m69059_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m69060_gshared (Dictionary_2_t4487 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m69060(__this, ___size, method) (( void (*) (Dictionary_2_t4487 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m69060_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m69061_gshared (Dictionary_2_t4487 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m69061(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4487 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m69061_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t9261  Dictionary_2_make_pair_m69062_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m69062(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t9261  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m69062_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m69063_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m69063(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m69063_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m69064_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m69064(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m69064_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m69065_gshared (Dictionary_2_t4487 * __this, KeyValuePair_2U5BU5D_t10384* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m69065(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4487 *, KeyValuePair_2U5BU5D_t10384*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m69065_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m69066_gshared (Dictionary_2_t4487 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m69066(__this, method) (( void (*) (Dictionary_2_t4487 *, const MethodInfo*))Dictionary_2_Resize_m69066_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m69067_gshared (Dictionary_2_t4487 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m69067(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4487 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m69067_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m69068_gshared (Dictionary_2_t4487 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m69068(__this, method) (( void (*) (Dictionary_2_t4487 *, const MethodInfo*))Dictionary_2_Clear_m69068_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m69069_gshared (Dictionary_2_t4487 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m69069(__this, ___key, method) (( bool (*) (Dictionary_2_t4487 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m69069_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m69070_gshared (Dictionary_2_t4487 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m69070(__this, ___value, method) (( bool (*) (Dictionary_2_t4487 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m69070_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m69071_gshared (Dictionary_2_t4487 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m69071(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4487 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m69071_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m69072_gshared (Dictionary_2_t4487 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m69072(__this, ___sender, method) (( void (*) (Dictionary_2_t4487 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m69072_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m69073_gshared (Dictionary_2_t4487 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m69073(__this, ___key, method) (( bool (*) (Dictionary_2_t4487 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m69073_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m69074_gshared (Dictionary_2_t4487 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m69074(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4487 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m69074_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t9263 * Dictionary_2_get_Keys_m69075_gshared (Dictionary_2_t4487 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m69075(__this, method) (( KeyCollection_t9263 * (*) (Dictionary_2_t4487 *, const MethodInfo*))Dictionary_2_get_Keys_m69075_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t9267 * Dictionary_2_get_Values_m69076_gshared (Dictionary_2_t4487 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m69076(__this, method) (( ValueCollection_t9267 * (*) (Dictionary_2_t4487 *, const MethodInfo*))Dictionary_2_get_Values_m69076_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m69077_gshared (Dictionary_2_t4487 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m69077(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4487 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m69077_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m69078_gshared (Dictionary_2_t4487 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m69078(__this, ___value, method) (( int32_t (*) (Dictionary_2_t4487 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m69078_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m69079_gshared (Dictionary_2_t4487 * __this, KeyValuePair_2_t9261  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m69079(__this, ___pair, method) (( bool (*) (Dictionary_2_t4487 *, KeyValuePair_2_t9261 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m69079_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t9265  Dictionary_2_GetEnumerator_m69080_gshared (Dictionary_2_t4487 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m69080(__this, method) (( Enumerator_t9265  (*) (Dictionary_2_t4487 *, const MethodInfo*))Dictionary_2_GetEnumerator_m69080_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2167  Dictionary_2_U3CCopyToU3Em__2_m69081_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m69081(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m69081_gshared)(__this /* static, unused */, ___key, ___value, method)
