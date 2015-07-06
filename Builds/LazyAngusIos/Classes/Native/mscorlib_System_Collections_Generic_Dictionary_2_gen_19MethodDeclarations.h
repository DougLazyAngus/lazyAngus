#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct Dictionary_2_t725;
// System.Collections.Generic.ICollection`1<UnityEngine.Font>
struct ICollection_1_t4391;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct ICollection_1_t4392;
// System.Collections.ICollection
struct ICollection_t571;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t872;
// UnityEngine.Font
struct Font_t723;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct KeyCollection_t3691;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct ValueCollection_t3692;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Font>
struct IEqualityComparer_1_t3682;
// System.Collections.Generic.IDictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct IDictionary_2_t4393;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>[]
struct KeyValuePair_2U5BU5D_t4394;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
struct IEnumerator_1_t4395;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1418;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31MethodDeclarations.h"
#define Dictionary_2__ctor_m4510(__this, method) (( void (*) (Dictionary_2_t725 *, const MethodInfo*))Dictionary_2__ctor_m16853_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m22920(__this, ___comparer, method) (( void (*) (Dictionary_2_t725 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16855_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m22921(__this, ___dictionary, method) (( void (*) (Dictionary_2_t725 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16857_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m22922(__this, ___capacity, method) (( void (*) (Dictionary_2_t725 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16859_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m22923(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t725 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16861_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m22924(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t725 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2__ctor_m16863_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22925(__this, method) (( Object_t* (*) (Dictionary_2_t725 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m16865_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22926(__this, method) (( Object_t* (*) (Dictionary_2_t725 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m16867_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m22927(__this, method) (( Object_t * (*) (Dictionary_2_t725 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m16869_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m22928(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t725 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16871_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m22929(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t725 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16873_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m22930(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t725 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16875_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m22931(__this, ___key, method) (( bool (*) (Dictionary_2_t725 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16877_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m22932(__this, ___key, method) (( void (*) (Dictionary_2_t725 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16879_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22933(__this, method) (( bool (*) (Dictionary_2_t725 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16881_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22934(__this, method) (( Object_t * (*) (Dictionary_2_t725 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16883_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22935(__this, method) (( bool (*) (Dictionary_2_t725 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16885_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22936(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t725 *, KeyValuePair_2_t3690 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16887_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22937(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t725 *, KeyValuePair_2_t3690 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16889_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22938(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t725 *, KeyValuePair_2U5BU5D_t4394*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16891_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22939(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t725 *, KeyValuePair_2_t3690 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16893_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m22940(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t725 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16895_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22941(__this, method) (( Object_t * (*) (Dictionary_2_t725 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16897_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22942(__this, method) (( Object_t* (*) (Dictionary_2_t725 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16899_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22943(__this, method) (( Object_t * (*) (Dictionary_2_t725 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16901_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Count()
#define Dictionary_2_get_Count_m22944(__this, method) (( int32_t (*) (Dictionary_2_t725 *, const MethodInfo*))Dictionary_2_get_Count_m16903_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Item(TKey)
#define Dictionary_2_get_Item_m22945(__this, ___key, method) (( List_1_t872 * (*) (Dictionary_2_t725 *, Font_t723 *, const MethodInfo*))Dictionary_2_get_Item_m16905_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m22946(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t725 *, Font_t723 *, List_1_t872 *, const MethodInfo*))Dictionary_2_set_Item_m16907_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m22947(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t725 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16909_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m22948(__this, ___size, method) (( void (*) (Dictionary_2_t725 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16911_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m22949(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t725 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16913_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m22950(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3690  (*) (Object_t * /* static, unused */, Font_t723 *, List_1_t872 *, const MethodInfo*))Dictionary_2_make_pair_m16915_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m22951(__this /* static, unused */, ___key, ___value, method) (( Font_t723 * (*) (Object_t * /* static, unused */, Font_t723 *, List_1_t872 *, const MethodInfo*))Dictionary_2_pick_key_m16917_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m22952(__this /* static, unused */, ___key, ___value, method) (( List_1_t872 * (*) (Object_t * /* static, unused */, Font_t723 *, List_1_t872 *, const MethodInfo*))Dictionary_2_pick_value_m16919_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m22953(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t725 *, KeyValuePair_2U5BU5D_t4394*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16921_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Resize()
#define Dictionary_2_Resize_m22954(__this, method) (( void (*) (Dictionary_2_t725 *, const MethodInfo*))Dictionary_2_Resize_m16923_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Add(TKey,TValue)
#define Dictionary_2_Add_m22955(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t725 *, Font_t723 *, List_1_t872 *, const MethodInfo*))Dictionary_2_Add_m16925_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Clear()
#define Dictionary_2_Clear_m22956(__this, method) (( void (*) (Dictionary_2_t725 *, const MethodInfo*))Dictionary_2_Clear_m16927_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m22957(__this, ___key, method) (( bool (*) (Dictionary_2_t725 *, Font_t723 *, const MethodInfo*))Dictionary_2_ContainsKey_m16929_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m22958(__this, ___value, method) (( bool (*) (Dictionary_2_t725 *, List_1_t872 *, const MethodInfo*))Dictionary_2_ContainsValue_m16931_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m22959(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t725 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2_GetObjectData_m16933_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m22960(__this, ___sender, method) (( void (*) (Dictionary_2_t725 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16935_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Remove(TKey)
#define Dictionary_2_Remove_m22961(__this, ___key, method) (( bool (*) (Dictionary_2_t725 *, Font_t723 *, const MethodInfo*))Dictionary_2_Remove_m16937_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m22962(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t725 *, Font_t723 *, List_1_t872 **, const MethodInfo*))Dictionary_2_TryGetValue_m16939_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Keys()
#define Dictionary_2_get_Keys_m22963(__this, method) (( KeyCollection_t3691 * (*) (Dictionary_2_t725 *, const MethodInfo*))Dictionary_2_get_Keys_m16940_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Values()
#define Dictionary_2_get_Values_m22964(__this, method) (( ValueCollection_t3692 * (*) (Dictionary_2_t725 *, const MethodInfo*))Dictionary_2_get_Values_m16942_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m22965(__this, ___key, method) (( Font_t723 * (*) (Dictionary_2_t725 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16944_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m22966(__this, ___value, method) (( List_1_t872 * (*) (Dictionary_2_t725 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16946_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m22967(__this, ___pair, method) (( bool (*) (Dictionary_2_t725 *, KeyValuePair_2_t3690 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16948_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m22968(__this, method) (( Enumerator_t3693  (*) (Dictionary_2_t725 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16949_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m22969(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1685  (*) (Object_t * /* static, unused */, Font_t723 *, List_1_t872 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16951_gshared)(__this /* static, unused */, ___key, ___value, method)
