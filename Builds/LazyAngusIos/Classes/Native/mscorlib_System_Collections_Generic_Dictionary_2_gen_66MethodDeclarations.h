#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7677;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9842;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>
struct KeyCollection_t7678;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
struct ValueCollection_t7682;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1204;
// System.Collections.Generic.IDictionary`2<System.Object,System.DateTime>
struct IDictionary_2_t9952;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t8539;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t8532;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
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
extern "C" void Dictionary_2__ctor_m49912_gshared (Dictionary_2_t7677 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m49912(__this, method) (( void (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2__ctor_m49912_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m49914_gshared (Dictionary_2_t7677 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m49914(__this, ___comparer, method) (( void (*) (Dictionary_2_t7677 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49914_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m49916_gshared (Dictionary_2_t7677 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m49916(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7677 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49916_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m49918_gshared (Dictionary_2_t7677 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m49918(__this, ___capacity, method) (( void (*) (Dictionary_2_t7677 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m49918_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m49920_gshared (Dictionary_2_t7677 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m49920(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7677 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49920_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m49922_gshared (Dictionary_2_t7677 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m49922(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7677 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m49922_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49924_gshared (Dictionary_2_t7677 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49924(__this, method) (( Object_t* (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49924_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49926_gshared (Dictionary_2_t7677 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49926(__this, method) (( Object_t* (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49926_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m49928_gshared (Dictionary_2_t7677 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m49928(__this, method) (( Object_t * (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m49928_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m49930_gshared (Dictionary_2_t7677 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m49930(__this, method) (( Object_t * (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m49930_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m49932_gshared (Dictionary_2_t7677 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m49932(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7677 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m49932_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m49934_gshared (Dictionary_2_t7677 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m49934(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7677 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m49934_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m49936_gshared (Dictionary_2_t7677 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m49936(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7677 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m49936_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m49938_gshared (Dictionary_2_t7677 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m49938(__this, ___key, method) (( bool (*) (Dictionary_2_t7677 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m49938_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m49940_gshared (Dictionary_2_t7677 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m49940(__this, ___key, method) (( void (*) (Dictionary_2_t7677 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m49940_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49942_gshared (Dictionary_2_t7677 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49942(__this, method) (( bool (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49942_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49944_gshared (Dictionary_2_t7677 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49944(__this, method) (( Object_t * (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49944_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49946_gshared (Dictionary_2_t7677 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49946(__this, method) (( bool (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49946_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49948_gshared (Dictionary_2_t7677 * __this, KeyValuePair_2_t7588  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49948(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7677 *, KeyValuePair_2_t7588 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49948_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49950_gshared (Dictionary_2_t7677 * __this, KeyValuePair_2_t7588  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49950(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7677 *, KeyValuePair_2_t7588 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49950_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49952_gshared (Dictionary_2_t7677 * __this, KeyValuePair_2U5BU5D_t8539* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49952(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7677 *, KeyValuePair_2U5BU5D_t8539*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49952_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49954_gshared (Dictionary_2_t7677 * __this, KeyValuePair_2_t7588  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49954(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7677 *, KeyValuePair_2_t7588 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49954_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m49956_gshared (Dictionary_2_t7677 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m49956(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7677 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m49956_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49958_gshared (Dictionary_2_t7677 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49958(__this, method) (( Object_t * (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49958_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49960_gshared (Dictionary_2_t7677 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49960(__this, method) (( Object_t* (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49960_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49962_gshared (Dictionary_2_t7677 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49962(__this, method) (( Object_t * (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49962_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m49964_gshared (Dictionary_2_t7677 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m49964(__this, method) (( int32_t (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_get_Count_m49964_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Item(TKey)
extern "C" DateTime_t287  Dictionary_2_get_Item_m49966_gshared (Dictionary_2_t7677 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m49966(__this, ___key, method) (( DateTime_t287  (*) (Dictionary_2_t7677 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m49966_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m49968_gshared (Dictionary_2_t7677 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m49968(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7677 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_set_Item_m49968_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m49970_gshared (Dictionary_2_t7677 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m49970(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7677 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m49970_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m49972_gshared (Dictionary_2_t7677 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m49972(__this, ___size, method) (( void (*) (Dictionary_2_t7677 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m49972_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m49974_gshared (Dictionary_2_t7677 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m49974(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7677 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m49974_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7588  Dictionary_2_make_pair_m49976_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m49976(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7588  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_make_pair_m49976_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m49978_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m49978(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_key_m49978_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_value(TKey,TValue)
extern "C" DateTime_t287  Dictionary_2_pick_value_m49980_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m49980(__this /* static, unused */, ___key, ___value, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_value_m49980_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m49982_gshared (Dictionary_2_t7677 * __this, KeyValuePair_2U5BU5D_t8539* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m49982(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7677 *, KeyValuePair_2U5BU5D_t8539*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m49982_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Resize()
extern "C" void Dictionary_2_Resize_m49984_gshared (Dictionary_2_t7677 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m49984(__this, method) (( void (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_Resize_m49984_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m49986_gshared (Dictionary_2_t7677 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m49986(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7677 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_Add_m49986_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Clear()
extern "C" void Dictionary_2_Clear_m49988_gshared (Dictionary_2_t7677 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m49988(__this, method) (( void (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_Clear_m49988_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m49990_gshared (Dictionary_2_t7677 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m49990(__this, ___key, method) (( bool (*) (Dictionary_2_t7677 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m49990_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m49992_gshared (Dictionary_2_t7677 * __this, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m49992(__this, ___value, method) (( bool (*) (Dictionary_2_t7677 *, DateTime_t287 , const MethodInfo*))Dictionary_2_ContainsValue_m49992_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m49994_gshared (Dictionary_2_t7677 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m49994(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7677 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m49994_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m49996_gshared (Dictionary_2_t7677 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m49996(__this, ___sender, method) (( void (*) (Dictionary_2_t7677 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m49996_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m49998_gshared (Dictionary_2_t7677 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m49998(__this, ___key, method) (( bool (*) (Dictionary_2_t7677 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m49998_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m50000_gshared (Dictionary_2_t7677 * __this, Object_t * ___key, DateTime_t287 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m50000(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7677 *, Object_t *, DateTime_t287 *, const MethodInfo*))Dictionary_2_TryGetValue_m50000_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Keys()
extern "C" KeyCollection_t7678 * Dictionary_2_get_Keys_m50002_gshared (Dictionary_2_t7677 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m50002(__this, method) (( KeyCollection_t7678 * (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_get_Keys_m50002_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Values()
extern "C" ValueCollection_t7682 * Dictionary_2_get_Values_m50004_gshared (Dictionary_2_t7677 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m50004(__this, method) (( ValueCollection_t7682 * (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_get_Values_m50004_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m50006_gshared (Dictionary_2_t7677 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m50006(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7677 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m50006_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTValue(System.Object)
extern "C" DateTime_t287  Dictionary_2_ToTValue_m50008_gshared (Dictionary_2_t7677 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m50008(__this, ___value, method) (( DateTime_t287  (*) (Dictionary_2_t7677 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m50008_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m50010_gshared (Dictionary_2_t7677 * __this, KeyValuePair_2_t7588  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m50010(__this, ___pair, method) (( bool (*) (Dictionary_2_t7677 *, KeyValuePair_2_t7588 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m50010_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetEnumerator()
extern "C" Enumerator_t7680  Dictionary_2_GetEnumerator_m50012_gshared (Dictionary_2_t7677 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m50012(__this, method) (( Enumerator_t7680  (*) (Dictionary_2_t7677 *, const MethodInfo*))Dictionary_2_GetEnumerator_m50012_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__2_m50014_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m50014(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m50014_gshared)(__this /* static, unused */, ___key, ___value, method)
