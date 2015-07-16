#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1653;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4186;
// System.Collections.ICollection
struct ICollection_t600;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t4062;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t4066;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3387;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t4602;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t4603;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t4604;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1451;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__39.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m27591_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m27591(__this, method) (( void (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2__ctor_m27591_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27592_gshared (Dictionary_2_t1653 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27592(__this, ___comparer, method) (( void (*) (Dictionary_2_t1653 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27592_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m27593_gshared (Dictionary_2_t1653 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m27593(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1653 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27593_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m27594_gshared (Dictionary_2_t1653 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m27594(__this, ___capacity, method) (( void (*) (Dictionary_2_t1653 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m27594_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m27595_gshared (Dictionary_2_t1653 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m27595(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1653 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m27595_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m27596_gshared (Dictionary_2_t1653 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m27596(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1653 *, SerializationInfo_t1255 *, StreamingContext_t1256 , const MethodInfo*))Dictionary_2__ctor_m27596_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27597_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27597(__this, method) (( Object_t* (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27597_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27598_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27598(__this, method) (( Object_t* (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27598_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m27599_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m27599(__this, method) (( Object_t * (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m27599_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m27600_gshared (Dictionary_2_t1653 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m27600(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1653 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m27600_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m27601_gshared (Dictionary_2_t1653 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m27601(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1653 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m27601_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m27602_gshared (Dictionary_2_t1653 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m27602(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1653 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m27602_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m27603_gshared (Dictionary_2_t1653 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m27603(__this, ___key, method) (( bool (*) (Dictionary_2_t1653 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m27603_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m27604_gshared (Dictionary_2_t1653 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m27604(__this, ___key, method) (( void (*) (Dictionary_2_t1653 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m27604_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27605_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27605(__this, method) (( bool (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27605_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27606_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27606(__this, method) (( Object_t * (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27606_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27607_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27607(__this, method) (( bool (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27607_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27608_gshared (Dictionary_2_t1653 * __this, KeyValuePair_2_t4060  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27608(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1653 *, KeyValuePair_2_t4060 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27608_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27609_gshared (Dictionary_2_t1653 * __this, KeyValuePair_2_t4060  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27609(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1653 *, KeyValuePair_2_t4060 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27609_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27610_gshared (Dictionary_2_t1653 * __this, KeyValuePair_2U5BU5D_t4603* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27610(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1653 *, KeyValuePair_2U5BU5D_t4603*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27610_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27611_gshared (Dictionary_2_t1653 * __this, KeyValuePair_2_t4060  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27611(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1653 *, KeyValuePair_2_t4060 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27611_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m27612_gshared (Dictionary_2_t1653 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m27612(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1653 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m27612_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27613_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27613(__this, method) (( Object_t * (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27613_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27614_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27614(__this, method) (( Object_t* (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27614_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27615_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27615(__this, method) (( Object_t * (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27615_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m27616_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m27616(__this, method) (( int32_t (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_get_Count_m27616_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m27617_gshared (Dictionary_2_t1653 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m27617(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1653 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m27617_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m27618_gshared (Dictionary_2_t1653 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m27618(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1653 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m27618_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m27619_gshared (Dictionary_2_t1653 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m27619(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1653 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m27619_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m27620_gshared (Dictionary_2_t1653 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m27620(__this, ___size, method) (( void (*) (Dictionary_2_t1653 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m27620_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m27621_gshared (Dictionary_2_t1653 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m27621(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1653 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m27621_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4060  Dictionary_2_make_pair_m27622_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m27622(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4060  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m27622_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m27623_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m27623(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m27623_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m27624_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m27624(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m27624_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m27625_gshared (Dictionary_2_t1653 * __this, KeyValuePair_2U5BU5D_t4603* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m27625(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1653 *, KeyValuePair_2U5BU5D_t4603*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m27625_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m27626_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m27626(__this, method) (( void (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_Resize_m27626_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m27627_gshared (Dictionary_2_t1653 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m27627(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1653 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m27627_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m27628_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m27628(__this, method) (( void (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_Clear_m27628_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m27629_gshared (Dictionary_2_t1653 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m27629(__this, ___key, method) (( bool (*) (Dictionary_2_t1653 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m27629_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m27630_gshared (Dictionary_2_t1653 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m27630(__this, ___value, method) (( bool (*) (Dictionary_2_t1653 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m27630_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m27631_gshared (Dictionary_2_t1653 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m27631(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1653 *, SerializationInfo_t1255 *, StreamingContext_t1256 , const MethodInfo*))Dictionary_2_GetObjectData_m27631_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m27632_gshared (Dictionary_2_t1653 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m27632(__this, ___sender, method) (( void (*) (Dictionary_2_t1653 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m27632_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m27633_gshared (Dictionary_2_t1653 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m27633(__this, ___key, method) (( bool (*) (Dictionary_2_t1653 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m27633_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m27634_gshared (Dictionary_2_t1653 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m27634(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1653 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m27634_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t4062 * Dictionary_2_get_Keys_m27635_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m27635(__this, method) (( KeyCollection_t4062 * (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_get_Keys_m27635_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t4066 * Dictionary_2_get_Values_m27636_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m27636(__this, method) (( ValueCollection_t4066 * (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_get_Values_m27636_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m27637_gshared (Dictionary_2_t1653 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m27637(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1653 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m27637_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m27638_gshared (Dictionary_2_t1653 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m27638(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1653 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m27638_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m27639_gshared (Dictionary_2_t1653 * __this, KeyValuePair_2_t4060  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m27639(__this, ___pair, method) (( bool (*) (Dictionary_2_t1653 *, KeyValuePair_2_t4060 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m27639_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t4064  Dictionary_2_GetEnumerator_m27640_gshared (Dictionary_2_t1653 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m27640(__this, method) (( Enumerator_t4064  (*) (Dictionary_2_t1653 *, const MethodInfo*))Dictionary_2_GetEnumerator_m27640_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1718  Dictionary_2_U3CCopyToU3Em__0_m27641_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m27641(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1718  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m27641_gshared)(__this /* static, unused */, ___key, ___value, method)
