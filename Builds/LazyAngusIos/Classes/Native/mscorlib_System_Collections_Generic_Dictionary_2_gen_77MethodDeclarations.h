#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4122;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8710;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t8650;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t8654;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5390;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t9723;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t9724;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t9725;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_143.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__74.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m63881_gshared (Dictionary_2_t4122 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m63881(__this, method) (( void (*) (Dictionary_2_t4122 *, const MethodInfo*))Dictionary_2__ctor_m63881_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m63882_gshared (Dictionary_2_t4122 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m63882(__this, ___comparer, method) (( void (*) (Dictionary_2_t4122 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m63882_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m63883_gshared (Dictionary_2_t4122 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m63883(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4122 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m63883_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m63884_gshared (Dictionary_2_t4122 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m63884(__this, ___capacity, method) (( void (*) (Dictionary_2_t4122 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m63884_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m63885_gshared (Dictionary_2_t4122 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m63885(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4122 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m63885_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m63886_gshared (Dictionary_2_t4122 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m63886(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4122 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m63886_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m63887_gshared (Dictionary_2_t4122 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m63887(__this, method) (( Object_t* (*) (Dictionary_2_t4122 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m63887_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m63888_gshared (Dictionary_2_t4122 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m63888(__this, method) (( Object_t* (*) (Dictionary_2_t4122 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m63888_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m63889_gshared (Dictionary_2_t4122 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m63889(__this, method) (( Object_t * (*) (Dictionary_2_t4122 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m63889_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m63890_gshared (Dictionary_2_t4122 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m63890(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4122 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m63890_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m63891_gshared (Dictionary_2_t4122 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m63891(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4122 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m63891_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m63892_gshared (Dictionary_2_t4122 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m63892(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4122 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m63892_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m63893_gshared (Dictionary_2_t4122 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m63893(__this, ___key, method) (( bool (*) (Dictionary_2_t4122 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m63893_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m63894_gshared (Dictionary_2_t4122 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m63894(__this, ___key, method) (( void (*) (Dictionary_2_t4122 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m63894_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m63895_gshared (Dictionary_2_t4122 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m63895(__this, method) (( bool (*) (Dictionary_2_t4122 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m63895_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m63896_gshared (Dictionary_2_t4122 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m63896(__this, method) (( Object_t * (*) (Dictionary_2_t4122 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m63896_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m63897_gshared (Dictionary_2_t4122 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m63897(__this, method) (( bool (*) (Dictionary_2_t4122 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m63897_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m63898_gshared (Dictionary_2_t4122 * __this, KeyValuePair_2_t8648  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m63898(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4122 *, KeyValuePair_2_t8648 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m63898_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m63899_gshared (Dictionary_2_t4122 * __this, KeyValuePair_2_t8648  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m63899(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4122 *, KeyValuePair_2_t8648 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m63899_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m63900_gshared (Dictionary_2_t4122 * __this, KeyValuePair_2U5BU5D_t9724* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m63900(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4122 *, KeyValuePair_2U5BU5D_t9724*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m63900_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m63901_gshared (Dictionary_2_t4122 * __this, KeyValuePair_2_t8648  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m63901(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4122 *, KeyValuePair_2_t8648 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m63901_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m63902_gshared (Dictionary_2_t4122 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m63902(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4122 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m63902_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m63903_gshared (Dictionary_2_t4122 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m63903(__this, method) (( Object_t * (*) (Dictionary_2_t4122 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m63903_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m63904_gshared (Dictionary_2_t4122 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m63904(__this, method) (( Object_t* (*) (Dictionary_2_t4122 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m63904_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m63905_gshared (Dictionary_2_t4122 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m63905(__this, method) (( Object_t * (*) (Dictionary_2_t4122 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m63905_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m63906_gshared (Dictionary_2_t4122 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m63906(__this, method) (( int32_t (*) (Dictionary_2_t4122 *, const MethodInfo*))Dictionary_2_get_Count_m63906_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m63907_gshared (Dictionary_2_t4122 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m63907(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4122 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m63907_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m63908_gshared (Dictionary_2_t4122 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m63908(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4122 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m63908_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m63909_gshared (Dictionary_2_t4122 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m63909(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4122 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m63909_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m63910_gshared (Dictionary_2_t4122 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m63910(__this, ___size, method) (( void (*) (Dictionary_2_t4122 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m63910_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m63911_gshared (Dictionary_2_t4122 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m63911(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4122 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m63911_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t8648  Dictionary_2_make_pair_m63912_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m63912(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8648  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m63912_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m63913_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m63913(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m63913_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m63914_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m63914(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m63914_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m63915_gshared (Dictionary_2_t4122 * __this, KeyValuePair_2U5BU5D_t9724* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m63915(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4122 *, KeyValuePair_2U5BU5D_t9724*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m63915_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m63916_gshared (Dictionary_2_t4122 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m63916(__this, method) (( void (*) (Dictionary_2_t4122 *, const MethodInfo*))Dictionary_2_Resize_m63916_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m63917_gshared (Dictionary_2_t4122 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m63917(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4122 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m63917_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m63918_gshared (Dictionary_2_t4122 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m63918(__this, method) (( void (*) (Dictionary_2_t4122 *, const MethodInfo*))Dictionary_2_Clear_m63918_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m63919_gshared (Dictionary_2_t4122 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m63919(__this, ___key, method) (( bool (*) (Dictionary_2_t4122 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m63919_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m63920_gshared (Dictionary_2_t4122 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m63920(__this, ___value, method) (( bool (*) (Dictionary_2_t4122 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m63920_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m63921_gshared (Dictionary_2_t4122 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m63921(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4122 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m63921_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m63922_gshared (Dictionary_2_t4122 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m63922(__this, ___sender, method) (( void (*) (Dictionary_2_t4122 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m63922_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m63923_gshared (Dictionary_2_t4122 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m63923(__this, ___key, method) (( bool (*) (Dictionary_2_t4122 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m63923_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m63924_gshared (Dictionary_2_t4122 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m63924(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4122 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m63924_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t8650 * Dictionary_2_get_Keys_m63925_gshared (Dictionary_2_t4122 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m63925(__this, method) (( KeyCollection_t8650 * (*) (Dictionary_2_t4122 *, const MethodInfo*))Dictionary_2_get_Keys_m63925_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t8654 * Dictionary_2_get_Values_m63926_gshared (Dictionary_2_t4122 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m63926(__this, method) (( ValueCollection_t8654 * (*) (Dictionary_2_t4122 *, const MethodInfo*))Dictionary_2_get_Values_m63926_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m63927_gshared (Dictionary_2_t4122 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m63927(__this, ___key, method) (( int32_t (*) (Dictionary_2_t4122 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m63927_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m63928_gshared (Dictionary_2_t4122 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m63928(__this, ___value, method) (( int32_t (*) (Dictionary_2_t4122 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m63928_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m63929_gshared (Dictionary_2_t4122 * __this, KeyValuePair_2_t8648  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m63929(__this, ___pair, method) (( bool (*) (Dictionary_2_t4122 *, KeyValuePair_2_t8648 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m63929_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t8652  Dictionary_2_GetEnumerator_m63930_gshared (Dictionary_2_t4122 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m63930(__this, method) (( Enumerator_t8652  (*) (Dictionary_2_t4122 *, const MethodInfo*))Dictionary_2_GetEnumerator_m63930_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2137  Dictionary_2_U3CCopyToU3Em__0_m63931_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m63931(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m63931_gshared)(__this /* static, unused */, ___key, ___value, method)
