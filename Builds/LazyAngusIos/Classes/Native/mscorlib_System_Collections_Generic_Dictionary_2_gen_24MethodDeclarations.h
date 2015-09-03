#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct Dictionary_2_t931;
// System.Collections.Generic.ICollection`1<UnityEngine.Font>
struct ICollection_1_t9628;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct ICollection_1_t9629;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t1077;
// UnityEngine.Font
struct Font_t929;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct KeyCollection_t6410;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct ValueCollection_t6411;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Font>
struct IEqualityComparer_1_t6401;
// System.Collections.Generic.IDictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct IDictionary_2_t9630;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>[]
struct KeyValuePair_2U5BU5D_t9631;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
struct IEnumerator_1_t9632;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_35.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__30.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_52MethodDeclarations.h"
#define Dictionary_2__ctor_m6053(__this, method) (( void (*) (Dictionary_2_t931 *, const MethodInfo*))Dictionary_2__ctor_m26135_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33528(__this, ___comparer, method) (( void (*) (Dictionary_2_t931 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26137_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m33529(__this, ___dictionary, method) (( void (*) (Dictionary_2_t931 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26139_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m33530(__this, ___capacity, method) (( void (*) (Dictionary_2_t931 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26141_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33531(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t931 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26143_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m33532(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t931 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m26145_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33533(__this, method) (( Object_t* (*) (Dictionary_2_t931 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26147_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33534(__this, method) (( Object_t* (*) (Dictionary_2_t931 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26149_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33535(__this, method) (( Object_t * (*) (Dictionary_2_t931 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26151_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m33536(__this, method) (( Object_t * (*) (Dictionary_2_t931 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m26153_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33537(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t931 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26155_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33538(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t931 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26157_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m33539(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t931 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26159_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m33540(__this, ___key, method) (( bool (*) (Dictionary_2_t931 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26161_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m33541(__this, ___key, method) (( void (*) (Dictionary_2_t931 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26163_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33542(__this, method) (( bool (*) (Dictionary_2_t931 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26165_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33543(__this, method) (( Object_t * (*) (Dictionary_2_t931 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26167_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33544(__this, method) (( bool (*) (Dictionary_2_t931 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26169_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33545(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t931 *, KeyValuePair_2_t6409 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26171_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33546(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t931 *, KeyValuePair_2_t6409 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26173_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33547(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t931 *, KeyValuePair_2U5BU5D_t9631*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26175_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33548(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t931 *, KeyValuePair_2_t6409 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26177_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33549(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t931 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26179_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33550(__this, method) (( Object_t * (*) (Dictionary_2_t931 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26181_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33551(__this, method) (( Object_t* (*) (Dictionary_2_t931 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26183_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33552(__this, method) (( Object_t * (*) (Dictionary_2_t931 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26185_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Count()
#define Dictionary_2_get_Count_m33553(__this, method) (( int32_t (*) (Dictionary_2_t931 *, const MethodInfo*))Dictionary_2_get_Count_m26187_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Item(TKey)
#define Dictionary_2_get_Item_m33554(__this, ___key, method) (( List_1_t1077 * (*) (Dictionary_2_t931 *, Font_t929 *, const MethodInfo*))Dictionary_2_get_Item_m26189_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m33555(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t931 *, Font_t929 *, List_1_t1077 *, const MethodInfo*))Dictionary_2_set_Item_m26191_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m33556(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t931 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26193_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m33557(__this, ___size, method) (( void (*) (Dictionary_2_t931 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26195_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m33558(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t931 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26197_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m33559(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6409  (*) (Object_t * /* static, unused */, Font_t929 *, List_1_t1077 *, const MethodInfo*))Dictionary_2_make_pair_m26199_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m33560(__this /* static, unused */, ___key, ___value, method) (( Font_t929 * (*) (Object_t * /* static, unused */, Font_t929 *, List_1_t1077 *, const MethodInfo*))Dictionary_2_pick_key_m26201_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m33561(__this /* static, unused */, ___key, ___value, method) (( List_1_t1077 * (*) (Object_t * /* static, unused */, Font_t929 *, List_1_t1077 *, const MethodInfo*))Dictionary_2_pick_value_m26203_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m33562(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t931 *, KeyValuePair_2U5BU5D_t9631*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26205_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Resize()
#define Dictionary_2_Resize_m33563(__this, method) (( void (*) (Dictionary_2_t931 *, const MethodInfo*))Dictionary_2_Resize_m26207_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Add(TKey,TValue)
#define Dictionary_2_Add_m33564(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t931 *, Font_t929 *, List_1_t1077 *, const MethodInfo*))Dictionary_2_Add_m26209_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Clear()
#define Dictionary_2_Clear_m33565(__this, method) (( void (*) (Dictionary_2_t931 *, const MethodInfo*))Dictionary_2_Clear_m26211_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m33566(__this, ___key, method) (( bool (*) (Dictionary_2_t931 *, Font_t929 *, const MethodInfo*))Dictionary_2_ContainsKey_m26213_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m33567(__this, ___value, method) (( bool (*) (Dictionary_2_t931 *, List_1_t1077 *, const MethodInfo*))Dictionary_2_ContainsValue_m26215_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m33568(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t931 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m26217_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m33569(__this, ___sender, method) (( void (*) (Dictionary_2_t931 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26219_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Remove(TKey)
#define Dictionary_2_Remove_m33570(__this, ___key, method) (( bool (*) (Dictionary_2_t931 *, Font_t929 *, const MethodInfo*))Dictionary_2_Remove_m26221_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m33571(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t931 *, Font_t929 *, List_1_t1077 **, const MethodInfo*))Dictionary_2_TryGetValue_m26223_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Keys()
#define Dictionary_2_get_Keys_m33572(__this, method) (( KeyCollection_t6410 * (*) (Dictionary_2_t931 *, const MethodInfo*))Dictionary_2_get_Keys_m26224_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Values()
#define Dictionary_2_get_Values_m33573(__this, method) (( ValueCollection_t6411 * (*) (Dictionary_2_t931 *, const MethodInfo*))Dictionary_2_get_Values_m26226_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m33574(__this, ___key, method) (( Font_t929 * (*) (Dictionary_2_t931 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26228_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m33575(__this, ___value, method) (( List_1_t1077 * (*) (Dictionary_2_t931 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26230_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m33576(__this, ___pair, method) (( bool (*) (Dictionary_2_t931 *, KeyValuePair_2_t6409 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26232_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m33577(__this, method) (( Enumerator_t6412  (*) (Dictionary_2_t931 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26233_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m33578(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, Font_t929 *, List_1_t1077 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m26235_gshared)(__this /* static, unused */, ___key, ___value, method)
