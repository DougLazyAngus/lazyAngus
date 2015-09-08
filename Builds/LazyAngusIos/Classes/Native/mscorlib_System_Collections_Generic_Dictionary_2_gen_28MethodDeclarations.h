#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct Dictionary_2_t1465;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Type,System.Type>>
struct ICollection_1_t9723;
// System.Collections.Generic.ICollection`1<System.Func`3<System.Object,System.Object,System.Object>>
struct ICollection_1_t9724;
// System.Collections.ICollection
struct ICollection_t772;
// System.Object
struct Object_t;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t1215;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1462;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct KeyCollection_t6650;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct ValueCollection_t6651;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<System.Type,System.Type>>
struct IEqualityComparer_1_t6647;
// System.Collections.Generic.IDictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>
struct IDictionary_2_t1217;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t9725;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>>
struct IEnumerator_1_t9726;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t802;
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_52MethodDeclarations.h"
#define Dictionary_2__ctor_m7549(__this, method) (( void (*) (Dictionary_2_t1465 *, const MethodInfo*))Dictionary_2__ctor_m26148_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m36525(__this, ___comparer, method) (( void (*) (Dictionary_2_t1465 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26150_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m36526(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1465 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26152_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m36527(__this, ___capacity, method) (( void (*) (Dictionary_2_t1465 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26154_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m36528(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1465 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26156_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m36529(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1465 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2__ctor_m26158_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m36530(__this, method) (( Object_t* (*) (Dictionary_2_t1465 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26160_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m36531(__this, method) (( Object_t* (*) (Dictionary_2_t1465 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26162_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m36532(__this, method) (( Object_t * (*) (Dictionary_2_t1465 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26164_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m36533(__this, method) (( Object_t * (*) (Dictionary_2_t1465 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m26166_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m36534(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1465 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26168_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m36535(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1465 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26170_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m36536(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1465 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26172_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m36537(__this, ___key, method) (( bool (*) (Dictionary_2_t1465 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26174_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m36538(__this, ___key, method) (( void (*) (Dictionary_2_t1465 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26176_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m36539(__this, method) (( bool (*) (Dictionary_2_t1465 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26178_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m36540(__this, method) (( Object_t * (*) (Dictionary_2_t1465 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26180_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m36541(__this, method) (( bool (*) (Dictionary_2_t1465 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26182_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m36542(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1465 *, KeyValuePair_2_t6649 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26184_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m36543(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1465 *, KeyValuePair_2_t6649 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26186_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m36544(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1465 *, KeyValuePair_2U5BU5D_t9725*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26188_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m36545(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1465 *, KeyValuePair_2_t6649 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26190_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m36546(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1465 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26192_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m36547(__this, method) (( Object_t * (*) (Dictionary_2_t1465 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26194_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m36548(__this, method) (( Object_t* (*) (Dictionary_2_t1465 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26196_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m36549(__this, method) (( Object_t * (*) (Dictionary_2_t1465 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26198_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Count()
#define Dictionary_2_get_Count_m36550(__this, method) (( int32_t (*) (Dictionary_2_t1465 *, const MethodInfo*))Dictionary_2_get_Count_m26200_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Item(TKey)
#define Dictionary_2_get_Item_m36551(__this, ___key, method) (( Func_3_t1215 * (*) (Dictionary_2_t1465 *, Tuple_2_t1462 *, const MethodInfo*))Dictionary_2_get_Item_m26202_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m36552(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1465 *, Tuple_2_t1462 *, Func_3_t1215 *, const MethodInfo*))Dictionary_2_set_Item_m26204_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m36553(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1465 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26206_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m36554(__this, ___size, method) (( void (*) (Dictionary_2_t1465 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26208_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m36555(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1465 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26210_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m36556(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6649  (*) (Object_t * /* static, unused */, Tuple_2_t1462 *, Func_3_t1215 *, const MethodInfo*))Dictionary_2_make_pair_m26212_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m36557(__this /* static, unused */, ___key, ___value, method) (( Tuple_2_t1462 * (*) (Object_t * /* static, unused */, Tuple_2_t1462 *, Func_3_t1215 *, const MethodInfo*))Dictionary_2_pick_key_m26214_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m36558(__this /* static, unused */, ___key, ___value, method) (( Func_3_t1215 * (*) (Object_t * /* static, unused */, Tuple_2_t1462 *, Func_3_t1215 *, const MethodInfo*))Dictionary_2_pick_value_m26216_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m36559(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1465 *, KeyValuePair_2U5BU5D_t9725*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26218_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Resize()
#define Dictionary_2_Resize_m36560(__this, method) (( void (*) (Dictionary_2_t1465 *, const MethodInfo*))Dictionary_2_Resize_m26220_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Add(TKey,TValue)
#define Dictionary_2_Add_m36561(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1465 *, Tuple_2_t1462 *, Func_3_t1215 *, const MethodInfo*))Dictionary_2_Add_m26222_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Clear()
#define Dictionary_2_Clear_m36562(__this, method) (( void (*) (Dictionary_2_t1465 *, const MethodInfo*))Dictionary_2_Clear_m26224_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m36563(__this, ___key, method) (( bool (*) (Dictionary_2_t1465 *, Tuple_2_t1462 *, const MethodInfo*))Dictionary_2_ContainsKey_m26226_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m36564(__this, ___value, method) (( bool (*) (Dictionary_2_t1465 *, Func_3_t1215 *, const MethodInfo*))Dictionary_2_ContainsValue_m26228_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m36565(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1465 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2_GetObjectData_m26230_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m36566(__this, ___sender, method) (( void (*) (Dictionary_2_t1465 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26232_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::Remove(TKey)
#define Dictionary_2_Remove_m36567(__this, ___key, method) (( bool (*) (Dictionary_2_t1465 *, Tuple_2_t1462 *, const MethodInfo*))Dictionary_2_Remove_m26234_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m36568(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1465 *, Tuple_2_t1462 *, Func_3_t1215 **, const MethodInfo*))Dictionary_2_TryGetValue_m26236_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Keys()
#define Dictionary_2_get_Keys_m36569(__this, method) (( KeyCollection_t6650 * (*) (Dictionary_2_t1465 *, const MethodInfo*))Dictionary_2_get_Keys_m26237_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::get_Values()
#define Dictionary_2_get_Values_m36570(__this, method) (( ValueCollection_t6651 * (*) (Dictionary_2_t1465 *, const MethodInfo*))Dictionary_2_get_Values_m26239_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m36571(__this, ___key, method) (( Tuple_2_t1462 * (*) (Dictionary_2_t1465 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26241_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m36572(__this, ___value, method) (( Func_3_t1215 * (*) (Dictionary_2_t1465 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26243_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m36573(__this, ___pair, method) (( bool (*) (Dictionary_2_t1465 *, KeyValuePair_2_t6649 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26245_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m36574(__this, method) (( Enumerator_t6652  (*) (Dictionary_2_t1465 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26246_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m36575(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2160  (*) (Object_t * /* static, unused */, Tuple_2_t1462 *, Func_3_t1215 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m26248_gshared)(__this /* static, unused */, ___key, ___value, method)
