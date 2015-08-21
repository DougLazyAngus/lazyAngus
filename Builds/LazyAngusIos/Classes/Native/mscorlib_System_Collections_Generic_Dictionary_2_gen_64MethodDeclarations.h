#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7137;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1221;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9217;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Parse.ParseGeoPoint>
struct KeyCollection_t7138;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>
struct ValueCollection_t7142;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1185;
// System.Collections.Generic.IDictionary`2<System.Object,Parse.ParseGeoPoint>
struct IDictionary_2_t9334;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8004;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerator_1_t7997;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__57.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor()
extern "C" void Dictionary_2__ctor_m45656_gshared (Dictionary_2_t7137 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m45656(__this, method) (( void (*) (Dictionary_2_t7137 *, const MethodInfo*))Dictionary_2__ctor_m45656_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45658_gshared (Dictionary_2_t7137 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45658(__this, ___comparer, method) (( void (*) (Dictionary_2_t7137 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45658_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m45660_gshared (Dictionary_2_t7137 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m45660(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7137 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45660_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m45662_gshared (Dictionary_2_t7137 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m45662(__this, ___capacity, method) (( void (*) (Dictionary_2_t7137 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m45662_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m45664_gshared (Dictionary_2_t7137 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m45664(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7137 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m45664_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m45666_gshared (Dictionary_2_t7137 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m45666(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7137 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m45666_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45668_gshared (Dictionary_2_t7137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45668(__this, method) (( Object_t* (*) (Dictionary_2_t7137 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m45668_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45670_gshared (Dictionary_2_t7137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45670(__this, method) (( Object_t* (*) (Dictionary_2_t7137 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m45670_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m45672_gshared (Dictionary_2_t7137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m45672(__this, method) (( Object_t * (*) (Dictionary_2_t7137 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m45672_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m45674_gshared (Dictionary_2_t7137 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m45674(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7137 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m45674_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m45676_gshared (Dictionary_2_t7137 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m45676(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7137 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m45676_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m45678_gshared (Dictionary_2_t7137 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m45678(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7137 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m45678_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m45680_gshared (Dictionary_2_t7137 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m45680(__this, ___key, method) (( bool (*) (Dictionary_2_t7137 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m45680_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m45682_gshared (Dictionary_2_t7137 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m45682(__this, ___key, method) (( void (*) (Dictionary_2_t7137 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m45682_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45684_gshared (Dictionary_2_t7137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45684(__this, method) (( bool (*) (Dictionary_2_t7137 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m45684_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45686_gshared (Dictionary_2_t7137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45686(__this, method) (( Object_t * (*) (Dictionary_2_t7137 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m45686_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45688_gshared (Dictionary_2_t7137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45688(__this, method) (( bool (*) (Dictionary_2_t7137 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m45688_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45690_gshared (Dictionary_2_t7137 * __this, KeyValuePair_2_t7030  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45690(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7137 *, KeyValuePair_2_t7030 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m45690_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45692_gshared (Dictionary_2_t7137 * __this, KeyValuePair_2_t7030  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45692(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7137 *, KeyValuePair_2_t7030 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m45692_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45694_gshared (Dictionary_2_t7137 * __this, KeyValuePair_2U5BU5D_t8004* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45694(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7137 *, KeyValuePair_2U5BU5D_t8004*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m45694_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45696_gshared (Dictionary_2_t7137 * __this, KeyValuePair_2_t7030  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45696(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7137 *, KeyValuePair_2_t7030 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m45696_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m45698_gshared (Dictionary_2_t7137 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m45698(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7137 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m45698_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45700_gshared (Dictionary_2_t7137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45700(__this, method) (( Object_t * (*) (Dictionary_2_t7137 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m45700_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45702_gshared (Dictionary_2_t7137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45702(__this, method) (( Object_t* (*) (Dictionary_2_t7137 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m45702_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45704_gshared (Dictionary_2_t7137 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45704(__this, method) (( Object_t * (*) (Dictionary_2_t7137 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m45704_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m45706_gshared (Dictionary_2_t7137 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m45706(__this, method) (( int32_t (*) (Dictionary_2_t7137 *, const MethodInfo*))Dictionary_2_get_Count_m45706_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Item(TKey)
extern "C" ParseGeoPoint_t1245  Dictionary_2_get_Item_m45708_gshared (Dictionary_2_t7137 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m45708(__this, ___key, method) (( ParseGeoPoint_t1245  (*) (Dictionary_2_t7137 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m45708_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m45710_gshared (Dictionary_2_t7137 * __this, Object_t * ___key, ParseGeoPoint_t1245  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m45710(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7137 *, Object_t *, ParseGeoPoint_t1245 , const MethodInfo*))Dictionary_2_set_Item_m45710_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m45712_gshared (Dictionary_2_t7137 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m45712(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7137 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m45712_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m45714_gshared (Dictionary_2_t7137 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m45714(__this, ___size, method) (( void (*) (Dictionary_2_t7137 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m45714_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m45716_gshared (Dictionary_2_t7137 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m45716(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7137 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m45716_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7030  Dictionary_2_make_pair_m45718_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1245  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m45718(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7030  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1245 , const MethodInfo*))Dictionary_2_make_pair_m45718_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m45720_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1245  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m45720(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1245 , const MethodInfo*))Dictionary_2_pick_key_m45720_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_value(TKey,TValue)
extern "C" ParseGeoPoint_t1245  Dictionary_2_pick_value_m45722_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1245  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m45722(__this /* static, unused */, ___key, ___value, method) (( ParseGeoPoint_t1245  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1245 , const MethodInfo*))Dictionary_2_pick_value_m45722_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m45724_gshared (Dictionary_2_t7137 * __this, KeyValuePair_2U5BU5D_t8004* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m45724(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7137 *, KeyValuePair_2U5BU5D_t8004*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m45724_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Resize()
extern "C" void Dictionary_2_Resize_m45726_gshared (Dictionary_2_t7137 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m45726(__this, method) (( void (*) (Dictionary_2_t7137 *, const MethodInfo*))Dictionary_2_Resize_m45726_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m45728_gshared (Dictionary_2_t7137 * __this, Object_t * ___key, ParseGeoPoint_t1245  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m45728(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7137 *, Object_t *, ParseGeoPoint_t1245 , const MethodInfo*))Dictionary_2_Add_m45728_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Clear()
extern "C" void Dictionary_2_Clear_m45730_gshared (Dictionary_2_t7137 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m45730(__this, method) (( void (*) (Dictionary_2_t7137 *, const MethodInfo*))Dictionary_2_Clear_m45730_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m45732_gshared (Dictionary_2_t7137 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m45732(__this, ___key, method) (( bool (*) (Dictionary_2_t7137 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m45732_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m45734_gshared (Dictionary_2_t7137 * __this, ParseGeoPoint_t1245  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m45734(__this, ___value, method) (( bool (*) (Dictionary_2_t7137 *, ParseGeoPoint_t1245 , const MethodInfo*))Dictionary_2_ContainsValue_m45734_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m45736_gshared (Dictionary_2_t7137 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m45736(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7137 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m45736_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m45738_gshared (Dictionary_2_t7137 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m45738(__this, ___sender, method) (( void (*) (Dictionary_2_t7137 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m45738_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m45740_gshared (Dictionary_2_t7137 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m45740(__this, ___key, method) (( bool (*) (Dictionary_2_t7137 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m45740_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m45742_gshared (Dictionary_2_t7137 * __this, Object_t * ___key, ParseGeoPoint_t1245 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m45742(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7137 *, Object_t *, ParseGeoPoint_t1245 *, const MethodInfo*))Dictionary_2_TryGetValue_m45742_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Keys()
extern "C" KeyCollection_t7138 * Dictionary_2_get_Keys_m45744_gshared (Dictionary_2_t7137 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m45744(__this, method) (( KeyCollection_t7138 * (*) (Dictionary_2_t7137 *, const MethodInfo*))Dictionary_2_get_Keys_m45744_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Values()
extern "C" ValueCollection_t7142 * Dictionary_2_get_Values_m45746_gshared (Dictionary_2_t7137 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m45746(__this, method) (( ValueCollection_t7142 * (*) (Dictionary_2_t7137 *, const MethodInfo*))Dictionary_2_get_Values_m45746_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m45748_gshared (Dictionary_2_t7137 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m45748(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7137 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m45748_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTValue(System.Object)
extern "C" ParseGeoPoint_t1245  Dictionary_2_ToTValue_m45750_gshared (Dictionary_2_t7137 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m45750(__this, ___value, method) (( ParseGeoPoint_t1245  (*) (Dictionary_2_t7137 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m45750_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m45752_gshared (Dictionary_2_t7137 * __this, KeyValuePair_2_t7030  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m45752(__this, ___pair, method) (( bool (*) (Dictionary_2_t7137 *, KeyValuePair_2_t7030 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m45752_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t7140  Dictionary_2_GetEnumerator_m45754_gshared (Dictionary_2_t7137 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m45754(__this, method) (( Enumerator_t7140  (*) (Dictionary_2_t7137 *, const MethodInfo*))Dictionary_2_GetEnumerator_m45754_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2137  Dictionary_2_U3CCopyToU3Em__0_m45756_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1245  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m45756(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1245 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m45756_gshared)(__this /* static, unused */, ___key, ___value, method)
