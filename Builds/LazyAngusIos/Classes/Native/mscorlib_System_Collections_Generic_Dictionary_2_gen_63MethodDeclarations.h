#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t7063;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1172;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9120;
// System.Collections.ICollection
struct ICollection_t707;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Parse.ParseGeoPoint>
struct KeyCollection_t7064;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Parse.ParseGeoPoint>
struct ValueCollection_t7068;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1136;
// System.Collections.Generic.IDictionary`2<System.Object,Parse.ParseGeoPoint>
struct IDictionary_2_t9237;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t7930;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct IEnumerator_1_t7923;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__56.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor()
extern "C" void Dictionary_2__ctor_m44899_gshared (Dictionary_2_t7063 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m44899(__this, method) (( void (*) (Dictionary_2_t7063 *, const MethodInfo*))Dictionary_2__ctor_m44899_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44901_gshared (Dictionary_2_t7063 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44901(__this, ___comparer, method) (( void (*) (Dictionary_2_t7063 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44901_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m44903_gshared (Dictionary_2_t7063 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m44903(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7063 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44903_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m44905_gshared (Dictionary_2_t7063 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m44905(__this, ___capacity, method) (( void (*) (Dictionary_2_t7063 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44905_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44907_gshared (Dictionary_2_t7063 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44907(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7063 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44907_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m44909_gshared (Dictionary_2_t7063 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m44909(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7063 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m44909_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44911_gshared (Dictionary_2_t7063 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44911(__this, method) (( Object_t* (*) (Dictionary_2_t7063 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44911_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44913_gshared (Dictionary_2_t7063 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44913(__this, method) (( Object_t* (*) (Dictionary_2_t7063 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44913_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m44915_gshared (Dictionary_2_t7063 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44915(__this, method) (( Object_t * (*) (Dictionary_2_t7063 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44915_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m44917_gshared (Dictionary_2_t7063 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44917(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7063 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44917_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m44919_gshared (Dictionary_2_t7063 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44919(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7063 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44919_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m44921_gshared (Dictionary_2_t7063 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m44921(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7063 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44921_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m44923_gshared (Dictionary_2_t7063 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m44923(__this, ___key, method) (( bool (*) (Dictionary_2_t7063 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44923_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m44925_gshared (Dictionary_2_t7063 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m44925(__this, ___key, method) (( void (*) (Dictionary_2_t7063 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44925_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44927_gshared (Dictionary_2_t7063 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44927(__this, method) (( bool (*) (Dictionary_2_t7063 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44927_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44929_gshared (Dictionary_2_t7063 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44929(__this, method) (( Object_t * (*) (Dictionary_2_t7063 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44931_gshared (Dictionary_2_t7063 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44931(__this, method) (( bool (*) (Dictionary_2_t7063 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44931_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44933_gshared (Dictionary_2_t7063 * __this, KeyValuePair_2_t6956  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44933(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7063 *, KeyValuePair_2_t6956 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44933_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44935_gshared (Dictionary_2_t7063 * __this, KeyValuePair_2_t6956  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44935(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7063 *, KeyValuePair_2_t6956 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44935_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44937_gshared (Dictionary_2_t7063 * __this, KeyValuePair_2U5BU5D_t7930* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44937(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7063 *, KeyValuePair_2U5BU5D_t7930*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44937_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44939_gshared (Dictionary_2_t7063 * __this, KeyValuePair_2_t6956  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44939(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7063 *, KeyValuePair_2_t6956 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44939_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m44941_gshared (Dictionary_2_t7063 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44941(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7063 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44941_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44943_gshared (Dictionary_2_t7063 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44943(__this, method) (( Object_t * (*) (Dictionary_2_t7063 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44943_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44945_gshared (Dictionary_2_t7063 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44945(__this, method) (( Object_t* (*) (Dictionary_2_t7063 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44945_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44947_gshared (Dictionary_2_t7063 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44947(__this, method) (( Object_t * (*) (Dictionary_2_t7063 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44947_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m44949_gshared (Dictionary_2_t7063 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m44949(__this, method) (( int32_t (*) (Dictionary_2_t7063 *, const MethodInfo*))Dictionary_2_get_Count_m44949_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Item(TKey)
extern "C" ParseGeoPoint_t1196  Dictionary_2_get_Item_m44951_gshared (Dictionary_2_t7063 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m44951(__this, ___key, method) (( ParseGeoPoint_t1196  (*) (Dictionary_2_t7063 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m44951_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m44953_gshared (Dictionary_2_t7063 * __this, Object_t * ___key, ParseGeoPoint_t1196  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m44953(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7063 *, Object_t *, ParseGeoPoint_t1196 , const MethodInfo*))Dictionary_2_set_Item_m44953_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m44955_gshared (Dictionary_2_t7063 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m44955(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7063 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44955_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m44957_gshared (Dictionary_2_t7063 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m44957(__this, ___size, method) (( void (*) (Dictionary_2_t7063 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44957_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m44959_gshared (Dictionary_2_t7063 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m44959(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7063 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44959_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6956  Dictionary_2_make_pair_m44961_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1196  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m44961(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6956  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1196 , const MethodInfo*))Dictionary_2_make_pair_m44961_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m44963_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1196  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m44963(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1196 , const MethodInfo*))Dictionary_2_pick_key_m44963_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::pick_value(TKey,TValue)
extern "C" ParseGeoPoint_t1196  Dictionary_2_pick_value_m44965_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1196  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m44965(__this /* static, unused */, ___key, ___value, method) (( ParseGeoPoint_t1196  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1196 , const MethodInfo*))Dictionary_2_pick_value_m44965_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m44967_gshared (Dictionary_2_t7063 * __this, KeyValuePair_2U5BU5D_t7930* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m44967(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7063 *, KeyValuePair_2U5BU5D_t7930*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44967_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Resize()
extern "C" void Dictionary_2_Resize_m44969_gshared (Dictionary_2_t7063 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m44969(__this, method) (( void (*) (Dictionary_2_t7063 *, const MethodInfo*))Dictionary_2_Resize_m44969_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m44971_gshared (Dictionary_2_t7063 * __this, Object_t * ___key, ParseGeoPoint_t1196  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m44971(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7063 *, Object_t *, ParseGeoPoint_t1196 , const MethodInfo*))Dictionary_2_Add_m44971_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Clear()
extern "C" void Dictionary_2_Clear_m44973_gshared (Dictionary_2_t7063 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m44973(__this, method) (( void (*) (Dictionary_2_t7063 *, const MethodInfo*))Dictionary_2_Clear_m44973_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m44975_gshared (Dictionary_2_t7063 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m44975(__this, ___key, method) (( bool (*) (Dictionary_2_t7063 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m44975_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m44977_gshared (Dictionary_2_t7063 * __this, ParseGeoPoint_t1196  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m44977(__this, ___value, method) (( bool (*) (Dictionary_2_t7063 *, ParseGeoPoint_t1196 , const MethodInfo*))Dictionary_2_ContainsValue_m44977_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m44979_gshared (Dictionary_2_t7063 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m44979(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7063 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m44979_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m44981_gshared (Dictionary_2_t7063 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m44981(__this, ___sender, method) (( void (*) (Dictionary_2_t7063 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44981_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m44983_gshared (Dictionary_2_t7063 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m44983(__this, ___key, method) (( bool (*) (Dictionary_2_t7063 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m44983_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m44985_gshared (Dictionary_2_t7063 * __this, Object_t * ___key, ParseGeoPoint_t1196 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m44985(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7063 *, Object_t *, ParseGeoPoint_t1196 *, const MethodInfo*))Dictionary_2_TryGetValue_m44985_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Keys()
extern "C" KeyCollection_t7064 * Dictionary_2_get_Keys_m44987_gshared (Dictionary_2_t7063 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m44987(__this, method) (( KeyCollection_t7064 * (*) (Dictionary_2_t7063 *, const MethodInfo*))Dictionary_2_get_Keys_m44987_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::get_Values()
extern "C" ValueCollection_t7068 * Dictionary_2_get_Values_m44989_gshared (Dictionary_2_t7063 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m44989(__this, method) (( ValueCollection_t7068 * (*) (Dictionary_2_t7063 *, const MethodInfo*))Dictionary_2_get_Values_m44989_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m44991_gshared (Dictionary_2_t7063 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m44991(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7063 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44991_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ToTValue(System.Object)
extern "C" ParseGeoPoint_t1196  Dictionary_2_ToTValue_m44993_gshared (Dictionary_2_t7063 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m44993(__this, ___value, method) (( ParseGeoPoint_t1196  (*) (Dictionary_2_t7063 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44993_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m44995_gshared (Dictionary_2_t7063 * __this, KeyValuePair_2_t6956  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m44995(__this, ___pair, method) (( bool (*) (Dictionary_2_t7063 *, KeyValuePair_2_t6956 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44995_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Enumerator_t7066  Dictionary_2_GetEnumerator_m44997_gshared (Dictionary_2_t7063 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m44997(__this, method) (( Enumerator_t7066  (*) (Dictionary_2_t7063 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44997_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2090  Dictionary_2_U3CCopyToU3Em__0_m44999_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ParseGeoPoint_t1196  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m44999(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, Object_t *, ParseGeoPoint_t1196 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44999_gshared)(__this /* static, unused */, ___key, ___value, method)
