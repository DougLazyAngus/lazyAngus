#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7644;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1251;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9580;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Single>
struct KeyCollection_t7645;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
struct ValueCollection_t7649;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1215;
// System.Collections.Generic.IDictionary`2<System.Object,System.Single>
struct IDictionary_2_t9952;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t8478;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t7860;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__50.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
extern "C" void Dictionary_2__ctor_m49368_gshared (Dictionary_2_t7644 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m49368(__this, method) (( void (*) (Dictionary_2_t7644 *, const MethodInfo*))Dictionary_2__ctor_m49368_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m49370_gshared (Dictionary_2_t7644 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m49370(__this, ___comparer, method) (( void (*) (Dictionary_2_t7644 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49370_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m49372_gshared (Dictionary_2_t7644 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m49372(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7644 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49372_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m49374_gshared (Dictionary_2_t7644 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m49374(__this, ___capacity, method) (( void (*) (Dictionary_2_t7644 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m49374_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m49376_gshared (Dictionary_2_t7644 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m49376(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7644 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49376_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m49378_gshared (Dictionary_2_t7644 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m49378(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7644 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m49378_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49380_gshared (Dictionary_2_t7644 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49380(__this, method) (( Object_t* (*) (Dictionary_2_t7644 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49380_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49382_gshared (Dictionary_2_t7644 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49382(__this, method) (( Object_t* (*) (Dictionary_2_t7644 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49382_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m49384_gshared (Dictionary_2_t7644 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m49384(__this, method) (( Object_t * (*) (Dictionary_2_t7644 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m49384_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m49386_gshared (Dictionary_2_t7644 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m49386(__this, method) (( Object_t * (*) (Dictionary_2_t7644 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m49386_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m49388_gshared (Dictionary_2_t7644 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m49388(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7644 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m49388_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m49390_gshared (Dictionary_2_t7644 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m49390(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7644 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m49390_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m49392_gshared (Dictionary_2_t7644 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m49392(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7644 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m49392_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m49394_gshared (Dictionary_2_t7644 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m49394(__this, ___key, method) (( bool (*) (Dictionary_2_t7644 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m49394_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m49396_gshared (Dictionary_2_t7644 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m49396(__this, ___key, method) (( void (*) (Dictionary_2_t7644 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m49396_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49398_gshared (Dictionary_2_t7644 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49398(__this, method) (( bool (*) (Dictionary_2_t7644 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49398_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49400_gshared (Dictionary_2_t7644 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49400(__this, method) (( Object_t * (*) (Dictionary_2_t7644 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49400_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49402_gshared (Dictionary_2_t7644 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49402(__this, method) (( bool (*) (Dictionary_2_t7644 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49402_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49404_gshared (Dictionary_2_t7644 * __this, KeyValuePair_2_t7584  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49404(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7644 *, KeyValuePair_2_t7584 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49404_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49406_gshared (Dictionary_2_t7644 * __this, KeyValuePair_2_t7584  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49406(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7644 *, KeyValuePair_2_t7584 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49406_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49408_gshared (Dictionary_2_t7644 * __this, KeyValuePair_2U5BU5D_t8478* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49408(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7644 *, KeyValuePair_2U5BU5D_t8478*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49408_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49410_gshared (Dictionary_2_t7644 * __this, KeyValuePair_2_t7584  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49410(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7644 *, KeyValuePair_2_t7584 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49410_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m49412_gshared (Dictionary_2_t7644 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m49412(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7644 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m49412_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49414_gshared (Dictionary_2_t7644 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49414(__this, method) (( Object_t * (*) (Dictionary_2_t7644 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49414_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49416_gshared (Dictionary_2_t7644 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49416(__this, method) (( Object_t* (*) (Dictionary_2_t7644 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49416_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49418_gshared (Dictionary_2_t7644 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49418(__this, method) (( Object_t * (*) (Dictionary_2_t7644 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49418_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m49420_gshared (Dictionary_2_t7644 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m49420(__this, method) (( int32_t (*) (Dictionary_2_t7644 *, const MethodInfo*))Dictionary_2_get_Count_m49420_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(TKey)
extern "C" float Dictionary_2_get_Item_m49422_gshared (Dictionary_2_t7644 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m49422(__this, ___key, method) (( float (*) (Dictionary_2_t7644 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m49422_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m49424_gshared (Dictionary_2_t7644 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m49424(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7644 *, Object_t *, float, const MethodInfo*))Dictionary_2_set_Item_m49424_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m49426_gshared (Dictionary_2_t7644 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m49426(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7644 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m49426_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m49428_gshared (Dictionary_2_t7644 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m49428(__this, ___size, method) (( void (*) (Dictionary_2_t7644 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m49428_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m49430_gshared (Dictionary_2_t7644 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m49430(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7644 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m49430_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7584  Dictionary_2_make_pair_m49432_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m49432(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7584  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_make_pair_m49432_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m49434_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m49434(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_key_m49434_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_value(TKey,TValue)
extern "C" float Dictionary_2_pick_value_m49436_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m49436(__this /* static, unused */, ___key, ___value, method) (( float (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_value_m49436_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m49438_gshared (Dictionary_2_t7644 * __this, KeyValuePair_2U5BU5D_t8478* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m49438(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7644 *, KeyValuePair_2U5BU5D_t8478*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m49438_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Resize()
extern "C" void Dictionary_2_Resize_m49440_gshared (Dictionary_2_t7644 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m49440(__this, method) (( void (*) (Dictionary_2_t7644 *, const MethodInfo*))Dictionary_2_Resize_m49440_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m49442_gshared (Dictionary_2_t7644 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_Add_m49442(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7644 *, Object_t *, float, const MethodInfo*))Dictionary_2_Add_m49442_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Clear()
extern "C" void Dictionary_2_Clear_m49444_gshared (Dictionary_2_t7644 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m49444(__this, method) (( void (*) (Dictionary_2_t7644 *, const MethodInfo*))Dictionary_2_Clear_m49444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m49446_gshared (Dictionary_2_t7644 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m49446(__this, ___key, method) (( bool (*) (Dictionary_2_t7644 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m49446_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m49448_gshared (Dictionary_2_t7644 * __this, float ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m49448(__this, ___value, method) (( bool (*) (Dictionary_2_t7644 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m49448_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m49450_gshared (Dictionary_2_t7644 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m49450(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7644 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m49450_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m49452_gshared (Dictionary_2_t7644 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m49452(__this, ___sender, method) (( void (*) (Dictionary_2_t7644 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m49452_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m49454_gshared (Dictionary_2_t7644 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m49454(__this, ___key, method) (( bool (*) (Dictionary_2_t7644 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m49454_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m49456_gshared (Dictionary_2_t7644 * __this, Object_t * ___key, float* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m49456(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7644 *, Object_t *, float*, const MethodInfo*))Dictionary_2_TryGetValue_m49456_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Keys()
extern "C" KeyCollection_t7645 * Dictionary_2_get_Keys_m49458_gshared (Dictionary_2_t7644 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m49458(__this, method) (( KeyCollection_t7645 * (*) (Dictionary_2_t7644 *, const MethodInfo*))Dictionary_2_get_Keys_m49458_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Values()
extern "C" ValueCollection_t7649 * Dictionary_2_get_Values_m49460_gshared (Dictionary_2_t7644 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m49460(__this, method) (( ValueCollection_t7649 * (*) (Dictionary_2_t7644 *, const MethodInfo*))Dictionary_2_get_Values_m49460_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m49462_gshared (Dictionary_2_t7644 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m49462(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7644 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m49462_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTValue(System.Object)
extern "C" float Dictionary_2_ToTValue_m49464_gshared (Dictionary_2_t7644 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m49464(__this, ___value, method) (( float (*) (Dictionary_2_t7644 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m49464_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m49466_gshared (Dictionary_2_t7644 * __this, KeyValuePair_2_t7584  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m49466(__this, ___pair, method) (( bool (*) (Dictionary_2_t7644 *, KeyValuePair_2_t7584 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m49466_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetEnumerator()
extern "C" Enumerator_t7647  Dictionary_2_GetEnumerator_m49468_gshared (Dictionary_2_t7644 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m49468(__this, method) (( Enumerator_t7647  (*) (Dictionary_2_t7644 *, const MethodInfo*))Dictionary_2_GetEnumerator_m49468_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Single>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2167  Dictionary_2_U3CCopyToU3Em__2_m49470_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m49470(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m49470_gshared)(__this /* static, unused */, ___key, ___value, method)
