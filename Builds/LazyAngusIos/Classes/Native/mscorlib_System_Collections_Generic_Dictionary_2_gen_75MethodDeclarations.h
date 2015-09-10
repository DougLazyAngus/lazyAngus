#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t9061;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9851;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1251;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t9064;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t9068;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t9059;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t10278;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t10279;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t10280;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_134.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__67.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m66272_gshared (Dictionary_2_t9061 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m66272(__this, method) (( void (*) (Dictionary_2_t9061 *, const MethodInfo*))Dictionary_2__ctor_m66272_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m66274_gshared (Dictionary_2_t9061 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m66274(__this, ___comparer, method) (( void (*) (Dictionary_2_t9061 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m66274_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m66276_gshared (Dictionary_2_t9061 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m66276(__this, ___dictionary, method) (( void (*) (Dictionary_2_t9061 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m66276_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m66278_gshared (Dictionary_2_t9061 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m66278(__this, ___capacity, method) (( void (*) (Dictionary_2_t9061 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m66278_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m66280_gshared (Dictionary_2_t9061 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m66280(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t9061 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m66280_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m66282_gshared (Dictionary_2_t9061 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m66282(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t9061 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m66282_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m66284_gshared (Dictionary_2_t9061 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m66284(__this, method) (( Object_t* (*) (Dictionary_2_t9061 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m66284_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m66286_gshared (Dictionary_2_t9061 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m66286(__this, method) (( Object_t* (*) (Dictionary_2_t9061 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m66286_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m66288_gshared (Dictionary_2_t9061 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m66288(__this, method) (( Object_t * (*) (Dictionary_2_t9061 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m66288_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m66290_gshared (Dictionary_2_t9061 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m66290(__this, method) (( Object_t * (*) (Dictionary_2_t9061 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m66290_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m66292_gshared (Dictionary_2_t9061 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m66292(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t9061 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m66292_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m66294_gshared (Dictionary_2_t9061 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m66294(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9061 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m66294_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m66296_gshared (Dictionary_2_t9061 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m66296(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9061 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m66296_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m66298_gshared (Dictionary_2_t9061 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m66298(__this, ___key, method) (( bool (*) (Dictionary_2_t9061 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m66298_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m66300_gshared (Dictionary_2_t9061 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m66300(__this, ___key, method) (( void (*) (Dictionary_2_t9061 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m66300_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m66302_gshared (Dictionary_2_t9061 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m66302(__this, method) (( bool (*) (Dictionary_2_t9061 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m66302_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m66304_gshared (Dictionary_2_t9061 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m66304(__this, method) (( Object_t * (*) (Dictionary_2_t9061 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m66304_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m66306_gshared (Dictionary_2_t9061 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m66306(__this, method) (( bool (*) (Dictionary_2_t9061 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m66306_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m66308_gshared (Dictionary_2_t9061 * __this, KeyValuePair_2_t9062  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m66308(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t9061 *, KeyValuePair_2_t9062 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m66308_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m66310_gshared (Dictionary_2_t9061 * __this, KeyValuePair_2_t9062  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m66310(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t9061 *, KeyValuePair_2_t9062 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m66310_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m66312_gshared (Dictionary_2_t9061 * __this, KeyValuePair_2U5BU5D_t10279* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m66312(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9061 *, KeyValuePair_2U5BU5D_t10279*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m66312_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m66314_gshared (Dictionary_2_t9061 * __this, KeyValuePair_2_t9062  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m66314(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t9061 *, KeyValuePair_2_t9062 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m66314_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m66316_gshared (Dictionary_2_t9061 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m66316(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9061 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m66316_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m66318_gshared (Dictionary_2_t9061 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m66318(__this, method) (( Object_t * (*) (Dictionary_2_t9061 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m66318_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m66320_gshared (Dictionary_2_t9061 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m66320(__this, method) (( Object_t* (*) (Dictionary_2_t9061 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m66320_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m66322_gshared (Dictionary_2_t9061 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m66322(__this, method) (( Object_t * (*) (Dictionary_2_t9061 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m66322_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m66324_gshared (Dictionary_2_t9061 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m66324(__this, method) (( int32_t (*) (Dictionary_2_t9061 *, const MethodInfo*))Dictionary_2_get_Count_m66324_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m66326_gshared (Dictionary_2_t9061 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m66326(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t9061 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m66326_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m66328_gshared (Dictionary_2_t9061 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m66328(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9061 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m66328_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m66330_gshared (Dictionary_2_t9061 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m66330(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t9061 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m66330_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m66332_gshared (Dictionary_2_t9061 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m66332(__this, ___size, method) (( void (*) (Dictionary_2_t9061 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m66332_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m66334_gshared (Dictionary_2_t9061 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m66334(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9061 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m66334_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t9062  Dictionary_2_make_pair_m66336_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m66336(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t9062  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m66336_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m66338_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m66338(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m66338_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m66340_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m66340(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m66340_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m66342_gshared (Dictionary_2_t9061 * __this, KeyValuePair_2U5BU5D_t10279* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m66342(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9061 *, KeyValuePair_2U5BU5D_t10279*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m66342_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m66344_gshared (Dictionary_2_t9061 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m66344(__this, method) (( void (*) (Dictionary_2_t9061 *, const MethodInfo*))Dictionary_2_Resize_m66344_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m66346_gshared (Dictionary_2_t9061 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m66346(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9061 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m66346_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m66348_gshared (Dictionary_2_t9061 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m66348(__this, method) (( void (*) (Dictionary_2_t9061 *, const MethodInfo*))Dictionary_2_Clear_m66348_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m66350_gshared (Dictionary_2_t9061 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m66350(__this, ___key, method) (( bool (*) (Dictionary_2_t9061 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m66350_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m66352_gshared (Dictionary_2_t9061 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m66352(__this, ___value, method) (( bool (*) (Dictionary_2_t9061 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m66352_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m66354_gshared (Dictionary_2_t9061 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m66354(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t9061 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m66354_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m66356_gshared (Dictionary_2_t9061 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m66356(__this, ___sender, method) (( void (*) (Dictionary_2_t9061 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m66356_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m66358_gshared (Dictionary_2_t9061 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m66358(__this, ___key, method) (( bool (*) (Dictionary_2_t9061 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m66358_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m66360_gshared (Dictionary_2_t9061 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m66360(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t9061 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m66360_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t9064 * Dictionary_2_get_Keys_m66362_gshared (Dictionary_2_t9061 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m66362(__this, method) (( KeyCollection_t9064 * (*) (Dictionary_2_t9061 *, const MethodInfo*))Dictionary_2_get_Keys_m66362_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t9068 * Dictionary_2_get_Values_m66364_gshared (Dictionary_2_t9061 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m66364(__this, method) (( ValueCollection_t9068 * (*) (Dictionary_2_t9061 *, const MethodInfo*))Dictionary_2_get_Values_m66364_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m66366_gshared (Dictionary_2_t9061 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m66366(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t9061 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m66366_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m66368_gshared (Dictionary_2_t9061 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m66368(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t9061 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m66368_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m66370_gshared (Dictionary_2_t9061 * __this, KeyValuePair_2_t9062  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m66370(__this, ___pair, method) (( bool (*) (Dictionary_2_t9061 *, KeyValuePair_2_t9062 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m66370_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t9066  Dictionary_2_GetEnumerator_m66372_gshared (Dictionary_2_t9061 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m66372(__this, method) (( Enumerator_t9066  (*) (Dictionary_2_t9061 *, const MethodInfo*))Dictionary_2_GetEnumerator_m66372_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2167  Dictionary_2_U3CCopyToU3Em__2_m66374_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m66374(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m66374_gshared)(__this /* static, unused */, ___key, ___value, method)
