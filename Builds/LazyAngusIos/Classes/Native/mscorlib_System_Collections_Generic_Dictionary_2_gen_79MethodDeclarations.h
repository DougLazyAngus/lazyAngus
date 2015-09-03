#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t9089;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t9714;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t9090;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t9094;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1204;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t10298;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t10299;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t10300;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_136.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__70.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m66842_gshared (Dictionary_2_t9089 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m66842(__this, method) (( void (*) (Dictionary_2_t9089 *, const MethodInfo*))Dictionary_2__ctor_m66842_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m66844_gshared (Dictionary_2_t9089 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m66844(__this, ___comparer, method) (( void (*) (Dictionary_2_t9089 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m66844_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m66846_gshared (Dictionary_2_t9089 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m66846(__this, ___dictionary, method) (( void (*) (Dictionary_2_t9089 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m66846_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m66848_gshared (Dictionary_2_t9089 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m66848(__this, ___capacity, method) (( void (*) (Dictionary_2_t9089 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m66848_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m66850_gshared (Dictionary_2_t9089 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m66850(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t9089 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m66850_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m66852_gshared (Dictionary_2_t9089 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m66852(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t9089 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m66852_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m66854_gshared (Dictionary_2_t9089 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m66854(__this, method) (( Object_t* (*) (Dictionary_2_t9089 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m66854_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m66856_gshared (Dictionary_2_t9089 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m66856(__this, method) (( Object_t* (*) (Dictionary_2_t9089 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m66856_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m66858_gshared (Dictionary_2_t9089 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m66858(__this, method) (( Object_t * (*) (Dictionary_2_t9089 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m66858_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m66860_gshared (Dictionary_2_t9089 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m66860(__this, method) (( Object_t * (*) (Dictionary_2_t9089 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m66860_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m66862_gshared (Dictionary_2_t9089 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m66862(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t9089 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m66862_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m66864_gshared (Dictionary_2_t9089 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m66864(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9089 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m66864_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m66866_gshared (Dictionary_2_t9089 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m66866(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9089 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m66866_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m66868_gshared (Dictionary_2_t9089 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m66868(__this, ___key, method) (( bool (*) (Dictionary_2_t9089 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m66868_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m66870_gshared (Dictionary_2_t9089 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m66870(__this, ___key, method) (( void (*) (Dictionary_2_t9089 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m66870_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m66872_gshared (Dictionary_2_t9089 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m66872(__this, method) (( bool (*) (Dictionary_2_t9089 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m66872_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m66874_gshared (Dictionary_2_t9089 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m66874(__this, method) (( Object_t * (*) (Dictionary_2_t9089 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m66874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m66876_gshared (Dictionary_2_t9089 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m66876(__this, method) (( bool (*) (Dictionary_2_t9089 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m66876_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m66878_gshared (Dictionary_2_t9089 * __this, KeyValuePair_2_t9065  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m66878(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t9089 *, KeyValuePair_2_t9065 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m66878_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m66880_gshared (Dictionary_2_t9089 * __this, KeyValuePair_2_t9065  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m66880(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t9089 *, KeyValuePair_2_t9065 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m66880_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m66882_gshared (Dictionary_2_t9089 * __this, KeyValuePair_2U5BU5D_t10299* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m66882(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9089 *, KeyValuePair_2U5BU5D_t10299*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m66882_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m66884_gshared (Dictionary_2_t9089 * __this, KeyValuePair_2_t9065  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m66884(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t9089 *, KeyValuePair_2_t9065 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m66884_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m66886_gshared (Dictionary_2_t9089 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m66886(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9089 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m66886_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m66888_gshared (Dictionary_2_t9089 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m66888(__this, method) (( Object_t * (*) (Dictionary_2_t9089 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m66888_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m66890_gshared (Dictionary_2_t9089 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m66890(__this, method) (( Object_t* (*) (Dictionary_2_t9089 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m66890_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m66892_gshared (Dictionary_2_t9089 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m66892(__this, method) (( Object_t * (*) (Dictionary_2_t9089 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m66892_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m66894_gshared (Dictionary_2_t9089 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m66894(__this, method) (( int32_t (*) (Dictionary_2_t9089 *, const MethodInfo*))Dictionary_2_get_Count_m66894_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t70  Dictionary_2_get_Item_m66896_gshared (Dictionary_2_t9089 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m66896(__this, ___key, method) (( KeyValuePair_2_t70  (*) (Dictionary_2_t9089 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m66896_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m66898_gshared (Dictionary_2_t9089 * __this, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m66898(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9089 *, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_set_Item_m66898_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m66900_gshared (Dictionary_2_t9089 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m66900(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t9089 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m66900_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m66902_gshared (Dictionary_2_t9089 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m66902(__this, ___size, method) (( void (*) (Dictionary_2_t9089 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m66902_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m66904_gshared (Dictionary_2_t9089 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m66904(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9089 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m66904_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t9065  Dictionary_2_make_pair_m66906_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m66906(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t9065  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_make_pair_m66906_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m66908_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m66908(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_pick_key_m66908_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t70  Dictionary_2_pick_value_m66910_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m66910(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t70  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_pick_value_m66910_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m66912_gshared (Dictionary_2_t9089 * __this, KeyValuePair_2U5BU5D_t10299* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m66912(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9089 *, KeyValuePair_2U5BU5D_t10299*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m66912_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m66914_gshared (Dictionary_2_t9089 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m66914(__this, method) (( void (*) (Dictionary_2_t9089 *, const MethodInfo*))Dictionary_2_Resize_m66914_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m66916_gshared (Dictionary_2_t9089 * __this, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m66916(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9089 *, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_Add_m66916_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m66918_gshared (Dictionary_2_t9089 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m66918(__this, method) (( void (*) (Dictionary_2_t9089 *, const MethodInfo*))Dictionary_2_Clear_m66918_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m66920_gshared (Dictionary_2_t9089 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m66920(__this, ___key, method) (( bool (*) (Dictionary_2_t9089 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m66920_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m66922_gshared (Dictionary_2_t9089 * __this, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m66922(__this, ___value, method) (( bool (*) (Dictionary_2_t9089 *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_ContainsValue_m66922_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m66924_gshared (Dictionary_2_t9089 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m66924(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t9089 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m66924_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m66926_gshared (Dictionary_2_t9089 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m66926(__this, ___sender, method) (( void (*) (Dictionary_2_t9089 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m66926_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m66928_gshared (Dictionary_2_t9089 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m66928(__this, ___key, method) (( bool (*) (Dictionary_2_t9089 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m66928_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m66930_gshared (Dictionary_2_t9089 * __this, Object_t * ___key, KeyValuePair_2_t70 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m66930(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t9089 *, Object_t *, KeyValuePair_2_t70 *, const MethodInfo*))Dictionary_2_TryGetValue_m66930_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t9090 * Dictionary_2_get_Keys_m66932_gshared (Dictionary_2_t9089 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m66932(__this, method) (( KeyCollection_t9090 * (*) (Dictionary_2_t9089 *, const MethodInfo*))Dictionary_2_get_Keys_m66932_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t9094 * Dictionary_2_get_Values_m66934_gshared (Dictionary_2_t9089 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m66934(__this, method) (( ValueCollection_t9094 * (*) (Dictionary_2_t9089 *, const MethodInfo*))Dictionary_2_get_Values_m66934_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m66936_gshared (Dictionary_2_t9089 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m66936(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t9089 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m66936_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t70  Dictionary_2_ToTValue_m66938_gshared (Dictionary_2_t9089 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m66938(__this, ___value, method) (( KeyValuePair_2_t70  (*) (Dictionary_2_t9089 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m66938_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m66940_gshared (Dictionary_2_t9089 * __this, KeyValuePair_2_t9065  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m66940(__this, ___pair, method) (( bool (*) (Dictionary_2_t9089 *, KeyValuePair_2_t9065 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m66940_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t9092  Dictionary_2_GetEnumerator_m66942_gshared (Dictionary_2_t9089 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m66942(__this, method) (( Enumerator_t9092  (*) (Dictionary_2_t9089 *, const MethodInfo*))Dictionary_2_GetEnumerator_m66942_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__2_m66944_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t70  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m66944(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t70 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m66944_gshared)(__this /* static, unused */, ___key, ___value, method)
