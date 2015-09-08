#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6775;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9766;
// System.Collections.ICollection
struct ICollection_t769;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t6776;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t6780;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1205;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t9772;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2937;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7856;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t7758;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t799;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__41.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m38126_gshared (Dictionary_2_t6775 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m38126(__this, method) (( void (*) (Dictionary_2_t6775 *, const MethodInfo*))Dictionary_2__ctor_m38126_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m38127_gshared (Dictionary_2_t6775 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m38127(__this, ___comparer, method) (( void (*) (Dictionary_2_t6775 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m38127_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m38129_gshared (Dictionary_2_t6775 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m38129(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6775 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m38129_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m38131_gshared (Dictionary_2_t6775 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m38131(__this, ___capacity, method) (( void (*) (Dictionary_2_t6775 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m38131_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m38133_gshared (Dictionary_2_t6775 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m38133(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6775 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m38133_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m38135_gshared (Dictionary_2_t6775 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m38135(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6775 *, SerializationInfo_t2937 *, StreamingContext_t2938 , const MethodInfo*))Dictionary_2__ctor_m38135_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38137_gshared (Dictionary_2_t6775 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38137(__this, method) (( Object_t* (*) (Dictionary_2_t6775 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38137_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38139_gshared (Dictionary_2_t6775 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38139(__this, method) (( Object_t* (*) (Dictionary_2_t6775 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38139_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m38141_gshared (Dictionary_2_t6775 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m38141(__this, method) (( Object_t * (*) (Dictionary_2_t6775 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m38141_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m38143_gshared (Dictionary_2_t6775 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m38143(__this, method) (( Object_t * (*) (Dictionary_2_t6775 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m38143_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m38145_gshared (Dictionary_2_t6775 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m38145(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6775 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m38145_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m38147_gshared (Dictionary_2_t6775 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m38147(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6775 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m38147_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m38149_gshared (Dictionary_2_t6775 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m38149(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6775 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m38149_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m38151_gshared (Dictionary_2_t6775 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m38151(__this, ___key, method) (( bool (*) (Dictionary_2_t6775 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m38151_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m38153_gshared (Dictionary_2_t6775 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m38153(__this, ___key, method) (( void (*) (Dictionary_2_t6775 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m38153_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38155_gshared (Dictionary_2_t6775 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38155(__this, method) (( bool (*) (Dictionary_2_t6775 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38155_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38157_gshared (Dictionary_2_t6775 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38157(__this, method) (( Object_t * (*) (Dictionary_2_t6775 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38157_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38159_gshared (Dictionary_2_t6775 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38159(__this, method) (( bool (*) (Dictionary_2_t6775 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38159_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38161_gshared (Dictionary_2_t6775 * __this, KeyValuePair_2_t6752  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38161(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6775 *, KeyValuePair_2_t6752 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38161_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38163_gshared (Dictionary_2_t6775 * __this, KeyValuePair_2_t6752  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38163(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6775 *, KeyValuePair_2_t6752 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38163_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38165_gshared (Dictionary_2_t6775 * __this, KeyValuePair_2U5BU5D_t7856* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38165(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6775 *, KeyValuePair_2U5BU5D_t7856*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38165_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38167_gshared (Dictionary_2_t6775 * __this, KeyValuePair_2_t6752  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38167(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6775 *, KeyValuePair_2_t6752 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38167_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m38169_gshared (Dictionary_2_t6775 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m38169(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6775 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m38169_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38171_gshared (Dictionary_2_t6775 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38171(__this, method) (( Object_t * (*) (Dictionary_2_t6775 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38171_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38173_gshared (Dictionary_2_t6775 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38173(__this, method) (( Object_t* (*) (Dictionary_2_t6775 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38173_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38175_gshared (Dictionary_2_t6775 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38175(__this, method) (( Object_t * (*) (Dictionary_2_t6775 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38175_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m38177_gshared (Dictionary_2_t6775 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m38177(__this, method) (( int32_t (*) (Dictionary_2_t6775 *, const MethodInfo*))Dictionary_2_get_Count_m38177_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m38179_gshared (Dictionary_2_t6775 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m38179(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t6775 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m38179_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m38181_gshared (Dictionary_2_t6775 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m38181(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6775 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m38181_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m38183_gshared (Dictionary_2_t6775 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m38183(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6775 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m38183_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m38185_gshared (Dictionary_2_t6775 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m38185(__this, ___size, method) (( void (*) (Dictionary_2_t6775 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m38185_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m38187_gshared (Dictionary_2_t6775 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m38187(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6775 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m38187_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6752  Dictionary_2_make_pair_m38189_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m38189(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6752  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m38189_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m38191_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m38191(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m38191_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m38193_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m38193(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m38193_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m38195_gshared (Dictionary_2_t6775 * __this, KeyValuePair_2U5BU5D_t7856* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m38195(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6775 *, KeyValuePair_2U5BU5D_t7856*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m38195_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m38197_gshared (Dictionary_2_t6775 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m38197(__this, method) (( void (*) (Dictionary_2_t6775 *, const MethodInfo*))Dictionary_2_Resize_m38197_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m38199_gshared (Dictionary_2_t6775 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m38199(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6775 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m38199_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m38201_gshared (Dictionary_2_t6775 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m38201(__this, method) (( void (*) (Dictionary_2_t6775 *, const MethodInfo*))Dictionary_2_Clear_m38201_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m38203_gshared (Dictionary_2_t6775 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m38203(__this, ___key, method) (( bool (*) (Dictionary_2_t6775 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m38203_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m38205_gshared (Dictionary_2_t6775 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m38205(__this, ___value, method) (( bool (*) (Dictionary_2_t6775 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m38205_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m38207_gshared (Dictionary_2_t6775 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m38207(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6775 *, SerializationInfo_t2937 *, StreamingContext_t2938 , const MethodInfo*))Dictionary_2_GetObjectData_m38207_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m38209_gshared (Dictionary_2_t6775 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m38209(__this, ___sender, method) (( void (*) (Dictionary_2_t6775 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m38209_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m38211_gshared (Dictionary_2_t6775 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m38211(__this, ___key, method) (( bool (*) (Dictionary_2_t6775 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m38211_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m38213_gshared (Dictionary_2_t6775 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m38213(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6775 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m38213_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t6776 * Dictionary_2_get_Keys_m38215_gshared (Dictionary_2_t6775 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m38215(__this, method) (( KeyCollection_t6776 * (*) (Dictionary_2_t6775 *, const MethodInfo*))Dictionary_2_get_Keys_m38215_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t6780 * Dictionary_2_get_Values_m38217_gshared (Dictionary_2_t6775 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m38217(__this, method) (( ValueCollection_t6780 * (*) (Dictionary_2_t6775 *, const MethodInfo*))Dictionary_2_get_Values_m38217_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m38219_gshared (Dictionary_2_t6775 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m38219(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6775 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m38219_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m38221_gshared (Dictionary_2_t6775 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m38221(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t6775 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m38221_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m38223_gshared (Dictionary_2_t6775 * __this, KeyValuePair_2_t6752  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m38223(__this, ___pair, method) (( bool (*) (Dictionary_2_t6775 *, KeyValuePair_2_t6752 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m38223_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6778  Dictionary_2_GetEnumerator_m38225_gshared (Dictionary_2_t6775 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m38225(__this, method) (( Enumerator_t6778  (*) (Dictionary_2_t6775 *, const MethodInfo*))Dictionary_2_GetEnumerator_m38225_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__2(TKey,TValue)
extern "C" DictionaryEntry_t2157  Dictionary_2_U3CCopyToU3Em__2_m38227_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__2_m38227(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2157  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m38227_gshared)(__this /* static, unused */, ___key, ___value, method)
