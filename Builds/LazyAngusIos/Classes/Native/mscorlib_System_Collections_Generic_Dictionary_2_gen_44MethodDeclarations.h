#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2803;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8634;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1170;
// System.Collections.ICollection
struct ICollection_t704;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t5355;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t5359;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5346;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t8638;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2869;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t8639;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t8640;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3911;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9915_gshared (Dictionary_2_t2803 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9915(__this, method) (( void (*) (Dictionary_2_t2803 *, const MethodInfo*))Dictionary_2__ctor_m9915_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20836_gshared (Dictionary_2_t2803 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20836(__this, ___comparer, method) (( void (*) (Dictionary_2_t2803 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20836_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m20838_gshared (Dictionary_2_t2803 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m20838(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2803 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20838_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20840_gshared (Dictionary_2_t2803 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m20840(__this, ___capacity, method) (( void (*) (Dictionary_2_t2803 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20840_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20842_gshared (Dictionary_2_t2803 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20842(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2803 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20842_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20844_gshared (Dictionary_2_t2803 * __this, SerializationInfo_t2869 * ___info, StreamingContext_t2870  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m20844(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2803 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2__ctor_m20844_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20846_gshared (Dictionary_2_t2803 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20846(__this, method) (( Object_t* (*) (Dictionary_2_t2803 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20846_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20848_gshared (Dictionary_2_t2803 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20848(__this, method) (( Object_t* (*) (Dictionary_2_t2803 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20848_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m20850_gshared (Dictionary_2_t2803 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m20850(__this, method) (( Object_t * (*) (Dictionary_2_t2803 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m20850_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20852_gshared (Dictionary_2_t2803 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20852(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2803 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20852_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20854_gshared (Dictionary_2_t2803 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20854(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2803 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20854_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20856_gshared (Dictionary_2_t2803 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20856(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2803 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20856_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20858_gshared (Dictionary_2_t2803 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20858(__this, ___key, method) (( bool (*) (Dictionary_2_t2803 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20858_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20860_gshared (Dictionary_2_t2803 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20860(__this, ___key, method) (( void (*) (Dictionary_2_t2803 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20860_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20862_gshared (Dictionary_2_t2803 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20862(__this, method) (( bool (*) (Dictionary_2_t2803 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20862_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20864_gshared (Dictionary_2_t2803 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20864(__this, method) (( Object_t * (*) (Dictionary_2_t2803 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20864_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20866_gshared (Dictionary_2_t2803 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20866(__this, method) (( bool (*) (Dictionary_2_t2803 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20866_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20868_gshared (Dictionary_2_t2803 * __this, KeyValuePair_2_t5349  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20868(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2803 *, KeyValuePair_2_t5349 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20868_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20870_gshared (Dictionary_2_t2803 * __this, KeyValuePair_2_t5349  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20870(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2803 *, KeyValuePair_2_t5349 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20870_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20872_gshared (Dictionary_2_t2803 * __this, KeyValuePair_2U5BU5D_t8639* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20872(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2803 *, KeyValuePair_2U5BU5D_t8639*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20872_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20874_gshared (Dictionary_2_t2803 * __this, KeyValuePair_2_t5349  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20874(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2803 *, KeyValuePair_2_t5349 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20874_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20876_gshared (Dictionary_2_t2803 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20876(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2803 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20876_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20878_gshared (Dictionary_2_t2803 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20878(__this, method) (( Object_t * (*) (Dictionary_2_t2803 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20878_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20880_gshared (Dictionary_2_t2803 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20880(__this, method) (( Object_t* (*) (Dictionary_2_t2803 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20880_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20882_gshared (Dictionary_2_t2803 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20882(__this, method) (( Object_t * (*) (Dictionary_2_t2803 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20882_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20884_gshared (Dictionary_2_t2803 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m20884(__this, method) (( int32_t (*) (Dictionary_2_t2803 *, const MethodInfo*))Dictionary_2_get_Count_m20884_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m20886_gshared (Dictionary_2_t2803 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m20886(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2803 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m20886_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20888_gshared (Dictionary_2_t2803 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m20888(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2803 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m20888_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20890_gshared (Dictionary_2_t2803 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m20890(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2803 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20890_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20892_gshared (Dictionary_2_t2803 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m20892(__this, ___size, method) (( void (*) (Dictionary_2_t2803 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20892_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20894_gshared (Dictionary_2_t2803 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20894(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2803 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20894_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5349  Dictionary_2_make_pair_m20896_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m20896(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5349  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m20896_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m20898_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m20898(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m20898_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m20900_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m20900(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m20900_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20902_gshared (Dictionary_2_t2803 * __this, KeyValuePair_2U5BU5D_t8639* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m20902(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2803 *, KeyValuePair_2U5BU5D_t8639*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20902_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m20904_gshared (Dictionary_2_t2803 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m20904(__this, method) (( void (*) (Dictionary_2_t2803 *, const MethodInfo*))Dictionary_2_Resize_m20904_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20906_gshared (Dictionary_2_t2803 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m20906(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2803 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m20906_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m20908_gshared (Dictionary_2_t2803 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m20908(__this, method) (( void (*) (Dictionary_2_t2803 *, const MethodInfo*))Dictionary_2_Clear_m20908_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20910_gshared (Dictionary_2_t2803 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m20910(__this, ___key, method) (( bool (*) (Dictionary_2_t2803 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m20910_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20912_gshared (Dictionary_2_t2803 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m20912(__this, ___value, method) (( bool (*) (Dictionary_2_t2803 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m20912_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20914_gshared (Dictionary_2_t2803 * __this, SerializationInfo_t2869 * ___info, StreamingContext_t2870  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m20914(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2803 *, SerializationInfo_t2869 *, StreamingContext_t2870 , const MethodInfo*))Dictionary_2_GetObjectData_m20914_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20916_gshared (Dictionary_2_t2803 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20916(__this, ___sender, method) (( void (*) (Dictionary_2_t2803 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20916_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20918_gshared (Dictionary_2_t2803 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m20918(__this, ___key, method) (( bool (*) (Dictionary_2_t2803 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m20918_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20920_gshared (Dictionary_2_t2803 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m20920(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2803 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m20920_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t5355 * Dictionary_2_get_Keys_m20922_gshared (Dictionary_2_t2803 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m20922(__this, method) (( KeyCollection_t5355 * (*) (Dictionary_2_t2803 *, const MethodInfo*))Dictionary_2_get_Keys_m20922_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t5359 * Dictionary_2_get_Values_m20924_gshared (Dictionary_2_t2803 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m20924(__this, method) (( ValueCollection_t5359 * (*) (Dictionary_2_t2803 *, const MethodInfo*))Dictionary_2_get_Values_m20924_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m20926_gshared (Dictionary_2_t2803 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m20926(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2803 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m20926_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m20928_gshared (Dictionary_2_t2803 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m20928(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2803 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m20928_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20930_gshared (Dictionary_2_t2803 * __this, KeyValuePair_2_t5349  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20930(__this, ___pair, method) (( bool (*) (Dictionary_2_t2803 *, KeyValuePair_2_t5349 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20930_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t5357  Dictionary_2_GetEnumerator_m20932_gshared (Dictionary_2_t2803 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m20932(__this, method) (( Enumerator_t5357  (*) (Dictionary_2_t2803 *, const MethodInfo*))Dictionary_2_GetEnumerator_m20932_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2088  Dictionary_2_U3CCopyToU3Em__0_m20934_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m20934(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2088  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20934_gshared)(__this /* static, unused */, ___key, ___value, method)
