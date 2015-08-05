#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7036;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1172;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9118;
// System.Collections.ICollection
struct ICollection_t707;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.DateTime>
struct KeyCollection_t7037;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.DateTime>
struct ValueCollection_t7041;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1136;
// System.Collections.Generic.IDictionary`2<System.Object,System.DateTime>
struct IDictionary_2_t9228;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7898;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct IEnumerator_1_t7891;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__53.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor()
extern "C" void Dictionary_2__ctor_m44536_gshared (Dictionary_2_t7036 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m44536(__this, method) (( void (*) (Dictionary_2_t7036 *, const MethodInfo*))Dictionary_2__ctor_m44536_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44538_gshared (Dictionary_2_t7036 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44538(__this, ___comparer, method) (( void (*) (Dictionary_2_t7036 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44538_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m44540_gshared (Dictionary_2_t7036 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m44540(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7036 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44540_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m44542_gshared (Dictionary_2_t7036 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m44542(__this, ___capacity, method) (( void (*) (Dictionary_2_t7036 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44542_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m44544_gshared (Dictionary_2_t7036 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m44544(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7036 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44544_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m44546_gshared (Dictionary_2_t7036 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m44546(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7036 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m44546_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44548_gshared (Dictionary_2_t7036 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44548(__this, method) (( Object_t* (*) (Dictionary_2_t7036 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44548_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44550_gshared (Dictionary_2_t7036 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44550(__this, method) (( Object_t* (*) (Dictionary_2_t7036 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44550_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m44552_gshared (Dictionary_2_t7036 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44552(__this, method) (( Object_t * (*) (Dictionary_2_t7036 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44552_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m44554_gshared (Dictionary_2_t7036 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44554(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7036 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44554_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m44556_gshared (Dictionary_2_t7036 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44556(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7036 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44556_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m44558_gshared (Dictionary_2_t7036 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m44558(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7036 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44558_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m44560_gshared (Dictionary_2_t7036 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m44560(__this, ___key, method) (( bool (*) (Dictionary_2_t7036 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44560_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m44562_gshared (Dictionary_2_t7036 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m44562(__this, ___key, method) (( void (*) (Dictionary_2_t7036 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44562_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44564_gshared (Dictionary_2_t7036 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44564(__this, method) (( bool (*) (Dictionary_2_t7036 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44564_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44566_gshared (Dictionary_2_t7036 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44566(__this, method) (( Object_t * (*) (Dictionary_2_t7036 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44566_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44568_gshared (Dictionary_2_t7036 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44568(__this, method) (( bool (*) (Dictionary_2_t7036 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44568_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44570_gshared (Dictionary_2_t7036 * __this, KeyValuePair_2_t6947  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44570(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7036 *, KeyValuePair_2_t6947 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44570_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44572_gshared (Dictionary_2_t7036 * __this, KeyValuePair_2_t6947  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44572(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7036 *, KeyValuePair_2_t6947 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44572_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44574_gshared (Dictionary_2_t7036 * __this, KeyValuePair_2U5BU5D_t7898* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44574(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7036 *, KeyValuePair_2U5BU5D_t7898*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44574_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44576_gshared (Dictionary_2_t7036 * __this, KeyValuePair_2_t6947  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44576(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7036 *, KeyValuePair_2_t6947 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44576_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m44578_gshared (Dictionary_2_t7036 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44578(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7036 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44578_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44580_gshared (Dictionary_2_t7036 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44580(__this, method) (( Object_t * (*) (Dictionary_2_t7036 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44580_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44582_gshared (Dictionary_2_t7036 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44582(__this, method) (( Object_t* (*) (Dictionary_2_t7036 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44582_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44584_gshared (Dictionary_2_t7036 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44584(__this, method) (( Object_t * (*) (Dictionary_2_t7036 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44584_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m44586_gshared (Dictionary_2_t7036 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m44586(__this, method) (( int32_t (*) (Dictionary_2_t7036 *, const MethodInfo*))Dictionary_2_get_Count_m44586_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Item(TKey)
extern "C" DateTime_t287  Dictionary_2_get_Item_m44588_gshared (Dictionary_2_t7036 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m44588(__this, ___key, method) (( DateTime_t287  (*) (Dictionary_2_t7036 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m44588_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m44590_gshared (Dictionary_2_t7036 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m44590(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7036 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_set_Item_m44590_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m44592_gshared (Dictionary_2_t7036 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m44592(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7036 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44592_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m44594_gshared (Dictionary_2_t7036 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m44594(__this, ___size, method) (( void (*) (Dictionary_2_t7036 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44594_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m44596_gshared (Dictionary_2_t7036 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m44596(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7036 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44596_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6947  Dictionary_2_make_pair_m44598_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m44598(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6947  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_make_pair_m44598_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m44600_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m44600(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_key_m44600_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::pick_value(TKey,TValue)
extern "C" DateTime_t287  Dictionary_2_pick_value_m44602_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m44602(__this /* static, unused */, ___key, ___value, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_value_m44602_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m44604_gshared (Dictionary_2_t7036 * __this, KeyValuePair_2U5BU5D_t7898* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m44604(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7036 *, KeyValuePair_2U5BU5D_t7898*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44604_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Resize()
extern "C" void Dictionary_2_Resize_m44606_gshared (Dictionary_2_t7036 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m44606(__this, method) (( void (*) (Dictionary_2_t7036 *, const MethodInfo*))Dictionary_2_Resize_m44606_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m44608_gshared (Dictionary_2_t7036 * __this, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m44608(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7036 *, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_Add_m44608_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Clear()
extern "C" void Dictionary_2_Clear_m44610_gshared (Dictionary_2_t7036 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m44610(__this, method) (( void (*) (Dictionary_2_t7036 *, const MethodInfo*))Dictionary_2_Clear_m44610_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m44612_gshared (Dictionary_2_t7036 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m44612(__this, ___key, method) (( bool (*) (Dictionary_2_t7036 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m44612_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m44614_gshared (Dictionary_2_t7036 * __this, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m44614(__this, ___value, method) (( bool (*) (Dictionary_2_t7036 *, DateTime_t287 , const MethodInfo*))Dictionary_2_ContainsValue_m44614_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m44616_gshared (Dictionary_2_t7036 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m44616(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7036 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m44616_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m44618_gshared (Dictionary_2_t7036 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m44618(__this, ___sender, method) (( void (*) (Dictionary_2_t7036 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44618_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m44620_gshared (Dictionary_2_t7036 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m44620(__this, ___key, method) (( bool (*) (Dictionary_2_t7036 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m44620_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m44622_gshared (Dictionary_2_t7036 * __this, Object_t * ___key, DateTime_t287 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m44622(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7036 *, Object_t *, DateTime_t287 *, const MethodInfo*))Dictionary_2_TryGetValue_m44622_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Keys()
extern "C" KeyCollection_t7037 * Dictionary_2_get_Keys_m44624_gshared (Dictionary_2_t7036 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m44624(__this, method) (( KeyCollection_t7037 * (*) (Dictionary_2_t7036 *, const MethodInfo*))Dictionary_2_get_Keys_m44624_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::get_Values()
extern "C" ValueCollection_t7041 * Dictionary_2_get_Values_m44626_gshared (Dictionary_2_t7036 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m44626(__this, method) (( ValueCollection_t7041 * (*) (Dictionary_2_t7036 *, const MethodInfo*))Dictionary_2_get_Values_m44626_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m44628_gshared (Dictionary_2_t7036 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m44628(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7036 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44628_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ToTValue(System.Object)
extern "C" DateTime_t287  Dictionary_2_ToTValue_m44630_gshared (Dictionary_2_t7036 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m44630(__this, ___value, method) (( DateTime_t287  (*) (Dictionary_2_t7036 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44630_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m44632_gshared (Dictionary_2_t7036 * __this, KeyValuePair_2_t6947  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m44632(__this, ___pair, method) (( bool (*) (Dictionary_2_t7036 *, KeyValuePair_2_t6947 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44632_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::GetEnumerator()
extern "C" Enumerator_t7039  Dictionary_2_GetEnumerator_m44634_gshared (Dictionary_2_t7036 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m44634(__this, method) (( Enumerator_t7039  (*) (Dictionary_2_t7036 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44634_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2090  Dictionary_2_U3CCopyToU3Em__0_m44636_gshared (Object_t * __this /* static, unused */, Object_t * ___key, DateTime_t287  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m44636(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, Object_t *, DateTime_t287 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44636_gshared)(__this /* static, unused */, ___key, ___value, method)
