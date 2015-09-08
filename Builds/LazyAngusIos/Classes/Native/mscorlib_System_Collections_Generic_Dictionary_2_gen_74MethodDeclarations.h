#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t9018;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9708;
// System.Collections.ICollection
struct ICollection_t769;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t9019;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t9023;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1205;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t10250;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2937;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8258;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t7820;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t799;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__65.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m65771_gshared (Dictionary_2_t9018 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m65771(__this, method) (( void (*) (Dictionary_2_t9018 *, const MethodInfo*))Dictionary_2__ctor_m65771_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m65773_gshared (Dictionary_2_t9018 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m65773(__this, ___comparer, method) (( void (*) (Dictionary_2_t9018 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m65773_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m65775_gshared (Dictionary_2_t9018 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m65775(__this, ___dictionary, method) (( void (*) (Dictionary_2_t9018 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m65775_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m65777_gshared (Dictionary_2_t9018 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m65777(__this, ___capacity, method) (( void (*) (Dictionary_2_t9018 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m65777_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m65779_gshared (Dictionary_2_t9018 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m65779(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t9018 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m65779_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m65781_gshared (Dictionary_2_t9018 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m65781(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t9018 *, SerializationInfo_t2937 *, StreamingContext_t2938 , const MethodInfo*))Dictionary_2__ctor_m65781_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m65783_gshared (Dictionary_2_t9018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m65783(__this, method) (( Object_t* (*) (Dictionary_2_t9018 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m65783_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m65785_gshared (Dictionary_2_t9018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m65785(__this, method) (( Object_t* (*) (Dictionary_2_t9018 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m65785_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m65787_gshared (Dictionary_2_t9018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m65787(__this, method) (( Object_t * (*) (Dictionary_2_t9018 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m65787_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m65789_gshared (Dictionary_2_t9018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m65789(__this, method) (( Object_t * (*) (Dictionary_2_t9018 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m65789_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m65791_gshared (Dictionary_2_t9018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m65791(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t9018 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m65791_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m65793_gshared (Dictionary_2_t9018 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m65793(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9018 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m65793_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m65795_gshared (Dictionary_2_t9018 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m65795(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9018 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m65795_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m65797_gshared (Dictionary_2_t9018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m65797(__this, ___key, method) (( bool (*) (Dictionary_2_t9018 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m65797_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m65799_gshared (Dictionary_2_t9018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m65799(__this, ___key, method) (( void (*) (Dictionary_2_t9018 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m65799_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m65801_gshared (Dictionary_2_t9018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m65801(__this, method) (( bool (*) (Dictionary_2_t9018 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m65801_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m65803_gshared (Dictionary_2_t9018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m65803(__this, method) (( Object_t * (*) (Dictionary_2_t9018 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m65803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m65805_gshared (Dictionary_2_t9018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m65805(__this, method) (( bool (*) (Dictionary_2_t9018 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m65805_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m65807_gshared (Dictionary_2_t9018 * __this, KeyValuePair_2_t7815  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m65807(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t9018 *, KeyValuePair_2_t7815 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m65807_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m65809_gshared (Dictionary_2_t9018 * __this, KeyValuePair_2_t7815  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m65809(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t9018 *, KeyValuePair_2_t7815 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m65809_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m65811_gshared (Dictionary_2_t9018 * __this, KeyValuePair_2U5BU5D_t8258* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m65811(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9018 *, KeyValuePair_2U5BU5D_t8258*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m65811_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m65813_gshared (Dictionary_2_t9018 * __this, KeyValuePair_2_t7815  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m65813(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t9018 *, KeyValuePair_2_t7815 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m65813_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m65815_gshared (Dictionary_2_t9018 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m65815(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9018 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m65815_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m65817_gshared (Dictionary_2_t9018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m65817(__this, method) (( Object_t * (*) (Dictionary_2_t9018 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m65817_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m65819_gshared (Dictionary_2_t9018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m65819(__this, method) (( Object_t* (*) (Dictionary_2_t9018 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m65819_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m65821_gshared (Dictionary_2_t9018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m65821(__this, method) (( Object_t * (*) (Dictionary_2_t9018 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m65821_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m65823_gshared (Dictionary_2_t9018 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m65823(__this, method) (( int32_t (*) (Dictionary_2_t9018 *, const MethodInfo*))Dictionary_2_get_Count_m65823_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m65825_gshared (Dictionary_2_t9018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m65825(__this, ___key, method) (( int64_t (*) (Dictionary_2_t9018 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m65825_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m65827_gshared (Dictionary_2_t9018 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m65827(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9018 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m65827_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m65829_gshared (Dictionary_2_t9018 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m65829(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t9018 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m65829_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m65831_gshared (Dictionary_2_t9018 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m65831(__this, ___size, method) (( void (*) (Dictionary_2_t9018 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m65831_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m65833_gshared (Dictionary_2_t9018 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m65833(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9018 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m65833_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7815  Dictionary_2_make_pair_m65835_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m65835(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7815  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m65835_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m65837_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m65837(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m65837_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m65839_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m65839(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m65839_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m65841_gshared (Dictionary_2_t9018 * __this, KeyValuePair_2U5BU5D_t8258* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m65841(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t9018 *, KeyValuePair_2U5BU5D_t8258*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m65841_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m65843_gshared (Dictionary_2_t9018 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m65843(__this, method) (( void (*) (Dictionary_2_t9018 *, const MethodInfo*))Dictionary_2_Resize_m65843_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m65845_gshared (Dictionary_2_t9018 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m65845(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t9018 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m65845_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m65847_gshared (Dictionary_2_t9018 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m65847(__this, method) (( void (*) (Dictionary_2_t9018 *, const MethodInfo*))Dictionary_2_Clear_m65847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m65849_gshared (Dictionary_2_t9018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m65849(__this, ___key, method) (( bool (*) (Dictionary_2_t9018 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m65849_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m65851_gshared (Dictionary_2_t9018 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m65851(__this, ___value, method) (( bool (*) (Dictionary_2_t9018 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m65851_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m65853_gshared (Dictionary_2_t9018 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m65853(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t9018 *, SerializationInfo_t2937 *, StreamingContext_t2938 , const MethodInfo*))Dictionary_2_GetObjectData_m65853_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m65855_gshared (Dictionary_2_t9018 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m65855(__this, ___sender, method) (( void (*) (Dictionary_2_t9018 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m65855_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m65857_gshared (Dictionary_2_t9018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m65857(__this, ___key, method) (( bool (*) (Dictionary_2_t9018 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m65857_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m65859_gshared (Dictionary_2_t9018 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m65859(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t9018 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m65859_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t9019 * Dictionary_2_get_Keys_m65861_gshared (Dictionary_2_t9018 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m65861(__this, method) (( KeyCollection_t9019 * (*) (Dictionary_2_t9018 *, const MethodInfo*))Dictionary_2_get_Keys_m65861_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t9023 * Dictionary_2_get_Values_m65863_gshared (Dictionary_2_t9018 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m65863(__this, method) (( ValueCollection_t9023 * (*) (Dictionary_2_t9018 *, const MethodInfo*))Dictionary_2_get_Values_m65863_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m65865_gshared (Dictionary_2_t9018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m65865(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t9018 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m65865_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m65867_gshared (Dictionary_2_t9018 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m65867(__this, ___value, method) (( int64_t (*) (Dictionary_2_t9018 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m65867_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m65869_gshared (Dictionary_2_t9018 * __this, KeyValuePair_2_t7815  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m65869(__this, ___pair, method) (( bool (*) (Dictionary_2_t9018 *, KeyValuePair_2_t7815 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m65869_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t9021  Dictionary_2_GetEnumerator_m65871_gshared (Dictionary_2_t9018 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m65871(__this, method) (( Enumerator_t9021  (*) (Dictionary_2_t9018 *, const MethodInfo*))Dictionary_2_GetEnumerator_m65871_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2157  Dictionary_2_U3CCopyToU3Em__2_m65873_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m65873(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2157  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m65873_gshared)(__this /* static, unused */, ___key, ___value, method)
