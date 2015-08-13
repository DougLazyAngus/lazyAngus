#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7080;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9205;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Double>
struct KeyCollection_t7081;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>
struct ValueCollection_t7085;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1187;
// System.Collections.Generic.IDictionary`2<System.Object,System.Double>
struct IDictionary_2_t9309;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t7829;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t7269;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__52.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor()
extern "C" void Dictionary_2__ctor_m44854_gshared (Dictionary_2_t7080 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m44854(__this, method) (( void (*) (Dictionary_2_t7080 *, const MethodInfo*))Dictionary_2__ctor_m44854_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44856_gshared (Dictionary_2_t7080 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44856(__this, ___comparer, method) (( void (*) (Dictionary_2_t7080 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44856_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m44858_gshared (Dictionary_2_t7080 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m44858(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7080 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44858_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m44860_gshared (Dictionary_2_t7080 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m44860(__this, ___capacity, method) (( void (*) (Dictionary_2_t7080 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44860_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44862_gshared (Dictionary_2_t7080 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44862(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7080 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44862_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m44864_gshared (Dictionary_2_t7080 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m44864(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7080 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m44864_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44866_gshared (Dictionary_2_t7080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44866(__this, method) (( Object_t* (*) (Dictionary_2_t7080 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44866_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44868_gshared (Dictionary_2_t7080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44868(__this, method) (( Object_t* (*) (Dictionary_2_t7080 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44868_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m44870_gshared (Dictionary_2_t7080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44870(__this, method) (( Object_t * (*) (Dictionary_2_t7080 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44870_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m44872_gshared (Dictionary_2_t7080 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44872(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7080 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44872_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m44874_gshared (Dictionary_2_t7080 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44874(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7080 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44874_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m44876_gshared (Dictionary_2_t7080 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m44876(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7080 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44876_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m44878_gshared (Dictionary_2_t7080 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m44878(__this, ___key, method) (( bool (*) (Dictionary_2_t7080 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44878_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m44880_gshared (Dictionary_2_t7080 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m44880(__this, ___key, method) (( void (*) (Dictionary_2_t7080 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44880_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44882_gshared (Dictionary_2_t7080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44882(__this, method) (( bool (*) (Dictionary_2_t7080 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44882_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44884_gshared (Dictionary_2_t7080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44884(__this, method) (( Object_t * (*) (Dictionary_2_t7080 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44884_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44886_gshared (Dictionary_2_t7080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44886(__this, method) (( bool (*) (Dictionary_2_t7080 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44886_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44888_gshared (Dictionary_2_t7080 * __this, KeyValuePair_2_t7006  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44888(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7080 *, KeyValuePair_2_t7006 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44888_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44890_gshared (Dictionary_2_t7080 * __this, KeyValuePair_2_t7006  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44890(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7080 *, KeyValuePair_2_t7006 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44890_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44892_gshared (Dictionary_2_t7080 * __this, KeyValuePair_2U5BU5D_t7829* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44892(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7080 *, KeyValuePair_2U5BU5D_t7829*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44892_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44894_gshared (Dictionary_2_t7080 * __this, KeyValuePair_2_t7006  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44894(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7080 *, KeyValuePair_2_t7006 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44894_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m44896_gshared (Dictionary_2_t7080 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44896(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7080 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44896_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44898_gshared (Dictionary_2_t7080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44898(__this, method) (( Object_t * (*) (Dictionary_2_t7080 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44898_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44900_gshared (Dictionary_2_t7080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44900(__this, method) (( Object_t* (*) (Dictionary_2_t7080 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44900_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44902_gshared (Dictionary_2_t7080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44902(__this, method) (( Object_t * (*) (Dictionary_2_t7080 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44902_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m44904_gshared (Dictionary_2_t7080 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m44904(__this, method) (( int32_t (*) (Dictionary_2_t7080 *, const MethodInfo*))Dictionary_2_get_Count_m44904_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Item(TKey)
extern "C" double Dictionary_2_get_Item_m44906_gshared (Dictionary_2_t7080 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m44906(__this, ___key, method) (( double (*) (Dictionary_2_t7080 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m44906_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m44908_gshared (Dictionary_2_t7080 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m44908(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7080 *, Object_t *, double, const MethodInfo*))Dictionary_2_set_Item_m44908_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m44910_gshared (Dictionary_2_t7080 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m44910(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7080 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44910_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m44912_gshared (Dictionary_2_t7080 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m44912(__this, ___size, method) (( void (*) (Dictionary_2_t7080 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44912_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m44914_gshared (Dictionary_2_t7080 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m44914(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7080 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44914_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7006  Dictionary_2_make_pair_m44916_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m44916(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7006  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_make_pair_m44916_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m44918_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m44918(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_key_m44918_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_value(TKey,TValue)
extern "C" double Dictionary_2_pick_value_m44920_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m44920(__this /* static, unused */, ___key, ___value, method) (( double (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_value_m44920_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m44922_gshared (Dictionary_2_t7080 * __this, KeyValuePair_2U5BU5D_t7829* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m44922(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7080 *, KeyValuePair_2U5BU5D_t7829*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44922_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Resize()
extern "C" void Dictionary_2_Resize_m44924_gshared (Dictionary_2_t7080 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m44924(__this, method) (( void (*) (Dictionary_2_t7080 *, const MethodInfo*))Dictionary_2_Resize_m44924_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m44926_gshared (Dictionary_2_t7080 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_Add_m44926(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7080 *, Object_t *, double, const MethodInfo*))Dictionary_2_Add_m44926_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Clear()
extern "C" void Dictionary_2_Clear_m44928_gshared (Dictionary_2_t7080 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m44928(__this, method) (( void (*) (Dictionary_2_t7080 *, const MethodInfo*))Dictionary_2_Clear_m44928_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m44930_gshared (Dictionary_2_t7080 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m44930(__this, ___key, method) (( bool (*) (Dictionary_2_t7080 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m44930_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m44932_gshared (Dictionary_2_t7080 * __this, double ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m44932(__this, ___value, method) (( bool (*) (Dictionary_2_t7080 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m44932_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m44934_gshared (Dictionary_2_t7080 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m44934(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7080 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m44934_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m44936_gshared (Dictionary_2_t7080 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m44936(__this, ___sender, method) (( void (*) (Dictionary_2_t7080 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44936_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m44938_gshared (Dictionary_2_t7080 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m44938(__this, ___key, method) (( bool (*) (Dictionary_2_t7080 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m44938_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m44940_gshared (Dictionary_2_t7080 * __this, Object_t * ___key, double* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m44940(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7080 *, Object_t *, double*, const MethodInfo*))Dictionary_2_TryGetValue_m44940_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Keys()
extern "C" KeyCollection_t7081 * Dictionary_2_get_Keys_m44942_gshared (Dictionary_2_t7080 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m44942(__this, method) (( KeyCollection_t7081 * (*) (Dictionary_2_t7080 *, const MethodInfo*))Dictionary_2_get_Keys_m44942_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Values()
extern "C" ValueCollection_t7085 * Dictionary_2_get_Values_m44944_gshared (Dictionary_2_t7080 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m44944(__this, method) (( ValueCollection_t7085 * (*) (Dictionary_2_t7080 *, const MethodInfo*))Dictionary_2_get_Values_m44944_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m44946_gshared (Dictionary_2_t7080 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m44946(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7080 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44946_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTValue(System.Object)
extern "C" double Dictionary_2_ToTValue_m44948_gshared (Dictionary_2_t7080 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m44948(__this, ___value, method) (( double (*) (Dictionary_2_t7080 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44948_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m44950_gshared (Dictionary_2_t7080 * __this, KeyValuePair_2_t7006  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m44950(__this, ___pair, method) (( bool (*) (Dictionary_2_t7080 *, KeyValuePair_2_t7006 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44950_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetEnumerator()
extern "C" Enumerator_t7083  Dictionary_2_GetEnumerator_m44952_gshared (Dictionary_2_t7080 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m44952(__this, method) (( Enumerator_t7083  (*) (Dictionary_2_t7080 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44952_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Double>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2139  Dictionary_2_U3CCopyToU3Em__0_m44954_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m44954(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44954_gshared)(__this /* static, unused */, ___key, ___value, method)
