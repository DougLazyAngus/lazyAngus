#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7008;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1170;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9114;
// System.Collections.ICollection
struct ICollection_t704;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Double>
struct KeyCollection_t7009;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>
struct ValueCollection_t7013;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1134;
// System.Collections.Generic.IDictionary`2<System.Object,System.Double>
struct IDictionary_2_t9218;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2869;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t7757;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t7197;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3911;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__51.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor()
extern "C" void Dictionary_2__ctor_m44170_gshared (Dictionary_2_t7008 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m44170(__this, method) (( void (*) (Dictionary_2_t7008 *, const MethodInfo*))Dictionary_2__ctor_m44170_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44172_gshared (Dictionary_2_t7008 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44172(__this, ___comparer, method) (( void (*) (Dictionary_2_t7008 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44172_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m44174_gshared (Dictionary_2_t7008 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m44174(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7008 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44174_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m44176_gshared (Dictionary_2_t7008 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m44176(__this, ___capacity, method) (( void (*) (Dictionary_2_t7008 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44176_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44178_gshared (Dictionary_2_t7008 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44178(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7008 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44178_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m44180_gshared (Dictionary_2_t7008 * __this, SerializationInfo_t2869 * ___info, StreamingContext_t2870  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m44180(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7008 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2__ctor_m44180_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44182_gshared (Dictionary_2_t7008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44182(__this, method) (( Object_t* (*) (Dictionary_2_t7008 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44182_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44184_gshared (Dictionary_2_t7008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44184(__this, method) (( Object_t* (*) (Dictionary_2_t7008 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44184_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m44186_gshared (Dictionary_2_t7008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44186(__this, method) (( Object_t * (*) (Dictionary_2_t7008 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44186_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m44188_gshared (Dictionary_2_t7008 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44188(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7008 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44188_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m44190_gshared (Dictionary_2_t7008 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44190(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7008 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44190_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m44192_gshared (Dictionary_2_t7008 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m44192(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7008 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44192_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m44194_gshared (Dictionary_2_t7008 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m44194(__this, ___key, method) (( bool (*) (Dictionary_2_t7008 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44194_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m44196_gshared (Dictionary_2_t7008 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m44196(__this, ___key, method) (( void (*) (Dictionary_2_t7008 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44196_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44198_gshared (Dictionary_2_t7008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44198(__this, method) (( bool (*) (Dictionary_2_t7008 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44198_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44200_gshared (Dictionary_2_t7008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44200(__this, method) (( Object_t * (*) (Dictionary_2_t7008 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44200_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44202_gshared (Dictionary_2_t7008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44202(__this, method) (( bool (*) (Dictionary_2_t7008 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44202_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44204_gshared (Dictionary_2_t7008 * __this, KeyValuePair_2_t6934  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44204(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7008 *, KeyValuePair_2_t6934 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44204_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44206_gshared (Dictionary_2_t7008 * __this, KeyValuePair_2_t6934  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44206(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7008 *, KeyValuePair_2_t6934 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44206_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44208_gshared (Dictionary_2_t7008 * __this, KeyValuePair_2U5BU5D_t7757* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44208(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7008 *, KeyValuePair_2U5BU5D_t7757*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44208_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44210_gshared (Dictionary_2_t7008 * __this, KeyValuePair_2_t6934  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44210(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7008 *, KeyValuePair_2_t6934 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44210_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m44212_gshared (Dictionary_2_t7008 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44212(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7008 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44212_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44214_gshared (Dictionary_2_t7008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44214(__this, method) (( Object_t * (*) (Dictionary_2_t7008 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44214_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44216_gshared (Dictionary_2_t7008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44216(__this, method) (( Object_t* (*) (Dictionary_2_t7008 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44216_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44218_gshared (Dictionary_2_t7008 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44218(__this, method) (( Object_t * (*) (Dictionary_2_t7008 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44218_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m44220_gshared (Dictionary_2_t7008 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m44220(__this, method) (( int32_t (*) (Dictionary_2_t7008 *, const MethodInfo*))Dictionary_2_get_Count_m44220_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Item(TKey)
extern "C" double Dictionary_2_get_Item_m44222_gshared (Dictionary_2_t7008 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m44222(__this, ___key, method) (( double (*) (Dictionary_2_t7008 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m44222_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m44224_gshared (Dictionary_2_t7008 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m44224(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7008 *, Object_t *, double, const MethodInfo*))Dictionary_2_set_Item_m44224_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m44226_gshared (Dictionary_2_t7008 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m44226(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7008 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44226_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m44228_gshared (Dictionary_2_t7008 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m44228(__this, ___size, method) (( void (*) (Dictionary_2_t7008 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44228_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m44230_gshared (Dictionary_2_t7008 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m44230(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7008 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44230_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6934  Dictionary_2_make_pair_m44232_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m44232(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6934  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_make_pair_m44232_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m44234_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m44234(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_key_m44234_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_value(TKey,TValue)
extern "C" double Dictionary_2_pick_value_m44236_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m44236(__this /* static, unused */, ___key, ___value, method) (( double (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_value_m44236_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m44238_gshared (Dictionary_2_t7008 * __this, KeyValuePair_2U5BU5D_t7757* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m44238(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7008 *, KeyValuePair_2U5BU5D_t7757*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44238_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Resize()
extern "C" void Dictionary_2_Resize_m44240_gshared (Dictionary_2_t7008 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m44240(__this, method) (( void (*) (Dictionary_2_t7008 *, const MethodInfo*))Dictionary_2_Resize_m44240_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m44242_gshared (Dictionary_2_t7008 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_Add_m44242(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7008 *, Object_t *, double, const MethodInfo*))Dictionary_2_Add_m44242_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Clear()
extern "C" void Dictionary_2_Clear_m44244_gshared (Dictionary_2_t7008 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m44244(__this, method) (( void (*) (Dictionary_2_t7008 *, const MethodInfo*))Dictionary_2_Clear_m44244_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m44246_gshared (Dictionary_2_t7008 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m44246(__this, ___key, method) (( bool (*) (Dictionary_2_t7008 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m44246_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m44248_gshared (Dictionary_2_t7008 * __this, double ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m44248(__this, ___value, method) (( bool (*) (Dictionary_2_t7008 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m44248_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m44250_gshared (Dictionary_2_t7008 * __this, SerializationInfo_t2869 * ___info, StreamingContext_t2870  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m44250(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7008 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2_GetObjectData_m44250_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m44252_gshared (Dictionary_2_t7008 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m44252(__this, ___sender, method) (( void (*) (Dictionary_2_t7008 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44252_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m44254_gshared (Dictionary_2_t7008 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m44254(__this, ___key, method) (( bool (*) (Dictionary_2_t7008 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m44254_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m44256_gshared (Dictionary_2_t7008 * __this, Object_t * ___key, double* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m44256(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7008 *, Object_t *, double*, const MethodInfo*))Dictionary_2_TryGetValue_m44256_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Keys()
extern "C" KeyCollection_t7009 * Dictionary_2_get_Keys_m44258_gshared (Dictionary_2_t7008 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m44258(__this, method) (( KeyCollection_t7009 * (*) (Dictionary_2_t7008 *, const MethodInfo*))Dictionary_2_get_Keys_m44258_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Values()
extern "C" ValueCollection_t7013 * Dictionary_2_get_Values_m44260_gshared (Dictionary_2_t7008 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m44260(__this, method) (( ValueCollection_t7013 * (*) (Dictionary_2_t7008 *, const MethodInfo*))Dictionary_2_get_Values_m44260_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m44262_gshared (Dictionary_2_t7008 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m44262(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7008 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44262_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTValue(System.Object)
extern "C" double Dictionary_2_ToTValue_m44264_gshared (Dictionary_2_t7008 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m44264(__this, ___value, method) (( double (*) (Dictionary_2_t7008 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44264_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m44266_gshared (Dictionary_2_t7008 * __this, KeyValuePair_2_t6934  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m44266(__this, ___pair, method) (( bool (*) (Dictionary_2_t7008 *, KeyValuePair_2_t6934 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44266_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetEnumerator()
extern "C" Enumerator_t7011  Dictionary_2_GetEnumerator_m44268_gshared (Dictionary_2_t7008 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m44268(__this, method) (( Enumerator_t7011  (*) (Dictionary_2_t7008 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44268_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Double>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2088  Dictionary_2_U3CCopyToU3Em__0_m44270_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m44270(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2088  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44270_gshared)(__this /* static, unused */, ___key, ___value, method)
