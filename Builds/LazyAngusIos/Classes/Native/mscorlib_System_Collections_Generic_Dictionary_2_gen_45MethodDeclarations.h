#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2851;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8710;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1221;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t5399;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t5403;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5390;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t8714;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t8715;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t8716;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m10163_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10163(__this, method) (( void (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2__ctor_m10163_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21081_gshared (Dictionary_2_t2851 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21081(__this, ___comparer, method) (( void (*) (Dictionary_2_t2851 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21081_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m21083_gshared (Dictionary_2_t2851 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m21083(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2851 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21083_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21085_gshared (Dictionary_2_t2851 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m21085(__this, ___capacity, method) (( void (*) (Dictionary_2_t2851 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21085_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21087_gshared (Dictionary_2_t2851 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21087(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2851 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21087_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21089_gshared (Dictionary_2_t2851 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m21089(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2851 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m21089_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21091_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21091(__this, method) (( Object_t* (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21091_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21093_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21093(__this, method) (( Object_t* (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21093_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m21095_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m21095(__this, method) (( Object_t * (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21095_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21097_gshared (Dictionary_2_t2851 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21097(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2851 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21097_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21099_gshared (Dictionary_2_t2851 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21099(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2851 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21099_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21101_gshared (Dictionary_2_t2851 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21101(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2851 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21101_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21103_gshared (Dictionary_2_t2851 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21103(__this, ___key, method) (( bool (*) (Dictionary_2_t2851 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21103_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21105_gshared (Dictionary_2_t2851 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21105(__this, ___key, method) (( void (*) (Dictionary_2_t2851 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21105_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21107_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21107(__this, method) (( bool (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21107_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21109_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21109(__this, method) (( Object_t * (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21109_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21111_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21111(__this, method) (( bool (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21111_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21113_gshared (Dictionary_2_t2851 * __this, KeyValuePair_2_t5393  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21113(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2851 *, KeyValuePair_2_t5393 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21113_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21115_gshared (Dictionary_2_t2851 * __this, KeyValuePair_2_t5393  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21115(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2851 *, KeyValuePair_2_t5393 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21115_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21117_gshared (Dictionary_2_t2851 * __this, KeyValuePair_2U5BU5D_t8715* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21117(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2851 *, KeyValuePair_2U5BU5D_t8715*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21117_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21119_gshared (Dictionary_2_t2851 * __this, KeyValuePair_2_t5393  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21119(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2851 *, KeyValuePair_2_t5393 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21119_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21121_gshared (Dictionary_2_t2851 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21121(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2851 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21121_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21123_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21123(__this, method) (( Object_t * (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21123_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21125_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21125(__this, method) (( Object_t* (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21125_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21127_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21127(__this, method) (( Object_t * (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21127_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21129_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m21129(__this, method) (( int32_t (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_get_Count_m21129_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m21131_gshared (Dictionary_2_t2851 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m21131(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2851 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m21131_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21133_gshared (Dictionary_2_t2851 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m21133(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2851 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m21133_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21135_gshared (Dictionary_2_t2851 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m21135(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2851 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21135_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21137_gshared (Dictionary_2_t2851 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m21137(__this, ___size, method) (( void (*) (Dictionary_2_t2851 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21137_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21139_gshared (Dictionary_2_t2851 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21139(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2851 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21139_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5393  Dictionary_2_make_pair_m21141_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m21141(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5393  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m21141_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m21143_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m21143(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m21143_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m21145_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m21145(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m21145_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21147_gshared (Dictionary_2_t2851 * __this, KeyValuePair_2U5BU5D_t8715* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m21147(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2851 *, KeyValuePair_2U5BU5D_t8715*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21147_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m21149_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21149(__this, method) (( void (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_Resize_m21149_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21151_gshared (Dictionary_2_t2851 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21151(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2851 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m21151_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m21153_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21153(__this, method) (( void (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_Clear_m21153_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21155_gshared (Dictionary_2_t2851 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21155(__this, ___key, method) (( bool (*) (Dictionary_2_t2851 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m21155_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21157_gshared (Dictionary_2_t2851 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21157(__this, ___value, method) (( bool (*) (Dictionary_2_t2851 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m21157_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21159_gshared (Dictionary_2_t2851 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21159(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2851 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m21159_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21161_gshared (Dictionary_2_t2851 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21161(__this, ___sender, method) (( void (*) (Dictionary_2_t2851 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21161_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21163_gshared (Dictionary_2_t2851 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21163(__this, ___key, method) (( bool (*) (Dictionary_2_t2851 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m21163_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21165_gshared (Dictionary_2_t2851 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21165(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2851 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m21165_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t5399 * Dictionary_2_get_Keys_m21167_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21167(__this, method) (( KeyCollection_t5399 * (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_get_Keys_m21167_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t5403 * Dictionary_2_get_Values_m21169_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21169(__this, method) (( ValueCollection_t5403 * (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_get_Values_m21169_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m21171_gshared (Dictionary_2_t2851 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21171(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2851 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21171_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m21173_gshared (Dictionary_2_t2851 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21173(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2851 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21173_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21175_gshared (Dictionary_2_t2851 * __this, KeyValuePair_2_t5393  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21175(__this, ___pair, method) (( bool (*) (Dictionary_2_t2851 *, KeyValuePair_2_t5393 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21175_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t5401  Dictionary_2_GetEnumerator_m21177_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21177(__this, method) (( Enumerator_t5401  (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21177_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2137  Dictionary_2_U3CCopyToU3Em__0_m21179_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21179(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21179_gshared)(__this /* static, unused */, ___key, ___value, method)
