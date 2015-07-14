#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,FBScore>
struct Dictionary_2_t204;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1235;
// System.Collections.Generic.ICollection`1<FBScore>
struct ICollection_1_t4249;
// System.Collections.ICollection
struct ICollection_t590;
// System.Object
struct Object_t;
// FBScore
struct FBScore_t225;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,FBScore>
struct KeyCollection_t3475;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>
struct ValueCollection_t3476;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3299;
// System.Collections.Generic.IDictionary`2<System.String,FBScore>
struct IDictionary_2_t4250;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1245;
// System.Collections.Generic.KeyValuePair`2<System.String,FBScore>[]
struct KeyValuePair_2U5BU5D_t4251;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,FBScore>>
struct IEnumerator_1_t4252;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1441;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,FBScore>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,FBScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31MethodDeclarations.h"
#define Dictionary_2__ctor_m2674(__this, method) (( void (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2__ctor_m17008_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19361(__this, ___comparer, method) (( void (*) (Dictionary_2_t204 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17010_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m19362(__this, ___dictionary, method) (( void (*) (Dictionary_2_t204 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17012_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Int32)
#define Dictionary_2__ctor_m19363(__this, ___capacity, method) (( void (*) (Dictionary_2_t204 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17014_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19364(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t204 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17016_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m19365(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t204 *, SerializationInfo_t1245 *, StreamingContext_t1246 , const MethodInfo*))Dictionary_2__ctor_m17018_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19366(__this, method) (( Object_t* (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17020_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19367(__this, method) (( Object_t* (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17022_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m19368(__this, method) (( Object_t * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17024_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19369(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17026_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19370(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t204 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17028_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m19371(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t204 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17030_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m19372(__this, ___key, method) (( bool (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17032_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m19373(__this, ___key, method) (( void (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17034_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19374(__this, method) (( bool (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17036_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19375(__this, method) (( Object_t * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17038_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19376(__this, method) (( bool (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17040_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19377(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t204 *, KeyValuePair_2_t588 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17042_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19378(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t204 *, KeyValuePair_2_t588 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17044_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19379(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t204 *, KeyValuePair_2U5BU5D_t4251*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17046_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19380(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t204 *, KeyValuePair_2_t588 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17048_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19381(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t204 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17050_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19382(__this, method) (( Object_t * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17052_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19383(__this, method) (( Object_t* (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17054_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19384(__this, method) (( Object_t * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17056_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Count()
#define Dictionary_2_get_Count_m19385(__this, method) (( int32_t (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_get_Count_m17058_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Item(TKey)
#define Dictionary_2_get_Item_m19386(__this, ___key, method) (( FBScore_t225 * (*) (Dictionary_2_t204 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m17060_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m19387(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t204 *, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_set_Item_m17062_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m19388(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t204 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17064_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m19389(__this, ___size, method) (( void (*) (Dictionary_2_t204 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17066_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m19390(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t204 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17068_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m19391(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t588  (*) (Object_t * /* static, unused */, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_make_pair_m17070_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBScore>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m19392(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_pick_key_m17072_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m19393(__this /* static, unused */, ___key, ___value, method) (( FBScore_t225 * (*) (Object_t * /* static, unused */, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_pick_value_m17074_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m19394(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t204 *, KeyValuePair_2U5BU5D_t4251*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17076_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Resize()
#define Dictionary_2_Resize_m19395(__this, method) (( void (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_Resize_m17078_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Add(TKey,TValue)
#define Dictionary_2_Add_m19396(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t204 *, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_Add_m17080_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Clear()
#define Dictionary_2_Clear_m19397(__this, method) (( void (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_Clear_m17082_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m19398(__this, ___key, method) (( bool (*) (Dictionary_2_t204 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m17084_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m19399(__this, ___value, method) (( bool (*) (Dictionary_2_t204 *, FBScore_t225 *, const MethodInfo*))Dictionary_2_ContainsValue_m17086_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m19400(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t204 *, SerializationInfo_t1245 *, StreamingContext_t1246 , const MethodInfo*))Dictionary_2_GetObjectData_m17088_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m19401(__this, ___sender, method) (( void (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17090_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::Remove(TKey)
#define Dictionary_2_Remove_m19402(__this, ___key, method) (( bool (*) (Dictionary_2_t204 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m17092_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m19403(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t204 *, String_t*, FBScore_t225 **, const MethodInfo*))Dictionary_2_TryGetValue_m17094_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Keys()
#define Dictionary_2_get_Keys_m19404(__this, method) (( KeyCollection_t3475 * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_get_Keys_m17095_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Values()
#define Dictionary_2_get_Values_m19405(__this, method) (( ValueCollection_t3476 * (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_get_Values_m17097_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBScore>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m19406(__this, ___key, method) (( String_t* (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17099_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m19407(__this, ___value, method) (( FBScore_t225 * (*) (Dictionary_2_t204 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17101_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m19408(__this, ___pair, method) (( bool (*) (Dictionary_2_t204 *, KeyValuePair_2_t588 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17103_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m2705(__this, method) (( Enumerator_t589  (*) (Dictionary_2_t204 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17104_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,FBScore>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m19409(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1708  (*) (Object_t * /* static, unused */, String_t*, FBScore_t225 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17106_gshared)(__this /* static, unused */, ___key, ___value, method)
