#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>
struct Dictionary_2_t702;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<FBLikeInfo>
struct ICollection_1_t8784;
// System.Collections.ICollection
struct ICollection_t707;
// System.Object
struct Object_t;
// FBLikeInfo
struct FBLikeInfo_t289;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,FBLikeInfo>
struct KeyCollection_t5549;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBLikeInfo>
struct ValueCollection_t5550;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5335;
// System.Collections.Generic.IDictionary`2<System.String,FBLikeInfo>
struct IDictionary_2_t8785;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.String,FBLikeInfo>[]
struct KeyValuePair_2U5BU5D_t8786;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,FBLikeInfo>>
struct IEnumerator_1_t8787;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,FBLikeInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,FBLikeInfo>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_47MethodDeclarations.h"
#define Dictionary_2__ctor_m3664(__this, method) (( void (*) (Dictionary_2_t702 *, const MethodInfo*))Dictionary_2__ctor_m21554_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24757(__this, ___comparer, method) (( void (*) (Dictionary_2_t702 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21556_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m24758(__this, ___dictionary, method) (( void (*) (Dictionary_2_t702 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21558_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Int32)
#define Dictionary_2__ctor_m24759(__this, ___capacity, method) (( void (*) (Dictionary_2_t702 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21560_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24760(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t702 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21562_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m24761(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t702 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m21564_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24762(__this, method) (( Object_t* (*) (Dictionary_2_t702 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21566_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24763(__this, method) (( Object_t* (*) (Dictionary_2_t702 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21568_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m24764(__this, method) (( Object_t * (*) (Dictionary_2_t702 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21570_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24765(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t702 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21572_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24766(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t702 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21574_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m24767(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t702 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21576_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m24768(__this, ___key, method) (( bool (*) (Dictionary_2_t702 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21578_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m24769(__this, ___key, method) (( void (*) (Dictionary_2_t702 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21580_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24770(__this, method) (( bool (*) (Dictionary_2_t702 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21582_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24771(__this, method) (( Object_t * (*) (Dictionary_2_t702 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21584_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24772(__this, method) (( bool (*) (Dictionary_2_t702 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21586_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24773(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t702 *, KeyValuePair_2_t700 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21588_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24774(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t702 *, KeyValuePair_2_t700 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21590_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24775(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t702 *, KeyValuePair_2U5BU5D_t8786*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21592_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24776(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t702 *, KeyValuePair_2_t700 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21594_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24777(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t702 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21596_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24778(__this, method) (( Object_t * (*) (Dictionary_2_t702 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21598_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24779(__this, method) (( Object_t* (*) (Dictionary_2_t702 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21600_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24780(__this, method) (( Object_t * (*) (Dictionary_2_t702 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21602_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::get_Count()
#define Dictionary_2_get_Count_m24781(__this, method) (( int32_t (*) (Dictionary_2_t702 *, const MethodInfo*))Dictionary_2_get_Count_m21604_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::get_Item(TKey)
#define Dictionary_2_get_Item_m24782(__this, ___key, method) (( FBLikeInfo_t289 * (*) (Dictionary_2_t702 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21606_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m24783(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t702 *, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_set_Item_m21608_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m24784(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t702 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21610_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m24785(__this, ___size, method) (( void (*) (Dictionary_2_t702 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21612_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m24786(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t702 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21614_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m24787(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t700  (*) (Object_t * /* static, unused */, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_make_pair_m21616_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m24788(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_pick_key_m21618_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m24789(__this /* static, unused */, ___key, ___value, method) (( FBLikeInfo_t289 * (*) (Object_t * /* static, unused */, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_pick_value_m21620_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m24790(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t702 *, KeyValuePair_2U5BU5D_t8786*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21622_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Resize()
#define Dictionary_2_Resize_m24791(__this, method) (( void (*) (Dictionary_2_t702 *, const MethodInfo*))Dictionary_2_Resize_m21624_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Add(TKey,TValue)
#define Dictionary_2_Add_m24792(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t702 *, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_Add_m21626_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Clear()
#define Dictionary_2_Clear_m24793(__this, method) (( void (*) (Dictionary_2_t702 *, const MethodInfo*))Dictionary_2_Clear_m21628_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m24794(__this, ___key, method) (( bool (*) (Dictionary_2_t702 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21630_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m24795(__this, ___value, method) (( bool (*) (Dictionary_2_t702 *, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_ContainsValue_m21632_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m24796(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t702 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m21634_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m24797(__this, ___sender, method) (( void (*) (Dictionary_2_t702 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21636_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Remove(TKey)
#define Dictionary_2_Remove_m24798(__this, ___key, method) (( bool (*) (Dictionary_2_t702 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21638_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m24799(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t702 *, String_t*, FBLikeInfo_t289 **, const MethodInfo*))Dictionary_2_TryGetValue_m21640_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::get_Keys()
#define Dictionary_2_get_Keys_m24800(__this, method) (( KeyCollection_t5549 * (*) (Dictionary_2_t702 *, const MethodInfo*))Dictionary_2_get_Keys_m21641_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::get_Values()
#define Dictionary_2_get_Values_m24801(__this, method) (( ValueCollection_t5550 * (*) (Dictionary_2_t702 *, const MethodInfo*))Dictionary_2_get_Values_m21643_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m24802(__this, ___key, method) (( String_t* (*) (Dictionary_2_t702 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21645_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m24803(__this, ___value, method) (( FBLikeInfo_t289 * (*) (Dictionary_2_t702 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21647_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m24804(__this, ___pair, method) (( bool (*) (Dictionary_2_t702 *, KeyValuePair_2_t700 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21649_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3649(__this, method) (( Enumerator_t701  (*) (Dictionary_2_t702 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21650_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m24805(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21652_gshared)(__this /* static, unused */, ___key, ___value, method)
