#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t4488;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9342;
// System.Collections.Generic.ICollection`1<System.Reflection.Emit.Label>
struct ICollection_1_t10386;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Reflection.Emit.Label>
struct KeyCollection_t9276;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>
struct ValueCollection_t9280;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5953;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Reflection.Emit.Label>
struct IDictionary_2_t10387;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>[]
struct KeyValuePair_2U5BU5D_t10388;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>
struct IEnumerator_1_t10389;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_146.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__77.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor()
extern "C" void Dictionary_2__ctor_m18227_gshared (Dictionary_2_t4488 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18227(__this, method) (( void (*) (Dictionary_2_t4488 *, const MethodInfo*))Dictionary_2__ctor_m18227_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m69167_gshared (Dictionary_2_t4488 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m69167(__this, ___comparer, method) (( void (*) (Dictionary_2_t4488 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m69167_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m69168_gshared (Dictionary_2_t4488 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m69168(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4488 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m69168_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m69169_gshared (Dictionary_2_t4488 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m69169(__this, ___capacity, method) (( void (*) (Dictionary_2_t4488 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m69169_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m69170_gshared (Dictionary_2_t4488 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m69170(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4488 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m69170_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m69171_gshared (Dictionary_2_t4488 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m69171(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4488 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m69171_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m69172_gshared (Dictionary_2_t4488 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m69172(__this, method) (( Object_t* (*) (Dictionary_2_t4488 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m69172_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m69173_gshared (Dictionary_2_t4488 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m69173(__this, method) (( Object_t* (*) (Dictionary_2_t4488 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m69173_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m69174_gshared (Dictionary_2_t4488 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m69174(__this, method) (( Object_t * (*) (Dictionary_2_t4488 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m69174_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m69175_gshared (Dictionary_2_t4488 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m69175(__this, method) (( Object_t * (*) (Dictionary_2_t4488 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m69175_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m69176_gshared (Dictionary_2_t4488 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m69176(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4488 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m69176_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m69177_gshared (Dictionary_2_t4488 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m69177(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4488 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m69177_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m69178_gshared (Dictionary_2_t4488 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m69178(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4488 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m69178_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m69179_gshared (Dictionary_2_t4488 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m69179(__this, ___key, method) (( bool (*) (Dictionary_2_t4488 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m69179_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m69180_gshared (Dictionary_2_t4488 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m69180(__this, ___key, method) (( void (*) (Dictionary_2_t4488 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m69180_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m69181_gshared (Dictionary_2_t4488 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m69181(__this, method) (( bool (*) (Dictionary_2_t4488 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m69181_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m69182_gshared (Dictionary_2_t4488 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m69182(__this, method) (( Object_t * (*) (Dictionary_2_t4488 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m69182_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m69183_gshared (Dictionary_2_t4488 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m69183(__this, method) (( bool (*) (Dictionary_2_t4488 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m69183_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m69184_gshared (Dictionary_2_t4488 * __this, KeyValuePair_2_t9273  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m69184(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4488 *, KeyValuePair_2_t9273 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m69184_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m69185_gshared (Dictionary_2_t4488 * __this, KeyValuePair_2_t9273  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m69185(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4488 *, KeyValuePair_2_t9273 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m69185_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m69186_gshared (Dictionary_2_t4488 * __this, KeyValuePair_2U5BU5D_t10388* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m69186(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4488 *, KeyValuePair_2U5BU5D_t10388*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m69186_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m69187_gshared (Dictionary_2_t4488 * __this, KeyValuePair_2_t9273  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m69187(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4488 *, KeyValuePair_2_t9273 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m69187_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m69188_gshared (Dictionary_2_t4488 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m69188(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4488 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m69188_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m69189_gshared (Dictionary_2_t4488 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m69189(__this, method) (( Object_t * (*) (Dictionary_2_t4488 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m69189_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m69190_gshared (Dictionary_2_t4488 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m69190(__this, method) (( Object_t* (*) (Dictionary_2_t4488 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m69190_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m69191_gshared (Dictionary_2_t4488 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m69191(__this, method) (( Object_t * (*) (Dictionary_2_t4488 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m69191_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m69192_gshared (Dictionary_2_t4488 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m69192(__this, method) (( int32_t (*) (Dictionary_2_t4488 *, const MethodInfo*))Dictionary_2_get_Count_m69192_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Item(TKey)
extern "C" Label_t4485  Dictionary_2_get_Item_m69193_gshared (Dictionary_2_t4488 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m69193(__this, ___key, method) (( Label_t4485  (*) (Dictionary_2_t4488 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m69193_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m69194_gshared (Dictionary_2_t4488 * __this, int32_t ___key, Label_t4485  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m69194(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4488 *, int32_t, Label_t4485 , const MethodInfo*))Dictionary_2_set_Item_m69194_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m69195_gshared (Dictionary_2_t4488 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m69195(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4488 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m69195_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m69196_gshared (Dictionary_2_t4488 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m69196(__this, ___size, method) (( void (*) (Dictionary_2_t4488 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m69196_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m69197_gshared (Dictionary_2_t4488 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m69197(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4488 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m69197_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t9273  Dictionary_2_make_pair_m69198_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t4485  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m69198(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t9273  (*) (Object_t * /* static, unused */, int32_t, Label_t4485 , const MethodInfo*))Dictionary_2_make_pair_m69198_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m69199_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t4485  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m69199(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Label_t4485 , const MethodInfo*))Dictionary_2_pick_key_m69199_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::pick_value(TKey,TValue)
extern "C" Label_t4485  Dictionary_2_pick_value_m69200_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t4485  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m69200(__this /* static, unused */, ___key, ___value, method) (( Label_t4485  (*) (Object_t * /* static, unused */, int32_t, Label_t4485 , const MethodInfo*))Dictionary_2_pick_value_m69200_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m69201_gshared (Dictionary_2_t4488 * __this, KeyValuePair_2U5BU5D_t10388* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m69201(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4488 *, KeyValuePair_2U5BU5D_t10388*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m69201_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Resize()
extern "C" void Dictionary_2_Resize_m69202_gshared (Dictionary_2_t4488 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m69202(__this, method) (( void (*) (Dictionary_2_t4488 *, const MethodInfo*))Dictionary_2_Resize_m69202_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m69203_gshared (Dictionary_2_t4488 * __this, int32_t ___key, Label_t4485  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m69203(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4488 *, int32_t, Label_t4485 , const MethodInfo*))Dictionary_2_Add_m69203_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Clear()
extern "C" void Dictionary_2_Clear_m69204_gshared (Dictionary_2_t4488 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m69204(__this, method) (( void (*) (Dictionary_2_t4488 *, const MethodInfo*))Dictionary_2_Clear_m69204_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m69205_gshared (Dictionary_2_t4488 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m69205(__this, ___key, method) (( bool (*) (Dictionary_2_t4488 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m69205_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m69206_gshared (Dictionary_2_t4488 * __this, Label_t4485  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m69206(__this, ___value, method) (( bool (*) (Dictionary_2_t4488 *, Label_t4485 , const MethodInfo*))Dictionary_2_ContainsValue_m69206_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m69207_gshared (Dictionary_2_t4488 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m69207(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4488 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m69207_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m69208_gshared (Dictionary_2_t4488 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m69208(__this, ___sender, method) (( void (*) (Dictionary_2_t4488 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m69208_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m69209_gshared (Dictionary_2_t4488 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m69209(__this, ___key, method) (( bool (*) (Dictionary_2_t4488 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m69209_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m69210_gshared (Dictionary_2_t4488 * __this, int32_t ___key, Label_t4485 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m69210(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4488 *, int32_t, Label_t4485 *, const MethodInfo*))Dictionary_2_TryGetValue_m69210_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Keys()
extern "C" KeyCollection_t9276 * Dictionary_2_get_Keys_m69211_gshared (Dictionary_2_t4488 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m69211(__this, method) (( KeyCollection_t9276 * (*) (Dictionary_2_t4488 *, const MethodInfo*))Dictionary_2_get_Keys_m69211_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Values()
extern "C" ValueCollection_t9280 * Dictionary_2_get_Values_m69212_gshared (Dictionary_2_t4488 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m69212(__this, method) (( ValueCollection_t9280 * (*) (Dictionary_2_t4488 *, const MethodInfo*))Dictionary_2_get_Values_m69212_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m69213_gshared (Dictionary_2_t4488 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m69213(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4488 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m69213_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ToTValue(System.Object)
extern "C" Label_t4485  Dictionary_2_ToTValue_m69214_gshared (Dictionary_2_t4488 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m69214(__this, ___value, method) (( Label_t4485  (*) (Dictionary_2_t4488 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m69214_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m69215_gshared (Dictionary_2_t4488 * __this, KeyValuePair_2_t9273  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m69215(__this, ___pair, method) (( bool (*) (Dictionary_2_t4488 *, KeyValuePair_2_t9273 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m69215_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::GetEnumerator()
extern "C" Enumerator_t9278  Dictionary_2_GetEnumerator_m69216_gshared (Dictionary_2_t4488 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m69216(__this, method) (( Enumerator_t9278  (*) (Dictionary_2_t4488 *, const MethodInfo*))Dictionary_2_GetEnumerator_m69216_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2167  Dictionary_2_U3CCopyToU3Em__2_m69217_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t4485  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m69217(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, int32_t, Label_t4485 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m69217_gshared)(__this /* static, unused */, ___key, ___value, method)
