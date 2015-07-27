#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3505;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1291;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4252;
// System.Collections.ICollection
struct ICollection_t652;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t3508;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t3512;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3390;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t4322;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1300;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t4323;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t4324;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1942;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__17.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m19646_gshared (Dictionary_2_t3505 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m19646(__this, method) (( void (*) (Dictionary_2_t3505 *, const MethodInfo*))Dictionary_2__ctor_m19646_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19648_gshared (Dictionary_2_t3505 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19648(__this, ___comparer, method) (( void (*) (Dictionary_2_t3505 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19648_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m19650_gshared (Dictionary_2_t3505 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m19650(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3505 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19650_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m19651_gshared (Dictionary_2_t3505 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m19651(__this, ___capacity, method) (( void (*) (Dictionary_2_t3505 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m19651_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19653_gshared (Dictionary_2_t3505 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19653(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3505 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19653_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m19655_gshared (Dictionary_2_t3505 * __this, SerializationInfo_t1300 * ___info, StreamingContext_t1301  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m19655(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3505 *, SerializationInfo_t1300 *, StreamingContext_t1301 , const MethodInfo*))Dictionary_2__ctor_m19655_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19657_gshared (Dictionary_2_t3505 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19657(__this, method) (( Object_t* (*) (Dictionary_2_t3505 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19657_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19659_gshared (Dictionary_2_t3505 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19659(__this, method) (( Object_t* (*) (Dictionary_2_t3505 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19659_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m19661_gshared (Dictionary_2_t3505 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m19661(__this, method) (( Object_t * (*) (Dictionary_2_t3505 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m19661_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19663_gshared (Dictionary_2_t3505 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19663(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3505 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m19663_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m19665_gshared (Dictionary_2_t3505 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19665(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3505 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m19665_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m19667_gshared (Dictionary_2_t3505 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m19667(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3505 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m19667_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m19669_gshared (Dictionary_2_t3505 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m19669(__this, ___key, method) (( bool (*) (Dictionary_2_t3505 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m19669_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m19671_gshared (Dictionary_2_t3505 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m19671(__this, ___key, method) (( void (*) (Dictionary_2_t3505 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m19671_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19673_gshared (Dictionary_2_t3505 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19673(__this, method) (( bool (*) (Dictionary_2_t3505 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19673_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19675_gshared (Dictionary_2_t3505 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19675(__this, method) (( Object_t * (*) (Dictionary_2_t3505 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19675_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19677_gshared (Dictionary_2_t3505 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19677(__this, method) (( bool (*) (Dictionary_2_t3505 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19677_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19679_gshared (Dictionary_2_t3505 * __this, KeyValuePair_2_t3506  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19679(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3505 *, KeyValuePair_2_t3506 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19679_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19681_gshared (Dictionary_2_t3505 * __this, KeyValuePair_2_t3506  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19681(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3505 *, KeyValuePair_2_t3506 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19681_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19683_gshared (Dictionary_2_t3505 * __this, KeyValuePair_2U5BU5D_t4323* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19683(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3505 *, KeyValuePair_2U5BU5D_t4323*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19683_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19685_gshared (Dictionary_2_t3505 * __this, KeyValuePair_2_t3506  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19685(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3505 *, KeyValuePair_2_t3506 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19685_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m19687_gshared (Dictionary_2_t3505 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19687(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3505 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m19687_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19689_gshared (Dictionary_2_t3505 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19689(__this, method) (( Object_t * (*) (Dictionary_2_t3505 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19689_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19691_gshared (Dictionary_2_t3505 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19691(__this, method) (( Object_t* (*) (Dictionary_2_t3505 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19691_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19693_gshared (Dictionary_2_t3505 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19693(__this, method) (( Object_t * (*) (Dictionary_2_t3505 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19693_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m19695_gshared (Dictionary_2_t3505 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m19695(__this, method) (( int32_t (*) (Dictionary_2_t3505 *, const MethodInfo*))Dictionary_2_get_Count_m19695_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m19697_gshared (Dictionary_2_t3505 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m19697(__this, ___key, method) (( int32_t (*) (Dictionary_2_t3505 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m19697_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m19699_gshared (Dictionary_2_t3505 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m19699(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3505 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m19699_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m19701_gshared (Dictionary_2_t3505 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m19701(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3505 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m19701_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m19703_gshared (Dictionary_2_t3505 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m19703(__this, ___size, method) (( void (*) (Dictionary_2_t3505 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m19703_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m19705_gshared (Dictionary_2_t3505 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m19705(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3505 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m19705_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3506  Dictionary_2_make_pair_m19707_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m19707(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3506  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m19707_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m19709_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m19709(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m19709_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m19711_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m19711(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m19711_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m19713_gshared (Dictionary_2_t3505 * __this, KeyValuePair_2U5BU5D_t4323* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m19713(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3505 *, KeyValuePair_2U5BU5D_t4323*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m19713_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m19715_gshared (Dictionary_2_t3505 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m19715(__this, method) (( void (*) (Dictionary_2_t3505 *, const MethodInfo*))Dictionary_2_Resize_m19715_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m19717_gshared (Dictionary_2_t3505 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m19717(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3505 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m19717_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m19719_gshared (Dictionary_2_t3505 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m19719(__this, method) (( void (*) (Dictionary_2_t3505 *, const MethodInfo*))Dictionary_2_Clear_m19719_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m19721_gshared (Dictionary_2_t3505 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m19721(__this, ___key, method) (( bool (*) (Dictionary_2_t3505 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m19721_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m19723_gshared (Dictionary_2_t3505 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m19723(__this, ___value, method) (( bool (*) (Dictionary_2_t3505 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m19723_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m19725_gshared (Dictionary_2_t3505 * __this, SerializationInfo_t1300 * ___info, StreamingContext_t1301  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m19725(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3505 *, SerializationInfo_t1300 *, StreamingContext_t1301 , const MethodInfo*))Dictionary_2_GetObjectData_m19725_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m19727_gshared (Dictionary_2_t3505 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m19727(__this, ___sender, method) (( void (*) (Dictionary_2_t3505 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m19727_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m19729_gshared (Dictionary_2_t3505 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m19729(__this, ___key, method) (( bool (*) (Dictionary_2_t3505 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m19729_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m19731_gshared (Dictionary_2_t3505 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m19731(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3505 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m19731_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t3508 * Dictionary_2_get_Keys_m19733_gshared (Dictionary_2_t3505 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m19733(__this, method) (( KeyCollection_t3508 * (*) (Dictionary_2_t3505 *, const MethodInfo*))Dictionary_2_get_Keys_m19733_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t3512 * Dictionary_2_get_Values_m19735_gshared (Dictionary_2_t3505 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m19735(__this, method) (( ValueCollection_t3512 * (*) (Dictionary_2_t3505 *, const MethodInfo*))Dictionary_2_get_Values_m19735_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m19737_gshared (Dictionary_2_t3505 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m19737(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3505 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m19737_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m19739_gshared (Dictionary_2_t3505 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m19739(__this, ___value, method) (( int32_t (*) (Dictionary_2_t3505 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m19739_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19741_gshared (Dictionary_2_t3505 * __this, KeyValuePair_2_t3506  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m19741(__this, ___pair, method) (( bool (*) (Dictionary_2_t3505 *, KeyValuePair_2_t3506 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m19741_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t3510  Dictionary_2_GetEnumerator_m19743_gshared (Dictionary_2_t3505 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m19743(__this, method) (( Enumerator_t3510  (*) (Dictionary_2_t3505 *, const MethodInfo*))Dictionary_2_GetEnumerator_m19743_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2180  Dictionary_2_U3CCopyToU3Em__0_m19745_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m19745(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2180  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m19745_gshared)(__this /* static, unused */, ___key, ___value, method)
