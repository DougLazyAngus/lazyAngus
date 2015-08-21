#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7064;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1221;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8936;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Single>
struct KeyCollection_t7065;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
struct ValueCollection_t7069;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1185;
// System.Collections.Generic.IDictionary`2<System.Object,System.Single>
struct IDictionary_2_t9312;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t7898;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t7280;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__50.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
extern "C" void Dictionary_2__ctor_m44671_gshared (Dictionary_2_t7064 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m44671(__this, method) (( void (*) (Dictionary_2_t7064 *, const MethodInfo*))Dictionary_2__ctor_m44671_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44673_gshared (Dictionary_2_t7064 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44673(__this, ___comparer, method) (( void (*) (Dictionary_2_t7064 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44673_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m44675_gshared (Dictionary_2_t7064 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m44675(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7064 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44675_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m44677_gshared (Dictionary_2_t7064 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m44677(__this, ___capacity, method) (( void (*) (Dictionary_2_t7064 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44677_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44679_gshared (Dictionary_2_t7064 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44679(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7064 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44679_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m44681_gshared (Dictionary_2_t7064 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m44681(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7064 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m44681_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44683_gshared (Dictionary_2_t7064 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44683(__this, method) (( Object_t* (*) (Dictionary_2_t7064 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44683_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44685_gshared (Dictionary_2_t7064 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44685(__this, method) (( Object_t* (*) (Dictionary_2_t7064 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44685_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m44687_gshared (Dictionary_2_t7064 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44687(__this, method) (( Object_t * (*) (Dictionary_2_t7064 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44687_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m44689_gshared (Dictionary_2_t7064 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44689(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7064 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44689_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m44691_gshared (Dictionary_2_t7064 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44691(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7064 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44691_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m44693_gshared (Dictionary_2_t7064 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m44693(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7064 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44693_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m44695_gshared (Dictionary_2_t7064 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m44695(__this, ___key, method) (( bool (*) (Dictionary_2_t7064 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44695_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m44697_gshared (Dictionary_2_t7064 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m44697(__this, ___key, method) (( void (*) (Dictionary_2_t7064 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44697_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44699_gshared (Dictionary_2_t7064 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44699(__this, method) (( bool (*) (Dictionary_2_t7064 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44699_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44701_gshared (Dictionary_2_t7064 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44701(__this, method) (( Object_t * (*) (Dictionary_2_t7064 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44701_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44703_gshared (Dictionary_2_t7064 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44703(__this, method) (( bool (*) (Dictionary_2_t7064 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44703_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44705_gshared (Dictionary_2_t7064 * __this, KeyValuePair_2_t7004  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44705(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7064 *, KeyValuePair_2_t7004 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44705_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44707_gshared (Dictionary_2_t7064 * __this, KeyValuePair_2_t7004  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44707(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7064 *, KeyValuePair_2_t7004 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44707_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44709_gshared (Dictionary_2_t7064 * __this, KeyValuePair_2U5BU5D_t7898* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44709(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7064 *, KeyValuePair_2U5BU5D_t7898*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44709_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44711_gshared (Dictionary_2_t7064 * __this, KeyValuePair_2_t7004  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44711(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7064 *, KeyValuePair_2_t7004 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44711_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m44713_gshared (Dictionary_2_t7064 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44713(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7064 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44713_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44715_gshared (Dictionary_2_t7064 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44715(__this, method) (( Object_t * (*) (Dictionary_2_t7064 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44715_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44717_gshared (Dictionary_2_t7064 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44717(__this, method) (( Object_t* (*) (Dictionary_2_t7064 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44717_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44719_gshared (Dictionary_2_t7064 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44719(__this, method) (( Object_t * (*) (Dictionary_2_t7064 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44719_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m44721_gshared (Dictionary_2_t7064 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m44721(__this, method) (( int32_t (*) (Dictionary_2_t7064 *, const MethodInfo*))Dictionary_2_get_Count_m44721_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(TKey)
extern "C" float Dictionary_2_get_Item_m44723_gshared (Dictionary_2_t7064 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m44723(__this, ___key, method) (( float (*) (Dictionary_2_t7064 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m44723_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m44725_gshared (Dictionary_2_t7064 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m44725(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7064 *, Object_t *, float, const MethodInfo*))Dictionary_2_set_Item_m44725_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m44727_gshared (Dictionary_2_t7064 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m44727(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7064 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44727_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m44729_gshared (Dictionary_2_t7064 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m44729(__this, ___size, method) (( void (*) (Dictionary_2_t7064 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44729_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m44731_gshared (Dictionary_2_t7064 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m44731(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7064 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44731_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7004  Dictionary_2_make_pair_m44733_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m44733(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7004  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_make_pair_m44733_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m44735_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m44735(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_key_m44735_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_value(TKey,TValue)
extern "C" float Dictionary_2_pick_value_m44737_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m44737(__this /* static, unused */, ___key, ___value, method) (( float (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_value_m44737_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m44739_gshared (Dictionary_2_t7064 * __this, KeyValuePair_2U5BU5D_t7898* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m44739(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7064 *, KeyValuePair_2U5BU5D_t7898*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44739_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Resize()
extern "C" void Dictionary_2_Resize_m44741_gshared (Dictionary_2_t7064 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m44741(__this, method) (( void (*) (Dictionary_2_t7064 *, const MethodInfo*))Dictionary_2_Resize_m44741_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m44743_gshared (Dictionary_2_t7064 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_Add_m44743(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7064 *, Object_t *, float, const MethodInfo*))Dictionary_2_Add_m44743_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Clear()
extern "C" void Dictionary_2_Clear_m44745_gshared (Dictionary_2_t7064 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m44745(__this, method) (( void (*) (Dictionary_2_t7064 *, const MethodInfo*))Dictionary_2_Clear_m44745_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m44747_gshared (Dictionary_2_t7064 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m44747(__this, ___key, method) (( bool (*) (Dictionary_2_t7064 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m44747_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m44749_gshared (Dictionary_2_t7064 * __this, float ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m44749(__this, ___value, method) (( bool (*) (Dictionary_2_t7064 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m44749_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m44751_gshared (Dictionary_2_t7064 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m44751(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7064 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m44751_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m44753_gshared (Dictionary_2_t7064 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m44753(__this, ___sender, method) (( void (*) (Dictionary_2_t7064 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44753_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m44755_gshared (Dictionary_2_t7064 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m44755(__this, ___key, method) (( bool (*) (Dictionary_2_t7064 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m44755_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m44757_gshared (Dictionary_2_t7064 * __this, Object_t * ___key, float* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m44757(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7064 *, Object_t *, float*, const MethodInfo*))Dictionary_2_TryGetValue_m44757_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Keys()
extern "C" KeyCollection_t7065 * Dictionary_2_get_Keys_m44759_gshared (Dictionary_2_t7064 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m44759(__this, method) (( KeyCollection_t7065 * (*) (Dictionary_2_t7064 *, const MethodInfo*))Dictionary_2_get_Keys_m44759_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Values()
extern "C" ValueCollection_t7069 * Dictionary_2_get_Values_m44761_gshared (Dictionary_2_t7064 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m44761(__this, method) (( ValueCollection_t7069 * (*) (Dictionary_2_t7064 *, const MethodInfo*))Dictionary_2_get_Values_m44761_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m44763_gshared (Dictionary_2_t7064 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m44763(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7064 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44763_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTValue(System.Object)
extern "C" float Dictionary_2_ToTValue_m44765_gshared (Dictionary_2_t7064 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m44765(__this, ___value, method) (( float (*) (Dictionary_2_t7064 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44765_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m44767_gshared (Dictionary_2_t7064 * __this, KeyValuePair_2_t7004  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m44767(__this, ___pair, method) (( bool (*) (Dictionary_2_t7064 *, KeyValuePair_2_t7004 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44767_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetEnumerator()
extern "C" Enumerator_t7067  Dictionary_2_GetEnumerator_m44769_gshared (Dictionary_2_t7064 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m44769(__this, method) (( Enumerator_t7067  (*) (Dictionary_2_t7064 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44769_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Single>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2137  Dictionary_2_U3CCopyToU3Em__0_m44771_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m44771(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44771_gshared)(__this /* static, unused */, ___key, ___value, method)
