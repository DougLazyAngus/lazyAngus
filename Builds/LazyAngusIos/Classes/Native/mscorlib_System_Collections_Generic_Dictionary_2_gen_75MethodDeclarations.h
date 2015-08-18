#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t8518;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t9079;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t8519;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t8523;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1187;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t9663;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t9664;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t9665;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_136.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__70.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m62113_gshared (Dictionary_2_t8518 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m62113(__this, method) (( void (*) (Dictionary_2_t8518 *, const MethodInfo*))Dictionary_2__ctor_m62113_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m62115_gshared (Dictionary_2_t8518 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m62115(__this, ___comparer, method) (( void (*) (Dictionary_2_t8518 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m62115_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m62117_gshared (Dictionary_2_t8518 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m62117(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8518 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m62117_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m62119_gshared (Dictionary_2_t8518 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m62119(__this, ___capacity, method) (( void (*) (Dictionary_2_t8518 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m62119_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m62121_gshared (Dictionary_2_t8518 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m62121(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8518 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m62121_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m62123_gshared (Dictionary_2_t8518 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m62123(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8518 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m62123_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m62125_gshared (Dictionary_2_t8518 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m62125(__this, method) (( Object_t* (*) (Dictionary_2_t8518 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m62125_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m62127_gshared (Dictionary_2_t8518 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m62127(__this, method) (( Object_t* (*) (Dictionary_2_t8518 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m62127_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m62129_gshared (Dictionary_2_t8518 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m62129(__this, method) (( Object_t * (*) (Dictionary_2_t8518 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m62129_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m62131_gshared (Dictionary_2_t8518 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m62131(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8518 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m62131_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m62133_gshared (Dictionary_2_t8518 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m62133(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8518 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m62133_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m62135_gshared (Dictionary_2_t8518 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m62135(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8518 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m62135_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m62137_gshared (Dictionary_2_t8518 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m62137(__this, ___key, method) (( bool (*) (Dictionary_2_t8518 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m62137_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m62139_gshared (Dictionary_2_t8518 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m62139(__this, ___key, method) (( void (*) (Dictionary_2_t8518 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m62139_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m62141_gshared (Dictionary_2_t8518 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m62141(__this, method) (( bool (*) (Dictionary_2_t8518 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m62141_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m62143_gshared (Dictionary_2_t8518 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m62143(__this, method) (( Object_t * (*) (Dictionary_2_t8518 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m62143_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m62145_gshared (Dictionary_2_t8518 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m62145(__this, method) (( bool (*) (Dictionary_2_t8518 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m62145_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m62147_gshared (Dictionary_2_t8518 * __this, KeyValuePair_2_t8494  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m62147(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8518 *, KeyValuePair_2_t8494 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m62147_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m62149_gshared (Dictionary_2_t8518 * __this, KeyValuePair_2_t8494  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m62149(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8518 *, KeyValuePair_2_t8494 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m62149_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m62151_gshared (Dictionary_2_t8518 * __this, KeyValuePair_2U5BU5D_t9664* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m62151(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8518 *, KeyValuePair_2U5BU5D_t9664*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m62151_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m62153_gshared (Dictionary_2_t8518 * __this, KeyValuePair_2_t8494  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m62153(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8518 *, KeyValuePair_2_t8494 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m62153_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m62155_gshared (Dictionary_2_t8518 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m62155(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8518 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m62155_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m62157_gshared (Dictionary_2_t8518 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m62157(__this, method) (( Object_t * (*) (Dictionary_2_t8518 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m62157_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m62159_gshared (Dictionary_2_t8518 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m62159(__this, method) (( Object_t* (*) (Dictionary_2_t8518 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m62159_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m62161_gshared (Dictionary_2_t8518 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m62161(__this, method) (( Object_t * (*) (Dictionary_2_t8518 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m62161_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m62163_gshared (Dictionary_2_t8518 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m62163(__this, method) (( int32_t (*) (Dictionary_2_t8518 *, const MethodInfo*))Dictionary_2_get_Count_m62163_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t70  Dictionary_2_get_Item_m62165_gshared (Dictionary_2_t8518 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m62165(__this, ___key, method) (( KeyValuePair_2_t70  (*) (Dictionary_2_t8518 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m62165_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m62167_gshared (Dictionary_2_t8518 * __this, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m62167(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8518 *, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_set_Item_m62167_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m62169_gshared (Dictionary_2_t8518 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m62169(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8518 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m62169_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m62171_gshared (Dictionary_2_t8518 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m62171(__this, ___size, method) (( void (*) (Dictionary_2_t8518 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m62171_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m62173_gshared (Dictionary_2_t8518 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m62173(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8518 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m62173_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8494  Dictionary_2_make_pair_m62175_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m62175(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8494  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_make_pair_m62175_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m62177_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m62177(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_pick_key_m62177_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t70  Dictionary_2_pick_value_m62179_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m62179(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t70  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_pick_value_m62179_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m62181_gshared (Dictionary_2_t8518 * __this, KeyValuePair_2U5BU5D_t9664* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m62181(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8518 *, KeyValuePair_2U5BU5D_t9664*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m62181_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m62183_gshared (Dictionary_2_t8518 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m62183(__this, method) (( void (*) (Dictionary_2_t8518 *, const MethodInfo*))Dictionary_2_Resize_m62183_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m62185_gshared (Dictionary_2_t8518 * __this, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m62185(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8518 *, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_Add_m62185_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m62187_gshared (Dictionary_2_t8518 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m62187(__this, method) (( void (*) (Dictionary_2_t8518 *, const MethodInfo*))Dictionary_2_Clear_m62187_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m62189_gshared (Dictionary_2_t8518 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m62189(__this, ___key, method) (( bool (*) (Dictionary_2_t8518 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m62189_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m62191_gshared (Dictionary_2_t8518 * __this, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m62191(__this, ___value, method) (( bool (*) (Dictionary_2_t8518 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_ContainsValue_m62191_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m62193_gshared (Dictionary_2_t8518 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m62193(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8518 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m62193_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m62195_gshared (Dictionary_2_t8518 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m62195(__this, ___sender, method) (( void (*) (Dictionary_2_t8518 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m62195_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m62197_gshared (Dictionary_2_t8518 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m62197(__this, ___key, method) (( bool (*) (Dictionary_2_t8518 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m62197_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m62199_gshared (Dictionary_2_t8518 * __this, Object_t * ___key, KeyValuePair_2_t70 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m62199(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8518 *, Object_t *, KeyValuePair_2_t70 *, const MethodInfo*))Dictionary_2_TryGetValue_m62199_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t8519 * Dictionary_2_get_Keys_m62201_gshared (Dictionary_2_t8518 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m62201(__this, method) (( KeyCollection_t8519 * (*) (Dictionary_2_t8518 *, const MethodInfo*))Dictionary_2_get_Keys_m62201_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t8523 * Dictionary_2_get_Values_m62203_gshared (Dictionary_2_t8518 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m62203(__this, method) (( ValueCollection_t8523 * (*) (Dictionary_2_t8518 *, const MethodInfo*))Dictionary_2_get_Values_m62203_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m62205_gshared (Dictionary_2_t8518 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m62205(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8518 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m62205_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t70  Dictionary_2_ToTValue_m62207_gshared (Dictionary_2_t8518 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m62207(__this, ___value, method) (( KeyValuePair_2_t70  (*) (Dictionary_2_t8518 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m62207_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m62209_gshared (Dictionary_2_t8518 * __this, KeyValuePair_2_t8494  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m62209(__this, ___pair, method) (( bool (*) (Dictionary_2_t8518 *, KeyValuePair_2_t8494 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m62209_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t8521  Dictionary_2_GetEnumerator_m62211_gshared (Dictionary_2_t8518 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m62211(__this, method) (( Enumerator_t8521  (*) (Dictionary_2_t8518 *, const MethodInfo*))Dictionary_2_GetEnumerator_m62211_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2139  Dictionary_2_U3CCopyToU3Em__0_m62213_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m62213(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m62213_gshared)(__this /* static, unused */, ___key, ___value, method)
