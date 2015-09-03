#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7651;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1240;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9840;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Double>
struct KeyCollection_t7652;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Double>
struct ValueCollection_t7656;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1204;
// System.Collections.Generic.IDictionary`2<System.Object,System.Double>
struct IDictionary_2_t9944;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>[]
struct KeyValuePair_2U5BU5D_t8400;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
struct IEnumerator_1_t7840;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__52.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor()
extern "C" void Dictionary_2__ctor_m49559_gshared (Dictionary_2_t7651 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m49559(__this, method) (( void (*) (Dictionary_2_t7651 *, const MethodInfo*))Dictionary_2__ctor_m49559_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m49561_gshared (Dictionary_2_t7651 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m49561(__this, ___comparer, method) (( void (*) (Dictionary_2_t7651 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m49563_gshared (Dictionary_2_t7651 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m49563(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7651 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49563_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m49565_gshared (Dictionary_2_t7651 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m49565(__this, ___capacity, method) (( void (*) (Dictionary_2_t7651 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m49565_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m49567_gshared (Dictionary_2_t7651 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m49567(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7651 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m49567_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m49569_gshared (Dictionary_2_t7651 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m49569(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7651 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m49569_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49571_gshared (Dictionary_2_t7651 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49571(__this, method) (( Object_t* (*) (Dictionary_2_t7651 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m49571_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49573_gshared (Dictionary_2_t7651 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49573(__this, method) (( Object_t* (*) (Dictionary_2_t7651 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m49573_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m49575_gshared (Dictionary_2_t7651 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m49575(__this, method) (( Object_t * (*) (Dictionary_2_t7651 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m49575_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m49577_gshared (Dictionary_2_t7651 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m49577(__this, method) (( Object_t * (*) (Dictionary_2_t7651 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m49577_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m49579_gshared (Dictionary_2_t7651 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m49579(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7651 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m49579_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m49581_gshared (Dictionary_2_t7651 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m49581(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7651 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m49581_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m49583_gshared (Dictionary_2_t7651 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m49583(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7651 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m49583_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m49585_gshared (Dictionary_2_t7651 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m49585(__this, ___key, method) (( bool (*) (Dictionary_2_t7651 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m49585_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m49587_gshared (Dictionary_2_t7651 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m49587(__this, ___key, method) (( void (*) (Dictionary_2_t7651 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m49587_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49589_gshared (Dictionary_2_t7651 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49589(__this, method) (( bool (*) (Dictionary_2_t7651 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m49589_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49591_gshared (Dictionary_2_t7651 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49591(__this, method) (( Object_t * (*) (Dictionary_2_t7651 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m49591_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49593_gshared (Dictionary_2_t7651 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49593(__this, method) (( bool (*) (Dictionary_2_t7651 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49593_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49595_gshared (Dictionary_2_t7651 * __this, KeyValuePair_2_t7577  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49595(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7651 *, KeyValuePair_2_t7577 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m49595_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49597_gshared (Dictionary_2_t7651 * __this, KeyValuePair_2_t7577  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49597(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7651 *, KeyValuePair_2_t7577 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m49597_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49599_gshared (Dictionary_2_t7651 * __this, KeyValuePair_2U5BU5D_t8400* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49599(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7651 *, KeyValuePair_2U5BU5D_t8400*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m49599_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49601_gshared (Dictionary_2_t7651 * __this, KeyValuePair_2_t7577  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49601(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7651 *, KeyValuePair_2_t7577 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m49601_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m49603_gshared (Dictionary_2_t7651 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m49603(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7651 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m49603_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49605_gshared (Dictionary_2_t7651 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49605(__this, method) (( Object_t * (*) (Dictionary_2_t7651 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m49605_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49607_gshared (Dictionary_2_t7651 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49607(__this, method) (( Object_t* (*) (Dictionary_2_t7651 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m49607_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Double>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49609_gshared (Dictionary_2_t7651 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49609(__this, method) (( Object_t * (*) (Dictionary_2_t7651 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m49609_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m49611_gshared (Dictionary_2_t7651 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m49611(__this, method) (( int32_t (*) (Dictionary_2_t7651 *, const MethodInfo*))Dictionary_2_get_Count_m49611_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Item(TKey)
extern "C" double Dictionary_2_get_Item_m49613_gshared (Dictionary_2_t7651 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m49613(__this, ___key, method) (( double (*) (Dictionary_2_t7651 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m49613_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m49615_gshared (Dictionary_2_t7651 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m49615(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7651 *, Object_t *, double, const MethodInfo*))Dictionary_2_set_Item_m49615_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m49617_gshared (Dictionary_2_t7651 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m49617(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7651 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m49617_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m49619_gshared (Dictionary_2_t7651 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m49619(__this, ___size, method) (( void (*) (Dictionary_2_t7651 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m49619_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m49621_gshared (Dictionary_2_t7651 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m49621(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7651 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m49621_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7577  Dictionary_2_make_pair_m49623_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m49623(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7577  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_make_pair_m49623_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m49625_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m49625(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_key_m49625_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::pick_value(TKey,TValue)
extern "C" double Dictionary_2_pick_value_m49627_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m49627(__this /* static, unused */, ___key, ___value, method) (( double (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_pick_value_m49627_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m49629_gshared (Dictionary_2_t7651 * __this, KeyValuePair_2U5BU5D_t8400* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m49629(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7651 *, KeyValuePair_2U5BU5D_t8400*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m49629_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Resize()
extern "C" void Dictionary_2_Resize_m49631_gshared (Dictionary_2_t7651 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m49631(__this, method) (( void (*) (Dictionary_2_t7651 *, const MethodInfo*))Dictionary_2_Resize_m49631_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m49633_gshared (Dictionary_2_t7651 * __this, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_Add_m49633(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7651 *, Object_t *, double, const MethodInfo*))Dictionary_2_Add_m49633_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Clear()
extern "C" void Dictionary_2_Clear_m49635_gshared (Dictionary_2_t7651 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m49635(__this, method) (( void (*) (Dictionary_2_t7651 *, const MethodInfo*))Dictionary_2_Clear_m49635_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m49637_gshared (Dictionary_2_t7651 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m49637(__this, ___key, method) (( bool (*) (Dictionary_2_t7651 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m49637_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m49639_gshared (Dictionary_2_t7651 * __this, double ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m49639(__this, ___value, method) (( bool (*) (Dictionary_2_t7651 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m49639_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m49641_gshared (Dictionary_2_t7651 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m49641(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7651 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m49641_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Double>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m49643_gshared (Dictionary_2_t7651 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m49643(__this, ___sender, method) (( void (*) (Dictionary_2_t7651 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m49643_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m49645_gshared (Dictionary_2_t7651 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m49645(__this, ___key, method) (( bool (*) (Dictionary_2_t7651 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m49645_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m49647_gshared (Dictionary_2_t7651 * __this, Object_t * ___key, double* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m49647(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7651 *, Object_t *, double*, const MethodInfo*))Dictionary_2_TryGetValue_m49647_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Keys()
extern "C" KeyCollection_t7652 * Dictionary_2_get_Keys_m49649_gshared (Dictionary_2_t7651 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m49649(__this, method) (( KeyCollection_t7652 * (*) (Dictionary_2_t7651 *, const MethodInfo*))Dictionary_2_get_Keys_m49649_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::get_Values()
extern "C" ValueCollection_t7656 * Dictionary_2_get_Values_m49651_gshared (Dictionary_2_t7651 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m49651(__this, method) (( ValueCollection_t7656 * (*) (Dictionary_2_t7651 *, const MethodInfo*))Dictionary_2_get_Values_m49651_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m49653_gshared (Dictionary_2_t7651 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m49653(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7651 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m49653_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ToTValue(System.Object)
extern "C" double Dictionary_2_ToTValue_m49655_gshared (Dictionary_2_t7651 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m49655(__this, ___value, method) (( double (*) (Dictionary_2_t7651 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m49655_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m49657_gshared (Dictionary_2_t7651 * __this, KeyValuePair_2_t7577  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m49657(__this, ___pair, method) (( bool (*) (Dictionary_2_t7651 *, KeyValuePair_2_t7577 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m49657_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Double>::GetEnumerator()
extern "C" Enumerator_t7654  Dictionary_2_GetEnumerator_m49659_gshared (Dictionary_2_t7651 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m49659(__this, method) (( Enumerator_t7654  (*) (Dictionary_2_t7651 *, const MethodInfo*))Dictionary_2_GetEnumerator_m49659_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Double>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2156  Dictionary_2_U3CCopyToU3Em__2_m49661_gshared (Object_t * __this /* static, unused */, Object_t * ___key, double ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m49661(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, Object_t *, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m49661_gshared)(__this /* static, unused */, ___key, ___value, method)
