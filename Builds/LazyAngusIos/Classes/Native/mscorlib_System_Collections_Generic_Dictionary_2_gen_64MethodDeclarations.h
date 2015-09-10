#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7664;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1251;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9853;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Double>
struct KeyCollection_t7665;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>
struct ValueCollection_t7669;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1215;
// System.Collections.Generic.IDictionary`2<System.Object,System.Double>
struct IDictionary_2_t9957;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t8413;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t7853;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__52.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor()
extern "C" void Dictionary_2__ctor_m49641_gshared (Dictionary_2_t7664 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m49641(__this, method) (( void (*) (Dictionary_2_t7664 *, const MethodInfo*))Dictionary_2__ctor_m49641_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m49643_gshared (Dictionary_2_t7664 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m49643(__this, ___comparer, method) (( void (*) (Dictionary_2_t7664 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49643_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m49645_gshared (Dictionary_2_t7664 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m49645(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7664 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49645_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m49647_gshared (Dictionary_2_t7664 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m49647(__this, ___capacity, method) (( void (*) (Dictionary_2_t7664 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m49647_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m49649_gshared (Dictionary_2_t7664 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m49649(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7664 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49649_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m49651_gshared (Dictionary_2_t7664 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m49651(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7664 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m49651_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49653_gshared (Dictionary_2_t7664 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49653(__this, method) (( Object_t* (*) (Dictionary_2_t7664 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49653_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49655_gshared (Dictionary_2_t7664 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49655(__this, method) (( Object_t* (*) (Dictionary_2_t7664 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49655_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m49657_gshared (Dictionary_2_t7664 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m49657(__this, method) (( Object_t * (*) (Dictionary_2_t7664 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m49657_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m49659_gshared (Dictionary_2_t7664 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m49659(__this, method) (( Object_t * (*) (Dictionary_2_t7664 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m49659_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m49661_gshared (Dictionary_2_t7664 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m49661(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7664 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m49661_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m49663_gshared (Dictionary_2_t7664 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m49663(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7664 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m49663_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m49665_gshared (Dictionary_2_t7664 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m49665(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7664 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m49665_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m49667_gshared (Dictionary_2_t7664 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m49667(__this, ___key, method) (( bool (*) (Dictionary_2_t7664 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m49667_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m49669_gshared (Dictionary_2_t7664 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m49669(__this, ___key, method) (( void (*) (Dictionary_2_t7664 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m49669_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49671_gshared (Dictionary_2_t7664 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49671(__this, method) (( bool (*) (Dictionary_2_t7664 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49671_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49673_gshared (Dictionary_2_t7664 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49673(__this, method) (( Object_t * (*) (Dictionary_2_t7664 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49673_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49675_gshared (Dictionary_2_t7664 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49675(__this, method) (( bool (*) (Dictionary_2_t7664 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49675_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49677_gshared (Dictionary_2_t7664 * __this, KeyValuePair_2_t7590  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49677(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7664 *, KeyValuePair_2_t7590 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49677_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49679_gshared (Dictionary_2_t7664 * __this, KeyValuePair_2_t7590  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49679(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7664 *, KeyValuePair_2_t7590 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49679_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49681_gshared (Dictionary_2_t7664 * __this, KeyValuePair_2U5BU5D_t8413* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49681(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7664 *, KeyValuePair_2U5BU5D_t8413*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49681_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49683_gshared (Dictionary_2_t7664 * __this, KeyValuePair_2_t7590  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49683(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7664 *, KeyValuePair_2_t7590 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49683_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m49685_gshared (Dictionary_2_t7664 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m49685(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7664 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m49685_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49687_gshared (Dictionary_2_t7664 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49687(__this, method) (( Object_t * (*) (Dictionary_2_t7664 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49687_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49689_gshared (Dictionary_2_t7664 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49689(__this, method) (( Object_t* (*) (Dictionary_2_t7664 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49689_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49691_gshared (Dictionary_2_t7664 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49691(__this, method) (( Object_t * (*) (Dictionary_2_t7664 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49691_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m49693_gshared (Dictionary_2_t7664 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m49693(__this, method) (( int32_t (*) (Dictionary_2_t7664 *, const MethodInfo*))Dictionary_2_get_Count_m49693_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Item(TKey)
extern "C" double Dictionary_2_get_Item_m49695_gshared (Dictionary_2_t7664 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m49695(__this, ___key, method) (( double (*) (Dictionary_2_t7664 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m49695_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m49697_gshared (Dictionary_2_t7664 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m49697(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7664 *, Object_t *, double, const MethodInfo*))Dictionary_2_set_Item_m49697_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m49699_gshared (Dictionary_2_t7664 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m49699(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7664 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m49699_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m49701_gshared (Dictionary_2_t7664 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m49701(__this, ___size, method) (( void (*) (Dictionary_2_t7664 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m49701_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m49703_gshared (Dictionary_2_t7664 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m49703(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7664 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m49703_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7590  Dictionary_2_make_pair_m49705_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m49705(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7590  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_make_pair_m49705_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m49707_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m49707(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_key_m49707_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_value(TKey,TValue)
extern "C" double Dictionary_2_pick_value_m49709_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m49709(__this /* static, unused */, ___key, ___value, method) (( double (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_value_m49709_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m49711_gshared (Dictionary_2_t7664 * __this, KeyValuePair_2U5BU5D_t8413* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m49711(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7664 *, KeyValuePair_2U5BU5D_t8413*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m49711_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Resize()
extern "C" void Dictionary_2_Resize_m49713_gshared (Dictionary_2_t7664 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m49713(__this, method) (( void (*) (Dictionary_2_t7664 *, const MethodInfo*))Dictionary_2_Resize_m49713_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m49715_gshared (Dictionary_2_t7664 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_Add_m49715(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7664 *, Object_t *, double, const MethodInfo*))Dictionary_2_Add_m49715_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Clear()
extern "C" void Dictionary_2_Clear_m49717_gshared (Dictionary_2_t7664 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m49717(__this, method) (( void (*) (Dictionary_2_t7664 *, const MethodInfo*))Dictionary_2_Clear_m49717_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m49719_gshared (Dictionary_2_t7664 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m49719(__this, ___key, method) (( bool (*) (Dictionary_2_t7664 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m49719_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m49721_gshared (Dictionary_2_t7664 * __this, double ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m49721(__this, ___value, method) (( bool (*) (Dictionary_2_t7664 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m49721_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m49723_gshared (Dictionary_2_t7664 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m49723(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7664 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m49723_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m49725_gshared (Dictionary_2_t7664 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m49725(__this, ___sender, method) (( void (*) (Dictionary_2_t7664 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m49725_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m49727_gshared (Dictionary_2_t7664 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m49727(__this, ___key, method) (( bool (*) (Dictionary_2_t7664 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m49727_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m49729_gshared (Dictionary_2_t7664 * __this, Object_t * ___key, double* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m49729(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7664 *, Object_t *, double*, const MethodInfo*))Dictionary_2_TryGetValue_m49729_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Keys()
extern "C" KeyCollection_t7665 * Dictionary_2_get_Keys_m49731_gshared (Dictionary_2_t7664 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m49731(__this, method) (( KeyCollection_t7665 * (*) (Dictionary_2_t7664 *, const MethodInfo*))Dictionary_2_get_Keys_m49731_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Values()
extern "C" ValueCollection_t7669 * Dictionary_2_get_Values_m49733_gshared (Dictionary_2_t7664 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m49733(__this, method) (( ValueCollection_t7669 * (*) (Dictionary_2_t7664 *, const MethodInfo*))Dictionary_2_get_Values_m49733_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m49735_gshared (Dictionary_2_t7664 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m49735(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7664 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m49735_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTValue(System.Object)
extern "C" double Dictionary_2_ToTValue_m49737_gshared (Dictionary_2_t7664 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m49737(__this, ___value, method) (( double (*) (Dictionary_2_t7664 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m49737_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m49739_gshared (Dictionary_2_t7664 * __this, KeyValuePair_2_t7590  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m49739(__this, ___pair, method) (( bool (*) (Dictionary_2_t7664 *, KeyValuePair_2_t7590 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m49739_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetEnumerator()
extern "C" Enumerator_t7667  Dictionary_2_GetEnumerator_m49741_gshared (Dictionary_2_t7664 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m49741(__this, method) (( Enumerator_t7667  (*) (Dictionary_2_t7664 *, const MethodInfo*))Dictionary_2_GetEnumerator_m49741_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Double>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2167  Dictionary_2_U3CCopyToU3Em__2_m49743_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m49743(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m49743_gshared)(__this /* static, unused */, ___key, ___value, method)
