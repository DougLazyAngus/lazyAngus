#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>
struct Dictionary_2_t7084;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<Parse.ParseACL>
struct ICollection_1_t9173;
// System.Collections.ICollection
struct ICollection_t705;
// System.Object
struct Object_t;
// Parse.ParseACL
struct ParseACL_t1163;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Parse.ParseACL>
struct KeyCollection_t7086;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Parse.ParseACL>
struct ValueCollection_t7087;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5333;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>
struct IDictionary_2_t6963;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2869;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseACL>[]
struct KeyValuePair_2U5BU5D_t9246;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseACL>>
struct IEnumerator_1_t9247;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3911;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseACL>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_62.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Parse.ParseACL>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__58.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_47MethodDeclarations.h"
#define Dictionary_2__ctor_m45251(__this, method) (( void (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2__ctor_m21539_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m45252(__this, ___comparer, method) (( void (*) (Dictionary_2_t7084 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21541_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m45253(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7084 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21543_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor(System.Int32)
#define Dictionary_2__ctor_m45254(__this, ___capacity, method) (( void (*) (Dictionary_2_t7084 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21545_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m45255(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7084 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21547_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m45256(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7084 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2__ctor_m21549_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45257(__this, method) (( Object_t* (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21551_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45258(__this, method) (( Object_t* (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21553_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m45259(__this, method) (( Object_t * (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21555_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m45260(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7084 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21557_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m45261(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7084 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21559_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m45262(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7084 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21561_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m45263(__this, ___key, method) (( bool (*) (Dictionary_2_t7084 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21563_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m45264(__this, ___key, method) (( void (*) (Dictionary_2_t7084 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21565_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45265(__this, method) (( bool (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21567_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45266(__this, method) (( Object_t * (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21569_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45267(__this, method) (( bool (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21571_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45268(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7084 *, KeyValuePair_2_t7085 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21573_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45269(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7084 *, KeyValuePair_2_t7085 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21575_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45270(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7084 *, KeyValuePair_2U5BU5D_t9246*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21577_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45271(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7084 *, KeyValuePair_2_t7085 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21579_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m45272(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7084 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21581_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45273(__this, method) (( Object_t * (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21583_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45274(__this, method) (( Object_t* (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21585_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45275(__this, method) (( Object_t * (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21587_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::get_Count()
#define Dictionary_2_get_Count_m45276(__this, method) (( int32_t (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_get_Count_m21589_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::get_Item(TKey)
#define Dictionary_2_get_Item_m45277(__this, ___key, method) (( ParseACL_t1163 * (*) (Dictionary_2_t7084 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21591_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m45278(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7084 *, String_t*, ParseACL_t1163 *, const MethodInfo*))Dictionary_2_set_Item_m21593_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m45279(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7084 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21595_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m45280(__this, ___size, method) (( void (*) (Dictionary_2_t7084 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21597_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m45281(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7084 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21599_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m45282(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7085  (*) (Object_t * /* static, unused */, String_t*, ParseACL_t1163 *, const MethodInfo*))Dictionary_2_make_pair_m21601_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m45283(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, ParseACL_t1163 *, const MethodInfo*))Dictionary_2_pick_key_m21603_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m45284(__this /* static, unused */, ___key, ___value, method) (( ParseACL_t1163 * (*) (Object_t * /* static, unused */, String_t*, ParseACL_t1163 *, const MethodInfo*))Dictionary_2_pick_value_m21605_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m45285(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7084 *, KeyValuePair_2U5BU5D_t9246*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21607_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::Resize()
#define Dictionary_2_Resize_m45286(__this, method) (( void (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_Resize_m21609_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::Add(TKey,TValue)
#define Dictionary_2_Add_m45287(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7084 *, String_t*, ParseACL_t1163 *, const MethodInfo*))Dictionary_2_Add_m21611_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::Clear()
#define Dictionary_2_Clear_m45288(__this, method) (( void (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_Clear_m21613_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m45289(__this, ___key, method) (( bool (*) (Dictionary_2_t7084 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21615_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m45290(__this, ___value, method) (( bool (*) (Dictionary_2_t7084 *, ParseACL_t1163 *, const MethodInfo*))Dictionary_2_ContainsValue_m21617_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m45291(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7084 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2_GetObjectData_m21619_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m45292(__this, ___sender, method) (( void (*) (Dictionary_2_t7084 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21621_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::Remove(TKey)
#define Dictionary_2_Remove_m45293(__this, ___key, method) (( bool (*) (Dictionary_2_t7084 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21623_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m45294(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7084 *, String_t*, ParseACL_t1163 **, const MethodInfo*))Dictionary_2_TryGetValue_m21625_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::get_Keys()
#define Dictionary_2_get_Keys_m45295(__this, method) (( KeyCollection_t7086 * (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_get_Keys_m21626_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::get_Values()
#define Dictionary_2_get_Values_m45296(__this, method) (( ValueCollection_t7087 * (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_get_Values_m21628_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m45297(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7084 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21630_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m45298(__this, ___value, method) (( ParseACL_t1163 * (*) (Dictionary_2_t7084 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21632_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m45299(__this, ___pair, method) (( bool (*) (Dictionary_2_t7084 *, KeyValuePair_2_t7085 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21634_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m45300(__this, method) (( Enumerator_t7088  (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21635_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,Parse.ParseACL>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m45301(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2088  (*) (Object_t * /* static, unused */, String_t*, ParseACL_t1163 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21637_gshared)(__this /* static, unused */, ___key, ___value, method)
