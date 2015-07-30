#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7032;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1168;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9114;
// System.Collections.ICollection
struct ICollection_t704;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>
struct KeyCollection_t7033;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
struct ValueCollection_t7037;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1132;
// System.Collections.Generic.IDictionary`2<System.Object,System.DateTime>
struct IDictionary_2_t9224;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2867;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7894;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t7887;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3909;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__53.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor()
extern "C" void Dictionary_2__ctor_m44505_gshared (Dictionary_2_t7032 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m44505(__this, method) (( void (*) (Dictionary_2_t7032 *, const MethodInfo*))Dictionary_2__ctor_m44505_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44507_gshared (Dictionary_2_t7032 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44507(__this, ___comparer, method) (( void (*) (Dictionary_2_t7032 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44507_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m44509_gshared (Dictionary_2_t7032 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m44509(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7032 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44509_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m44511_gshared (Dictionary_2_t7032 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m44511(__this, ___capacity, method) (( void (*) (Dictionary_2_t7032 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44511_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44513_gshared (Dictionary_2_t7032 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44513(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7032 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44513_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m44515_gshared (Dictionary_2_t7032 * __this, SerializationInfo_t2867 * ___info, StreamingContext_t2868  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m44515(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7032 *, SerializationInfo_t2867 *, StreamingContext_t2868 , const MethodInfo*))Dictionary_2__ctor_m44515_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44517_gshared (Dictionary_2_t7032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44517(__this, method) (( Object_t* (*) (Dictionary_2_t7032 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44517_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44519_gshared (Dictionary_2_t7032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44519(__this, method) (( Object_t* (*) (Dictionary_2_t7032 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44519_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m44521_gshared (Dictionary_2_t7032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44521(__this, method) (( Object_t * (*) (Dictionary_2_t7032 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44521_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m44523_gshared (Dictionary_2_t7032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44523(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7032 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44523_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m44525_gshared (Dictionary_2_t7032 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44525(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7032 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44525_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m44527_gshared (Dictionary_2_t7032 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m44527(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7032 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44527_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m44529_gshared (Dictionary_2_t7032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m44529(__this, ___key, method) (( bool (*) (Dictionary_2_t7032 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44529_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m44531_gshared (Dictionary_2_t7032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m44531(__this, ___key, method) (( void (*) (Dictionary_2_t7032 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44531_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44533_gshared (Dictionary_2_t7032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44533(__this, method) (( bool (*) (Dictionary_2_t7032 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44533_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44535_gshared (Dictionary_2_t7032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44535(__this, method) (( Object_t * (*) (Dictionary_2_t7032 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44535_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44537_gshared (Dictionary_2_t7032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44537(__this, method) (( bool (*) (Dictionary_2_t7032 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44537_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44539_gshared (Dictionary_2_t7032 * __this, KeyValuePair_2_t6943  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44539(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7032 *, KeyValuePair_2_t6943 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44539_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44541_gshared (Dictionary_2_t7032 * __this, KeyValuePair_2_t6943  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44541(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7032 *, KeyValuePair_2_t6943 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44541_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44543_gshared (Dictionary_2_t7032 * __this, KeyValuePair_2U5BU5D_t7894* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44543(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7032 *, KeyValuePair_2U5BU5D_t7894*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44543_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44545_gshared (Dictionary_2_t7032 * __this, KeyValuePair_2_t6943  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44545(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7032 *, KeyValuePair_2_t6943 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44545_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m44547_gshared (Dictionary_2_t7032 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44547(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7032 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44547_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44549_gshared (Dictionary_2_t7032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44549(__this, method) (( Object_t * (*) (Dictionary_2_t7032 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44549_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44551_gshared (Dictionary_2_t7032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44551(__this, method) (( Object_t* (*) (Dictionary_2_t7032 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44551_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44553_gshared (Dictionary_2_t7032 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44553(__this, method) (( Object_t * (*) (Dictionary_2_t7032 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44553_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m44555_gshared (Dictionary_2_t7032 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m44555(__this, method) (( int32_t (*) (Dictionary_2_t7032 *, const MethodInfo*))Dictionary_2_get_Count_m44555_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Item(TKey)
extern "C" DateTime_t287  Dictionary_2_get_Item_m44557_gshared (Dictionary_2_t7032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m44557(__this, ___key, method) (( DateTime_t287  (*) (Dictionary_2_t7032 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m44557_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m44559_gshared (Dictionary_2_t7032 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m44559(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7032 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_set_Item_m44559_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m44561_gshared (Dictionary_2_t7032 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m44561(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7032 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44561_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m44563_gshared (Dictionary_2_t7032 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m44563(__this, ___size, method) (( void (*) (Dictionary_2_t7032 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44563_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m44565_gshared (Dictionary_2_t7032 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m44565(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7032 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44565_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6943  Dictionary_2_make_pair_m44567_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m44567(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6943  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_make_pair_m44567_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m44569_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m44569(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_key_m44569_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_value(TKey,TValue)
extern "C" DateTime_t287  Dictionary_2_pick_value_m44571_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m44571(__this /* static, unused */, ___key, ___value, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_value_m44571_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m44573_gshared (Dictionary_2_t7032 * __this, KeyValuePair_2U5BU5D_t7894* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m44573(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7032 *, KeyValuePair_2U5BU5D_t7894*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44573_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Resize()
extern "C" void Dictionary_2_Resize_m44575_gshared (Dictionary_2_t7032 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m44575(__this, method) (( void (*) (Dictionary_2_t7032 *, const MethodInfo*))Dictionary_2_Resize_m44575_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m44577_gshared (Dictionary_2_t7032 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m44577(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7032 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_Add_m44577_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Clear()
extern "C" void Dictionary_2_Clear_m44579_gshared (Dictionary_2_t7032 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m44579(__this, method) (( void (*) (Dictionary_2_t7032 *, const MethodInfo*))Dictionary_2_Clear_m44579_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m44581_gshared (Dictionary_2_t7032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m44581(__this, ___key, method) (( bool (*) (Dictionary_2_t7032 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m44581_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m44583_gshared (Dictionary_2_t7032 * __this, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m44583(__this, ___value, method) (( bool (*) (Dictionary_2_t7032 *, DateTime_t287 , const MethodInfo*))Dictionary_2_ContainsValue_m44583_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m44585_gshared (Dictionary_2_t7032 * __this, SerializationInfo_t2867 * ___info, StreamingContext_t2868  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m44585(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7032 *, SerializationInfo_t2867 *, StreamingContext_t2868 , const MethodInfo*))Dictionary_2_GetObjectData_m44585_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m44587_gshared (Dictionary_2_t7032 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m44587(__this, ___sender, method) (( void (*) (Dictionary_2_t7032 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44587_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m44589_gshared (Dictionary_2_t7032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m44589(__this, ___key, method) (( bool (*) (Dictionary_2_t7032 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m44589_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m44591_gshared (Dictionary_2_t7032 * __this, Object_t * ___key, DateTime_t287 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m44591(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7032 *, Object_t *, DateTime_t287 *, const MethodInfo*))Dictionary_2_TryGetValue_m44591_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Keys()
extern "C" KeyCollection_t7033 * Dictionary_2_get_Keys_m44593_gshared (Dictionary_2_t7032 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m44593(__this, method) (( KeyCollection_t7033 * (*) (Dictionary_2_t7032 *, const MethodInfo*))Dictionary_2_get_Keys_m44593_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Values()
extern "C" ValueCollection_t7037 * Dictionary_2_get_Values_m44595_gshared (Dictionary_2_t7032 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m44595(__this, method) (( ValueCollection_t7037 * (*) (Dictionary_2_t7032 *, const MethodInfo*))Dictionary_2_get_Values_m44595_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m44597_gshared (Dictionary_2_t7032 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m44597(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7032 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44597_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTValue(System.Object)
extern "C" DateTime_t287  Dictionary_2_ToTValue_m44599_gshared (Dictionary_2_t7032 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m44599(__this, ___value, method) (( DateTime_t287  (*) (Dictionary_2_t7032 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44599_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m44601_gshared (Dictionary_2_t7032 * __this, KeyValuePair_2_t6943  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m44601(__this, ___pair, method) (( bool (*) (Dictionary_2_t7032 *, KeyValuePair_2_t6943 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44601_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetEnumerator()
extern "C" Enumerator_t7035  Dictionary_2_GetEnumerator_m44603_gshared (Dictionary_2_t7032 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m44603(__this, method) (( Enumerator_t7035  (*) (Dictionary_2_t7032 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44603_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2086  Dictionary_2_U3CCopyToU3Em__0_m44605_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m44605(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2086  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44605_gshared)(__this /* static, unused */, ___key, ___value, method)
