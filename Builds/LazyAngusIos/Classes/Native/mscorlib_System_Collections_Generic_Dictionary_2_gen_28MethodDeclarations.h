#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Dictionary_2_t1444;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Type,System.Type>>
struct ICollection_1_t9082;
// System.Collections.Generic.ICollection`1<System.Func`3<System.Object,System.Object,System.Object>>
struct ICollection_1_t9083;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t1194;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1441;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct KeyCollection_t6075;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct ValueCollection_t6076;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<System.Type,System.Type>>
struct IEqualityComparer_1_t6072;
// System.Collections.Generic.IDictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct IDictionary_2_t1196;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t9084;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>>
struct IEnumerator_1_t9085;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_41.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__36.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_48MethodDeclarations.h"
#define Dictionary_2__ctor_m7380(__this, method) (( void (*) (Dictionary_2_t1444 *, const MethodInfo*))Dictionary_2__ctor_m21798_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m31817(__this, ___comparer, method) (( void (*) (Dictionary_2_t1444 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21800_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m31818(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1444 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21802_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m31819(__this, ___capacity, method) (( void (*) (Dictionary_2_t1444 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21804_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m31820(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1444 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21806_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m31821(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1444 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m21808_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31822(__this, method) (( Object_t* (*) (Dictionary_2_t1444 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21810_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31823(__this, method) (( Object_t* (*) (Dictionary_2_t1444 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21812_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m31824(__this, method) (( Object_t * (*) (Dictionary_2_t1444 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21814_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m31825(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1444 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21816_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m31826(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1444 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21818_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m31827(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1444 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21820_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m31828(__this, ___key, method) (( bool (*) (Dictionary_2_t1444 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21822_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m31829(__this, ___key, method) (( void (*) (Dictionary_2_t1444 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21824_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31830(__this, method) (( bool (*) (Dictionary_2_t1444 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21826_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31831(__this, method) (( Object_t * (*) (Dictionary_2_t1444 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21828_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31832(__this, method) (( bool (*) (Dictionary_2_t1444 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21830_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31833(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1444 *, KeyValuePair_2_t6074 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21832_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31834(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1444 *, KeyValuePair_2_t6074 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21834_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31835(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1444 *, KeyValuePair_2U5BU5D_t9084*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21836_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31836(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1444 *, KeyValuePair_2_t6074 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21838_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m31837(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1444 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21840_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31838(__this, method) (( Object_t * (*) (Dictionary_2_t1444 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21842_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31839(__this, method) (( Object_t* (*) (Dictionary_2_t1444 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21844_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31840(__this, method) (( Object_t * (*) (Dictionary_2_t1444 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21846_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Count()
#define Dictionary_2_get_Count_m31841(__this, method) (( int32_t (*) (Dictionary_2_t1444 *, const MethodInfo*))Dictionary_2_get_Count_m21848_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Item(TKey)
#define Dictionary_2_get_Item_m31842(__this, ___key, method) (( Func_3_t1194 * (*) (Dictionary_2_t1444 *, Tuple_2_t1441 *, const MethodInfo*))Dictionary_2_get_Item_m21850_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m31843(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1444 *, Tuple_2_t1441 *, Func_3_t1194 *, const MethodInfo*))Dictionary_2_set_Item_m21852_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m31844(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1444 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21854_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m31845(__this, ___size, method) (( void (*) (Dictionary_2_t1444 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21856_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m31846(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1444 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21858_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m31847(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6074  (*) (Object_t * /* static, unused */, Tuple_2_t1441 *, Func_3_t1194 *, const MethodInfo*))Dictionary_2_make_pair_m21860_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m31848(__this /* static, unused */, ___key, ___value, method) (( Tuple_2_t1441 * (*) (Object_t * /* static, unused */, Tuple_2_t1441 *, Func_3_t1194 *, const MethodInfo*))Dictionary_2_pick_key_m21862_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m31849(__this /* static, unused */, ___key, ___value, method) (( Func_3_t1194 * (*) (Object_t * /* static, unused */, Tuple_2_t1441 *, Func_3_t1194 *, const MethodInfo*))Dictionary_2_pick_value_m21864_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m31850(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1444 *, KeyValuePair_2U5BU5D_t9084*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21866_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Resize()
#define Dictionary_2_Resize_m31851(__this, method) (( void (*) (Dictionary_2_t1444 *, const MethodInfo*))Dictionary_2_Resize_m21868_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Add(TKey,TValue)
#define Dictionary_2_Add_m31852(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1444 *, Tuple_2_t1441 *, Func_3_t1194 *, const MethodInfo*))Dictionary_2_Add_m21870_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Clear()
#define Dictionary_2_Clear_m31853(__this, method) (( void (*) (Dictionary_2_t1444 *, const MethodInfo*))Dictionary_2_Clear_m21872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m31854(__this, ___key, method) (( bool (*) (Dictionary_2_t1444 *, Tuple_2_t1441 *, const MethodInfo*))Dictionary_2_ContainsKey_m21874_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m31855(__this, ___value, method) (( bool (*) (Dictionary_2_t1444 *, Func_3_t1194 *, const MethodInfo*))Dictionary_2_ContainsValue_m21876_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m31856(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1444 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m21878_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m31857(__this, ___sender, method) (( void (*) (Dictionary_2_t1444 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21880_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Remove(TKey)
#define Dictionary_2_Remove_m31858(__this, ___key, method) (( bool (*) (Dictionary_2_t1444 *, Tuple_2_t1441 *, const MethodInfo*))Dictionary_2_Remove_m21882_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m31859(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1444 *, Tuple_2_t1441 *, Func_3_t1194 **, const MethodInfo*))Dictionary_2_TryGetValue_m21884_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Keys()
#define Dictionary_2_get_Keys_m31860(__this, method) (( KeyCollection_t6075 * (*) (Dictionary_2_t1444 *, const MethodInfo*))Dictionary_2_get_Keys_m21885_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Values()
#define Dictionary_2_get_Values_m31861(__this, method) (( ValueCollection_t6076 * (*) (Dictionary_2_t1444 *, const MethodInfo*))Dictionary_2_get_Values_m21887_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m31862(__this, ___key, method) (( Tuple_2_t1441 * (*) (Dictionary_2_t1444 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21889_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m31863(__this, ___value, method) (( Func_3_t1194 * (*) (Dictionary_2_t1444 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21891_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m31864(__this, ___pair, method) (( bool (*) (Dictionary_2_t1444 *, KeyValuePair_2_t6074 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21893_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m31865(__this, method) (( Enumerator_t6077  (*) (Dictionary_2_t1444 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21894_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m31866(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, Tuple_2_t1441 *, Func_3_t1194 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21896_gshared)(__this /* static, unused */, ___key, ___value, method)
