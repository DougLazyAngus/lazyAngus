#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7084;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1221;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9213;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Double>
struct KeyCollection_t7085;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>
struct ValueCollection_t7089;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1185;
// System.Collections.Generic.IDictionary`2<System.Object,System.Double>
struct IDictionary_2_t9317;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t7833;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t7273;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__52.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor()
extern "C" void Dictionary_2__ctor_m44942_gshared (Dictionary_2_t7084 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m44942(__this, method) (( void (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2__ctor_m44942_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44944_gshared (Dictionary_2_t7084 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44944(__this, ___comparer, method) (( void (*) (Dictionary_2_t7084 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44944_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m44946_gshared (Dictionary_2_t7084 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m44946(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7084 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44946_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m44948_gshared (Dictionary_2_t7084 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m44948(__this, ___capacity, method) (( void (*) (Dictionary_2_t7084 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44948_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44950_gshared (Dictionary_2_t7084 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44950(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7084 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44950_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m44952_gshared (Dictionary_2_t7084 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m44952(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7084 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m44952_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44954_gshared (Dictionary_2_t7084 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44954(__this, method) (( Object_t* (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44954_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44956_gshared (Dictionary_2_t7084 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44956(__this, method) (( Object_t* (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44956_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m44958_gshared (Dictionary_2_t7084 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44958(__this, method) (( Object_t * (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44958_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m44960_gshared (Dictionary_2_t7084 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44960(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7084 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44960_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m44962_gshared (Dictionary_2_t7084 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44962(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7084 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44962_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m44964_gshared (Dictionary_2_t7084 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m44964(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7084 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44964_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m44966_gshared (Dictionary_2_t7084 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m44966(__this, ___key, method) (( bool (*) (Dictionary_2_t7084 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44966_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m44968_gshared (Dictionary_2_t7084 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m44968(__this, ___key, method) (( void (*) (Dictionary_2_t7084 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44968_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44970_gshared (Dictionary_2_t7084 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44970(__this, method) (( bool (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44970_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44972_gshared (Dictionary_2_t7084 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44972(__this, method) (( Object_t * (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44972_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44974_gshared (Dictionary_2_t7084 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44974(__this, method) (( bool (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44974_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44976_gshared (Dictionary_2_t7084 * __this, KeyValuePair_2_t7010  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44976(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7084 *, KeyValuePair_2_t7010 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44976_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44978_gshared (Dictionary_2_t7084 * __this, KeyValuePair_2_t7010  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44978(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7084 *, KeyValuePair_2_t7010 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44978_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44980_gshared (Dictionary_2_t7084 * __this, KeyValuePair_2U5BU5D_t7833* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44980(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7084 *, KeyValuePair_2U5BU5D_t7833*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44980_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44982_gshared (Dictionary_2_t7084 * __this, KeyValuePair_2_t7010  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44982(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7084 *, KeyValuePair_2_t7010 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44982_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m44984_gshared (Dictionary_2_t7084 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44984(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7084 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44984_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44986_gshared (Dictionary_2_t7084 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44986(__this, method) (( Object_t * (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44986_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44988_gshared (Dictionary_2_t7084 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44988(__this, method) (( Object_t* (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44988_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44990_gshared (Dictionary_2_t7084 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44990(__this, method) (( Object_t * (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44990_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m44992_gshared (Dictionary_2_t7084 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m44992(__this, method) (( int32_t (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_get_Count_m44992_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Item(TKey)
extern "C" double Dictionary_2_get_Item_m44994_gshared (Dictionary_2_t7084 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m44994(__this, ___key, method) (( double (*) (Dictionary_2_t7084 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m44994_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m44996_gshared (Dictionary_2_t7084 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m44996(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7084 *, Object_t *, double, const MethodInfo*))Dictionary_2_set_Item_m44996_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m44998_gshared (Dictionary_2_t7084 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m44998(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7084 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44998_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m45000_gshared (Dictionary_2_t7084 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m45000(__this, ___size, method) (( void (*) (Dictionary_2_t7084 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m45000_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m45002_gshared (Dictionary_2_t7084 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m45002(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7084 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m45002_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7010  Dictionary_2_make_pair_m45004_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m45004(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7010  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_make_pair_m45004_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m45006_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m45006(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_key_m45006_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_value(TKey,TValue)
extern "C" double Dictionary_2_pick_value_m45008_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m45008(__this /* static, unused */, ___key, ___value, method) (( double (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_value_m45008_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m45010_gshared (Dictionary_2_t7084 * __this, KeyValuePair_2U5BU5D_t7833* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m45010(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7084 *, KeyValuePair_2U5BU5D_t7833*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m45010_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Resize()
extern "C" void Dictionary_2_Resize_m45012_gshared (Dictionary_2_t7084 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m45012(__this, method) (( void (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_Resize_m45012_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m45014_gshared (Dictionary_2_t7084 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_Add_m45014(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7084 *, Object_t *, double, const MethodInfo*))Dictionary_2_Add_m45014_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Clear()
extern "C" void Dictionary_2_Clear_m45016_gshared (Dictionary_2_t7084 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m45016(__this, method) (( void (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_Clear_m45016_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m45018_gshared (Dictionary_2_t7084 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m45018(__this, ___key, method) (( bool (*) (Dictionary_2_t7084 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m45018_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m45020_gshared (Dictionary_2_t7084 * __this, double ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m45020(__this, ___value, method) (( bool (*) (Dictionary_2_t7084 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m45020_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m45022_gshared (Dictionary_2_t7084 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m45022(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7084 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m45022_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m45024_gshared (Dictionary_2_t7084 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m45024(__this, ___sender, method) (( void (*) (Dictionary_2_t7084 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m45024_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m45026_gshared (Dictionary_2_t7084 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m45026(__this, ___key, method) (( bool (*) (Dictionary_2_t7084 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m45026_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m45028_gshared (Dictionary_2_t7084 * __this, Object_t * ___key, double* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m45028(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7084 *, Object_t *, double*, const MethodInfo*))Dictionary_2_TryGetValue_m45028_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Keys()
extern "C" KeyCollection_t7085 * Dictionary_2_get_Keys_m45030_gshared (Dictionary_2_t7084 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m45030(__this, method) (( KeyCollection_t7085 * (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_get_Keys_m45030_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Values()
extern "C" ValueCollection_t7089 * Dictionary_2_get_Values_m45032_gshared (Dictionary_2_t7084 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m45032(__this, method) (( ValueCollection_t7089 * (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_get_Values_m45032_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m45034_gshared (Dictionary_2_t7084 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m45034(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7084 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m45034_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTValue(System.Object)
extern "C" double Dictionary_2_ToTValue_m45036_gshared (Dictionary_2_t7084 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m45036(__this, ___value, method) (( double (*) (Dictionary_2_t7084 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m45036_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m45038_gshared (Dictionary_2_t7084 * __this, KeyValuePair_2_t7010  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m45038(__this, ___pair, method) (( bool (*) (Dictionary_2_t7084 *, KeyValuePair_2_t7010 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m45038_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetEnumerator()
extern "C" Enumerator_t7087  Dictionary_2_GetEnumerator_m45040_gshared (Dictionary_2_t7084 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m45040(__this, method) (( Enumerator_t7087  (*) (Dictionary_2_t7084 *, const MethodInfo*))Dictionary_2_GetEnumerator_m45040_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Double>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2137  Dictionary_2_U3CCopyToU3Em__0_m45042_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m45042(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m45042_gshared)(__this /* static, unused */, ___key, ___value, method)
