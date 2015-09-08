#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7683;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1244;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9848;
// System.Collections.ICollection
struct ICollection_t772;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>
struct KeyCollection_t7684;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
struct ValueCollection_t7688;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1208;
// System.Collections.Generic.IDictionary`2<System.Object,System.DateTime>
struct IDictionary_2_t9958;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t8545;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t8538;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t802;
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
extern "C" void Dictionary_2__ctor_m49937_gshared (Dictionary_2_t7683 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m49937(__this, method) (( void (*) (Dictionary_2_t7683 *, const MethodInfo*))Dictionary_2__ctor_m49937_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m49939_gshared (Dictionary_2_t7683 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m49939(__this, ___comparer, method) (( void (*) (Dictionary_2_t7683 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49939_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m49941_gshared (Dictionary_2_t7683 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m49941(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7683 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49941_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m49943_gshared (Dictionary_2_t7683 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m49943(__this, ___capacity, method) (( void (*) (Dictionary_2_t7683 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m49943_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m49945_gshared (Dictionary_2_t7683 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m49945(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7683 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49945_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m49947_gshared (Dictionary_2_t7683 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m49947(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7683 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2__ctor_m49947_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49949_gshared (Dictionary_2_t7683 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49949(__this, method) (( Object_t* (*) (Dictionary_2_t7683 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49949_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49951_gshared (Dictionary_2_t7683 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49951(__this, method) (( Object_t* (*) (Dictionary_2_t7683 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49951_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m49953_gshared (Dictionary_2_t7683 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m49953(__this, method) (( Object_t * (*) (Dictionary_2_t7683 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m49953_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m49955_gshared (Dictionary_2_t7683 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m49955(__this, method) (( Object_t * (*) (Dictionary_2_t7683 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m49955_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m49957_gshared (Dictionary_2_t7683 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m49957(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7683 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m49957_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m49959_gshared (Dictionary_2_t7683 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m49959(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7683 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m49959_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m49961_gshared (Dictionary_2_t7683 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m49961(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7683 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m49961_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m49963_gshared (Dictionary_2_t7683 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m49963(__this, ___key, method) (( bool (*) (Dictionary_2_t7683 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m49963_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m49965_gshared (Dictionary_2_t7683 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m49965(__this, ___key, method) (( void (*) (Dictionary_2_t7683 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m49965_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49967_gshared (Dictionary_2_t7683 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49967(__this, method) (( bool (*) (Dictionary_2_t7683 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49967_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49969_gshared (Dictionary_2_t7683 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49969(__this, method) (( Object_t * (*) (Dictionary_2_t7683 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49969_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49971_gshared (Dictionary_2_t7683 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49971(__this, method) (( bool (*) (Dictionary_2_t7683 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49971_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49973_gshared (Dictionary_2_t7683 * __this, KeyValuePair_2_t7594  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49973(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7683 *, KeyValuePair_2_t7594 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49973_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49975_gshared (Dictionary_2_t7683 * __this, KeyValuePair_2_t7594  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49975(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7683 *, KeyValuePair_2_t7594 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49975_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49977_gshared (Dictionary_2_t7683 * __this, KeyValuePair_2U5BU5D_t8545* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49977(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7683 *, KeyValuePair_2U5BU5D_t8545*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49977_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49979_gshared (Dictionary_2_t7683 * __this, KeyValuePair_2_t7594  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49979(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7683 *, KeyValuePair_2_t7594 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49979_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m49981_gshared (Dictionary_2_t7683 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m49981(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7683 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m49981_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49983_gshared (Dictionary_2_t7683 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49983(__this, method) (( Object_t * (*) (Dictionary_2_t7683 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49983_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49985_gshared (Dictionary_2_t7683 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49985(__this, method) (( Object_t* (*) (Dictionary_2_t7683 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49985_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49987_gshared (Dictionary_2_t7683 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49987(__this, method) (( Object_t * (*) (Dictionary_2_t7683 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49987_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m49989_gshared (Dictionary_2_t7683 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m49989(__this, method) (( int32_t (*) (Dictionary_2_t7683 *, const MethodInfo*))Dictionary_2_get_Count_m49989_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Item(TKey)
extern "C" DateTime_t287  Dictionary_2_get_Item_m49991_gshared (Dictionary_2_t7683 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m49991(__this, ___key, method) (( DateTime_t287  (*) (Dictionary_2_t7683 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m49991_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m49993_gshared (Dictionary_2_t7683 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m49993(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7683 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_set_Item_m49993_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m49995_gshared (Dictionary_2_t7683 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m49995(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7683 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m49995_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m49997_gshared (Dictionary_2_t7683 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m49997(__this, ___size, method) (( void (*) (Dictionary_2_t7683 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m49997_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m49999_gshared (Dictionary_2_t7683 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m49999(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7683 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m49999_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7594  Dictionary_2_make_pair_m50001_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m50001(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7594  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_make_pair_m50001_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m50003_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m50003(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_key_m50003_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_value(TKey,TValue)
extern "C" DateTime_t287  Dictionary_2_pick_value_m50005_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m50005(__this /* static, unused */, ___key, ___value, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_value_m50005_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m50007_gshared (Dictionary_2_t7683 * __this, KeyValuePair_2U5BU5D_t8545* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m50007(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7683 *, KeyValuePair_2U5BU5D_t8545*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m50007_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Resize()
extern "C" void Dictionary_2_Resize_m50009_gshared (Dictionary_2_t7683 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m50009(__this, method) (( void (*) (Dictionary_2_t7683 *, const MethodInfo*))Dictionary_2_Resize_m50009_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m50011_gshared (Dictionary_2_t7683 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m50011(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7683 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_Add_m50011_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Clear()
extern "C" void Dictionary_2_Clear_m50013_gshared (Dictionary_2_t7683 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m50013(__this, method) (( void (*) (Dictionary_2_t7683 *, const MethodInfo*))Dictionary_2_Clear_m50013_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m50015_gshared (Dictionary_2_t7683 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m50015(__this, ___key, method) (( bool (*) (Dictionary_2_t7683 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m50015_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m50017_gshared (Dictionary_2_t7683 * __this, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m50017(__this, ___value, method) (( bool (*) (Dictionary_2_t7683 *, DateTime_t287 , const MethodInfo*))Dictionary_2_ContainsValue_m50017_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m50019_gshared (Dictionary_2_t7683 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m50019(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7683 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2_GetObjectData_m50019_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m50021_gshared (Dictionary_2_t7683 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m50021(__this, ___sender, method) (( void (*) (Dictionary_2_t7683 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m50021_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m50023_gshared (Dictionary_2_t7683 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m50023(__this, ___key, method) (( bool (*) (Dictionary_2_t7683 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m50023_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m50025_gshared (Dictionary_2_t7683 * __this, Object_t * ___key, DateTime_t287 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m50025(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7683 *, Object_t *, DateTime_t287 *, const MethodInfo*))Dictionary_2_TryGetValue_m50025_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Keys()
extern "C" KeyCollection_t7684 * Dictionary_2_get_Keys_m50027_gshared (Dictionary_2_t7683 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m50027(__this, method) (( KeyCollection_t7684 * (*) (Dictionary_2_t7683 *, const MethodInfo*))Dictionary_2_get_Keys_m50027_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Values()
extern "C" ValueCollection_t7688 * Dictionary_2_get_Values_m50029_gshared (Dictionary_2_t7683 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m50029(__this, method) (( ValueCollection_t7688 * (*) (Dictionary_2_t7683 *, const MethodInfo*))Dictionary_2_get_Values_m50029_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m50031_gshared (Dictionary_2_t7683 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m50031(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7683 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m50031_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTValue(System.Object)
extern "C" DateTime_t287  Dictionary_2_ToTValue_m50033_gshared (Dictionary_2_t7683 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m50033(__this, ___value, method) (( DateTime_t287  (*) (Dictionary_2_t7683 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m50033_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m50035_gshared (Dictionary_2_t7683 * __this, KeyValuePair_2_t7594  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m50035(__this, ___pair, method) (( bool (*) (Dictionary_2_t7683 *, KeyValuePair_2_t7594 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m50035_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetEnumerator()
extern "C" Enumerator_t7686  Dictionary_2_GetEnumerator_m50037_gshared (Dictionary_2_t7683 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m50037(__this, method) (( Enumerator_t7686  (*) (Dictionary_2_t7683 *, const MethodInfo*))Dictionary_2_GetEnumerator_m50037_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2160  Dictionary_2_U3CCopyToU3Em__2_m50039_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m50039(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2160  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m50039_gshared)(__this /* static, unused */, ___key, ___value, method)
