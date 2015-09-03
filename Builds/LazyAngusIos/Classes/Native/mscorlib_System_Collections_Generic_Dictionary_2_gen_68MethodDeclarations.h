#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7704;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9844;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Parse.ParseGeoPoint>
struct KeyCollection_t7705;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>
struct ValueCollection_t7709;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1204;
// System.Collections.Generic.IDictionary`2<System.Object,Parse.ParseGeoPoint>
struct IDictionary_2_t9961;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8571;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerator_1_t8564;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
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
extern "C" void Dictionary_2__ctor_m50277_gshared (Dictionary_2_t7704 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m50277(__this, method) (( void (*) (Dictionary_2_t7704 *, const MethodInfo*))Dictionary_2__ctor_m50277_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m50279_gshared (Dictionary_2_t7704 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m50279(__this, ___comparer, method) (( void (*) (Dictionary_2_t7704 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m50279_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m50281_gshared (Dictionary_2_t7704 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m50281(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7704 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m50281_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m50283_gshared (Dictionary_2_t7704 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m50283(__this, ___capacity, method) (( void (*) (Dictionary_2_t7704 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m50283_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m50285_gshared (Dictionary_2_t7704 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m50285(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7704 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m50285_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m50287_gshared (Dictionary_2_t7704 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m50287(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7704 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m50287_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m50289_gshared (Dictionary_2_t7704 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m50289(__this, method) (( Object_t* (*) (Dictionary_2_t7704 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m50289_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m50291_gshared (Dictionary_2_t7704 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m50291(__this, method) (( Object_t* (*) (Dictionary_2_t7704 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m50291_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m50293_gshared (Dictionary_2_t7704 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m50293(__this, method) (( Object_t * (*) (Dictionary_2_t7704 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m50293_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m50295_gshared (Dictionary_2_t7704 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m50295(__this, method) (( Object_t * (*) (Dictionary_2_t7704 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m50295_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m50297_gshared (Dictionary_2_t7704 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m50297(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7704 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m50297_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m50299_gshared (Dictionary_2_t7704 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m50299(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7704 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m50299_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m50301_gshared (Dictionary_2_t7704 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m50301(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7704 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m50301_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m50303_gshared (Dictionary_2_t7704 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m50303(__this, ___key, method) (( bool (*) (Dictionary_2_t7704 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m50303_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m50305_gshared (Dictionary_2_t7704 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m50305(__this, ___key, method) (( void (*) (Dictionary_2_t7704 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m50305_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m50307_gshared (Dictionary_2_t7704 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m50307(__this, method) (( bool (*) (Dictionary_2_t7704 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m50307_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50309_gshared (Dictionary_2_t7704 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50309(__this, method) (( Object_t * (*) (Dictionary_2_t7704 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m50309_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m50311_gshared (Dictionary_2_t7704 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m50311(__this, method) (( bool (*) (Dictionary_2_t7704 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m50311_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m50313_gshared (Dictionary_2_t7704 * __this, KeyValuePair_2_t7597  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m50313(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7704 *, KeyValuePair_2_t7597 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m50313_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m50315_gshared (Dictionary_2_t7704 * __this, KeyValuePair_2_t7597  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m50315(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7704 *, KeyValuePair_2_t7597 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m50315_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m50317_gshared (Dictionary_2_t7704 * __this, KeyValuePair_2U5BU5D_t8571* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m50317(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7704 *, KeyValuePair_2U5BU5D_t8571*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m50317_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m50319_gshared (Dictionary_2_t7704 * __this, KeyValuePair_2_t7597  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m50319(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7704 *, KeyValuePair_2_t7597 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m50319_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m50321_gshared (Dictionary_2_t7704 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m50321(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7704 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m50321_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50323_gshared (Dictionary_2_t7704 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50323(__this, method) (( Object_t * (*) (Dictionary_2_t7704 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m50323_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m50325_gshared (Dictionary_2_t7704 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m50325(__this, method) (( Object_t* (*) (Dictionary_2_t7704 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m50325_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m50327_gshared (Dictionary_2_t7704 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m50327(__this, method) (( Object_t * (*) (Dictionary_2_t7704 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m50327_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m50329_gshared (Dictionary_2_t7704 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m50329(__this, method) (( int32_t (*) (Dictionary_2_t7704 *, const MethodInfo*))Dictionary_2_get_Count_m50329_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Item(TKey)
extern "C" ParseGeoPoint_t1264  Dictionary_2_get_Item_m50331_gshared (Dictionary_2_t7704 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m50331(__this, ___key, method) (( ParseGeoPoint_t1264  (*) (Dictionary_2_t7704 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m50331_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m50333_gshared (Dictionary_2_t7704 * __this, Object_t * ___key, ParseGeoPoint_t1264  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m50333(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7704 *, Object_t *, ParseGeoPoint_t1264 , const MethodInfo*))Dictionary_2_set_Item_m50333_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m50335_gshared (Dictionary_2_t7704 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m50335(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7704 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m50335_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m50337_gshared (Dictionary_2_t7704 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m50337(__this, ___size, method) (( void (*) (Dictionary_2_t7704 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m50337_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m50339_gshared (Dictionary_2_t7704 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m50339(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7704 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m50339_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7597  Dictionary_2_make_pair_m50341_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1264  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m50341(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7597  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1264 , const MethodInfo*))Dictionary_2_make_pair_m50341_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m50343_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1264  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m50343(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1264 , const MethodInfo*))Dictionary_2_pick_key_m50343_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_value(TKey,TValue)
extern "C" ParseGeoPoint_t1264  Dictionary_2_pick_value_m50345_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1264  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m50345(__this /* static, unused */, ___key, ___value, method) (( ParseGeoPoint_t1264  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1264 , const MethodInfo*))Dictionary_2_pick_value_m50345_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m50347_gshared (Dictionary_2_t7704 * __this, KeyValuePair_2U5BU5D_t8571* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m50347(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7704 *, KeyValuePair_2U5BU5D_t8571*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m50347_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Resize()
extern "C" void Dictionary_2_Resize_m50349_gshared (Dictionary_2_t7704 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m50349(__this, method) (( void (*) (Dictionary_2_t7704 *, const MethodInfo*))Dictionary_2_Resize_m50349_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m50351_gshared (Dictionary_2_t7704 * __this, Object_t * ___key, ParseGeoPoint_t1264  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m50351(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7704 *, Object_t *, ParseGeoPoint_t1264 , const MethodInfo*))Dictionary_2_Add_m50351_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Clear()
extern "C" void Dictionary_2_Clear_m50353_gshared (Dictionary_2_t7704 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m50353(__this, method) (( void (*) (Dictionary_2_t7704 *, const MethodInfo*))Dictionary_2_Clear_m50353_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m50355_gshared (Dictionary_2_t7704 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m50355(__this, ___key, method) (( bool (*) (Dictionary_2_t7704 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m50355_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m50357_gshared (Dictionary_2_t7704 * __this, ParseGeoPoint_t1264  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m50357(__this, ___value, method) (( bool (*) (Dictionary_2_t7704 *, ParseGeoPoint_t1264 , const MethodInfo*))Dictionary_2_ContainsValue_m50357_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m50359_gshared (Dictionary_2_t7704 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m50359(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7704 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m50359_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m50361_gshared (Dictionary_2_t7704 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m50361(__this, ___sender, method) (( void (*) (Dictionary_2_t7704 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m50361_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m50363_gshared (Dictionary_2_t7704 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m50363(__this, ___key, method) (( bool (*) (Dictionary_2_t7704 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m50363_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m50365_gshared (Dictionary_2_t7704 * __this, Object_t * ___key, ParseGeoPoint_t1264 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m50365(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7704 *, Object_t *, ParseGeoPoint_t1264 *, const MethodInfo*))Dictionary_2_TryGetValue_m50365_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Keys()
extern "C" KeyCollection_t7705 * Dictionary_2_get_Keys_m50367_gshared (Dictionary_2_t7704 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m50367(__this, method) (( KeyCollection_t7705 * (*) (Dictionary_2_t7704 *, const MethodInfo*))Dictionary_2_get_Keys_m50367_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Values()
extern "C" ValueCollection_t7709 * Dictionary_2_get_Values_m50369_gshared (Dictionary_2_t7704 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m50369(__this, method) (( ValueCollection_t7709 * (*) (Dictionary_2_t7704 *, const MethodInfo*))Dictionary_2_get_Values_m50369_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m50371_gshared (Dictionary_2_t7704 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m50371(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7704 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m50371_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTValue(System.Object)
extern "C" ParseGeoPoint_t1264  Dictionary_2_ToTValue_m50373_gshared (Dictionary_2_t7704 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m50373(__this, ___value, method) (( ParseGeoPoint_t1264  (*) (Dictionary_2_t7704 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m50373_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m50375_gshared (Dictionary_2_t7704 * __this, KeyValuePair_2_t7597  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m50375(__this, ___pair, method) (( bool (*) (Dictionary_2_t7704 *, KeyValuePair_2_t7597 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m50375_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t7707  Dictionary_2_GetEnumerator_m50377_gshared (Dictionary_2_t7704 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m50377(__this, method) (( Enumerator_t7707  (*) (Dictionary_2_t7704 *, const MethodInfo*))Dictionary_2_GetEnumerator_m50377_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__2_m50379_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1264  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m50379(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1264 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m50379_gshared)(__this /* static, unused */, ___key, ___value, method)
