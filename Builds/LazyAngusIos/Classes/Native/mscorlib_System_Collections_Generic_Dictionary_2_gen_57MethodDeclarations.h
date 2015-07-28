#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t6979;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8832;
// System.Collections.ICollection
struct ICollection_t697;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Single>
struct KeyCollection_t6980;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
struct ValueCollection_t6984;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1126;
// System.Collections.Generic.IDictionary`2<System.Object,System.Single>
struct IDictionary_2_t9204;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t7813;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t7195;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3902;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__49.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
extern "C" void Dictionary_2__ctor_m43836_gshared (Dictionary_2_t6979 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m43836(__this, method) (( void (*) (Dictionary_2_t6979 *, const MethodInfo*))Dictionary_2__ctor_m43836_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m43838_gshared (Dictionary_2_t6979 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m43838(__this, ___comparer, method) (( void (*) (Dictionary_2_t6979 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m43838_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m43840_gshared (Dictionary_2_t6979 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m43840(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6979 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m43840_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m43842_gshared (Dictionary_2_t6979 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m43842(__this, ___capacity, method) (( void (*) (Dictionary_2_t6979 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m43842_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m43844_gshared (Dictionary_2_t6979 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m43844(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6979 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m43844_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m43846_gshared (Dictionary_2_t6979 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m43846(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6979 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2__ctor_m43846_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m43848_gshared (Dictionary_2_t6979 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m43848(__this, method) (( Object_t* (*) (Dictionary_2_t6979 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m43848_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m43850_gshared (Dictionary_2_t6979 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m43850(__this, method) (( Object_t* (*) (Dictionary_2_t6979 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m43850_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m43852_gshared (Dictionary_2_t6979 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m43852(__this, method) (( Object_t * (*) (Dictionary_2_t6979 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m43852_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m43854_gshared (Dictionary_2_t6979 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m43854(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6979 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m43854_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m43856_gshared (Dictionary_2_t6979 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m43856(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6979 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m43856_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m43858_gshared (Dictionary_2_t6979 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m43858(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6979 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m43858_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m43860_gshared (Dictionary_2_t6979 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m43860(__this, ___key, method) (( bool (*) (Dictionary_2_t6979 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m43860_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m43862_gshared (Dictionary_2_t6979 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m43862(__this, ___key, method) (( void (*) (Dictionary_2_t6979 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m43862_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m43864_gshared (Dictionary_2_t6979 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m43864(__this, method) (( bool (*) (Dictionary_2_t6979 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m43864_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m43866_gshared (Dictionary_2_t6979 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m43866(__this, method) (( Object_t * (*) (Dictionary_2_t6979 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m43866_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m43868_gshared (Dictionary_2_t6979 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m43868(__this, method) (( bool (*) (Dictionary_2_t6979 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m43868_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m43870_gshared (Dictionary_2_t6979 * __this, KeyValuePair_2_t6919  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m43870(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6979 *, KeyValuePair_2_t6919 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m43870_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m43872_gshared (Dictionary_2_t6979 * __this, KeyValuePair_2_t6919  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m43872(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6979 *, KeyValuePair_2_t6919 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m43872_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m43874_gshared (Dictionary_2_t6979 * __this, KeyValuePair_2U5BU5D_t7813* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m43874(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6979 *, KeyValuePair_2U5BU5D_t7813*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m43874_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m43876_gshared (Dictionary_2_t6979 * __this, KeyValuePair_2_t6919  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m43876(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6979 *, KeyValuePair_2_t6919 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m43876_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m43878_gshared (Dictionary_2_t6979 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m43878(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6979 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m43878_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m43880_gshared (Dictionary_2_t6979 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m43880(__this, method) (( Object_t * (*) (Dictionary_2_t6979 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m43880_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m43882_gshared (Dictionary_2_t6979 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m43882(__this, method) (( Object_t* (*) (Dictionary_2_t6979 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m43882_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m43884_gshared (Dictionary_2_t6979 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m43884(__this, method) (( Object_t * (*) (Dictionary_2_t6979 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m43884_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m43886_gshared (Dictionary_2_t6979 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m43886(__this, method) (( int32_t (*) (Dictionary_2_t6979 *, const MethodInfo*))Dictionary_2_get_Count_m43886_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(TKey)
extern "C" float Dictionary_2_get_Item_m43888_gshared (Dictionary_2_t6979 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m43888(__this, ___key, method) (( float (*) (Dictionary_2_t6979 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m43888_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m43890_gshared (Dictionary_2_t6979 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m43890(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6979 *, Object_t *, float, const MethodInfo*))Dictionary_2_set_Item_m43890_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m43892_gshared (Dictionary_2_t6979 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m43892(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6979 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m43892_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m43894_gshared (Dictionary_2_t6979 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m43894(__this, ___size, method) (( void (*) (Dictionary_2_t6979 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m43894_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m43896_gshared (Dictionary_2_t6979 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m43896(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6979 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m43896_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6919  Dictionary_2_make_pair_m43898_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m43898(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6919  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_make_pair_m43898_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m43900_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m43900(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_key_m43900_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_value(TKey,TValue)
extern "C" float Dictionary_2_pick_value_m43902_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m43902(__this /* static, unused */, ___key, ___value, method) (( float (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_value_m43902_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m43904_gshared (Dictionary_2_t6979 * __this, KeyValuePair_2U5BU5D_t7813* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m43904(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6979 *, KeyValuePair_2U5BU5D_t7813*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m43904_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Resize()
extern "C" void Dictionary_2_Resize_m43906_gshared (Dictionary_2_t6979 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m43906(__this, method) (( void (*) (Dictionary_2_t6979 *, const MethodInfo*))Dictionary_2_Resize_m43906_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m43908_gshared (Dictionary_2_t6979 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_Add_m43908(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6979 *, Object_t *, float, const MethodInfo*))Dictionary_2_Add_m43908_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Clear()
extern "C" void Dictionary_2_Clear_m43910_gshared (Dictionary_2_t6979 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m43910(__this, method) (( void (*) (Dictionary_2_t6979 *, const MethodInfo*))Dictionary_2_Clear_m43910_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m43912_gshared (Dictionary_2_t6979 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m43912(__this, ___key, method) (( bool (*) (Dictionary_2_t6979 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m43912_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m43914_gshared (Dictionary_2_t6979 * __this, float ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m43914(__this, ___value, method) (( bool (*) (Dictionary_2_t6979 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m43914_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m43916_gshared (Dictionary_2_t6979 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m43916(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6979 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2_GetObjectData_m43916_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m43918_gshared (Dictionary_2_t6979 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m43918(__this, ___sender, method) (( void (*) (Dictionary_2_t6979 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m43918_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m43920_gshared (Dictionary_2_t6979 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m43920(__this, ___key, method) (( bool (*) (Dictionary_2_t6979 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m43920_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m43922_gshared (Dictionary_2_t6979 * __this, Object_t * ___key, float* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m43922(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6979 *, Object_t *, float*, const MethodInfo*))Dictionary_2_TryGetValue_m43922_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Keys()
extern "C" KeyCollection_t6980 * Dictionary_2_get_Keys_m43924_gshared (Dictionary_2_t6979 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m43924(__this, method) (( KeyCollection_t6980 * (*) (Dictionary_2_t6979 *, const MethodInfo*))Dictionary_2_get_Keys_m43924_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Values()
extern "C" ValueCollection_t6984 * Dictionary_2_get_Values_m43926_gshared (Dictionary_2_t6979 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m43926(__this, method) (( ValueCollection_t6984 * (*) (Dictionary_2_t6979 *, const MethodInfo*))Dictionary_2_get_Values_m43926_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m43928_gshared (Dictionary_2_t6979 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m43928(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6979 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m43928_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTValue(System.Object)
extern "C" float Dictionary_2_ToTValue_m43930_gshared (Dictionary_2_t6979 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m43930(__this, ___value, method) (( float (*) (Dictionary_2_t6979 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m43930_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m43932_gshared (Dictionary_2_t6979 * __this, KeyValuePair_2_t6919  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m43932(__this, ___pair, method) (( bool (*) (Dictionary_2_t6979 *, KeyValuePair_2_t6919 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m43932_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetEnumerator()
extern "C" Enumerator_t6982  Dictionary_2_GetEnumerator_m43934_gshared (Dictionary_2_t6979 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m43934(__this, method) (( Enumerator_t6982  (*) (Dictionary_2_t6979 *, const MethodInfo*))Dictionary_2_GetEnumerator_m43934_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Single>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2080  Dictionary_2_U3CCopyToU3Em__0_m43936_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m43936(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2080  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m43936_gshared)(__this /* static, unused */, ___key, ___value, method)
