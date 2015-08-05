#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.DateTime>
struct Dictionary_2_t7029;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9117;
// System.Collections.ICollection
struct ICollection_t705;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.DateTime>
struct KeyCollection_t7031;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.DateTime>
struct ValueCollection_t7032;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5334;
// System.Collections.Generic.IDictionary`2<System.String,System.DateTime>
struct IDictionary_2_t6945;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2870;
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7909;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct IEnumerator_1_t7892;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3912;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__52.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_61MethodDeclarations.h"
#define Dictionary_2__ctor_m44527(__this, method) (( void (*) (Dictionary_2_t7029 *, const MethodInfo*))Dictionary_2__ctor_m44528_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44529(__this, ___comparer, method) (( void (*) (Dictionary_2_t7029 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44530_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m44531(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7029 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44532_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Int32)
#define Dictionary_2__ctor_m44533(__this, ___capacity, method) (( void (*) (Dictionary_2_t7029 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44535(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7029 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44536_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m44537(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7029 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2__ctor_m44538_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44539(__this, method) (( Object_t* (*) (Dictionary_2_t7029 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44540_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44541(__this, method) (( Object_t* (*) (Dictionary_2_t7029 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44542_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44543(__this, method) (( Object_t * (*) (Dictionary_2_t7029 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44544_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44545(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7029 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44546_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44547(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7029 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44548_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m44549(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7029 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44550_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m44551(__this, ___key, method) (( bool (*) (Dictionary_2_t7029 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44552_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m44553(__this, ___key, method) (( void (*) (Dictionary_2_t7029 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44554_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44555(__this, method) (( bool (*) (Dictionary_2_t7029 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44556_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44557(__this, method) (( Object_t * (*) (Dictionary_2_t7029 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44558_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44559(__this, method) (( bool (*) (Dictionary_2_t7029 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44560_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44561(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7029 *, KeyValuePair_2_t7030 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44562_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44563(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7029 *, KeyValuePair_2_t7030 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44564_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44565(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7029 *, KeyValuePair_2U5BU5D_t7909*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44566_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44567(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7029 *, KeyValuePair_2_t7030 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44568_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44569(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7029 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44570_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44571(__this, method) (( Object_t * (*) (Dictionary_2_t7029 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44572_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44573(__this, method) (( Object_t* (*) (Dictionary_2_t7029 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44574_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44575(__this, method) (( Object_t * (*) (Dictionary_2_t7029 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44576_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Count()
#define Dictionary_2_get_Count_m44577(__this, method) (( int32_t (*) (Dictionary_2_t7029 *, const MethodInfo*))Dictionary_2_get_Count_m44578_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Item(TKey)
#define Dictionary_2_get_Item_m44579(__this, ___key, method) (( DateTime_t287  (*) (Dictionary_2_t7029 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m44580_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m44581(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7029 *, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_set_Item_m44582_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m44583(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7029 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44584_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m44585(__this, ___size, method) (( void (*) (Dictionary_2_t7029 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44586_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m44587(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7029 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44588_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m44589(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7030  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_make_pair_m44590_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m44591(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_key_m44592_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m44593(__this /* static, unused */, ___key, ___value, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_pick_value_m44594_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m44595(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7029 *, KeyValuePair_2U5BU5D_t7909*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44596_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Resize()
#define Dictionary_2_Resize_m44597(__this, method) (( void (*) (Dictionary_2_t7029 *, const MethodInfo*))Dictionary_2_Resize_m44598_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Add(TKey,TValue)
#define Dictionary_2_Add_m44599(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7029 *, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_Add_m44600_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Clear()
#define Dictionary_2_Clear_m44601(__this, method) (( void (*) (Dictionary_2_t7029 *, const MethodInfo*))Dictionary_2_Clear_m44602_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m44603(__this, ___key, method) (( bool (*) (Dictionary_2_t7029 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m44604_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m44605(__this, ___value, method) (( bool (*) (Dictionary_2_t7029 *, DateTime_t287 , const MethodInfo*))Dictionary_2_ContainsValue_m44606_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m44607(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7029 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2_GetObjectData_m44608_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m44609(__this, ___sender, method) (( void (*) (Dictionary_2_t7029 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44610_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::Remove(TKey)
#define Dictionary_2_Remove_m44611(__this, ___key, method) (( bool (*) (Dictionary_2_t7029 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m44612_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m44613(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7029 *, String_t*, DateTime_t287 *, const MethodInfo*))Dictionary_2_TryGetValue_m44614_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Keys()
#define Dictionary_2_get_Keys_m44615(__this, method) (( KeyCollection_t7031 * (*) (Dictionary_2_t7029 *, const MethodInfo*))Dictionary_2_get_Keys_m44616_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::get_Values()
#define Dictionary_2_get_Values_m44617(__this, method) (( ValueCollection_t7032 * (*) (Dictionary_2_t7029 *, const MethodInfo*))Dictionary_2_get_Values_m44618_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m44619(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7029 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44620_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m44621(__this, ___value, method) (( DateTime_t287  (*) (Dictionary_2_t7029 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44622_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m44623(__this, ___pair, method) (( bool (*) (Dictionary_2_t7029 *, KeyValuePair_2_t7030 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44624_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m44625(__this, method) (( Enumerator_t7033  (*) (Dictionary_2_t7029 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44626_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m44627(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2089  (*) (Object_t * /* static, unused */, String_t*, DateTime_t287 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44628_gshared)(__this /* static, unused */, ___key, ___value, method)
