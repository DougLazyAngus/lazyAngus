#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2874;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9335;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1244;
// System.Collections.ICollection
struct ICollection_t772;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t5955;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t5959;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5946;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t9339;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t9340;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t9341;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t802;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m10341_gshared (Dictionary_2_t2874 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10341(__this, method) (( void (*) (Dictionary_2_t2874 *, const MethodInfo*))Dictionary_2__ctor_m10341_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25443_gshared (Dictionary_2_t2874 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25443(__this, ___comparer, method) (( void (*) (Dictionary_2_t2874 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25443_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m25445_gshared (Dictionary_2_t2874 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m25445(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2874 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25445_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m25447_gshared (Dictionary_2_t2874 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m25447(__this, ___capacity, method) (( void (*) (Dictionary_2_t2874 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25447_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25449_gshared (Dictionary_2_t2874 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25449(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2874 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25449_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m25451_gshared (Dictionary_2_t2874 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m25451(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2874 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2__ctor_m25451_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25453_gshared (Dictionary_2_t2874 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25453(__this, method) (( Object_t* (*) (Dictionary_2_t2874 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25453_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25455_gshared (Dictionary_2_t2874 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25455(__this, method) (( Object_t* (*) (Dictionary_2_t2874 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25455_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m25457_gshared (Dictionary_2_t2874 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25457(__this, method) (( Object_t * (*) (Dictionary_2_t2874 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25457_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m25459_gshared (Dictionary_2_t2874 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m25459(__this, method) (( Object_t * (*) (Dictionary_2_t2874 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m25459_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25461_gshared (Dictionary_2_t2874 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25461(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2874 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25461_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25463_gshared (Dictionary_2_t2874 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25463(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2874 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25463_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25465_gshared (Dictionary_2_t2874 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m25465(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2874 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25465_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m25467_gshared (Dictionary_2_t2874 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m25467(__this, ___key, method) (( bool (*) (Dictionary_2_t2874 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25467_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25469_gshared (Dictionary_2_t2874 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m25469(__this, ___key, method) (( void (*) (Dictionary_2_t2874 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25469_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25471_gshared (Dictionary_2_t2874 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25471(__this, method) (( bool (*) (Dictionary_2_t2874 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25471_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25473_gshared (Dictionary_2_t2874 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25473(__this, method) (( Object_t * (*) (Dictionary_2_t2874 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25473_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25475_gshared (Dictionary_2_t2874 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25475(__this, method) (( bool (*) (Dictionary_2_t2874 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25475_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25477_gshared (Dictionary_2_t2874 * __this, KeyValuePair_2_t5949  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25477(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2874 *, KeyValuePair_2_t5949 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25477_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25479_gshared (Dictionary_2_t2874 * __this, KeyValuePair_2_t5949  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25479(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2874 *, KeyValuePair_2_t5949 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25479_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25481_gshared (Dictionary_2_t2874 * __this, KeyValuePair_2U5BU5D_t9340* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25481(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2874 *, KeyValuePair_2U5BU5D_t9340*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25481_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25483_gshared (Dictionary_2_t2874 * __this, KeyValuePair_2_t5949  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25483(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2874 *, KeyValuePair_2_t5949 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25483_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25485_gshared (Dictionary_2_t2874 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25485(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2874 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25485_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25487_gshared (Dictionary_2_t2874 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25487(__this, method) (( Object_t * (*) (Dictionary_2_t2874 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25487_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25489_gshared (Dictionary_2_t2874 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25489(__this, method) (( Object_t* (*) (Dictionary_2_t2874 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25489_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25491_gshared (Dictionary_2_t2874 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25491(__this, method) (( Object_t * (*) (Dictionary_2_t2874 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25491_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25493_gshared (Dictionary_2_t2874 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m25493(__this, method) (( int32_t (*) (Dictionary_2_t2874 *, const MethodInfo*))Dictionary_2_get_Count_m25493_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m25495_gshared (Dictionary_2_t2874 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m25495(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2874 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m25495_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m25497_gshared (Dictionary_2_t2874 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m25497(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2874 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m25497_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m25499_gshared (Dictionary_2_t2874 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m25499(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2874 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25499_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m25501_gshared (Dictionary_2_t2874 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m25501(__this, ___size, method) (( void (*) (Dictionary_2_t2874 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25501_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m25503_gshared (Dictionary_2_t2874 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m25503(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2874 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25503_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5949  Dictionary_2_make_pair_m25505_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m25505(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5949  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m25505_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m25507_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m25507(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m25507_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m25509_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m25509(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m25509_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25511_gshared (Dictionary_2_t2874 * __this, KeyValuePair_2U5BU5D_t9340* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m25511(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2874 *, KeyValuePair_2U5BU5D_t9340*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25511_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m25513_gshared (Dictionary_2_t2874 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m25513(__this, method) (( void (*) (Dictionary_2_t2874 *, const MethodInfo*))Dictionary_2_Resize_m25513_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m25515_gshared (Dictionary_2_t2874 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m25515(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2874 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m25515_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m25517_gshared (Dictionary_2_t2874 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m25517(__this, method) (( void (*) (Dictionary_2_t2874 *, const MethodInfo*))Dictionary_2_Clear_m25517_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m25519_gshared (Dictionary_2_t2874 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m25519(__this, ___key, method) (( bool (*) (Dictionary_2_t2874 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m25519_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m25521_gshared (Dictionary_2_t2874 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m25521(__this, ___value, method) (( bool (*) (Dictionary_2_t2874 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m25521_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m25523_gshared (Dictionary_2_t2874 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m25523(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2874 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2_GetObjectData_m25523_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m25525_gshared (Dictionary_2_t2874 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m25525(__this, ___sender, method) (( void (*) (Dictionary_2_t2874 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25525_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25527_gshared (Dictionary_2_t2874 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m25527(__this, ___key, method) (( bool (*) (Dictionary_2_t2874 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m25527_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m25529_gshared (Dictionary_2_t2874 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m25529(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2874 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m25529_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t5955 * Dictionary_2_get_Keys_m25531_gshared (Dictionary_2_t2874 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m25531(__this, method) (( KeyCollection_t5955 * (*) (Dictionary_2_t2874 *, const MethodInfo*))Dictionary_2_get_Keys_m25531_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t5959 * Dictionary_2_get_Values_m25533_gshared (Dictionary_2_t2874 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m25533(__this, method) (( ValueCollection_t5959 * (*) (Dictionary_2_t2874 *, const MethodInfo*))Dictionary_2_get_Values_m25533_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m25535_gshared (Dictionary_2_t2874 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m25535(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2874 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25535_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m25537_gshared (Dictionary_2_t2874 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m25537(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2874 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25537_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25539_gshared (Dictionary_2_t2874 * __this, KeyValuePair_2_t5949  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m25539(__this, ___pair, method) (( bool (*) (Dictionary_2_t2874 *, KeyValuePair_2_t5949 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25539_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t5957  Dictionary_2_GetEnumerator_m25541_gshared (Dictionary_2_t2874 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m25541(__this, method) (( Enumerator_t5957  (*) (Dictionary_2_t2874 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25541_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2160  Dictionary_2_U3CCopyToU3Em__2_m25543_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m25543(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2160  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m25543_gshared)(__this /* static, unused */, ___key, ___value, method)
