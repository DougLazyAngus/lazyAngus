#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1598;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4134;
// System.Collections.ICollection
struct ICollection_t547;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t4010;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t4014;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3332;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t4566;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1198;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t4567;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t4568;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1396;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__39.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m27336_gshared (Dictionary_2_t1598 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m27336(__this, method) (( void (*) (Dictionary_2_t1598 *, const MethodInfo*))Dictionary_2__ctor_m27336_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27337_gshared (Dictionary_2_t1598 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27337(__this, ___comparer, method) (( void (*) (Dictionary_2_t1598 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27337_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m27338_gshared (Dictionary_2_t1598 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m27338(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1598 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27338_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m27339_gshared (Dictionary_2_t1598 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m27339(__this, ___capacity, method) (( void (*) (Dictionary_2_t1598 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m27339_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27340_gshared (Dictionary_2_t1598 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27340(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1598 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27340_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m27341_gshared (Dictionary_2_t1598 * __this, SerializationInfo_t1198 * ___info, StreamingContext_t1199  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m27341(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1598 *, SerializationInfo_t1198 *, StreamingContext_t1199 , const MethodInfo*))Dictionary_2__ctor_m27341_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27342_gshared (Dictionary_2_t1598 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27342(__this, method) (( Object_t* (*) (Dictionary_2_t1598 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27342_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27343_gshared (Dictionary_2_t1598 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27343(__this, method) (( Object_t* (*) (Dictionary_2_t1598 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27343_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m27344_gshared (Dictionary_2_t1598 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m27344(__this, method) (( Object_t * (*) (Dictionary_2_t1598 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m27344_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m27345_gshared (Dictionary_2_t1598 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m27345(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1598 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m27345_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m27346_gshared (Dictionary_2_t1598 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m27346(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1598 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m27346_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m27347_gshared (Dictionary_2_t1598 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m27347(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1598 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m27347_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m27348_gshared (Dictionary_2_t1598 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m27348(__this, ___key, method) (( bool (*) (Dictionary_2_t1598 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m27348_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m27349_gshared (Dictionary_2_t1598 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m27349(__this, ___key, method) (( void (*) (Dictionary_2_t1598 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m27349_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27350_gshared (Dictionary_2_t1598 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27350(__this, method) (( bool (*) (Dictionary_2_t1598 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27350_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27351_gshared (Dictionary_2_t1598 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27351(__this, method) (( Object_t * (*) (Dictionary_2_t1598 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27351_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27352_gshared (Dictionary_2_t1598 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27352(__this, method) (( bool (*) (Dictionary_2_t1598 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27352_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27353_gshared (Dictionary_2_t1598 * __this, KeyValuePair_2_t4008  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27353(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1598 *, KeyValuePair_2_t4008 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27353_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27354_gshared (Dictionary_2_t1598 * __this, KeyValuePair_2_t4008  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27354(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1598 *, KeyValuePair_2_t4008 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27354_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27355_gshared (Dictionary_2_t1598 * __this, KeyValuePair_2U5BU5D_t4567* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27355(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1598 *, KeyValuePair_2U5BU5D_t4567*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27355_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27356_gshared (Dictionary_2_t1598 * __this, KeyValuePair_2_t4008  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27356(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1598 *, KeyValuePair_2_t4008 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27356_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m27357_gshared (Dictionary_2_t1598 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m27357(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1598 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m27357_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27358_gshared (Dictionary_2_t1598 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27358(__this, method) (( Object_t * (*) (Dictionary_2_t1598 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27358_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27359_gshared (Dictionary_2_t1598 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27359(__this, method) (( Object_t* (*) (Dictionary_2_t1598 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27359_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27360_gshared (Dictionary_2_t1598 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27360(__this, method) (( Object_t * (*) (Dictionary_2_t1598 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27360_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m27361_gshared (Dictionary_2_t1598 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m27361(__this, method) (( int32_t (*) (Dictionary_2_t1598 *, const MethodInfo*))Dictionary_2_get_Count_m27361_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m27362_gshared (Dictionary_2_t1598 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m27362(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1598 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m27362_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m27363_gshared (Dictionary_2_t1598 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m27363(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1598 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m27363_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m27364_gshared (Dictionary_2_t1598 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m27364(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1598 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m27364_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m27365_gshared (Dictionary_2_t1598 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m27365(__this, ___size, method) (( void (*) (Dictionary_2_t1598 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m27365_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m27366_gshared (Dictionary_2_t1598 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m27366(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1598 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m27366_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4008  Dictionary_2_make_pair_m27367_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m27367(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4008  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m27367_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m27368_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m27368(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m27368_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m27369_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m27369(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m27369_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m27370_gshared (Dictionary_2_t1598 * __this, KeyValuePair_2U5BU5D_t4567* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m27370(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1598 *, KeyValuePair_2U5BU5D_t4567*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m27370_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m27371_gshared (Dictionary_2_t1598 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m27371(__this, method) (( void (*) (Dictionary_2_t1598 *, const MethodInfo*))Dictionary_2_Resize_m27371_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m27372_gshared (Dictionary_2_t1598 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m27372(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1598 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m27372_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m27373_gshared (Dictionary_2_t1598 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m27373(__this, method) (( void (*) (Dictionary_2_t1598 *, const MethodInfo*))Dictionary_2_Clear_m27373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m27374_gshared (Dictionary_2_t1598 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m27374(__this, ___key, method) (( bool (*) (Dictionary_2_t1598 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m27374_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m27375_gshared (Dictionary_2_t1598 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m27375(__this, ___value, method) (( bool (*) (Dictionary_2_t1598 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m27375_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m27376_gshared (Dictionary_2_t1598 * __this, SerializationInfo_t1198 * ___info, StreamingContext_t1199  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m27376(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1598 *, SerializationInfo_t1198 *, StreamingContext_t1199 , const MethodInfo*))Dictionary_2_GetObjectData_m27376_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m27377_gshared (Dictionary_2_t1598 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m27377(__this, ___sender, method) (( void (*) (Dictionary_2_t1598 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m27377_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m27378_gshared (Dictionary_2_t1598 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m27378(__this, ___key, method) (( bool (*) (Dictionary_2_t1598 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m27378_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m27379_gshared (Dictionary_2_t1598 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m27379(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1598 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m27379_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t4010 * Dictionary_2_get_Keys_m27380_gshared (Dictionary_2_t1598 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m27380(__this, method) (( KeyCollection_t4010 * (*) (Dictionary_2_t1598 *, const MethodInfo*))Dictionary_2_get_Keys_m27380_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t4014 * Dictionary_2_get_Values_m27381_gshared (Dictionary_2_t1598 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m27381(__this, method) (( ValueCollection_t4014 * (*) (Dictionary_2_t1598 *, const MethodInfo*))Dictionary_2_get_Values_m27381_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m27382_gshared (Dictionary_2_t1598 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m27382(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1598 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m27382_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m27383_gshared (Dictionary_2_t1598 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m27383(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1598 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m27383_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m27384_gshared (Dictionary_2_t1598 * __this, KeyValuePair_2_t4008  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m27384(__this, ___pair, method) (( bool (*) (Dictionary_2_t1598 *, KeyValuePair_2_t4008 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m27384_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t4012  Dictionary_2_GetEnumerator_m27385_gshared (Dictionary_2_t1598 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m27385(__this, method) (( Enumerator_t4012  (*) (Dictionary_2_t1598 *, const MethodInfo*))Dictionary_2_GetEnumerator_m27385_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1663  Dictionary_2_U3CCopyToU3Em__0_m27386_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m27386(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1663  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m27386_gshared)(__this /* static, unused */, ___key, ___value, method)
