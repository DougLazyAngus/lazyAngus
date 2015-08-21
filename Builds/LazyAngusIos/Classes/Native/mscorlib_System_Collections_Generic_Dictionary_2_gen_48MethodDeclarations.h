#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1485;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1221;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t5439;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t5443;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1185;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t1514;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t6041;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5449;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m21784_gshared (Dictionary_2_t1485 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m21784(__this, method) (( void (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2__ctor_m21784_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21786_gshared (Dictionary_2_t1485 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21786(__this, ___comparer, method) (( void (*) (Dictionary_2_t1485 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21786_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m21788_gshared (Dictionary_2_t1485 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m21788(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1485 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21788_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21790_gshared (Dictionary_2_t1485 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m21790(__this, ___capacity, method) (( void (*) (Dictionary_2_t1485 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21790_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21792_gshared (Dictionary_2_t1485 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21792(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1485 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21792_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21794_gshared (Dictionary_2_t1485 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m21794(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1485 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m21794_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21796_gshared (Dictionary_2_t1485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21796(__this, method) (( Object_t* (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21796_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21798_gshared (Dictionary_2_t1485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21798(__this, method) (( Object_t* (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21798_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m21800_gshared (Dictionary_2_t1485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m21800(__this, method) (( Object_t * (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21800_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21802_gshared (Dictionary_2_t1485 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21802(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1485 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21802_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21804_gshared (Dictionary_2_t1485 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21804(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1485 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21804_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21806_gshared (Dictionary_2_t1485 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21806(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1485 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21806_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21808_gshared (Dictionary_2_t1485 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21808(__this, ___key, method) (( bool (*) (Dictionary_2_t1485 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21808_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21810_gshared (Dictionary_2_t1485 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21810(__this, ___key, method) (( void (*) (Dictionary_2_t1485 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21810_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21812_gshared (Dictionary_2_t1485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21812(__this, method) (( bool (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21812_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21814_gshared (Dictionary_2_t1485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21814(__this, method) (( Object_t * (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21814_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21816_gshared (Dictionary_2_t1485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21816(__this, method) (( bool (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21816_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21818_gshared (Dictionary_2_t1485 * __this, KeyValuePair_2_t70  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21818(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1485 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21818_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21820_gshared (Dictionary_2_t1485 * __this, KeyValuePair_2_t70  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21820(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1485 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21820_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21822_gshared (Dictionary_2_t1485 * __this, KeyValuePair_2U5BU5D_t6041* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21822(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1485 *, KeyValuePair_2U5BU5D_t6041*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21822_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21824_gshared (Dictionary_2_t1485 * __this, KeyValuePair_2_t70  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21824(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1485 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21824_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21826_gshared (Dictionary_2_t1485 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21826(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1485 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21826_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21828_gshared (Dictionary_2_t1485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21828(__this, method) (( Object_t * (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21828_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21830_gshared (Dictionary_2_t1485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21830(__this, method) (( Object_t* (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21830_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21832_gshared (Dictionary_2_t1485 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21832(__this, method) (( Object_t * (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21832_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21834_gshared (Dictionary_2_t1485 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m21834(__this, method) (( int32_t (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_get_Count_m21834_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m21836_gshared (Dictionary_2_t1485 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m21836(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1485 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m21836_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21838_gshared (Dictionary_2_t1485 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m21838(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1485 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m21838_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21840_gshared (Dictionary_2_t1485 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m21840(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1485 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21840_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21842_gshared (Dictionary_2_t1485 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m21842(__this, ___size, method) (( void (*) (Dictionary_2_t1485 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21842_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21844_gshared (Dictionary_2_t1485 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21844(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1485 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21844_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t70  Dictionary_2_make_pair_m21846_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m21846(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t70  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m21846_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m21848_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m21848(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m21848_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m21850_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m21850(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m21850_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21852_gshared (Dictionary_2_t1485 * __this, KeyValuePair_2U5BU5D_t6041* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m21852(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1485 *, KeyValuePair_2U5BU5D_t6041*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21852_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m21854_gshared (Dictionary_2_t1485 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21854(__this, method) (( void (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_Resize_m21854_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21856_gshared (Dictionary_2_t1485 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21856(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1485 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m21856_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m21858_gshared (Dictionary_2_t1485 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21858(__this, method) (( void (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_Clear_m21858_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21860_gshared (Dictionary_2_t1485 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21860(__this, ___key, method) (( bool (*) (Dictionary_2_t1485 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21860_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21862_gshared (Dictionary_2_t1485 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21862(__this, ___value, method) (( bool (*) (Dictionary_2_t1485 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m21862_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21864_gshared (Dictionary_2_t1485 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21864(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1485 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m21864_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21866_gshared (Dictionary_2_t1485 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21866(__this, ___sender, method) (( void (*) (Dictionary_2_t1485 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21866_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21868_gshared (Dictionary_2_t1485 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21868(__this, ___key, method) (( bool (*) (Dictionary_2_t1485 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m21868_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21870_gshared (Dictionary_2_t1485 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21870(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1485 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m21870_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t5439 * Dictionary_2_get_Keys_m21871_gshared (Dictionary_2_t1485 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21871(__this, method) (( KeyCollection_t5439 * (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_get_Keys_m21871_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t5443 * Dictionary_2_get_Values_m21873_gshared (Dictionary_2_t1485 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21873(__this, method) (( ValueCollection_t5443 * (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_get_Values_m21873_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m21875_gshared (Dictionary_2_t1485 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21875(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1485 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21875_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m21877_gshared (Dictionary_2_t1485 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21877(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1485 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21877_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21879_gshared (Dictionary_2_t1485 * __this, KeyValuePair_2_t70  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21879(__this, ___pair, method) (( bool (*) (Dictionary_2_t1485 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21879_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t5441  Dictionary_2_GetEnumerator_m21880_gshared (Dictionary_2_t1485 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21880(__this, method) (( Enumerator_t5441  (*) (Dictionary_2_t1485 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21880_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2137  Dictionary_2_U3CCopyToU3Em__0_m21882_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21882(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21882_gshared)(__this /* static, unused */, ___key, ___value, method)
