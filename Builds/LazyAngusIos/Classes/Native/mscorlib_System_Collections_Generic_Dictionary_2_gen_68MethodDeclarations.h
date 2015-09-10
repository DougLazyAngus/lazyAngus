#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7717;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1251;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9857;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Parse.ParseGeoPoint>
struct KeyCollection_t7718;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>
struct ValueCollection_t7722;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1215;
// System.Collections.Generic.IDictionary`2<System.Object,Parse.ParseGeoPoint>
struct IDictionary_2_t9974;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8584;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerator_1_t8577;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
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
extern "C" void Dictionary_2__ctor_m50359_gshared (Dictionary_2_t7717 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m50359(__this, method) (( void (*) (Dictionary_2_t7717 *, const MethodInfo*))Dictionary_2__ctor_m50359_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m50361_gshared (Dictionary_2_t7717 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m50361(__this, ___comparer, method) (( void (*) (Dictionary_2_t7717 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m50361_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m50363_gshared (Dictionary_2_t7717 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m50363(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7717 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m50363_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m50365_gshared (Dictionary_2_t7717 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m50365(__this, ___capacity, method) (( void (*) (Dictionary_2_t7717 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m50365_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m50367_gshared (Dictionary_2_t7717 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m50367(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7717 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m50367_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m50369_gshared (Dictionary_2_t7717 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m50369(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7717 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m50369_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m50371_gshared (Dictionary_2_t7717 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m50371(__this, method) (( Object_t* (*) (Dictionary_2_t7717 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m50371_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m50373_gshared (Dictionary_2_t7717 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m50373(__this, method) (( Object_t* (*) (Dictionary_2_t7717 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m50373_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m50375_gshared (Dictionary_2_t7717 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m50375(__this, method) (( Object_t * (*) (Dictionary_2_t7717 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m50375_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m50377_gshared (Dictionary_2_t7717 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m50377(__this, method) (( Object_t * (*) (Dictionary_2_t7717 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m50377_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m50379_gshared (Dictionary_2_t7717 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m50379(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7717 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m50379_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m50381_gshared (Dictionary_2_t7717 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m50381(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7717 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m50381_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m50383_gshared (Dictionary_2_t7717 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m50383(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7717 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m50383_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m50385_gshared (Dictionary_2_t7717 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m50385(__this, ___key, method) (( bool (*) (Dictionary_2_t7717 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m50385_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m50387_gshared (Dictionary_2_t7717 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m50387(__this, ___key, method) (( void (*) (Dictionary_2_t7717 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m50387_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m50389_gshared (Dictionary_2_t7717 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m50389(__this, method) (( bool (*) (Dictionary_2_t7717 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m50389_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50391_gshared (Dictionary_2_t7717 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50391(__this, method) (( Object_t * (*) (Dictionary_2_t7717 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50391_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m50393_gshared (Dictionary_2_t7717 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m50393(__this, method) (( bool (*) (Dictionary_2_t7717 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m50393_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m50395_gshared (Dictionary_2_t7717 * __this, KeyValuePair_2_t7610  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m50395(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7717 *, KeyValuePair_2_t7610 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m50395_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m50397_gshared (Dictionary_2_t7717 * __this, KeyValuePair_2_t7610  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m50397(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7717 *, KeyValuePair_2_t7610 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m50397_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m50399_gshared (Dictionary_2_t7717 * __this, KeyValuePair_2U5BU5D_t8584* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m50399(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7717 *, KeyValuePair_2U5BU5D_t8584*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m50399_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m50401_gshared (Dictionary_2_t7717 * __this, KeyValuePair_2_t7610  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m50401(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7717 *, KeyValuePair_2_t7610 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m50401_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m50403_gshared (Dictionary_2_t7717 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m50403(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7717 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m50403_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50405_gshared (Dictionary_2_t7717 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50405(__this, method) (( Object_t * (*) (Dictionary_2_t7717 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50405_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m50407_gshared (Dictionary_2_t7717 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m50407(__this, method) (( Object_t* (*) (Dictionary_2_t7717 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m50407_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m50409_gshared (Dictionary_2_t7717 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m50409(__this, method) (( Object_t * (*) (Dictionary_2_t7717 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m50409_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m50411_gshared (Dictionary_2_t7717 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m50411(__this, method) (( int32_t (*) (Dictionary_2_t7717 *, const MethodInfo*))Dictionary_2_get_Count_m50411_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Item(TKey)
extern "C" ParseGeoPoint_t1275  Dictionary_2_get_Item_m50413_gshared (Dictionary_2_t7717 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m50413(__this, ___key, method) (( ParseGeoPoint_t1275  (*) (Dictionary_2_t7717 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m50413_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m50415_gshared (Dictionary_2_t7717 * __this, Object_t * ___key, ParseGeoPoint_t1275  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m50415(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7717 *, Object_t *, ParseGeoPoint_t1275 , const MethodInfo*))Dictionary_2_set_Item_m50415_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m50417_gshared (Dictionary_2_t7717 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m50417(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7717 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m50417_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m50419_gshared (Dictionary_2_t7717 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m50419(__this, ___size, method) (( void (*) (Dictionary_2_t7717 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m50419_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m50421_gshared (Dictionary_2_t7717 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m50421(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7717 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m50421_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7610  Dictionary_2_make_pair_m50423_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1275  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m50423(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7610  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1275 , const MethodInfo*))Dictionary_2_make_pair_m50423_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m50425_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1275  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m50425(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1275 , const MethodInfo*))Dictionary_2_pick_key_m50425_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_value(TKey,TValue)
extern "C" ParseGeoPoint_t1275  Dictionary_2_pick_value_m50427_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1275  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m50427(__this /* static, unused */, ___key, ___value, method) (( ParseGeoPoint_t1275  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1275 , const MethodInfo*))Dictionary_2_pick_value_m50427_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m50429_gshared (Dictionary_2_t7717 * __this, KeyValuePair_2U5BU5D_t8584* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m50429(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7717 *, KeyValuePair_2U5BU5D_t8584*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m50429_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Resize()
extern "C" void Dictionary_2_Resize_m50431_gshared (Dictionary_2_t7717 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m50431(__this, method) (( void (*) (Dictionary_2_t7717 *, const MethodInfo*))Dictionary_2_Resize_m50431_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m50433_gshared (Dictionary_2_t7717 * __this, Object_t * ___key, ParseGeoPoint_t1275  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m50433(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7717 *, Object_t *, ParseGeoPoint_t1275 , const MethodInfo*))Dictionary_2_Add_m50433_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Clear()
extern "C" void Dictionary_2_Clear_m50435_gshared (Dictionary_2_t7717 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m50435(__this, method) (( void (*) (Dictionary_2_t7717 *, const MethodInfo*))Dictionary_2_Clear_m50435_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m50437_gshared (Dictionary_2_t7717 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m50437(__this, ___key, method) (( bool (*) (Dictionary_2_t7717 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m50437_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m50439_gshared (Dictionary_2_t7717 * __this, ParseGeoPoint_t1275  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m50439(__this, ___value, method) (( bool (*) (Dictionary_2_t7717 *, ParseGeoPoint_t1275 , const MethodInfo*))Dictionary_2_ContainsValue_m50439_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m50441_gshared (Dictionary_2_t7717 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m50441(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7717 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m50441_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m50443_gshared (Dictionary_2_t7717 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m50443(__this, ___sender, method) (( void (*) (Dictionary_2_t7717 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m50443_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m50445_gshared (Dictionary_2_t7717 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m50445(__this, ___key, method) (( bool (*) (Dictionary_2_t7717 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m50445_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m50447_gshared (Dictionary_2_t7717 * __this, Object_t * ___key, ParseGeoPoint_t1275 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m50447(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7717 *, Object_t *, ParseGeoPoint_t1275 *, const MethodInfo*))Dictionary_2_TryGetValue_m50447_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Keys()
extern "C" KeyCollection_t7718 * Dictionary_2_get_Keys_m50449_gshared (Dictionary_2_t7717 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m50449(__this, method) (( KeyCollection_t7718 * (*) (Dictionary_2_t7717 *, const MethodInfo*))Dictionary_2_get_Keys_m50449_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Values()
extern "C" ValueCollection_t7722 * Dictionary_2_get_Values_m50451_gshared (Dictionary_2_t7717 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m50451(__this, method) (( ValueCollection_t7722 * (*) (Dictionary_2_t7717 *, const MethodInfo*))Dictionary_2_get_Values_m50451_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m50453_gshared (Dictionary_2_t7717 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m50453(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7717 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m50453_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTValue(System.Object)
extern "C" ParseGeoPoint_t1275  Dictionary_2_ToTValue_m50455_gshared (Dictionary_2_t7717 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m50455(__this, ___value, method) (( ParseGeoPoint_t1275  (*) (Dictionary_2_t7717 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m50455_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m50457_gshared (Dictionary_2_t7717 * __this, KeyValuePair_2_t7610  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m50457(__this, ___pair, method) (( bool (*) (Dictionary_2_t7717 *, KeyValuePair_2_t7610 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m50457_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t7720  Dictionary_2_GetEnumerator_m50459_gshared (Dictionary_2_t7717 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m50459(__this, method) (( Enumerator_t7720  (*) (Dictionary_2_t7717 *, const MethodInfo*))Dictionary_2_GetEnumerator_m50459_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2167  Dictionary_2_U3CCopyToU3Em__2_m50461_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1275  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m50461(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1275 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m50461_gshared)(__this /* static, unused */, ___key, ___value, method)
