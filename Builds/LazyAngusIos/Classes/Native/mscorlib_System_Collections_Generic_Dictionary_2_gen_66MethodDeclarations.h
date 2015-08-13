#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>
struct Dictionary_2_t7156;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<Parse.ParseACL>
struct ICollection_1_t9264;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// Parse.ParseACL
struct ParseACL_t1216;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseACL>
struct KeyCollection_t7158;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.ParseACL>
struct ValueCollection_t7159;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5379;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>
struct IDictionary_2_t7035;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseACL>[]
struct KeyValuePair_2U5BU5D_t9337;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseACL>>
struct IEnumerator_1_t9338;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseACL>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_63.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Parse.ParseACL>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__59.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_48MethodDeclarations.h"
#define Dictionary_2__ctor_m45935(__this, method) (( void (*) (Dictionary_2_t7156 *, const MethodInfo*))Dictionary_2__ctor_m21797_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m45936(__this, ___comparer, method) (( void (*) (Dictionary_2_t7156 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21799_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m45937(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7156 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21801_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor(System.Int32)
#define Dictionary_2__ctor_m45938(__this, ___capacity, method) (( void (*) (Dictionary_2_t7156 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21803_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m45939(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7156 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21805_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m45940(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7156 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m21807_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45941(__this, method) (( Object_t* (*) (Dictionary_2_t7156 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21809_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45942(__this, method) (( Object_t* (*) (Dictionary_2_t7156 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21811_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m45943(__this, method) (( Object_t * (*) (Dictionary_2_t7156 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21813_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m45944(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7156 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21815_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m45945(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7156 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21817_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m45946(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7156 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21819_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m45947(__this, ___key, method) (( bool (*) (Dictionary_2_t7156 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21821_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m45948(__this, ___key, method) (( void (*) (Dictionary_2_t7156 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21823_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45949(__this, method) (( bool (*) (Dictionary_2_t7156 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21825_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45950(__this, method) (( Object_t * (*) (Dictionary_2_t7156 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21827_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45951(__this, method) (( bool (*) (Dictionary_2_t7156 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21829_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45952(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7156 *, KeyValuePair_2_t7157 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21831_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45953(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7156 *, KeyValuePair_2_t7157 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21833_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45954(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7156 *, KeyValuePair_2U5BU5D_t9337*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21835_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45955(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7156 *, KeyValuePair_2_t7157 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21837_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m45956(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7156 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21839_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45957(__this, method) (( Object_t * (*) (Dictionary_2_t7156 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21841_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45958(__this, method) (( Object_t* (*) (Dictionary_2_t7156 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21843_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45959(__this, method) (( Object_t * (*) (Dictionary_2_t7156 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21845_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::get_Count()
#define Dictionary_2_get_Count_m45960(__this, method) (( int32_t (*) (Dictionary_2_t7156 *, const MethodInfo*))Dictionary_2_get_Count_m21847_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::get_Item(TKey)
#define Dictionary_2_get_Item_m45961(__this, ___key, method) (( ParseACL_t1216 * (*) (Dictionary_2_t7156 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21849_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m45962(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7156 *, String_t*, ParseACL_t1216 *, const MethodInfo*))Dictionary_2_set_Item_m21851_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m45963(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7156 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21853_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m45964(__this, ___size, method) (( void (*) (Dictionary_2_t7156 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21855_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m45965(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7156 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21857_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m45966(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7157  (*) (Object_t * /* static, unused */, String_t*, ParseACL_t1216 *, const MethodInfo*))Dictionary_2_make_pair_m21859_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m45967(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, ParseACL_t1216 *, const MethodInfo*))Dictionary_2_pick_key_m21861_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m45968(__this /* static, unused */, ___key, ___value, method) (( ParseACL_t1216 * (*) (Object_t * /* static, unused */, String_t*, ParseACL_t1216 *, const MethodInfo*))Dictionary_2_pick_value_m21863_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m45969(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7156 *, KeyValuePair_2U5BU5D_t9337*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21865_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::Resize()
#define Dictionary_2_Resize_m45970(__this, method) (( void (*) (Dictionary_2_t7156 *, const MethodInfo*))Dictionary_2_Resize_m21867_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::Add(TKey,TValue)
#define Dictionary_2_Add_m45971(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7156 *, String_t*, ParseACL_t1216 *, const MethodInfo*))Dictionary_2_Add_m21869_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::Clear()
#define Dictionary_2_Clear_m45972(__this, method) (( void (*) (Dictionary_2_t7156 *, const MethodInfo*))Dictionary_2_Clear_m21871_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m45973(__this, ___key, method) (( bool (*) (Dictionary_2_t7156 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21873_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m45974(__this, ___value, method) (( bool (*) (Dictionary_2_t7156 *, ParseACL_t1216 *, const MethodInfo*))Dictionary_2_ContainsValue_m21875_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m45975(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7156 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m21877_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m45976(__this, ___sender, method) (( void (*) (Dictionary_2_t7156 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21879_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::Remove(TKey)
#define Dictionary_2_Remove_m45977(__this, ___key, method) (( bool (*) (Dictionary_2_t7156 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21881_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m45978(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7156 *, String_t*, ParseACL_t1216 **, const MethodInfo*))Dictionary_2_TryGetValue_m21883_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::get_Keys()
#define Dictionary_2_get_Keys_m45979(__this, method) (( KeyCollection_t7158 * (*) (Dictionary_2_t7156 *, const MethodInfo*))Dictionary_2_get_Keys_m21884_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::get_Values()
#define Dictionary_2_get_Values_m45980(__this, method) (( ValueCollection_t7159 * (*) (Dictionary_2_t7156 *, const MethodInfo*))Dictionary_2_get_Values_m21886_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m45981(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7156 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21888_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m45982(__this, ___value, method) (( ParseACL_t1216 * (*) (Dictionary_2_t7156 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21890_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m45983(__this, ___pair, method) (( bool (*) (Dictionary_2_t7156 *, KeyValuePair_2_t7157 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21892_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m45984(__this, method) (( Enumerator_t7160  (*) (Dictionary_2_t7156 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21893_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m45985(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, String_t*, ParseACL_t1216 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21895_gshared)(__this /* static, unused */, ___key, ___value, method)
