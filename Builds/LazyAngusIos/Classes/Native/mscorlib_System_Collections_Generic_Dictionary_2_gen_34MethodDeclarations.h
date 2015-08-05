#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
struct Dictionary_2_t1460;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
struct ICollection_1_t9071;
// System.Collections.ICollection
struct ICollection_t707;
// System.Object
struct Object_t;
// System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>
struct Tuple_2_t1451;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
struct KeyCollection_t6182;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
struct ValueCollection_t6183;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5335;
// System.Collections.Generic.IDictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
struct IDictionary_2_t1224;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>[]
struct KeyValuePair_2U5BU5D_t9072;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>>
struct IEnumerator_1_t9073;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_49.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__45.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_47MethodDeclarations.h"
#define Dictionary_2__ctor_m7382(__this, method) (( void (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2__ctor_m21554_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33503(__this, ___comparer, method) (( void (*) (Dictionary_2_t1460 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21556_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m33504(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1460 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21558_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m33505(__this, ___capacity, method) (( void (*) (Dictionary_2_t1460 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21560_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33506(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1460 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21562_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m33507(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1460 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m21564_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33508(__this, method) (( Object_t* (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21566_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33509(__this, method) (( Object_t* (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21568_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33510(__this, method) (( Object_t * (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21570_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33511(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1460 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21572_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33512(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1460 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21574_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m33513(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1460 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21576_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m33514(__this, ___key, method) (( bool (*) (Dictionary_2_t1460 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21578_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m33515(__this, ___key, method) (( void (*) (Dictionary_2_t1460 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21580_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33516(__this, method) (( bool (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21582_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33517(__this, method) (( Object_t * (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21584_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33518(__this, method) (( bool (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21586_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33519(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1460 *, KeyValuePair_2_t6181 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21588_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33520(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1460 *, KeyValuePair_2_t6181 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21590_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33521(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1460 *, KeyValuePair_2U5BU5D_t9072*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21592_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33522(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1460 *, KeyValuePair_2_t6181 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21594_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33523(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1460 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21596_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33524(__this, method) (( Object_t * (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21598_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33525(__this, method) (( Object_t* (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21600_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33526(__this, method) (( Object_t * (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21602_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::get_Count()
#define Dictionary_2_get_Count_m33527(__this, method) (( int32_t (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_get_Count_m21604_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::get_Item(TKey)
#define Dictionary_2_get_Item_m33528(__this, ___key, method) (( Tuple_2_t1451 * (*) (Dictionary_2_t1460 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21606_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m33529(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1460 *, String_t*, Tuple_2_t1451 *, const MethodInfo*))Dictionary_2_set_Item_m21608_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m33530(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1460 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21610_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m33531(__this, ___size, method) (( void (*) (Dictionary_2_t1460 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21612_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m33532(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1460 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21614_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m33533(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6181  (*) (Object_t * /* static, unused */, String_t*, Tuple_2_t1451 *, const MethodInfo*))Dictionary_2_make_pair_m21616_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m33534(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Tuple_2_t1451 *, const MethodInfo*))Dictionary_2_pick_key_m21618_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m33535(__this /* static, unused */, ___key, ___value, method) (( Tuple_2_t1451 * (*) (Object_t * /* static, unused */, String_t*, Tuple_2_t1451 *, const MethodInfo*))Dictionary_2_pick_value_m21620_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m33536(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1460 *, KeyValuePair_2U5BU5D_t9072*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21622_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::Resize()
#define Dictionary_2_Resize_m33537(__this, method) (( void (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_Resize_m21624_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::Add(TKey,TValue)
#define Dictionary_2_Add_m33538(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1460 *, String_t*, Tuple_2_t1451 *, const MethodInfo*))Dictionary_2_Add_m21626_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::Clear()
#define Dictionary_2_Clear_m33539(__this, method) (( void (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_Clear_m21628_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m33540(__this, ___key, method) (( bool (*) (Dictionary_2_t1460 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21630_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m33541(__this, ___value, method) (( bool (*) (Dictionary_2_t1460 *, Tuple_2_t1451 *, const MethodInfo*))Dictionary_2_ContainsValue_m21632_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m33542(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1460 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m21634_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m33543(__this, ___sender, method) (( void (*) (Dictionary_2_t1460 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21636_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::Remove(TKey)
#define Dictionary_2_Remove_m33544(__this, ___key, method) (( bool (*) (Dictionary_2_t1460 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21638_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m33545(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1460 *, String_t*, Tuple_2_t1451 **, const MethodInfo*))Dictionary_2_TryGetValue_m21640_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::get_Keys()
#define Dictionary_2_get_Keys_m33546(__this, method) (( KeyCollection_t6182 * (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_get_Keys_m21641_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::get_Values()
#define Dictionary_2_get_Values_m33547(__this, method) (( ValueCollection_t6183 * (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_get_Values_m21643_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m33548(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1460 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21645_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m33549(__this, ___value, method) (( Tuple_2_t1451 * (*) (Dictionary_2_t1460 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21647_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m33550(__this, ___pair, method) (( bool (*) (Dictionary_2_t1460 *, KeyValuePair_2_t6181 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21649_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m33551(__this, method) (( Enumerator_t6184  (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21650_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m33552(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, String_t*, Tuple_2_t1451 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21652_gshared)(__this /* static, unused */, ___key, ___value, method)
