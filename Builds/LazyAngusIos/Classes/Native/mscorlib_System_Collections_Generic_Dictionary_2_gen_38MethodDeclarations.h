#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3944;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1292;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t4598;
// System.Collections.ICollection
struct ICollection_t653;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t3948;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t3952;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3391;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t4602;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1301;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t4603;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t4604;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1943;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__33.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m26432_gshared (Dictionary_2_t3944 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m26432(__this, method) (( void (*) (Dictionary_2_t3944 *, const MethodInfo*))Dictionary_2__ctor_m26432_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26434_gshared (Dictionary_2_t3944 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26434(__this, ___comparer, method) (( void (*) (Dictionary_2_t3944 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26434_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m26436_gshared (Dictionary_2_t3944 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m26436(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3944 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26436_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m26438_gshared (Dictionary_2_t3944 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m26438(__this, ___capacity, method) (( void (*) (Dictionary_2_t3944 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26438_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26440_gshared (Dictionary_2_t3944 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26440(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3944 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26440_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m26442_gshared (Dictionary_2_t3944 * __this, SerializationInfo_t1301 * ___info, StreamingContext_t1302  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m26442(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3944 *, SerializationInfo_t1301 *, StreamingContext_t1302 , const MethodInfo*))Dictionary_2__ctor_m26442_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26444_gshared (Dictionary_2_t3944 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26444(__this, method) (( Object_t* (*) (Dictionary_2_t3944 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26444_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26446_gshared (Dictionary_2_t3944 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26446(__this, method) (( Object_t* (*) (Dictionary_2_t3944 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26446_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m26448_gshared (Dictionary_2_t3944 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m26448(__this, method) (( Object_t * (*) (Dictionary_2_t3944 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26448_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m26450_gshared (Dictionary_2_t3944 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m26450(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3944 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26450_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m26452_gshared (Dictionary_2_t3944 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m26452(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3944 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26452_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m26454_gshared (Dictionary_2_t3944 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m26454(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3944 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26454_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m26456_gshared (Dictionary_2_t3944 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m26456(__this, ___key, method) (( bool (*) (Dictionary_2_t3944 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26456_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m26458_gshared (Dictionary_2_t3944 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m26458(__this, ___key, method) (( void (*) (Dictionary_2_t3944 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26458_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26460_gshared (Dictionary_2_t3944 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26460(__this, method) (( bool (*) (Dictionary_2_t3944 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26460_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26462_gshared (Dictionary_2_t3944 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26462(__this, method) (( Object_t * (*) (Dictionary_2_t3944 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26462_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26464_gshared (Dictionary_2_t3944 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26464(__this, method) (( bool (*) (Dictionary_2_t3944 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26464_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26466_gshared (Dictionary_2_t3944 * __this, KeyValuePair_2_t3945  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26466(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3944 *, KeyValuePair_2_t3945 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26466_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26468_gshared (Dictionary_2_t3944 * __this, KeyValuePair_2_t3945  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26468(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3944 *, KeyValuePair_2_t3945 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26468_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26470_gshared (Dictionary_2_t3944 * __this, KeyValuePair_2U5BU5D_t4603* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26470(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3944 *, KeyValuePair_2U5BU5D_t4603*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26470_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26472_gshared (Dictionary_2_t3944 * __this, KeyValuePair_2_t3945  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26472(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3944 *, KeyValuePair_2_t3945 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26472_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m26474_gshared (Dictionary_2_t3944 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m26474(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3944 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26474_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26476_gshared (Dictionary_2_t3944 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26476(__this, method) (( Object_t * (*) (Dictionary_2_t3944 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26476_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26478_gshared (Dictionary_2_t3944 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26478(__this, method) (( Object_t* (*) (Dictionary_2_t3944 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26478_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26480_gshared (Dictionary_2_t3944 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26480(__this, method) (( Object_t * (*) (Dictionary_2_t3944 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26480_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m26482_gshared (Dictionary_2_t3944 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m26482(__this, method) (( int32_t (*) (Dictionary_2_t3944 *, const MethodInfo*))Dictionary_2_get_Count_m26482_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m26484_gshared (Dictionary_2_t3944 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m26484(__this, ___key, method) (( int64_t (*) (Dictionary_2_t3944 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m26484_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m26486_gshared (Dictionary_2_t3944 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m26486(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3944 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m26486_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m26488_gshared (Dictionary_2_t3944 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m26488(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3944 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26488_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m26490_gshared (Dictionary_2_t3944 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m26490(__this, ___size, method) (( void (*) (Dictionary_2_t3944 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26490_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m26492_gshared (Dictionary_2_t3944 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m26492(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3944 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26492_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3945  Dictionary_2_make_pair_m26494_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m26494(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3945  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m26494_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m26496_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m26496(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m26496_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m26498_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m26498(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m26498_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m26500_gshared (Dictionary_2_t3944 * __this, KeyValuePair_2U5BU5D_t4603* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m26500(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3944 *, KeyValuePair_2U5BU5D_t4603*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26500_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m26502_gshared (Dictionary_2_t3944 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m26502(__this, method) (( void (*) (Dictionary_2_t3944 *, const MethodInfo*))Dictionary_2_Resize_m26502_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m26504_gshared (Dictionary_2_t3944 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m26504(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3944 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m26504_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m26506_gshared (Dictionary_2_t3944 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m26506(__this, method) (( void (*) (Dictionary_2_t3944 *, const MethodInfo*))Dictionary_2_Clear_m26506_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m26508_gshared (Dictionary_2_t3944 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m26508(__this, ___key, method) (( bool (*) (Dictionary_2_t3944 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m26508_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m26510_gshared (Dictionary_2_t3944 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m26510(__this, ___value, method) (( bool (*) (Dictionary_2_t3944 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m26510_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m26512_gshared (Dictionary_2_t3944 * __this, SerializationInfo_t1301 * ___info, StreamingContext_t1302  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m26512(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3944 *, SerializationInfo_t1301 *, StreamingContext_t1302 , const MethodInfo*))Dictionary_2_GetObjectData_m26512_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m26514_gshared (Dictionary_2_t3944 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m26514(__this, ___sender, method) (( void (*) (Dictionary_2_t3944 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26514_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m26516_gshared (Dictionary_2_t3944 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m26516(__this, ___key, method) (( bool (*) (Dictionary_2_t3944 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m26516_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m26518_gshared (Dictionary_2_t3944 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m26518(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3944 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m26518_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t3948 * Dictionary_2_get_Keys_m26520_gshared (Dictionary_2_t3944 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m26520(__this, method) (( KeyCollection_t3948 * (*) (Dictionary_2_t3944 *, const MethodInfo*))Dictionary_2_get_Keys_m26520_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t3952 * Dictionary_2_get_Values_m26522_gshared (Dictionary_2_t3944 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m26522(__this, method) (( ValueCollection_t3952 * (*) (Dictionary_2_t3944 *, const MethodInfo*))Dictionary_2_get_Values_m26522_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m26524_gshared (Dictionary_2_t3944 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m26524(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3944 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26524_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m26526_gshared (Dictionary_2_t3944 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m26526(__this, ___value, method) (( int64_t (*) (Dictionary_2_t3944 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26526_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m26528_gshared (Dictionary_2_t3944 * __this, KeyValuePair_2_t3945  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m26528(__this, ___pair, method) (( bool (*) (Dictionary_2_t3944 *, KeyValuePair_2_t3945 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26528_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t3950  Dictionary_2_GetEnumerator_m26530_gshared (Dictionary_2_t3944 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m26530(__this, method) (( Enumerator_t3950  (*) (Dictionary_2_t3944 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26530_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2181  Dictionary_2_U3CCopyToU3Em__0_m26532_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m26532(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2181  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m26532_gshared)(__this /* static, unused */, ___key, ___value, method)
