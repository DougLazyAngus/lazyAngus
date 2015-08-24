#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7113;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1224;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9218;
// System.Collections.ICollection
struct ICollection_t755;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>
struct KeyCollection_t7114;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
struct ValueCollection_t7118;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1188;
// System.Collections.Generic.IDictionary`2<System.Object,System.DateTime>
struct IDictionary_2_t9328;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7975;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t7968;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t785;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__54.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor()
extern "C" void Dictionary_2__ctor_m45326_gshared (Dictionary_2_t7113 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m45326(__this, method) (( void (*) (Dictionary_2_t7113 *, const MethodInfo*))Dictionary_2__ctor_m45326_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45328_gshared (Dictionary_2_t7113 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45328(__this, ___comparer, method) (( void (*) (Dictionary_2_t7113 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45328_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m45330_gshared (Dictionary_2_t7113 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m45330(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7113 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45330_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m45332_gshared (Dictionary_2_t7113 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m45332(__this, ___capacity, method) (( void (*) (Dictionary_2_t7113 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m45332_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45334_gshared (Dictionary_2_t7113 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45334(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7113 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45334_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m45336_gshared (Dictionary_2_t7113 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m45336(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7113 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2__ctor_m45336_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45338_gshared (Dictionary_2_t7113 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45338(__this, method) (( Object_t* (*) (Dictionary_2_t7113 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45338_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45340_gshared (Dictionary_2_t7113 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45340(__this, method) (( Object_t* (*) (Dictionary_2_t7113 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45340_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m45342_gshared (Dictionary_2_t7113 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m45342(__this, method) (( Object_t * (*) (Dictionary_2_t7113 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m45342_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m45344_gshared (Dictionary_2_t7113 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m45344(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7113 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m45344_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m45346_gshared (Dictionary_2_t7113 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m45346(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7113 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m45346_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m45348_gshared (Dictionary_2_t7113 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m45348(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7113 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m45348_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m45350_gshared (Dictionary_2_t7113 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m45350(__this, ___key, method) (( bool (*) (Dictionary_2_t7113 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m45350_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m45352_gshared (Dictionary_2_t7113 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m45352(__this, ___key, method) (( void (*) (Dictionary_2_t7113 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m45352_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45354_gshared (Dictionary_2_t7113 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45354(__this, method) (( bool (*) (Dictionary_2_t7113 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45354_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45356_gshared (Dictionary_2_t7113 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45356(__this, method) (( Object_t * (*) (Dictionary_2_t7113 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45358_gshared (Dictionary_2_t7113 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45358(__this, method) (( bool (*) (Dictionary_2_t7113 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45358_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45360_gshared (Dictionary_2_t7113 * __this, KeyValuePair_2_t7024  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45360(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7113 *, KeyValuePair_2_t7024 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45360_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45362_gshared (Dictionary_2_t7113 * __this, KeyValuePair_2_t7024  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45362(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7113 *, KeyValuePair_2_t7024 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45362_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45364_gshared (Dictionary_2_t7113 * __this, KeyValuePair_2U5BU5D_t7975* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45364(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7113 *, KeyValuePair_2U5BU5D_t7975*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45364_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45366_gshared (Dictionary_2_t7113 * __this, KeyValuePair_2_t7024  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45366(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7113 *, KeyValuePair_2_t7024 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45366_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m45368_gshared (Dictionary_2_t7113 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m45368(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7113 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m45368_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45370_gshared (Dictionary_2_t7113 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45370(__this, method) (( Object_t * (*) (Dictionary_2_t7113 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45370_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45372_gshared (Dictionary_2_t7113 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45372(__this, method) (( Object_t* (*) (Dictionary_2_t7113 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45372_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45374_gshared (Dictionary_2_t7113 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45374(__this, method) (( Object_t * (*) (Dictionary_2_t7113 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45374_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m45376_gshared (Dictionary_2_t7113 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m45376(__this, method) (( int32_t (*) (Dictionary_2_t7113 *, const MethodInfo*))Dictionary_2_get_Count_m45376_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Item(TKey)
extern "C" DateTime_t287  Dictionary_2_get_Item_m45378_gshared (Dictionary_2_t7113 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m45378(__this, ___key, method) (( DateTime_t287  (*) (Dictionary_2_t7113 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m45378_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m45380_gshared (Dictionary_2_t7113 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m45380(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7113 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_set_Item_m45380_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m45382_gshared (Dictionary_2_t7113 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m45382(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7113 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m45382_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m45384_gshared (Dictionary_2_t7113 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m45384(__this, ___size, method) (( void (*) (Dictionary_2_t7113 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m45384_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m45386_gshared (Dictionary_2_t7113 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m45386(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7113 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m45386_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7024  Dictionary_2_make_pair_m45388_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m45388(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7024  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_make_pair_m45388_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m45390_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m45390(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_key_m45390_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_value(TKey,TValue)
extern "C" DateTime_t287  Dictionary_2_pick_value_m45392_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m45392(__this /* static, unused */, ___key, ___value, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_value_m45392_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m45394_gshared (Dictionary_2_t7113 * __this, KeyValuePair_2U5BU5D_t7975* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m45394(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7113 *, KeyValuePair_2U5BU5D_t7975*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m45394_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Resize()
extern "C" void Dictionary_2_Resize_m45396_gshared (Dictionary_2_t7113 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m45396(__this, method) (( void (*) (Dictionary_2_t7113 *, const MethodInfo*))Dictionary_2_Resize_m45396_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m45398_gshared (Dictionary_2_t7113 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m45398(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7113 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_Add_m45398_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Clear()
extern "C" void Dictionary_2_Clear_m45400_gshared (Dictionary_2_t7113 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m45400(__this, method) (( void (*) (Dictionary_2_t7113 *, const MethodInfo*))Dictionary_2_Clear_m45400_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m45402_gshared (Dictionary_2_t7113 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m45402(__this, ___key, method) (( bool (*) (Dictionary_2_t7113 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m45402_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m45404_gshared (Dictionary_2_t7113 * __this, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m45404(__this, ___value, method) (( bool (*) (Dictionary_2_t7113 *, DateTime_t287 , const MethodInfo*))Dictionary_2_ContainsValue_m45404_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m45406_gshared (Dictionary_2_t7113 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m45406(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7113 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2_GetObjectData_m45406_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m45408_gshared (Dictionary_2_t7113 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m45408(__this, ___sender, method) (( void (*) (Dictionary_2_t7113 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m45408_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m45410_gshared (Dictionary_2_t7113 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m45410(__this, ___key, method) (( bool (*) (Dictionary_2_t7113 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m45410_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m45412_gshared (Dictionary_2_t7113 * __this, Object_t * ___key, DateTime_t287 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m45412(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7113 *, Object_t *, DateTime_t287 *, const MethodInfo*))Dictionary_2_TryGetValue_m45412_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Keys()
extern "C" KeyCollection_t7114 * Dictionary_2_get_Keys_m45414_gshared (Dictionary_2_t7113 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m45414(__this, method) (( KeyCollection_t7114 * (*) (Dictionary_2_t7113 *, const MethodInfo*))Dictionary_2_get_Keys_m45414_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Values()
extern "C" ValueCollection_t7118 * Dictionary_2_get_Values_m45416_gshared (Dictionary_2_t7113 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m45416(__this, method) (( ValueCollection_t7118 * (*) (Dictionary_2_t7113 *, const MethodInfo*))Dictionary_2_get_Values_m45416_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m45418_gshared (Dictionary_2_t7113 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m45418(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7113 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m45418_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTValue(System.Object)
extern "C" DateTime_t287  Dictionary_2_ToTValue_m45420_gshared (Dictionary_2_t7113 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m45420(__this, ___value, method) (( DateTime_t287  (*) (Dictionary_2_t7113 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m45420_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m45422_gshared (Dictionary_2_t7113 * __this, KeyValuePair_2_t7024  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m45422(__this, ___pair, method) (( bool (*) (Dictionary_2_t7113 *, KeyValuePair_2_t7024 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m45422_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetEnumerator()
extern "C" Enumerator_t7116  Dictionary_2_GetEnumerator_m45424_gshared (Dictionary_2_t7113 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m45424(__this, method) (( Enumerator_t7116  (*) (Dictionary_2_t7113 *, const MethodInfo*))Dictionary_2_GetEnumerator_m45424_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2140  Dictionary_2_U3CCopyToU3Em__0_m45426_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m45426(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2140  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m45426_gshared)(__this /* static, unused */, ___key, ___value, method)
