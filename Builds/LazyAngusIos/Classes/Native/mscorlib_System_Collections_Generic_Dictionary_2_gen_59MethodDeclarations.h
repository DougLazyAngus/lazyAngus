#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t6998;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9104;
// System.Collections.ICollection
struct ICollection_t696;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Double>
struct KeyCollection_t6999;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>
struct ValueCollection_t7003;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1125;
// System.Collections.Generic.IDictionary`2<System.Object,System.Double>
struct IDictionary_2_t9208;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2860;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t7747;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t7187;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3901;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__51.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor()
extern "C" void Dictionary_2__ctor_m44107_gshared (Dictionary_2_t6998 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m44107(__this, method) (( void (*) (Dictionary_2_t6998 *, const MethodInfo*))Dictionary_2__ctor_m44107_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44109_gshared (Dictionary_2_t6998 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44109(__this, ___comparer, method) (( void (*) (Dictionary_2_t6998 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44109_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m44111_gshared (Dictionary_2_t6998 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m44111(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6998 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44111_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m44113_gshared (Dictionary_2_t6998 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m44113(__this, ___capacity, method) (( void (*) (Dictionary_2_t6998 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44113_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44115_gshared (Dictionary_2_t6998 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44115(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6998 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44115_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m44117_gshared (Dictionary_2_t6998 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m44117(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6998 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2__ctor_m44117_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44119_gshared (Dictionary_2_t6998 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44119(__this, method) (( Object_t* (*) (Dictionary_2_t6998 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44119_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44121_gshared (Dictionary_2_t6998 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44121(__this, method) (( Object_t* (*) (Dictionary_2_t6998 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44121_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m44123_gshared (Dictionary_2_t6998 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44123(__this, method) (( Object_t * (*) (Dictionary_2_t6998 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44123_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m44125_gshared (Dictionary_2_t6998 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44125(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6998 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44125_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m44127_gshared (Dictionary_2_t6998 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44127(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6998 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44127_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m44129_gshared (Dictionary_2_t6998 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m44129(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6998 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44129_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m44131_gshared (Dictionary_2_t6998 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m44131(__this, ___key, method) (( bool (*) (Dictionary_2_t6998 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44131_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m44133_gshared (Dictionary_2_t6998 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m44133(__this, ___key, method) (( void (*) (Dictionary_2_t6998 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44133_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44135_gshared (Dictionary_2_t6998 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44135(__this, method) (( bool (*) (Dictionary_2_t6998 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44135_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44137_gshared (Dictionary_2_t6998 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44137(__this, method) (( Object_t * (*) (Dictionary_2_t6998 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44137_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44139_gshared (Dictionary_2_t6998 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44139(__this, method) (( bool (*) (Dictionary_2_t6998 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44139_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44141_gshared (Dictionary_2_t6998 * __this, KeyValuePair_2_t6924  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44141(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6998 *, KeyValuePair_2_t6924 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44141_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44143_gshared (Dictionary_2_t6998 * __this, KeyValuePair_2_t6924  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44143(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6998 *, KeyValuePair_2_t6924 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44143_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44145_gshared (Dictionary_2_t6998 * __this, KeyValuePair_2U5BU5D_t7747* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44145(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6998 *, KeyValuePair_2U5BU5D_t7747*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44145_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44147_gshared (Dictionary_2_t6998 * __this, KeyValuePair_2_t6924  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44147(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6998 *, KeyValuePair_2_t6924 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44147_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m44149_gshared (Dictionary_2_t6998 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44149(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6998 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44149_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44151_gshared (Dictionary_2_t6998 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44151(__this, method) (( Object_t * (*) (Dictionary_2_t6998 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44151_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44153_gshared (Dictionary_2_t6998 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44153(__this, method) (( Object_t* (*) (Dictionary_2_t6998 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44153_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44155_gshared (Dictionary_2_t6998 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44155(__this, method) (( Object_t * (*) (Dictionary_2_t6998 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44155_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m44157_gshared (Dictionary_2_t6998 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m44157(__this, method) (( int32_t (*) (Dictionary_2_t6998 *, const MethodInfo*))Dictionary_2_get_Count_m44157_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Item(TKey)
extern "C" double Dictionary_2_get_Item_m44159_gshared (Dictionary_2_t6998 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m44159(__this, ___key, method) (( double (*) (Dictionary_2_t6998 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m44159_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m44161_gshared (Dictionary_2_t6998 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m44161(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6998 *, Object_t *, double, const MethodInfo*))Dictionary_2_set_Item_m44161_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m44163_gshared (Dictionary_2_t6998 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m44163(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6998 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44163_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m44165_gshared (Dictionary_2_t6998 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m44165(__this, ___size, method) (( void (*) (Dictionary_2_t6998 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44165_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m44167_gshared (Dictionary_2_t6998 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m44167(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6998 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44167_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6924  Dictionary_2_make_pair_m44169_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m44169(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6924  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_make_pair_m44169_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m44171_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m44171(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_key_m44171_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_value(TKey,TValue)
extern "C" double Dictionary_2_pick_value_m44173_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m44173(__this /* static, unused */, ___key, ___value, method) (( double (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_value_m44173_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m44175_gshared (Dictionary_2_t6998 * __this, KeyValuePair_2U5BU5D_t7747* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m44175(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6998 *, KeyValuePair_2U5BU5D_t7747*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44175_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Resize()
extern "C" void Dictionary_2_Resize_m44177_gshared (Dictionary_2_t6998 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m44177(__this, method) (( void (*) (Dictionary_2_t6998 *, const MethodInfo*))Dictionary_2_Resize_m44177_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m44179_gshared (Dictionary_2_t6998 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_Add_m44179(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6998 *, Object_t *, double, const MethodInfo*))Dictionary_2_Add_m44179_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Clear()
extern "C" void Dictionary_2_Clear_m44181_gshared (Dictionary_2_t6998 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m44181(__this, method) (( void (*) (Dictionary_2_t6998 *, const MethodInfo*))Dictionary_2_Clear_m44181_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m44183_gshared (Dictionary_2_t6998 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m44183(__this, ___key, method) (( bool (*) (Dictionary_2_t6998 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m44183_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m44185_gshared (Dictionary_2_t6998 * __this, double ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m44185(__this, ___value, method) (( bool (*) (Dictionary_2_t6998 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m44185_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m44187_gshared (Dictionary_2_t6998 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m44187(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6998 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2_GetObjectData_m44187_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m44189_gshared (Dictionary_2_t6998 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m44189(__this, ___sender, method) (( void (*) (Dictionary_2_t6998 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44189_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m44191_gshared (Dictionary_2_t6998 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m44191(__this, ___key, method) (( bool (*) (Dictionary_2_t6998 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m44191_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m44193_gshared (Dictionary_2_t6998 * __this, Object_t * ___key, double* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m44193(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6998 *, Object_t *, double*, const MethodInfo*))Dictionary_2_TryGetValue_m44193_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Keys()
extern "C" KeyCollection_t6999 * Dictionary_2_get_Keys_m44195_gshared (Dictionary_2_t6998 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m44195(__this, method) (( KeyCollection_t6999 * (*) (Dictionary_2_t6998 *, const MethodInfo*))Dictionary_2_get_Keys_m44195_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Values()
extern "C" ValueCollection_t7003 * Dictionary_2_get_Values_m44197_gshared (Dictionary_2_t6998 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m44197(__this, method) (( ValueCollection_t7003 * (*) (Dictionary_2_t6998 *, const MethodInfo*))Dictionary_2_get_Values_m44197_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m44199_gshared (Dictionary_2_t6998 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m44199(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6998 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44199_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTValue(System.Object)
extern "C" double Dictionary_2_ToTValue_m44201_gshared (Dictionary_2_t6998 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m44201(__this, ___value, method) (( double (*) (Dictionary_2_t6998 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44201_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m44203_gshared (Dictionary_2_t6998 * __this, KeyValuePair_2_t6924  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m44203(__this, ___pair, method) (( bool (*) (Dictionary_2_t6998 *, KeyValuePair_2_t6924 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44203_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetEnumerator()
extern "C" Enumerator_t7001  Dictionary_2_GetEnumerator_m44205_gshared (Dictionary_2_t6998 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m44205(__this, method) (( Enumerator_t7001  (*) (Dictionary_2_t6998 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44205_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Double>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2079  Dictionary_2_U3CCopyToU3Em__0_m44207_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m44207(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2079  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44207_gshared)(__this /* static, unused */, ___key, ___value, method)
