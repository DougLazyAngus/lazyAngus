#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t6577;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9707;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t6578;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_t6582;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6575;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Object>
struct IDictionary_2_t6569;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t9708;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct IEnumerator_1_t9709;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_40.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__35.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m35772_gshared (Dictionary_2_t6577 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m35772(__this, method) (( void (*) (Dictionary_2_t6577 *, const MethodInfo*))Dictionary_2__ctor_m35772_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m35773_gshared (Dictionary_2_t6577 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m35773(__this, ___comparer, method) (( void (*) (Dictionary_2_t6577 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m35773_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m35774_gshared (Dictionary_2_t6577 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m35774(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6577 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m35774_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m35775_gshared (Dictionary_2_t6577 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m35775(__this, ___capacity, method) (( void (*) (Dictionary_2_t6577 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m35775_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m35776_gshared (Dictionary_2_t6577 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m35776(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6577 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m35776_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m35777_gshared (Dictionary_2_t6577 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m35777(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6577 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m35777_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m35778_gshared (Dictionary_2_t6577 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m35778(__this, method) (( Object_t* (*) (Dictionary_2_t6577 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m35778_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m35779_gshared (Dictionary_2_t6577 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m35779(__this, method) (( Object_t* (*) (Dictionary_2_t6577 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m35779_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m35780_gshared (Dictionary_2_t6577 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m35780(__this, method) (( Object_t * (*) (Dictionary_2_t6577 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m35780_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m35781_gshared (Dictionary_2_t6577 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m35781(__this, method) (( Object_t * (*) (Dictionary_2_t6577 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m35781_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m35782_gshared (Dictionary_2_t6577 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m35782(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6577 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m35782_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m35783_gshared (Dictionary_2_t6577 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m35783(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6577 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m35783_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m35784_gshared (Dictionary_2_t6577 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m35784(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6577 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m35784_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m35785_gshared (Dictionary_2_t6577 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m35785(__this, ___key, method) (( bool (*) (Dictionary_2_t6577 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m35785_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m35786_gshared (Dictionary_2_t6577 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m35786(__this, ___key, method) (( void (*) (Dictionary_2_t6577 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m35786_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m35787_gshared (Dictionary_2_t6577 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m35787(__this, method) (( bool (*) (Dictionary_2_t6577 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m35787_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m35788_gshared (Dictionary_2_t6577 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m35788(__this, method) (( Object_t * (*) (Dictionary_2_t6577 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m35788_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m35789_gshared (Dictionary_2_t6577 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m35789(__this, method) (( bool (*) (Dictionary_2_t6577 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m35789_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m35790_gshared (Dictionary_2_t6577 * __this, KeyValuePair_2_t6572  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m35790(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6577 *, KeyValuePair_2_t6572 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m35790_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m35791_gshared (Dictionary_2_t6577 * __this, KeyValuePair_2_t6572  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m35791(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6577 *, KeyValuePair_2_t6572 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m35791_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m35792_gshared (Dictionary_2_t6577 * __this, KeyValuePair_2U5BU5D_t9708* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m35792(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6577 *, KeyValuePair_2U5BU5D_t9708*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m35792_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m35793_gshared (Dictionary_2_t6577 * __this, KeyValuePair_2_t6572  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m35793(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6577 *, KeyValuePair_2_t6572 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m35793_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m35794_gshared (Dictionary_2_t6577 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m35794(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6577 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m35794_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m35795_gshared (Dictionary_2_t6577 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m35795(__this, method) (( Object_t * (*) (Dictionary_2_t6577 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m35795_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m35796_gshared (Dictionary_2_t6577 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m35796(__this, method) (( Object_t* (*) (Dictionary_2_t6577 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m35796_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m35797_gshared (Dictionary_2_t6577 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m35797(__this, method) (( Object_t * (*) (Dictionary_2_t6577 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m35797_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m35798_gshared (Dictionary_2_t6577 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m35798(__this, method) (( int32_t (*) (Dictionary_2_t6577 *, const MethodInfo*))Dictionary_2_get_Count_m35798_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m35799_gshared (Dictionary_2_t6577 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m35799(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6577 *, int64_t, const MethodInfo*))Dictionary_2_get_Item_m35799_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m35800_gshared (Dictionary_2_t6577 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m35800(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6577 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m35800_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m35801_gshared (Dictionary_2_t6577 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m35801(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6577 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m35801_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m35802_gshared (Dictionary_2_t6577 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m35802(__this, ___size, method) (( void (*) (Dictionary_2_t6577 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m35802_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m35803_gshared (Dictionary_2_t6577 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m35803(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6577 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m35803_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6572  Dictionary_2_make_pair_m35804_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m35804(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6572  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m35804_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m35805_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m35805(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m35805_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m35806_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m35806(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m35806_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m35807_gshared (Dictionary_2_t6577 * __this, KeyValuePair_2U5BU5D_t9708* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m35807(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6577 *, KeyValuePair_2U5BU5D_t9708*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m35807_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m35808_gshared (Dictionary_2_t6577 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m35808(__this, method) (( void (*) (Dictionary_2_t6577 *, const MethodInfo*))Dictionary_2_Resize_m35808_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m35809_gshared (Dictionary_2_t6577 * __this, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m35809(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6577 *, int64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m35809_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m35810_gshared (Dictionary_2_t6577 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m35810(__this, method) (( void (*) (Dictionary_2_t6577 *, const MethodInfo*))Dictionary_2_Clear_m35810_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m35811_gshared (Dictionary_2_t6577 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m35811(__this, ___key, method) (( bool (*) (Dictionary_2_t6577 *, int64_t, const MethodInfo*))Dictionary_2_ContainsKey_m35811_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m35812_gshared (Dictionary_2_t6577 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m35812(__this, ___value, method) (( bool (*) (Dictionary_2_t6577 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m35812_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m35813_gshared (Dictionary_2_t6577 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m35813(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6577 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m35813_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m35814_gshared (Dictionary_2_t6577 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m35814(__this, ___sender, method) (( void (*) (Dictionary_2_t6577 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m35814_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m35815_gshared (Dictionary_2_t6577 * __this, int64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m35815(__this, ___key, method) (( bool (*) (Dictionary_2_t6577 *, int64_t, const MethodInfo*))Dictionary_2_Remove_m35815_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m35816_gshared (Dictionary_2_t6577 * __this, int64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m35816(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6577 *, int64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m35816_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Keys()
extern "C" KeyCollection_t6578 * Dictionary_2_get_Keys_m35817_gshared (Dictionary_2_t6577 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m35817(__this, method) (( KeyCollection_t6578 * (*) (Dictionary_2_t6577 *, const MethodInfo*))Dictionary_2_get_Keys_m35817_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Values()
extern "C" ValueCollection_t6582 * Dictionary_2_get_Values_m35818_gshared (Dictionary_2_t6577 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m35818(__this, method) (( ValueCollection_t6582 * (*) (Dictionary_2_t6577 *, const MethodInfo*))Dictionary_2_get_Values_m35818_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTKey(System.Object)
extern "C" int64_t Dictionary_2_ToTKey_m35819_gshared (Dictionary_2_t6577 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m35819(__this, ___key, method) (( int64_t (*) (Dictionary_2_t6577 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m35819_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m35820_gshared (Dictionary_2_t6577 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m35820(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t6577 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m35820_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m35821_gshared (Dictionary_2_t6577 * __this, KeyValuePair_2_t6572  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m35821(__this, ___pair, method) (( bool (*) (Dictionary_2_t6577 *, KeyValuePair_2_t6572 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m35821_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetEnumerator()
extern "C" Enumerator_t6580  Dictionary_2_GetEnumerator_m35822_gshared (Dictionary_2_t6577 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m35822(__this, method) (( Enumerator_t6580  (*) (Dictionary_2_t6577 *, const MethodInfo*))Dictionary_2_GetEnumerator_m35822_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__2_m35823_gshared (Object_t * __this /* static, unused */, int64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m35823(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, int64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m35823_gshared)(__this /* static, unused */, ___key, ___value, method)
