#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5548;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8742;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t5551;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t5555;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1204;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t8838;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7592;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t7262;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m23903_gshared (Dictionary_2_t5548 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m23903(__this, method) (( void (*) (Dictionary_2_t5548 *, const MethodInfo*))Dictionary_2__ctor_m23903_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23905_gshared (Dictionary_2_t5548 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23905(__this, ___comparer, method) (( void (*) (Dictionary_2_t5548 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23905_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m23907_gshared (Dictionary_2_t5548 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m23907(__this, ___dictionary, method) (( void (*) (Dictionary_2_t5548 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23907_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23908_gshared (Dictionary_2_t5548 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m23908(__this, ___capacity, method) (( void (*) (Dictionary_2_t5548 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23908_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23910_gshared (Dictionary_2_t5548 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23910(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t5548 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23910_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23912_gshared (Dictionary_2_t5548 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m23912(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5548 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m23912_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23914_gshared (Dictionary_2_t5548 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23914(__this, method) (( Object_t* (*) (Dictionary_2_t5548 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23914_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23916_gshared (Dictionary_2_t5548 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23916(__this, method) (( Object_t* (*) (Dictionary_2_t5548 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23916_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m23918_gshared (Dictionary_2_t5548 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m23918(__this, method) (( Object_t * (*) (Dictionary_2_t5548 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m23918_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23920_gshared (Dictionary_2_t5548 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23920(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5548 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23920_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23922_gshared (Dictionary_2_t5548 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23922(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5548 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23922_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23924_gshared (Dictionary_2_t5548 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23924(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5548 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23924_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23926_gshared (Dictionary_2_t5548 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m23926(__this, ___key, method) (( bool (*) (Dictionary_2_t5548 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23926_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23928_gshared (Dictionary_2_t5548 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23928(__this, ___key, method) (( void (*) (Dictionary_2_t5548 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23928_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23930_gshared (Dictionary_2_t5548 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23930(__this, method) (( bool (*) (Dictionary_2_t5548 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23930_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23932_gshared (Dictionary_2_t5548 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23932(__this, method) (( Object_t * (*) (Dictionary_2_t5548 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23932_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23934_gshared (Dictionary_2_t5548 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23934(__this, method) (( bool (*) (Dictionary_2_t5548 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23934_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23936_gshared (Dictionary_2_t5548 * __this, KeyValuePair_2_t5549  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23936(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t5548 *, KeyValuePair_2_t5549 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23936_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23938_gshared (Dictionary_2_t5548 * __this, KeyValuePair_2_t5549  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23938(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5548 *, KeyValuePair_2_t5549 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23938_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23940_gshared (Dictionary_2_t5548 * __this, KeyValuePair_2U5BU5D_t7592* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23940(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5548 *, KeyValuePair_2U5BU5D_t7592*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23940_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23942_gshared (Dictionary_2_t5548 * __this, KeyValuePair_2_t5549  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23942(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5548 *, KeyValuePair_2_t5549 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23942_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23944_gshared (Dictionary_2_t5548 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23944(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5548 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23944_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23946_gshared (Dictionary_2_t5548 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23946(__this, method) (( Object_t * (*) (Dictionary_2_t5548 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23946_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23948_gshared (Dictionary_2_t5548 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23948(__this, method) (( Object_t* (*) (Dictionary_2_t5548 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23948_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23950_gshared (Dictionary_2_t5548 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23950(__this, method) (( Object_t * (*) (Dictionary_2_t5548 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23950_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23952_gshared (Dictionary_2_t5548 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23952(__this, method) (( int32_t (*) (Dictionary_2_t5548 *, const MethodInfo*))Dictionary_2_get_Count_m23952_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m23954_gshared (Dictionary_2_t5548 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23954(__this, ___key, method) (( int32_t (*) (Dictionary_2_t5548 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m23954_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23956_gshared (Dictionary_2_t5548 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23956(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5548 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m23956_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23958_gshared (Dictionary_2_t5548 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23958(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t5548 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23958_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23960_gshared (Dictionary_2_t5548 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23960(__this, ___size, method) (( void (*) (Dictionary_2_t5548 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23960_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23962_gshared (Dictionary_2_t5548 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23962(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5548 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23962_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5549  Dictionary_2_make_pair_m23964_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23964(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5549  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m23964_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m23966_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23966(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m23966_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m23968_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23968(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m23968_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23970_gshared (Dictionary_2_t5548 * __this, KeyValuePair_2U5BU5D_t7592* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23970(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5548 *, KeyValuePair_2U5BU5D_t7592*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23970_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m23972_gshared (Dictionary_2_t5548 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23972(__this, method) (( void (*) (Dictionary_2_t5548 *, const MethodInfo*))Dictionary_2_Resize_m23972_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23974_gshared (Dictionary_2_t5548 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23974(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5548 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m23974_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m23976_gshared (Dictionary_2_t5548 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23976(__this, method) (( void (*) (Dictionary_2_t5548 *, const MethodInfo*))Dictionary_2_Clear_m23976_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23978_gshared (Dictionary_2_t5548 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23978(__this, ___key, method) (( bool (*) (Dictionary_2_t5548 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m23978_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23980_gshared (Dictionary_2_t5548 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23980(__this, ___value, method) (( bool (*) (Dictionary_2_t5548 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m23980_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23982_gshared (Dictionary_2_t5548 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23982(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5548 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m23982_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23984_gshared (Dictionary_2_t5548 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23984(__this, ___sender, method) (( void (*) (Dictionary_2_t5548 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23984_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23986_gshared (Dictionary_2_t5548 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23986(__this, ___key, method) (( bool (*) (Dictionary_2_t5548 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m23986_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23988_gshared (Dictionary_2_t5548 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23988(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t5548 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m23988_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t5551 * Dictionary_2_get_Keys_m23990_gshared (Dictionary_2_t5548 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m23990(__this, method) (( KeyCollection_t5551 * (*) (Dictionary_2_t5548 *, const MethodInfo*))Dictionary_2_get_Keys_m23990_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t5555 * Dictionary_2_get_Values_m23992_gshared (Dictionary_2_t5548 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m23992(__this, method) (( ValueCollection_t5555 * (*) (Dictionary_2_t5548 *, const MethodInfo*))Dictionary_2_get_Values_m23992_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m23994_gshared (Dictionary_2_t5548 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m23994(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5548 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23994_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m23996_gshared (Dictionary_2_t5548 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m23996(__this, ___value, method) (( int32_t (*) (Dictionary_2_t5548 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23996_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23998_gshared (Dictionary_2_t5548 * __this, KeyValuePair_2_t5549  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23998(__this, ___pair, method) (( bool (*) (Dictionary_2_t5548 *, KeyValuePair_2_t5549 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23998_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t5553  Dictionary_2_GetEnumerator_m24000_gshared (Dictionary_2_t5548 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m24000(__this, method) (( Enumerator_t5553  (*) (Dictionary_2_t5548 *, const MethodInfo*))Dictionary_2_GetEnumerator_m24000_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__0_m24002_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m24002(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24002_gshared)(__this /* static, unused */, ___key, ___value, method)
