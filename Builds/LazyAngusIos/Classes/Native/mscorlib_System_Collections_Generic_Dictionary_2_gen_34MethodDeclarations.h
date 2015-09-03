#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>
struct Dictionary_2_t1525;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Type,System.String>>
struct ICollection_1_t9789;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Tuple`2<System.Type,System.String>
struct Tuple_2_t1516;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>
struct KeyCollection_t6815;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>
struct ValueCollection_t6816;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<System.Type,System.String>>
struct IEqualityComparer_1_t6812;
// System.Collections.Generic.IDictionary`2<System.Tuple`2<System.Type,System.String>,System.String>
struct IDictionary_2_t1291;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>[]
struct KeyValuePair_2U5BU5D_t9790;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>>
struct IEnumerator_1_t9791;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_49.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.String>,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__45.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_52MethodDeclarations.h"
#define Dictionary_2__ctor_m7782(__this, method) (( void (*) (Dictionary_2_t1525 *, const MethodInfo*))Dictionary_2__ctor_m26135_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m38766(__this, ___comparer, method) (( void (*) (Dictionary_2_t1525 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26137_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m38767(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1525 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26139_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Int32)
#define Dictionary_2__ctor_m38768(__this, ___capacity, method) (( void (*) (Dictionary_2_t1525 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26141_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m38769(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1525 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26143_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m38770(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1525 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m26145_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38771(__this, method) (( Object_t* (*) (Dictionary_2_t1525 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26147_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38772(__this, method) (( Object_t* (*) (Dictionary_2_t1525 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26149_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m38773(__this, method) (( Object_t * (*) (Dictionary_2_t1525 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26151_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m38774(__this, method) (( Object_t * (*) (Dictionary_2_t1525 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m26153_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m38775(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1525 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26155_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m38776(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1525 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26157_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m38777(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1525 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26159_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m38778(__this, ___key, method) (( bool (*) (Dictionary_2_t1525 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26161_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m38779(__this, ___key, method) (( void (*) (Dictionary_2_t1525 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26163_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38780(__this, method) (( bool (*) (Dictionary_2_t1525 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26165_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38781(__this, method) (( Object_t * (*) (Dictionary_2_t1525 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26167_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38782(__this, method) (( bool (*) (Dictionary_2_t1525 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26169_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38783(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1525 *, KeyValuePair_2_t6814 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26171_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38784(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1525 *, KeyValuePair_2_t6814 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26173_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38785(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1525 *, KeyValuePair_2U5BU5D_t9790*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26175_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38786(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1525 *, KeyValuePair_2_t6814 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26177_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m38787(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1525 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26179_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38788(__this, method) (( Object_t * (*) (Dictionary_2_t1525 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26181_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38789(__this, method) (( Object_t* (*) (Dictionary_2_t1525 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26183_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38790(__this, method) (( Object_t * (*) (Dictionary_2_t1525 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26185_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::get_Count()
#define Dictionary_2_get_Count_m38791(__this, method) (( int32_t (*) (Dictionary_2_t1525 *, const MethodInfo*))Dictionary_2_get_Count_m26187_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::get_Item(TKey)
#define Dictionary_2_get_Item_m38792(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1525 *, Tuple_2_t1516 *, const MethodInfo*))Dictionary_2_get_Item_m26189_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m38793(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1525 *, Tuple_2_t1516 *, String_t*, const MethodInfo*))Dictionary_2_set_Item_m26191_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m38794(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1525 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26193_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m38795(__this, ___size, method) (( void (*) (Dictionary_2_t1525 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26195_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m38796(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1525 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26197_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m38797(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6814  (*) (Object_t * /* static, unused */, Tuple_2_t1516 *, String_t*, const MethodInfo*))Dictionary_2_make_pair_m26199_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m38798(__this /* static, unused */, ___key, ___value, method) (( Tuple_2_t1516 * (*) (Object_t * /* static, unused */, Tuple_2_t1516 *, String_t*, const MethodInfo*))Dictionary_2_pick_key_m26201_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m38799(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, Tuple_2_t1516 *, String_t*, const MethodInfo*))Dictionary_2_pick_value_m26203_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m38800(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1525 *, KeyValuePair_2U5BU5D_t9790*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26205_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Resize()
#define Dictionary_2_Resize_m38801(__this, method) (( void (*) (Dictionary_2_t1525 *, const MethodInfo*))Dictionary_2_Resize_m26207_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Add(TKey,TValue)
#define Dictionary_2_Add_m38802(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1525 *, Tuple_2_t1516 *, String_t*, const MethodInfo*))Dictionary_2_Add_m26209_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Clear()
#define Dictionary_2_Clear_m38803(__this, method) (( void (*) (Dictionary_2_t1525 *, const MethodInfo*))Dictionary_2_Clear_m26211_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m38804(__this, ___key, method) (( bool (*) (Dictionary_2_t1525 *, Tuple_2_t1516 *, const MethodInfo*))Dictionary_2_ContainsKey_m26213_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m38805(__this, ___value, method) (( bool (*) (Dictionary_2_t1525 *, String_t*, const MethodInfo*))Dictionary_2_ContainsValue_m26215_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m38806(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1525 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m26217_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m38807(__this, ___sender, method) (( void (*) (Dictionary_2_t1525 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26219_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Remove(TKey)
#define Dictionary_2_Remove_m38808(__this, ___key, method) (( bool (*) (Dictionary_2_t1525 *, Tuple_2_t1516 *, const MethodInfo*))Dictionary_2_Remove_m26221_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m38809(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1525 *, Tuple_2_t1516 *, String_t**, const MethodInfo*))Dictionary_2_TryGetValue_m26223_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::get_Keys()
#define Dictionary_2_get_Keys_m38810(__this, method) (( KeyCollection_t6815 * (*) (Dictionary_2_t1525 *, const MethodInfo*))Dictionary_2_get_Keys_m26224_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::get_Values()
#define Dictionary_2_get_Values_m38811(__this, method) (( ValueCollection_t6816 * (*) (Dictionary_2_t1525 *, const MethodInfo*))Dictionary_2_get_Values_m26226_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m38812(__this, ___key, method) (( Tuple_2_t1516 * (*) (Dictionary_2_t1525 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26228_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m38813(__this, ___value, method) (( String_t* (*) (Dictionary_2_t1525 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26230_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m38814(__this, ___pair, method) (( bool (*) (Dictionary_2_t1525 *, KeyValuePair_2_t6814 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26232_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m38815(__this, method) (( Enumerator_t6817  (*) (Dictionary_2_t1525 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26233_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m38816(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, Tuple_2_t1516 *, String_t*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m26235_gshared)(__this /* static, unused */, ___key, ___value, method)
