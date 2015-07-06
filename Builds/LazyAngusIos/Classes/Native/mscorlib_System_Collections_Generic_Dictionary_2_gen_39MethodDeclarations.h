#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3934;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t4548;
// System.Collections.ICollection
struct ICollection_t571;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t3935;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t3939;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3312;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t4549;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t4550;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t4551;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1418;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__34.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m26388_gshared (Dictionary_2_t3934 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m26388(__this, method) (( void (*) (Dictionary_2_t3934 *, const MethodInfo*))Dictionary_2__ctor_m26388_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26390_gshared (Dictionary_2_t3934 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26390(__this, ___comparer, method) (( void (*) (Dictionary_2_t3934 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26390_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m26392_gshared (Dictionary_2_t3934 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m26392(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3934 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26392_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m26394_gshared (Dictionary_2_t3934 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m26394(__this, ___capacity, method) (( void (*) (Dictionary_2_t3934 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26394_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26396_gshared (Dictionary_2_t3934 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26396(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3934 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26396_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m26398_gshared (Dictionary_2_t3934 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m26398(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3934 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2__ctor_m26398_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26400_gshared (Dictionary_2_t3934 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26400(__this, method) (( Object_t* (*) (Dictionary_2_t3934 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26400_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26402_gshared (Dictionary_2_t3934 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26402(__this, method) (( Object_t* (*) (Dictionary_2_t3934 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26402_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m26404_gshared (Dictionary_2_t3934 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m26404(__this, method) (( Object_t * (*) (Dictionary_2_t3934 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26404_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m26406_gshared (Dictionary_2_t3934 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m26406(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3934 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26406_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m26408_gshared (Dictionary_2_t3934 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m26408(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3934 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26408_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m26410_gshared (Dictionary_2_t3934 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m26410(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3934 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26410_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m26412_gshared (Dictionary_2_t3934 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m26412(__this, ___key, method) (( bool (*) (Dictionary_2_t3934 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26412_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m26414_gshared (Dictionary_2_t3934 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m26414(__this, ___key, method) (( void (*) (Dictionary_2_t3934 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26414_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26416_gshared (Dictionary_2_t3934 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26416(__this, method) (( bool (*) (Dictionary_2_t3934 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26416_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26418_gshared (Dictionary_2_t3934 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26418(__this, method) (( Object_t * (*) (Dictionary_2_t3934 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26418_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26420_gshared (Dictionary_2_t3934 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26420(__this, method) (( bool (*) (Dictionary_2_t3934 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26420_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26422_gshared (Dictionary_2_t3934 * __this, KeyValuePair_2_t3908  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26422(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3934 *, KeyValuePair_2_t3908 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26422_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26424_gshared (Dictionary_2_t3934 * __this, KeyValuePair_2_t3908  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26424(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3934 *, KeyValuePair_2_t3908 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26424_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26426_gshared (Dictionary_2_t3934 * __this, KeyValuePair_2U5BU5D_t4550* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26426(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3934 *, KeyValuePair_2U5BU5D_t4550*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26426_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26428_gshared (Dictionary_2_t3934 * __this, KeyValuePair_2_t3908  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26428(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3934 *, KeyValuePair_2_t3908 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26428_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m26430_gshared (Dictionary_2_t3934 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m26430(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3934 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26430_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26432_gshared (Dictionary_2_t3934 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26432(__this, method) (( Object_t * (*) (Dictionary_2_t3934 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26432_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26434_gshared (Dictionary_2_t3934 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26434(__this, method) (( Object_t* (*) (Dictionary_2_t3934 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26434_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26436_gshared (Dictionary_2_t3934 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26436(__this, method) (( Object_t * (*) (Dictionary_2_t3934 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26436_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m26438_gshared (Dictionary_2_t3934 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m26438(__this, method) (( int32_t (*) (Dictionary_2_t3934 *, const MethodInfo*))Dictionary_2_get_Count_m26438_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t40  Dictionary_2_get_Item_m26440_gshared (Dictionary_2_t3934 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m26440(__this, ___key, method) (( KeyValuePair_2_t40  (*) (Dictionary_2_t3934 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m26440_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m26442_gshared (Dictionary_2_t3934 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m26442(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3934 *, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_set_Item_m26442_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m26444_gshared (Dictionary_2_t3934 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m26444(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3934 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26444_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m26446_gshared (Dictionary_2_t3934 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m26446(__this, ___size, method) (( void (*) (Dictionary_2_t3934 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26446_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m26448_gshared (Dictionary_2_t3934 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m26448(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3934 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26448_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3908  Dictionary_2_make_pair_m26450_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m26450(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3908  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_make_pair_m26450_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m26452_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m26452(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_pick_key_m26452_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t40  Dictionary_2_pick_value_m26454_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m26454(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t40  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_pick_value_m26454_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m26456_gshared (Dictionary_2_t3934 * __this, KeyValuePair_2U5BU5D_t4550* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m26456(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3934 *, KeyValuePair_2U5BU5D_t4550*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26456_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m26458_gshared (Dictionary_2_t3934 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m26458(__this, method) (( void (*) (Dictionary_2_t3934 *, const MethodInfo*))Dictionary_2_Resize_m26458_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m26460_gshared (Dictionary_2_t3934 * __this, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m26460(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3934 *, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_Add_m26460_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m26462_gshared (Dictionary_2_t3934 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m26462(__this, method) (( void (*) (Dictionary_2_t3934 *, const MethodInfo*))Dictionary_2_Clear_m26462_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m26464_gshared (Dictionary_2_t3934 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m26464(__this, ___key, method) (( bool (*) (Dictionary_2_t3934 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m26464_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m26466_gshared (Dictionary_2_t3934 * __this, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m26466(__this, ___value, method) (( bool (*) (Dictionary_2_t3934 *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_ContainsValue_m26466_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m26468_gshared (Dictionary_2_t3934 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m26468(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3934 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2_GetObjectData_m26468_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m26470_gshared (Dictionary_2_t3934 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m26470(__this, ___sender, method) (( void (*) (Dictionary_2_t3934 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26470_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m26472_gshared (Dictionary_2_t3934 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m26472(__this, ___key, method) (( bool (*) (Dictionary_2_t3934 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m26472_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m26474_gshared (Dictionary_2_t3934 * __this, Object_t * ___key, KeyValuePair_2_t40 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m26474(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3934 *, Object_t *, KeyValuePair_2_t40 *, const MethodInfo*))Dictionary_2_TryGetValue_m26474_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t3935 * Dictionary_2_get_Keys_m26476_gshared (Dictionary_2_t3934 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m26476(__this, method) (( KeyCollection_t3935 * (*) (Dictionary_2_t3934 *, const MethodInfo*))Dictionary_2_get_Keys_m26476_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t3939 * Dictionary_2_get_Values_m26478_gshared (Dictionary_2_t3934 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m26478(__this, method) (( ValueCollection_t3939 * (*) (Dictionary_2_t3934 *, const MethodInfo*))Dictionary_2_get_Values_m26478_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m26480_gshared (Dictionary_2_t3934 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m26480(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3934 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26480_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t40  Dictionary_2_ToTValue_m26482_gshared (Dictionary_2_t3934 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m26482(__this, ___value, method) (( KeyValuePair_2_t40  (*) (Dictionary_2_t3934 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26482_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m26484_gshared (Dictionary_2_t3934 * __this, KeyValuePair_2_t3908  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m26484(__this, ___pair, method) (( bool (*) (Dictionary_2_t3934 *, KeyValuePair_2_t3908 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26484_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t3937  Dictionary_2_GetEnumerator_m26486_gshared (Dictionary_2_t3934 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m26486(__this, method) (( Enumerator_t3937  (*) (Dictionary_2_t3934 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26486_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1685  Dictionary_2_U3CCopyToU3Em__0_m26488_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t40  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m26488(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1685  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t40 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m26488_gshared)(__this /* static, unused */, ___key, ___value, method)
