#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5486;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1171;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8635;
// System.Collections.ICollection
struct ICollection_t705;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t5489;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t5493;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1135;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t8731;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2870;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7485;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t7155;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3912;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m23503_gshared (Dictionary_2_t5486 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m23503(__this, method) (( void (*) (Dictionary_2_t5486 *, const MethodInfo*))Dictionary_2__ctor_m23503_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23505_gshared (Dictionary_2_t5486 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23505(__this, ___comparer, method) (( void (*) (Dictionary_2_t5486 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23505_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m23507_gshared (Dictionary_2_t5486 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m23507(__this, ___dictionary, method) (( void (*) (Dictionary_2_t5486 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23507_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23508_gshared (Dictionary_2_t5486 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m23508(__this, ___capacity, method) (( void (*) (Dictionary_2_t5486 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23508_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23510_gshared (Dictionary_2_t5486 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23510(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t5486 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23510_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23512_gshared (Dictionary_2_t5486 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m23512(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5486 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2__ctor_m23512_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23514_gshared (Dictionary_2_t5486 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23514(__this, method) (( Object_t* (*) (Dictionary_2_t5486 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23514_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23516_gshared (Dictionary_2_t5486 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23516(__this, method) (( Object_t* (*) (Dictionary_2_t5486 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23516_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m23518_gshared (Dictionary_2_t5486 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m23518(__this, method) (( Object_t * (*) (Dictionary_2_t5486 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m23518_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23520_gshared (Dictionary_2_t5486 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23520(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5486 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23520_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23522_gshared (Dictionary_2_t5486 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23522(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5486 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23522_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23524_gshared (Dictionary_2_t5486 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23524(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5486 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23524_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23526_gshared (Dictionary_2_t5486 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m23526(__this, ___key, method) (( bool (*) (Dictionary_2_t5486 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23526_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23528_gshared (Dictionary_2_t5486 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23528(__this, ___key, method) (( void (*) (Dictionary_2_t5486 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23528_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23530_gshared (Dictionary_2_t5486 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23530(__this, method) (( bool (*) (Dictionary_2_t5486 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23530_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23532_gshared (Dictionary_2_t5486 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23532(__this, method) (( Object_t * (*) (Dictionary_2_t5486 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23532_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23534_gshared (Dictionary_2_t5486 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23534(__this, method) (( bool (*) (Dictionary_2_t5486 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23534_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23536_gshared (Dictionary_2_t5486 * __this, KeyValuePair_2_t5487  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23536(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t5486 *, KeyValuePair_2_t5487 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23536_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23538_gshared (Dictionary_2_t5486 * __this, KeyValuePair_2_t5487  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23538(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5486 *, KeyValuePair_2_t5487 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23538_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23540_gshared (Dictionary_2_t5486 * __this, KeyValuePair_2U5BU5D_t7485* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23540(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5486 *, KeyValuePair_2U5BU5D_t7485*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23540_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23542_gshared (Dictionary_2_t5486 * __this, KeyValuePair_2_t5487  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23542(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5486 *, KeyValuePair_2_t5487 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23542_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23544_gshared (Dictionary_2_t5486 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23544(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5486 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23544_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23546_gshared (Dictionary_2_t5486 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23546(__this, method) (( Object_t * (*) (Dictionary_2_t5486 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23546_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23548_gshared (Dictionary_2_t5486 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23548(__this, method) (( Object_t* (*) (Dictionary_2_t5486 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23548_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23550_gshared (Dictionary_2_t5486 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23550(__this, method) (( Object_t * (*) (Dictionary_2_t5486 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23550_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23552_gshared (Dictionary_2_t5486 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23552(__this, method) (( int32_t (*) (Dictionary_2_t5486 *, const MethodInfo*))Dictionary_2_get_Count_m23552_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m23554_gshared (Dictionary_2_t5486 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23554(__this, ___key, method) (( int32_t (*) (Dictionary_2_t5486 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m23554_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23556_gshared (Dictionary_2_t5486 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23556(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5486 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m23556_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23558_gshared (Dictionary_2_t5486 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23558(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t5486 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23558_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23560_gshared (Dictionary_2_t5486 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23560(__this, ___size, method) (( void (*) (Dictionary_2_t5486 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23560_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23562_gshared (Dictionary_2_t5486 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23562(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5486 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23562_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5487  Dictionary_2_make_pair_m23564_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23564(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5487  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m23564_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m23566_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23566(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m23566_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m23568_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23568(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m23568_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23570_gshared (Dictionary_2_t5486 * __this, KeyValuePair_2U5BU5D_t7485* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23570(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5486 *, KeyValuePair_2U5BU5D_t7485*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23570_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m23572_gshared (Dictionary_2_t5486 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23572(__this, method) (( void (*) (Dictionary_2_t5486 *, const MethodInfo*))Dictionary_2_Resize_m23572_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23574_gshared (Dictionary_2_t5486 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23574(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5486 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m23574_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m23576_gshared (Dictionary_2_t5486 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23576(__this, method) (( void (*) (Dictionary_2_t5486 *, const MethodInfo*))Dictionary_2_Clear_m23576_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23578_gshared (Dictionary_2_t5486 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23578(__this, ___key, method) (( bool (*) (Dictionary_2_t5486 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m23578_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23580_gshared (Dictionary_2_t5486 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23580(__this, ___value, method) (( bool (*) (Dictionary_2_t5486 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m23580_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23582_gshared (Dictionary_2_t5486 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23582(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5486 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2_GetObjectData_m23582_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23584_gshared (Dictionary_2_t5486 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23584(__this, ___sender, method) (( void (*) (Dictionary_2_t5486 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23584_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23586_gshared (Dictionary_2_t5486 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23586(__this, ___key, method) (( bool (*) (Dictionary_2_t5486 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m23586_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23588_gshared (Dictionary_2_t5486 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23588(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t5486 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m23588_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t5489 * Dictionary_2_get_Keys_m23590_gshared (Dictionary_2_t5486 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m23590(__this, method) (( KeyCollection_t5489 * (*) (Dictionary_2_t5486 *, const MethodInfo*))Dictionary_2_get_Keys_m23590_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t5493 * Dictionary_2_get_Values_m23592_gshared (Dictionary_2_t5486 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m23592(__this, method) (( ValueCollection_t5493 * (*) (Dictionary_2_t5486 *, const MethodInfo*))Dictionary_2_get_Values_m23592_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m23594_gshared (Dictionary_2_t5486 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m23594(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5486 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23594_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m23596_gshared (Dictionary_2_t5486 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m23596(__this, ___value, method) (( int32_t (*) (Dictionary_2_t5486 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23596_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23598_gshared (Dictionary_2_t5486 * __this, KeyValuePair_2_t5487  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23598(__this, ___pair, method) (( bool (*) (Dictionary_2_t5486 *, KeyValuePair_2_t5487 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23598_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t5491  Dictionary_2_GetEnumerator_m23600_gshared (Dictionary_2_t5486 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m23600(__this, method) (( Enumerator_t5491  (*) (Dictionary_2_t5486 *, const MethodInfo*))Dictionary_2_GetEnumerator_m23600_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2089  Dictionary_2_U3CCopyToU3Em__0_m23602_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m23602(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2089  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m23602_gshared)(__this /* static, unused */, ___key, ___value, method)
