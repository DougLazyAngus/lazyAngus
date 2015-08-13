#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5531;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8706;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t5534;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t5538;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1187;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t8802;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7556;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t7226;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m23754_gshared (Dictionary_2_t5531 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m23754(__this, method) (( void (*) (Dictionary_2_t5531 *, const MethodInfo*))Dictionary_2__ctor_m23754_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23756_gshared (Dictionary_2_t5531 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23756(__this, ___comparer, method) (( void (*) (Dictionary_2_t5531 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23756_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m23758_gshared (Dictionary_2_t5531 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m23758(__this, ___dictionary, method) (( void (*) (Dictionary_2_t5531 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23758_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23759_gshared (Dictionary_2_t5531 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m23759(__this, ___capacity, method) (( void (*) (Dictionary_2_t5531 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23759_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23761_gshared (Dictionary_2_t5531 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23761(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t5531 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23761_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23763_gshared (Dictionary_2_t5531 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m23763(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5531 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m23763_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23765_gshared (Dictionary_2_t5531 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23765(__this, method) (( Object_t* (*) (Dictionary_2_t5531 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23765_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23767_gshared (Dictionary_2_t5531 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23767(__this, method) (( Object_t* (*) (Dictionary_2_t5531 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23767_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m23769_gshared (Dictionary_2_t5531 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m23769(__this, method) (( Object_t * (*) (Dictionary_2_t5531 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m23769_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23771_gshared (Dictionary_2_t5531 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23771(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5531 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23771_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23773_gshared (Dictionary_2_t5531 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23773(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5531 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23773_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23775_gshared (Dictionary_2_t5531 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23775(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5531 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23775_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23777_gshared (Dictionary_2_t5531 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m23777(__this, ___key, method) (( bool (*) (Dictionary_2_t5531 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23777_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23779_gshared (Dictionary_2_t5531 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23779(__this, ___key, method) (( void (*) (Dictionary_2_t5531 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23779_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23781_gshared (Dictionary_2_t5531 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23781(__this, method) (( bool (*) (Dictionary_2_t5531 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23781_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23783_gshared (Dictionary_2_t5531 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23783(__this, method) (( Object_t * (*) (Dictionary_2_t5531 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23783_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23785_gshared (Dictionary_2_t5531 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23785(__this, method) (( bool (*) (Dictionary_2_t5531 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23785_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23787_gshared (Dictionary_2_t5531 * __this, KeyValuePair_2_t5532  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23787(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t5531 *, KeyValuePair_2_t5532 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23787_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23789_gshared (Dictionary_2_t5531 * __this, KeyValuePair_2_t5532  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23789(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5531 *, KeyValuePair_2_t5532 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23789_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23791_gshared (Dictionary_2_t5531 * __this, KeyValuePair_2U5BU5D_t7556* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23791(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5531 *, KeyValuePair_2U5BU5D_t7556*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23791_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23793_gshared (Dictionary_2_t5531 * __this, KeyValuePair_2_t5532  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23793(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5531 *, KeyValuePair_2_t5532 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23793_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23795_gshared (Dictionary_2_t5531 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23795(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5531 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23795_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23797_gshared (Dictionary_2_t5531 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23797(__this, method) (( Object_t * (*) (Dictionary_2_t5531 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23797_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23799_gshared (Dictionary_2_t5531 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23799(__this, method) (( Object_t* (*) (Dictionary_2_t5531 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23799_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23801_gshared (Dictionary_2_t5531 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23801(__this, method) (( Object_t * (*) (Dictionary_2_t5531 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23801_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23803_gshared (Dictionary_2_t5531 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23803(__this, method) (( int32_t (*) (Dictionary_2_t5531 *, const MethodInfo*))Dictionary_2_get_Count_m23803_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m23805_gshared (Dictionary_2_t5531 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23805(__this, ___key, method) (( int32_t (*) (Dictionary_2_t5531 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m23805_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23807_gshared (Dictionary_2_t5531 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23807(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5531 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m23807_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23809_gshared (Dictionary_2_t5531 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23809(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t5531 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23809_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23811_gshared (Dictionary_2_t5531 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23811(__this, ___size, method) (( void (*) (Dictionary_2_t5531 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23811_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23813_gshared (Dictionary_2_t5531 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23813(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5531 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23813_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5532  Dictionary_2_make_pair_m23815_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23815(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5532  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m23815_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m23817_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23817(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m23817_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m23819_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23819(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m23819_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23821_gshared (Dictionary_2_t5531 * __this, KeyValuePair_2U5BU5D_t7556* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23821(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5531 *, KeyValuePair_2U5BU5D_t7556*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23821_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m23823_gshared (Dictionary_2_t5531 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23823(__this, method) (( void (*) (Dictionary_2_t5531 *, const MethodInfo*))Dictionary_2_Resize_m23823_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23825_gshared (Dictionary_2_t5531 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23825(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5531 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m23825_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m23827_gshared (Dictionary_2_t5531 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23827(__this, method) (( void (*) (Dictionary_2_t5531 *, const MethodInfo*))Dictionary_2_Clear_m23827_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23829_gshared (Dictionary_2_t5531 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23829(__this, ___key, method) (( bool (*) (Dictionary_2_t5531 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m23829_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23831_gshared (Dictionary_2_t5531 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23831(__this, ___value, method) (( bool (*) (Dictionary_2_t5531 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m23831_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23833_gshared (Dictionary_2_t5531 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23833(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5531 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m23833_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23835_gshared (Dictionary_2_t5531 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23835(__this, ___sender, method) (( void (*) (Dictionary_2_t5531 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23835_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23837_gshared (Dictionary_2_t5531 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23837(__this, ___key, method) (( bool (*) (Dictionary_2_t5531 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m23837_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23839_gshared (Dictionary_2_t5531 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23839(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t5531 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m23839_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t5534 * Dictionary_2_get_Keys_m23841_gshared (Dictionary_2_t5531 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m23841(__this, method) (( KeyCollection_t5534 * (*) (Dictionary_2_t5531 *, const MethodInfo*))Dictionary_2_get_Keys_m23841_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t5538 * Dictionary_2_get_Values_m23843_gshared (Dictionary_2_t5531 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m23843(__this, method) (( ValueCollection_t5538 * (*) (Dictionary_2_t5531 *, const MethodInfo*))Dictionary_2_get_Values_m23843_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m23845_gshared (Dictionary_2_t5531 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m23845(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5531 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23845_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m23847_gshared (Dictionary_2_t5531 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m23847(__this, ___value, method) (( int32_t (*) (Dictionary_2_t5531 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23847_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23849_gshared (Dictionary_2_t5531 * __this, KeyValuePair_2_t5532  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23849(__this, ___pair, method) (( bool (*) (Dictionary_2_t5531 *, KeyValuePair_2_t5532 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23849_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t5536  Dictionary_2_GetEnumerator_m23851_gshared (Dictionary_2_t5531 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m23851(__this, method) (( Enumerator_t5536  (*) (Dictionary_2_t5531 *, const MethodInfo*))Dictionary_2_GetEnumerator_m23851_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2139  Dictionary_2_U3CCopyToU3Em__0_m23853_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m23853(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m23853_gshared)(__this /* static, unused */, ___key, ___value, method)
