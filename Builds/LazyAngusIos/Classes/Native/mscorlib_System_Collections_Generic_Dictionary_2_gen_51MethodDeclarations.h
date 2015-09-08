#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t4481;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9335;
// System.Collections.Generic.ICollection`1<System.Reflection.Emit.Label>
struct ICollection_1_t10379;
// System.Collections.ICollection
struct ICollection_t772;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Reflection.Emit.Label>
struct KeyCollection_t9269;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Reflection.Emit.Label>
struct ValueCollection_t9273;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5946;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Reflection.Emit.Label>
struct IDictionary_2_t10380;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>[]
struct KeyValuePair_2U5BU5D_t10381;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>
struct IEnumerator_1_t10382;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t802;
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
extern "C" void Dictionary_2__ctor_m18170_gshared (Dictionary_2_t4481 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18170(__this, method) (( void (*) (Dictionary_2_t4481 *, const MethodInfo*))Dictionary_2__ctor_m18170_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m69110_gshared (Dictionary_2_t4481 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m69110(__this, ___comparer, method) (( void (*) (Dictionary_2_t4481 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m69110_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m69111_gshared (Dictionary_2_t4481 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m69111(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4481 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m69111_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m69112_gshared (Dictionary_2_t4481 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m69112(__this, ___capacity, method) (( void (*) (Dictionary_2_t4481 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m69112_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m69113_gshared (Dictionary_2_t4481 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m69113(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4481 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m69113_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m69114_gshared (Dictionary_2_t4481 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m69114(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4481 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2__ctor_m69114_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m69115_gshared (Dictionary_2_t4481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m69115(__this, method) (( Object_t* (*) (Dictionary_2_t4481 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m69115_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m69116_gshared (Dictionary_2_t4481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m69116(__this, method) (( Object_t* (*) (Dictionary_2_t4481 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m69116_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m69117_gshared (Dictionary_2_t4481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m69117(__this, method) (( Object_t * (*) (Dictionary_2_t4481 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m69117_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m69118_gshared (Dictionary_2_t4481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m69118(__this, method) (( Object_t * (*) (Dictionary_2_t4481 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m69118_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m69119_gshared (Dictionary_2_t4481 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m69119(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4481 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m69119_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m69120_gshared (Dictionary_2_t4481 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m69120(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4481 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m69120_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m69121_gshared (Dictionary_2_t4481 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m69121(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4481 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m69121_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m69122_gshared (Dictionary_2_t4481 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m69122(__this, ___key, method) (( bool (*) (Dictionary_2_t4481 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m69122_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m69123_gshared (Dictionary_2_t4481 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m69123(__this, ___key, method) (( void (*) (Dictionary_2_t4481 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m69123_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m69124_gshared (Dictionary_2_t4481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m69124(__this, method) (( bool (*) (Dictionary_2_t4481 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m69124_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m69125_gshared (Dictionary_2_t4481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m69125(__this, method) (( Object_t * (*) (Dictionary_2_t4481 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m69125_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m69126_gshared (Dictionary_2_t4481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m69126(__this, method) (( bool (*) (Dictionary_2_t4481 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m69126_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m69127_gshared (Dictionary_2_t4481 * __this, KeyValuePair_2_t9266  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m69127(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4481 *, KeyValuePair_2_t9266 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m69127_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m69128_gshared (Dictionary_2_t4481 * __this, KeyValuePair_2_t9266  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m69128(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4481 *, KeyValuePair_2_t9266 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m69128_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m69129_gshared (Dictionary_2_t4481 * __this, KeyValuePair_2U5BU5D_t10381* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m69129(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4481 *, KeyValuePair_2U5BU5D_t10381*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m69129_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m69130_gshared (Dictionary_2_t4481 * __this, KeyValuePair_2_t9266  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m69130(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4481 *, KeyValuePair_2_t9266 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m69130_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m69131_gshared (Dictionary_2_t4481 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m69131(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4481 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m69131_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m69132_gshared (Dictionary_2_t4481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m69132(__this, method) (( Object_t * (*) (Dictionary_2_t4481 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m69132_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m69133_gshared (Dictionary_2_t4481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m69133(__this, method) (( Object_t* (*) (Dictionary_2_t4481 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m69133_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m69134_gshared (Dictionary_2_t4481 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m69134(__this, method) (( Object_t * (*) (Dictionary_2_t4481 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m69134_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m69135_gshared (Dictionary_2_t4481 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m69135(__this, method) (( int32_t (*) (Dictionary_2_t4481 *, const MethodInfo*))Dictionary_2_get_Count_m69135_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Item(TKey)
extern "C" Label_t4478  Dictionary_2_get_Item_m69136_gshared (Dictionary_2_t4481 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m69136(__this, ___key, method) (( Label_t4478  (*) (Dictionary_2_t4481 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m69136_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m69137_gshared (Dictionary_2_t4481 * __this, int32_t ___key, Label_t4478  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m69137(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4481 *, int32_t, Label_t4478 , const MethodInfo*))Dictionary_2_set_Item_m69137_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m69138_gshared (Dictionary_2_t4481 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m69138(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4481 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m69138_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m69139_gshared (Dictionary_2_t4481 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m69139(__this, ___size, method) (( void (*) (Dictionary_2_t4481 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m69139_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m69140_gshared (Dictionary_2_t4481 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m69140(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4481 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m69140_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t9266  Dictionary_2_make_pair_m69141_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t4478  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m69141(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t9266  (*) (Object_t * /* static, unused */, int32_t, Label_t4478 , const MethodInfo*))Dictionary_2_make_pair_m69141_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m69142_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t4478  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m69142(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Label_t4478 , const MethodInfo*))Dictionary_2_pick_key_m69142_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::pick_value(TKey,TValue)
extern "C" Label_t4478  Dictionary_2_pick_value_m69143_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t4478  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m69143(__this /* static, unused */, ___key, ___value, method) (( Label_t4478  (*) (Object_t * /* static, unused */, int32_t, Label_t4478 , const MethodInfo*))Dictionary_2_pick_value_m69143_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m69144_gshared (Dictionary_2_t4481 * __this, KeyValuePair_2U5BU5D_t10381* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m69144(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4481 *, KeyValuePair_2U5BU5D_t10381*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m69144_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Resize()
extern "C" void Dictionary_2_Resize_m69145_gshared (Dictionary_2_t4481 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m69145(__this, method) (( void (*) (Dictionary_2_t4481 *, const MethodInfo*))Dictionary_2_Resize_m69145_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m69146_gshared (Dictionary_2_t4481 * __this, int32_t ___key, Label_t4478  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m69146(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4481 *, int32_t, Label_t4478 , const MethodInfo*))Dictionary_2_Add_m69146_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Clear()
extern "C" void Dictionary_2_Clear_m69147_gshared (Dictionary_2_t4481 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m69147(__this, method) (( void (*) (Dictionary_2_t4481 *, const MethodInfo*))Dictionary_2_Clear_m69147_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m69148_gshared (Dictionary_2_t4481 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m69148(__this, ___key, method) (( bool (*) (Dictionary_2_t4481 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m69148_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m69149_gshared (Dictionary_2_t4481 * __this, Label_t4478  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m69149(__this, ___value, method) (( bool (*) (Dictionary_2_t4481 *, Label_t4478 , const MethodInfo*))Dictionary_2_ContainsValue_m69149_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m69150_gshared (Dictionary_2_t4481 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m69150(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4481 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2_GetObjectData_m69150_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m69151_gshared (Dictionary_2_t4481 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m69151(__this, ___sender, method) (( void (*) (Dictionary_2_t4481 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m69151_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m69152_gshared (Dictionary_2_t4481 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m69152(__this, ___key, method) (( bool (*) (Dictionary_2_t4481 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m69152_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m69153_gshared (Dictionary_2_t4481 * __this, int32_t ___key, Label_t4478 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m69153(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4481 *, int32_t, Label_t4478 *, const MethodInfo*))Dictionary_2_TryGetValue_m69153_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Keys()
extern "C" KeyCollection_t9269 * Dictionary_2_get_Keys_m69154_gshared (Dictionary_2_t4481 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m69154(__this, method) (( KeyCollection_t9269 * (*) (Dictionary_2_t4481 *, const MethodInfo*))Dictionary_2_get_Keys_m69154_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::get_Values()
extern "C" ValueCollection_t9273 * Dictionary_2_get_Values_m69155_gshared (Dictionary_2_t4481 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m69155(__this, method) (( ValueCollection_t9273 * (*) (Dictionary_2_t4481 *, const MethodInfo*))Dictionary_2_get_Values_m69155_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m69156_gshared (Dictionary_2_t4481 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m69156(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4481 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m69156_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ToTValue(System.Object)
extern "C" Label_t4478  Dictionary_2_ToTValue_m69157_gshared (Dictionary_2_t4481 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m69157(__this, ___value, method) (( Label_t4478  (*) (Dictionary_2_t4481 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m69157_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m69158_gshared (Dictionary_2_t4481 * __this, KeyValuePair_2_t9266  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m69158(__this, ___pair, method) (( bool (*) (Dictionary_2_t4481 *, KeyValuePair_2_t9266 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m69158_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::GetEnumerator()
extern "C" Enumerator_t9271  Dictionary_2_GetEnumerator_m69159_gshared (Dictionary_2_t4481 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m69159(__this, method) (( Enumerator_t9271  (*) (Dictionary_2_t4481 *, const MethodInfo*))Dictionary_2_GetEnumerator_m69159_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2160  Dictionary_2_U3CCopyToU3Em__2_m69160_gshared (Object_t * __this /* static, unused */, int32_t ___key, Label_t4478  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m69160(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2160  (*) (Object_t * /* static, unused */, int32_t, Label_t4478 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m69160_gshared)(__this /* static, unused */, ___key, ___value, method)
