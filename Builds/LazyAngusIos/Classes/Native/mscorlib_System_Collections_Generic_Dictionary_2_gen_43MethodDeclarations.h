#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t4029;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1292;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t4657;
// System.Collections.ICollection
struct ICollection_t653;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t4030;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t4034;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3391;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t4658;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1301;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t4659;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t4660;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1943;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__38.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m27522_gshared (Dictionary_2_t4029 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m27522(__this, method) (( void (*) (Dictionary_2_t4029 *, const MethodInfo*))Dictionary_2__ctor_m27522_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27524_gshared (Dictionary_2_t4029 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27524(__this, ___comparer, method) (( void (*) (Dictionary_2_t4029 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27524_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m27526_gshared (Dictionary_2_t4029 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m27526(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4029 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27526_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m27528_gshared (Dictionary_2_t4029 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m27528(__this, ___capacity, method) (( void (*) (Dictionary_2_t4029 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m27528_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27530_gshared (Dictionary_2_t4029 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27530(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4029 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27530_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m27532_gshared (Dictionary_2_t4029 * __this, SerializationInfo_t1301 * ___info, StreamingContext_t1302  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m27532(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4029 *, SerializationInfo_t1301 *, StreamingContext_t1302 , const MethodInfo*))Dictionary_2__ctor_m27532_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27534_gshared (Dictionary_2_t4029 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27534(__this, method) (( Object_t* (*) (Dictionary_2_t4029 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27534_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27536_gshared (Dictionary_2_t4029 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27536(__this, method) (( Object_t* (*) (Dictionary_2_t4029 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27536_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m27538_gshared (Dictionary_2_t4029 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m27538(__this, method) (( Object_t * (*) (Dictionary_2_t4029 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m27538_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m27540_gshared (Dictionary_2_t4029 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m27540(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4029 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m27540_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m27542_gshared (Dictionary_2_t4029 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m27542(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4029 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m27542_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m27544_gshared (Dictionary_2_t4029 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m27544(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4029 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m27544_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m27546_gshared (Dictionary_2_t4029 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m27546(__this, ___key, method) (( bool (*) (Dictionary_2_t4029 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m27546_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m27548_gshared (Dictionary_2_t4029 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m27548(__this, ___key, method) (( void (*) (Dictionary_2_t4029 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m27548_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27550_gshared (Dictionary_2_t4029 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27550(__this, method) (( bool (*) (Dictionary_2_t4029 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27550_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27552_gshared (Dictionary_2_t4029 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27552(__this, method) (( Object_t * (*) (Dictionary_2_t4029 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27552_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27554_gshared (Dictionary_2_t4029 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27554(__this, method) (( bool (*) (Dictionary_2_t4029 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27554_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27556_gshared (Dictionary_2_t4029 * __this, KeyValuePair_2_t4003  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27556(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4029 *, KeyValuePair_2_t4003 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27556_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27558_gshared (Dictionary_2_t4029 * __this, KeyValuePair_2_t4003  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27558(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4029 *, KeyValuePair_2_t4003 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27558_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27560_gshared (Dictionary_2_t4029 * __this, KeyValuePair_2U5BU5D_t4659* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27560(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4029 *, KeyValuePair_2U5BU5D_t4659*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27560_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27562_gshared (Dictionary_2_t4029 * __this, KeyValuePair_2_t4003  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27562(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4029 *, KeyValuePair_2_t4003 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27562_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m27564_gshared (Dictionary_2_t4029 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m27564(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4029 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m27564_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27566_gshared (Dictionary_2_t4029 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27566(__this, method) (( Object_t * (*) (Dictionary_2_t4029 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27566_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27568_gshared (Dictionary_2_t4029 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27568(__this, method) (( Object_t* (*) (Dictionary_2_t4029 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27568_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27570_gshared (Dictionary_2_t4029 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27570(__this, method) (( Object_t * (*) (Dictionary_2_t4029 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27570_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m27572_gshared (Dictionary_2_t4029 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m27572(__this, method) (( int32_t (*) (Dictionary_2_t4029 *, const MethodInfo*))Dictionary_2_get_Count_m27572_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t40  Dictionary_2_get_Item_m27574_gshared (Dictionary_2_t4029 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m27574(__this, ___key, method) (( KeyValuePair_2_t40  (*) (Dictionary_2_t4029 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m27574_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m27576_gshared (Dictionary_2_t4029 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m27576(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4029 *, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_set_Item_m27576_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m27578_gshared (Dictionary_2_t4029 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m27578(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4029 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m27578_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m27580_gshared (Dictionary_2_t4029 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m27580(__this, ___size, method) (( void (*) (Dictionary_2_t4029 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m27580_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m27582_gshared (Dictionary_2_t4029 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m27582(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4029 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m27582_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4003  Dictionary_2_make_pair_m27584_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m27584(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4003  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_make_pair_m27584_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m27586_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m27586(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_pick_key_m27586_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t40  Dictionary_2_pick_value_m27588_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m27588(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t40  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_pick_value_m27588_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m27590_gshared (Dictionary_2_t4029 * __this, KeyValuePair_2U5BU5D_t4659* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m27590(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4029 *, KeyValuePair_2U5BU5D_t4659*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m27590_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m27592_gshared (Dictionary_2_t4029 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m27592(__this, method) (( void (*) (Dictionary_2_t4029 *, const MethodInfo*))Dictionary_2_Resize_m27592_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m27594_gshared (Dictionary_2_t4029 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m27594(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4029 *, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_Add_m27594_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m27596_gshared (Dictionary_2_t4029 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m27596(__this, method) (( void (*) (Dictionary_2_t4029 *, const MethodInfo*))Dictionary_2_Clear_m27596_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m27598_gshared (Dictionary_2_t4029 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m27598(__this, ___key, method) (( bool (*) (Dictionary_2_t4029 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m27598_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m27600_gshared (Dictionary_2_t4029 * __this, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m27600(__this, ___value, method) (( bool (*) (Dictionary_2_t4029 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_ContainsValue_m27600_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m27602_gshared (Dictionary_2_t4029 * __this, SerializationInfo_t1301 * ___info, StreamingContext_t1302  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m27602(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4029 *, SerializationInfo_t1301 *, StreamingContext_t1302 , const MethodInfo*))Dictionary_2_GetObjectData_m27602_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m27604_gshared (Dictionary_2_t4029 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m27604(__this, ___sender, method) (( void (*) (Dictionary_2_t4029 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m27604_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m27606_gshared (Dictionary_2_t4029 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m27606(__this, ___key, method) (( bool (*) (Dictionary_2_t4029 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m27606_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m27608_gshared (Dictionary_2_t4029 * __this, Object_t * ___key, KeyValuePair_2_t40 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m27608(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4029 *, Object_t *, KeyValuePair_2_t40 *, const MethodInfo*))Dictionary_2_TryGetValue_m27608_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t4030 * Dictionary_2_get_Keys_m27610_gshared (Dictionary_2_t4029 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m27610(__this, method) (( KeyCollection_t4030 * (*) (Dictionary_2_t4029 *, const MethodInfo*))Dictionary_2_get_Keys_m27610_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t4034 * Dictionary_2_get_Values_m27612_gshared (Dictionary_2_t4029 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m27612(__this, method) (( ValueCollection_t4034 * (*) (Dictionary_2_t4029 *, const MethodInfo*))Dictionary_2_get_Values_m27612_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m27614_gshared (Dictionary_2_t4029 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m27614(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4029 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m27614_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t40  Dictionary_2_ToTValue_m27616_gshared (Dictionary_2_t4029 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m27616(__this, ___value, method) (( KeyValuePair_2_t40  (*) (Dictionary_2_t4029 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m27616_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m27618_gshared (Dictionary_2_t4029 * __this, KeyValuePair_2_t4003  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m27618(__this, ___pair, method) (( bool (*) (Dictionary_2_t4029 *, KeyValuePair_2_t4003 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m27618_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t4032  Dictionary_2_GetEnumerator_m27620_gshared (Dictionary_2_t4029 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m27620(__this, method) (( Enumerator_t4032  (*) (Dictionary_2_t4029 *, const MethodInfo*))Dictionary_2_GetEnumerator_m27620_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2181  Dictionary_2_U3CCopyToU3Em__0_m27622_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m27622(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2181  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m27622_gshared)(__this /* static, unused */, ___key, ___value, method)
